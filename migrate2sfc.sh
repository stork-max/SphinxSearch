#!/bin/bash

# LEGACY
# charset_dictpath

# DEPRECATED
# charset_type      http://sphinxsearch.com/docs/current/sphinx-deprecations-defaults.html
# max_matches       http://sphinxsearch.com/forum/view.html?id=15211
# prefix_fields     http://sphinxsearch.com/forum/view.html?id=12117
# enable_star       http://sphinxsearch.com/forum/view.html?id=14300

# REMOVED
# sql_query_info    http://sphinxsearch.com/forum/view.html?id=11769
# sql_query_info_pre
# compat_sphinxql_magics

sed -r '
    s~^(\s*)(charset_dictpath\s*=.+)$~\1#\2\n\n\1chinese_dictionary = /usr/local/sphinx/etc/xdict.dict\n~;
    s~^(\s*)(charset_type\s*=.+)$~\1#\2~;
    s~^(\s*)(sql_query_info\s*=.+)$~\1#\2~;
    s~^(\s*)(sql_query_info_pre\s*=.+)$~\1#\2~;
    s~^(\s*)(max_matches\s*=.+)$~\1#\2~;
    s~^(\s*)(compat_sphinxql_magics\s*=.+)$~\1#\2~;
    s~^(\s*)(enable_star\s*=.+)$~\1#\2~;
    s~^(\s*)(prefix_fields\s*=.+)$~\1#\2~;

    s~/search/data/~/search/odin/~;
    s~/search/searchd_pid/~/search/odin/sphinx-pid/~;
    s~/search/searchd_log/~/search/odin/sphinx-log/~;
    s~/search/searchd_query_log/~/search/odin/sphinx-log/query_~;

    ' $@

