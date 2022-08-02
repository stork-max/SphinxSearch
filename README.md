## 源自sphinx的衍生版

### SFC简介

http://sphinxsearchcn.github.io/ ，SFC基于2.2.1-dev版，提供mkdict(与indexer同目录)能“编译”中文词库(xdict格式)，作者2013年停更

### 本仓库简介

提取sfc的代码制作补丁，升级到官方最新开源版 2.2.10 和 [sphinx2.3.2-beta](https://github.com/sphinxsearch/sphinx/releases/tag/2.3.2-beta) 的beta版本(见分支`v2.3.2-beta`) 


### 官版调整的配置项

**DEPRECATED**
- **charset_type** http://sphinxsearch.com/docs/current/sphinx-deprecations-defaults.html
- **max_matches** http://sphinxsearch.com/forum/view.html?id=15211
- **prefix_fields** http://sphinxsearch.com/forum/view.html?id=12117
- **enable_star** http://sphinxsearch.com/forum/view.html?id=14300

**REMOVED**
- **sql_query_info** http://sphinxsearch.com/forum/view.html?id=11769
- **sql_query_info_pre**
- **compat_sphinxql_magics**
- **charset_dictpath**


### 分词词库

- 本地解压 xdict_1.1.tar.bz2
- 编译词库
    ```
    $ mkdict xdict_1.1.txt xdict #从xdict_1.1.txt生成xdict文件
    $ cp xdict /usr/local/sphinx/etc/
    ```

- 修改配置文件，在 **index {...}** 域 增加：

    - ~~**charset_type** = utf-8~~
    - **chinese_dictionary** = /usr/local/sphinx/etc/xdict


## sphinx2.2.1官版原生支持的“特性”

- 原生文档：
    - http://sphinxsearch.com/docs/latest/index.html

- Attributes的解释(filter, sort, group)
    - http://sphinxsearch.com/docs/latest/attributes.html

- Sphinx Text Processing Pipeline
	- http://sphinxsearch.com/blog/2014/11/26/sphinx-text-processing-pipeline/

- **ngram_len** 和 **ngram_chars** （原生支持的中文一元分词）
    - 这两用来“识别”CJK的字符(只认utf-8)做一元分词。需要配一坨编码范围。
    - 中文(CJK)UTF-8码表:
    ```
    中文CJK范围：U+3000..U+2FA1F
    index charset_table = 0..9, A..Z->a..z, _, a..z, U+A8->U+B8, U+B8, U+C0..U+DF->U+E0..U+FF, U+E0..U+FF, U+3000..U+2FA1F, U+410..U+42F->U+430..U+44F, U+430..U+44F
    ```
    - https://www.ivinco.com/blog/using-sphinx-search-engine-with-chinese-japanese-and-korean-language-documents/

- **morphology** 欧洲语言的语法形态：复数、过去式、进行时等


#### MVA(multi-valued attributes)

- 存储逗号分隔整型值（可实现tags）
- 介绍 http://sphinxsearch.com/docs/latest/mva.html
- **sql_attr_multi** 可支持:
    - field 逗号分隔的int
    - query 能取到id,tag列表的SQL
    - ranged-query 区别query,增加了范围查询

#### 同义词 wordforms
- 单独配置的同义词，会影响分词和检索。
- 如配置：
	```
    kfc => 肯德基
	觉味鸭脖 => 肯德基
	```
- 在检索时使用 kfc/肯德基/觉味鸭脖 都视为"肯德基"。
- 这点比coreseek完整，它只能影响分词阶段
- 官版详尽文档 http://sphinxsearch.com/docs/latest/conf-wordforms.html

#### 索引文件

- **index {path }** 指定索引前缀（含存文件名）
- 生成索引文件的扩展名含义：
	- **.spa** stores document attributes (used in extern docinfo storage mode only);
	- **.spd** stores matching document ID lists for each word ID;
	- **.sph** stores index header information;
	- **.spi** stores word lists (word IDs and pointers to .spd file);
	- **.spk** stores kill-lists;
	- **.spm** stores MVA data;
	- **.spp** stores hit (aka posting, aka word occurrence) lists for each word ID;
	- **.sps** stores string attribute data.
	- **.spe** stores skip-lists to speed up doc-list filtering

#### 影响性能的配置

- **docinfo**  attr与documentid的存储
    - none无attr/extern独立存储(且kept in RAM)
    - inline(嵌索引)

- **ondisk_attrs** 选择各种indexes存放位置(内存/磁盘) 0/1/pool (启用会禁止实时update属性)

- **seamless_rotate** 无缝更新索引(0/1)，启用时以“空间(内存)换时间”

- **workers** MPM工具集，支持fork,prefork,threads

- **rt_mem_limit** 单切片文件的最大上限
    - RT索引可实现自动切片
    - (show index xx status; -> disk_chunks)。
    - 实验证明RT索引只保留attr在内存，fields等可随chunks写入磁盘，同理只能UPDATE attr


#### Distributed Searching
- dist_threads  只适用distributed+local
- 理论上distributed+local比distributed+agent快
    - http://sphinxsearch.com/blog/2011/10/19/dist_threads-the-new-right-way-to-use-many-cores/
    - http://sphinxsearch.com/docs/current/distributed.html

#### Facets

- SphinxQL支持FACET语法，版本待验证
- http://sphinxsearch.com/docs/latest/sphinxql-select.html
- (SFC)2.2.1 不支持FACETS..LIMIT，
- review-sphinx223的代码里做了支持
    - 2.2.3 http://sphinxsearch.com/blog/2014/05/22/the-facet-feature/
    - 2.2.1 http://sphinxsearch.com/blog/2013/06/21/faceted-search-with-sphinx/


#### HTTP protocal

- 官版2.3.2-beta
- 介绍 http://sphinxsearch.com/docs/devel/http-rest.html
- 测试 http://127.0.0.1:9308/search?index=tuan_merchant&match=@total_name+肯德基+@branch_name+北京&select=*
- 代码 见分支`v2.3.2-beta`



## sphinx2.2.1 实现“实时建索引”的几种方式

- 如果只更新文档属性(Attributes,见上面介绍),可以用SphinxAPI的接口：
    ```
	SphinxClient::UpdateAttributes(index,[fields],map(docid=>val),is_mva)
		is_mva=true => map(docid=>[vals])
		is_mva=false => map(docid=>vals)
    ```

- 以下方式“实时更新索引”只影响full-text字段

- Real-time indexes
	- 必须使用SphinxQL，支持mysql客户端连接和读写
    - 不识别数据源的配置指令，支持SQL语法的INSERT/DELETE/REPLACE
    - 大量修改(DELETE/REPLACE)操作会产生碎片，影响检索性能！
    - 大量并发写(INSERT/REPLACE)会消耗更多内存！
    - INSERT多行 有更好的写入性能！
    - http://sphinxsearch.com/docs/latest/rt-overview.html

- Live index updates
	- 按更新频率把索引分两层：低频(全量)、高频(增量)，定时"indexer --merge"到低频
    - http://sphinxsearch.com/docs/latest/live-updates.html

- 实时索引(区别于前两者): main+RT
    - RT提供实时索引，后端定时重建索引，并用`ATTACH INDEX`推到RT(先TRUNCATE)。
    - 能使用RT又能避开它的碎片和污染问题
        ```
        TRUNCATE RTINDEX data;
        ATTACH INDEX rebuild TO RTINDEX data;
        ```
    - http://sphinxsearch.com/docs/current/sphinxql-attach-index.html
    - https://www.ivinco.com/blog/converting-sphinx-original-indexes-to-real-time-indexes/


## 外部中文分词

**概念**
- 提前对文本分为空格间隔的词组，由sphinx默认的分词(英文空格)分词
- 优点是外部分词可提前写到mysql表，sphinx索引速度飞快，可使用最新版本的sphinx
- 需要sphinx增加中文识别的码表(见下)

**中文(CJK)UTF-8码表:**
```
中文CJK范围：U+3000..U+2FA1F
index charset_table = 0..9, A..Z->a..z, _, a..z, U+A8->U+B8, U+B8, U+C0..U+DF->U+E0..U+FF, U+E0..U+FF, U+3000..U+2FA1F, U+410..U+42F->U+430..U+44F, U+430..U+44F
```
- https://www.ivinco.com/blog/using-sphinx-search-engine-with-chinese-japanese-and-korean-language-documents/

**外部中文分词-结巴分词**
- https://github.com/fxsjy/jieba
- 分词时可选择三种风格：精准、全文、搜索引擎
- 用户字典可动态增加
- Python写的，维护速度快。
- 可利用Tornado等实现快速并发

- cpp版的jieba 较python版有十倍性能提升 https://github.com/yanyiwu/cppjieba

- 中文关键词抽取 https://github.com/yanyiwu/keyword_server

- Tornado官网(经常打不开)
		- http://www.tornadoweb.org/en/stable/guide.html
		- Tornado中文文档 http://www.tornadoweb.cn/documentation



## 客户端

#### SphinxClient API

PHP扩展 http://pecl.php.net/package/sphinx ，对PHP7支持不友好，dev版发现bug:改了字段重建索引后client无结果

官方写了PHP版的“扩展”，可以跨php版本 https://github.com/gigablah/sphinxphp


#### SphinxQL

- SphinxQL Reference
    - http://sphinxsearch.com/docs/latest/sphinxql-reference.html

- Basics of paginating results
    - http://sphinxsearch.com/blog/2014/03/28/basics-of-paginating-results/

- SphinxQL vs SphinxClient
    - http://sphinxsearch.com/blog/2013/07/23/from-api-to-sphinxql-and-back-again/

- 兼容php-mysqli库函数 

- `show meta `
    - 用在select后可返回检索总量和耗时等
    - 开启 `searchd --iostats`

- **total** / **total_found区别**
    - total_found是实际匹配数
    - total受限max_matches

- **max_matches** 
    - 是默认的查询上限
    - 在SQL里加`option max_matches=10000` 临时修改它。

- `MATCH('"test ok"~1')` 过滤词距离

