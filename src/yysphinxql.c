/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_IDENT = 258,
     TOK_ATIDENT = 259,
     TOK_CONST_INT = 260,
     TOK_CONST_FLOAT = 261,
     TOK_CONST_MVA = 262,
     TOK_QUOTED_STRING = 263,
     TOK_USERVAR = 264,
     TOK_SYSVAR = 265,
     TOK_CONST_STRINGS = 266,
     TOK_BAD_NUMERIC = 267,
     TOK_SUBKEY = 268,
     TOK_DOT_NUMBER = 269,
     TOK_ADD = 270,
     TOK_AGENT = 271,
     TOK_ALTER = 272,
     TOK_AS = 273,
     TOK_ASC = 274,
     TOK_ATTACH = 275,
     TOK_ATTRIBUTES = 276,
     TOK_AVG = 277,
     TOK_BEGIN = 278,
     TOK_BETWEEN = 279,
     TOK_BIGINT = 280,
     TOK_BOOL = 281,
     TOK_BY = 282,
     TOK_CALL = 283,
     TOK_CHARACTER = 284,
     TOK_CHUNK = 285,
     TOK_COLLATION = 286,
     TOK_COLUMN = 287,
     TOK_COMMIT = 288,
     TOK_COMMITTED = 289,
     TOK_COUNT = 290,
     TOK_CREATE = 291,
     TOK_DATABASES = 292,
     TOK_DELETE = 293,
     TOK_DESC = 294,
     TOK_DESCRIBE = 295,
     TOK_DISTINCT = 296,
     TOK_DIV = 297,
     TOK_DOUBLE = 298,
     TOK_DROP = 299,
     TOK_FACET = 300,
     TOK_FALSE = 301,
     TOK_FLOAT = 302,
     TOK_FLUSH = 303,
     TOK_FOR = 304,
     TOK_FROM = 305,
     TOK_FUNCTION = 306,
     TOK_GLOBAL = 307,
     TOK_GROUP = 308,
     TOK_GROUPBY = 309,
     TOK_GROUP_CONCAT = 310,
     TOK_HAVING = 311,
     TOK_ID = 312,
     TOK_IN = 313,
     TOK_INDEX = 314,
     TOK_INSERT = 315,
     TOK_INT = 316,
     TOK_INTEGER = 317,
     TOK_INTO = 318,
     TOK_IS = 319,
     TOK_ISOLATION = 320,
     TOK_JSON = 321,
     TOK_LEVEL = 322,
     TOK_LIKE = 323,
     TOK_LIMIT = 324,
     TOK_MATCH = 325,
     TOK_MAX = 326,
     TOK_META = 327,
     TOK_MIN = 328,
     TOK_MOD = 329,
     TOK_MULTI = 330,
     TOK_MULTI64 = 331,
     TOK_NAMES = 332,
     TOK_NULL = 333,
     TOK_OPTION = 334,
     TOK_ORDER = 335,
     TOK_OPTIMIZE = 336,
     TOK_PLAN = 337,
     TOK_PLUGIN = 338,
     TOK_PLUGINS = 339,
     TOK_PROFILE = 340,
     TOK_RAND = 341,
     TOK_RAMCHUNK = 342,
     TOK_READ = 343,
     TOK_RECONFIGURE = 344,
     TOK_REPEATABLE = 345,
     TOK_REPLACE = 346,
     TOK_REMAP = 347,
     TOK_RETURNS = 348,
     TOK_ROLLBACK = 349,
     TOK_RTINDEX = 350,
     TOK_SELECT = 351,
     TOK_SERIALIZABLE = 352,
     TOK_SET = 353,
     TOK_SETTINGS = 354,
     TOK_SESSION = 355,
     TOK_SHOW = 356,
     TOK_SONAME = 357,
     TOK_START = 358,
     TOK_STATUS = 359,
     TOK_STRING = 360,
     TOK_SUM = 361,
     TOK_TABLE = 362,
     TOK_TABLES = 363,
     TOK_THREADS = 364,
     TOK_TO = 365,
     TOK_TRANSACTION = 366,
     TOK_TRUE = 367,
     TOK_TRUNCATE = 368,
     TOK_TYPE = 369,
     TOK_UNCOMMITTED = 370,
     TOK_UPDATE = 371,
     TOK_VALUES = 372,
     TOK_VARIABLES = 373,
     TOK_WARNINGS = 374,
     TOK_WEIGHT = 375,
     TOK_WHERE = 376,
     TOK_WITHIN = 377,
     TOK_OR = 378,
     TOK_AND = 379,
     TOK_NE = 380,
     TOK_GTE = 381,
     TOK_LTE = 382,
     TOK_NOT = 383,
     TOK_NEG = 384
   };
#endif
/* Tokens.  */
#define TOK_IDENT 258
#define TOK_ATIDENT 259
#define TOK_CONST_INT 260
#define TOK_CONST_FLOAT 261
#define TOK_CONST_MVA 262
#define TOK_QUOTED_STRING 263
#define TOK_USERVAR 264
#define TOK_SYSVAR 265
#define TOK_CONST_STRINGS 266
#define TOK_BAD_NUMERIC 267
#define TOK_SUBKEY 268
#define TOK_DOT_NUMBER 269
#define TOK_ADD 270
#define TOK_AGENT 271
#define TOK_ALTER 272
#define TOK_AS 273
#define TOK_ASC 274
#define TOK_ATTACH 275
#define TOK_ATTRIBUTES 276
#define TOK_AVG 277
#define TOK_BEGIN 278
#define TOK_BETWEEN 279
#define TOK_BIGINT 280
#define TOK_BOOL 281
#define TOK_BY 282
#define TOK_CALL 283
#define TOK_CHARACTER 284
#define TOK_CHUNK 285
#define TOK_COLLATION 286
#define TOK_COLUMN 287
#define TOK_COMMIT 288
#define TOK_COMMITTED 289
#define TOK_COUNT 290
#define TOK_CREATE 291
#define TOK_DATABASES 292
#define TOK_DELETE 293
#define TOK_DESC 294
#define TOK_DESCRIBE 295
#define TOK_DISTINCT 296
#define TOK_DIV 297
#define TOK_DOUBLE 298
#define TOK_DROP 299
#define TOK_FACET 300
#define TOK_FALSE 301
#define TOK_FLOAT 302
#define TOK_FLUSH 303
#define TOK_FOR 304
#define TOK_FROM 305
#define TOK_FUNCTION 306
#define TOK_GLOBAL 307
#define TOK_GROUP 308
#define TOK_GROUPBY 309
#define TOK_GROUP_CONCAT 310
#define TOK_HAVING 311
#define TOK_ID 312
#define TOK_IN 313
#define TOK_INDEX 314
#define TOK_INSERT 315
#define TOK_INT 316
#define TOK_INTEGER 317
#define TOK_INTO 318
#define TOK_IS 319
#define TOK_ISOLATION 320
#define TOK_JSON 321
#define TOK_LEVEL 322
#define TOK_LIKE 323
#define TOK_LIMIT 324
#define TOK_MATCH 325
#define TOK_MAX 326
#define TOK_META 327
#define TOK_MIN 328
#define TOK_MOD 329
#define TOK_MULTI 330
#define TOK_MULTI64 331
#define TOK_NAMES 332
#define TOK_NULL 333
#define TOK_OPTION 334
#define TOK_ORDER 335
#define TOK_OPTIMIZE 336
#define TOK_PLAN 337
#define TOK_PLUGIN 338
#define TOK_PLUGINS 339
#define TOK_PROFILE 340
#define TOK_RAND 341
#define TOK_RAMCHUNK 342
#define TOK_READ 343
#define TOK_RECONFIGURE 344
#define TOK_REPEATABLE 345
#define TOK_REPLACE 346
#define TOK_REMAP 347
#define TOK_RETURNS 348
#define TOK_ROLLBACK 349
#define TOK_RTINDEX 350
#define TOK_SELECT 351
#define TOK_SERIALIZABLE 352
#define TOK_SET 353
#define TOK_SETTINGS 354
#define TOK_SESSION 355
#define TOK_SHOW 356
#define TOK_SONAME 357
#define TOK_START 358
#define TOK_STATUS 359
#define TOK_STRING 360
#define TOK_SUM 361
#define TOK_TABLE 362
#define TOK_TABLES 363
#define TOK_THREADS 364
#define TOK_TO 365
#define TOK_TRANSACTION 366
#define TOK_TRUE 367
#define TOK_TRUNCATE 368
#define TOK_TYPE 369
#define TOK_UNCOMMITTED 370
#define TOK_UPDATE 371
#define TOK_VALUES 372
#define TOK_VARIABLES 373
#define TOK_WARNINGS 374
#define TOK_WEIGHT 375
#define TOK_WHERE 376
#define TOK_WITHIN 377
#define TOK_OR 378
#define TOK_AND 379
#define TOK_NE 380
#define TOK_GTE 381
#define TOK_LTE 382
#define TOK_NOT 383
#define TOK_NEG 384




/* Copy the first part of user declarations.  */


#if USE_WINDOWS
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif



// some helpers
#include <float.h> // for FLT_MAX

static void AddInsval ( SqlParser_c * pParser, CSphVector<SqlInsert_t> & dVec, const SqlNode_t & tNode )
{
	SqlInsert_t & tIns = dVec.Add();
	tIns.m_iType = tNode.m_iType;
	tIns.m_iVal = tNode.m_iValue; // OPTIMIZE? copy conditionally based on type?
	tIns.m_fVal = tNode.m_fValue;
	if ( tIns.m_iType==TOK_QUOTED_STRING )
		pParser->ToStringUnescape ( tIns.m_sVal, tNode );
	tIns.m_pVals = tNode.m_pValues;
}

#define TRACK_BOUNDS(_res,_left,_right) \
	_res = _left; \
	if ( _res.m_iStart>0 && pParser->m_pBuf[_res.m_iStart-1]=='`' ) \
		_res.m_iStart--; \
	_res.m_iEnd = _right.m_iEnd; \
	_res.m_iType = 0;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  240
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4778

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  148
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  485
/* YYNRULES -- Number of states.  */
#define YYNSTATES  845

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   137,   126,     2,
     141,   142,   135,   133,   143,   134,     2,   136,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   140,
     129,   127,   130,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   146,     2,   147,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   144,   125,   145,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     128,   131,   132,   138,   139
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   104,   106,   108,   110,   112,   114,   116,   118,
     120,   122,   124,   126,   128,   130,   132,   134,   136,   138,
     140,   142,   144,   146,   148,   150,   152,   154,   156,   158,
     160,   162,   164,   166,   168,   170,   172,   174,   176,   178,
     180,   182,   184,   186,   188,   190,   192,   194,   196,   198,
     200,   202,   204,   206,   208,   210,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
     240,   242,   244,   246,   248,   250,   252,   254,   258,   261,
     263,   265,   267,   269,   278,   280,   290,   291,   294,   296,
     300,   302,   304,   306,   307,   311,   312,   315,   320,   332,
     334,   338,   340,   343,   344,   346,   349,   351,   356,   361,
     366,   371,   376,   381,   385,   391,   393,   397,   398,   400,
     403,   405,   409,   413,   418,   420,   424,   428,   434,   441,
     447,   454,   458,   463,   469,   473,   477,   481,   485,   489,
     493,   499,   505,   511,   515,   519,   523,   527,   531,   535,
     539,   544,   546,   548,   553,   557,   561,   563,   565,   570,
     575,   580,   584,   586,   589,   591,   594,   596,   598,   602,
     604,   608,   609,   614,   615,   617,   619,   623,   624,   627,
     628,   630,   636,   637,   639,   643,   649,   651,   655,   657,
     660,   663,   664,   666,   669,   674,   675,   677,   680,   682,
     686,   690,   694,   700,   707,   711,   713,   717,   721,   723,
     725,   727,   729,   731,   733,   735,   738,   741,   745,   749,
     753,   757,   761,   765,   769,   773,   777,   781,   785,   789,
     793,   797,   801,   805,   809,   813,   817,   819,   821,   823,
     827,   832,   837,   842,   847,   852,   857,   862,   866,   873,
     880,   884,   893,   908,   910,   914,   916,   918,   922,   928,
     930,   932,   934,   936,   939,   940,   943,   945,   948,   951,
     955,   957,   959,   961,   964,   969,   974,   978,   983,   988,
     990,   992,   993,   996,  1001,  1006,  1011,  1015,  1020,  1025,
    1033,  1039,  1045,  1055,  1057,  1059,  1061,  1063,  1065,  1067,
    1071,  1073,  1075,  1077,  1079,  1081,  1083,  1085,  1087,  1089,
    1092,  1100,  1102,  1104,  1105,  1109,  1111,  1113,  1115,  1119,
    1121,  1125,  1129,  1131,  1135,  1137,  1139,  1141,  1145,  1148,
    1149,  1152,  1154,  1158,  1162,  1167,  1174,  1176,  1180,  1182,
    1186,  1188,  1192,  1193,  1196,  1198,  1202,  1206,  1207,  1209,
    1211,  1213,  1217,  1219,  1221,  1225,  1229,  1236,  1238,  1242,
    1246,  1250,  1256,  1261,  1265,  1269,  1271,  1273,  1275,  1277,
    1279,  1281,  1283,  1285,  1287,  1295,  1302,  1307,  1312,  1318,
    1319,  1321,  1324,  1326,  1330,  1334,  1337,  1341,  1348,  1349,
    1351,  1353,  1356,  1359,  1362,  1364,  1372,  1374,  1376,  1378,
    1380,  1382,  1386,  1393,  1397,  1401,  1404,  1408,  1410,  1414,
    1417,  1419,  1422,  1426,  1430,  1438,  1444,  1446,  1448,  1451,
    1453,  1456,  1458,  1460,  1464,  1468,  1472,  1476,  1478,  1479,
    1482,  1484,  1487,  1489,  1491,  1495
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     149,     0,    -1,   150,    -1,   153,    -1,   153,   140,    -1,
     217,    -1,   229,    -1,   210,    -1,   215,    -1,   230,    -1,
     239,    -1,   241,    -1,   242,    -1,   243,    -1,   248,    -1,
     253,    -1,   254,    -1,   258,    -1,   260,    -1,   261,    -1,
     262,    -1,   263,    -1,   264,    -1,   255,    -1,   265,    -1,
     269,    -1,   270,    -1,   271,    -1,   247,    -1,   272,    -1,
     273,    -1,     3,    -1,    15,    -1,    16,    -1,    17,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
      40,    -1,    41,    -1,    43,    -1,    44,    -1,    47,    -1,
      48,    -1,    49,    -1,    51,    -1,    52,    -1,    53,    -1,
      55,    -1,    54,    -1,    56,    -1,    59,    -1,    60,    -1,
      61,    -1,    62,    -1,    63,    -1,    65,    -1,    66,    -1,
      67,    -1,    68,    -1,    70,    -1,    71,    -1,    72,    -1,
      73,    -1,    75,    -1,    76,    -1,    81,    -1,    79,    -1,
      82,    -1,    83,    -1,    84,    -1,    85,    -1,    87,    -1,
      86,    -1,    88,    -1,    89,    -1,    92,    -1,    90,    -1,
      91,    -1,    93,    -1,    94,    -1,    95,    -1,    97,    -1,
     100,    -1,    98,    -1,    99,    -1,   101,    -1,   102,    -1,
     103,    -1,   104,    -1,   105,    -1,   106,    -1,   107,    -1,
     108,    -1,   109,    -1,   110,    -1,   113,    -1,   114,    -1,
     115,    -1,   116,    -1,   117,    -1,   118,    -1,   119,    -1,
     120,    -1,   121,    -1,   122,    -1,   151,    -1,    77,    -1,
     111,    -1,   154,    -1,   153,   140,   154,    -1,   153,   285,
      -1,   155,    -1,   204,    -1,   209,    -1,   156,    -1,    96,
       3,   141,   141,   156,   142,   157,   142,    -1,   163,    -1,
      96,   164,    50,   141,   160,   163,   142,   161,   162,    -1,
      -1,   143,   158,    -1,   159,    -1,   158,   143,   159,    -1,
     152,    -1,     5,    -1,    57,    -1,    -1,    80,    27,   187,
      -1,    -1,    69,     5,    -1,    69,     5,   143,     5,    -1,
      96,   164,    50,   168,   169,   179,   183,   182,   185,   189,
     191,    -1,   165,    -1,   164,   143,   165,    -1,   135,    -1,
     167,   166,    -1,    -1,   152,    -1,    18,   152,    -1,   197,
      -1,    22,   141,   197,   142,    -1,    71,   141,   197,   142,
      -1,    73,   141,   197,   142,    -1,   106,   141,   197,   142,
      -1,    55,   141,   197,   142,    -1,    35,   141,   135,   142,
      -1,    54,   141,   142,    -1,    35,   141,    41,   152,   142,
      -1,   152,    -1,   168,   143,   152,    -1,    -1,   170,    -1,
     121,   171,    -1,   172,    -1,   171,   124,   171,    -1,   141,
     171,   142,    -1,    70,   141,     8,   142,    -1,   173,    -1,
     174,   127,   175,    -1,   174,   128,   175,    -1,   174,    58,
     141,   177,   142,    -1,   174,   138,    58,   141,   177,   142,
      -1,   174,    58,   141,   178,   142,    -1,   174,   138,    58,
     141,   178,   142,    -1,   174,    58,     9,    -1,   174,   138,
      58,     9,    -1,   174,    24,   175,   124,   175,    -1,   174,
     130,   175,    -1,   174,   129,   175,    -1,   174,   131,   175,
      -1,   174,   132,   175,    -1,   174,   127,   176,    -1,   174,
     128,   176,    -1,   174,    24,   176,   124,   176,    -1,   174,
      24,   175,   124,   176,    -1,   174,    24,   176,   124,   175,
      -1,   174,   130,   176,    -1,   174,   129,   176,    -1,   174,
     131,   176,    -1,   174,   132,   176,    -1,   174,   127,     8,
      -1,   174,   128,     8,    -1,   174,    64,    78,    -1,   174,
      64,   138,    78,    -1,   152,    -1,     4,    -1,    35,   141,
     135,   142,    -1,    54,   141,   142,    -1,   120,   141,   142,
      -1,    57,    -1,   275,    -1,    62,   141,   275,   142,    -1,
      43,   141,   275,   142,    -1,    25,   141,   275,   142,    -1,
      45,   141,   142,    -1,     5,    -1,   134,     5,    -1,     6,
      -1,   134,     6,    -1,    14,    -1,   175,    -1,   177,   143,
     175,    -1,     8,    -1,   178,   143,     8,    -1,    -1,    53,
     180,    27,   181,    -1,    -1,     5,    -1,   174,    -1,   181,
     143,   174,    -1,    -1,    56,   173,    -1,    -1,   184,    -1,
     122,    53,    80,    27,   187,    -1,    -1,   186,    -1,    80,
      27,   187,    -1,    80,    27,    86,   141,   142,    -1,   188,
      -1,   187,   143,   188,    -1,   174,    -1,   174,    19,    -1,
     174,    39,    -1,    -1,   190,    -1,    69,     5,    -1,    69,
       5,   143,     5,    -1,    -1,   192,    -1,    79,   193,    -1,
     194,    -1,   193,   143,   194,    -1,   152,   127,   152,    -1,
     152,   127,     5,    -1,   152,   127,   141,   195,   142,    -1,
     152,   127,   152,   141,     8,   142,    -1,   152,   127,     8,
      -1,   196,    -1,   195,   143,   196,    -1,   152,   127,   175,
      -1,   152,    -1,     4,    -1,    57,    -1,     5,    -1,     6,
      -1,    14,    -1,     9,    -1,   134,   197,    -1,   138,   197,
      -1,   197,   133,   197,    -1,   197,   134,   197,    -1,   197,
     135,   197,    -1,   197,   136,   197,    -1,   197,   129,   197,
      -1,   197,   130,   197,    -1,   197,   126,   197,    -1,   197,
     125,   197,    -1,   197,   137,   197,    -1,   197,    42,   197,
      -1,   197,    74,   197,    -1,   197,   132,   197,    -1,   197,
     131,   197,    -1,   197,   127,   197,    -1,   197,   128,   197,
      -1,   197,   124,   197,    -1,   197,   123,   197,    -1,   141,
     197,   142,    -1,   144,   201,   145,    -1,   198,    -1,   275,
      -1,   278,    -1,   274,    64,    78,    -1,   274,    64,   138,
      78,    -1,     3,   141,   199,   142,    -1,    58,   141,   199,
     142,    -1,    62,   141,   199,   142,    -1,    25,   141,   199,
     142,    -1,    47,   141,   199,   142,    -1,    43,   141,   199,
     142,    -1,     3,   141,   142,    -1,    73,   141,   197,   143,
     197,   142,    -1,    71,   141,   197,   143,   197,   142,    -1,
     120,   141,   142,    -1,     3,   141,   197,    49,   152,    58,
     274,   142,    -1,    92,   141,   197,   143,   197,   143,   141,
     199,   142,   143,   141,   199,   142,   142,    -1,   200,    -1,
     199,   143,   200,    -1,   197,    -1,     8,    -1,   202,   127,
     203,    -1,   201,   143,   202,   127,   203,    -1,   152,    -1,
      58,    -1,   175,    -1,   152,    -1,   101,   206,    -1,    -1,
      68,     8,    -1,   119,    -1,   104,   205,    -1,    72,   205,
      -1,    16,   104,   205,    -1,    85,    -1,    82,    -1,    84,
      -1,   109,   191,    -1,    16,     8,   104,   205,    -1,    16,
     152,   104,   205,    -1,   207,   152,   104,    -1,   207,   152,
     208,    99,    -1,   207,   152,    14,    99,    -1,    59,    -1,
     107,    -1,    -1,    30,     5,    -1,    98,   151,   127,   212,
      -1,    98,   151,   127,   211,    -1,    98,   151,   127,    78,
      -1,    98,    77,   213,    -1,    98,    10,   127,   213,    -1,
      98,    29,    98,   213,    -1,    98,    52,     9,   127,   141,
     177,   142,    -1,    98,    52,   151,   127,   211,    -1,    98,
      52,   151,   127,     5,    -1,    98,    59,   152,    52,     9,
     127,   141,   177,   142,    -1,   152,    -1,     8,    -1,   112,
      -1,    46,    -1,   175,    -1,   214,    -1,   213,   134,   214,
      -1,   152,    -1,    78,    -1,     8,    -1,     5,    -1,     6,
      -1,    33,    -1,    94,    -1,   216,    -1,    23,    -1,   103,
     111,    -1,   218,    63,   152,   219,   117,   222,   226,    -1,
      60,    -1,    91,    -1,    -1,   141,   221,   142,    -1,   152,
      -1,    57,    -1,   220,    -1,   221,   143,   220,    -1,   223,
      -1,   222,   143,   223,    -1,   141,   224,   142,    -1,   225,
      -1,   224,   143,   225,    -1,   175,    -1,   176,    -1,     8,
      -1,   141,   177,   142,    -1,   141,   142,    -1,    -1,    79,
     227,    -1,   228,    -1,   227,   143,   228,    -1,     3,   127,
       8,    -1,    38,    50,   168,   170,    -1,    28,   152,   141,
     231,   234,   142,    -1,   232,    -1,   231,   143,   232,    -1,
     225,    -1,   141,   233,   142,    -1,     8,    -1,   233,   143,
       8,    -1,    -1,   143,   235,    -1,   236,    -1,   235,   143,
     236,    -1,   225,   237,   238,    -1,    -1,    18,    -1,   152,
      -1,    69,    -1,   240,   152,   205,    -1,    40,    -1,    39,
      -1,   101,   108,   205,    -1,   101,    37,   205,    -1,   116,
     168,    98,   244,   170,   191,    -1,   245,    -1,   244,   143,
     245,    -1,   152,   127,   175,    -1,   152,   127,   176,    -1,
     152,   127,   141,   177,   142,    -1,   152,   127,   141,   142,
      -1,   275,   127,   175,    -1,   275,   127,   176,    -1,    62,
      -1,    25,    -1,    47,    -1,    26,    -1,    75,    -1,    76,
      -1,    66,    -1,   105,    -1,    61,    -1,    17,   107,   152,
      15,    32,   152,   246,    -1,    17,   107,   152,    44,    32,
     152,    -1,    17,    95,   152,    89,    -1,   101,   256,   118,
     249,    -1,   101,   256,   118,    68,     8,    -1,    -1,   250,
      -1,   121,   251,    -1,   252,    -1,   251,   123,   252,    -1,
     152,   127,     8,    -1,   101,    31,    -1,   101,    29,    98,
      -1,    98,   256,   111,    65,    67,   257,    -1,    -1,    52,
      -1,   100,    -1,    88,   115,    -1,    88,    34,    -1,    90,
      88,    -1,    97,    -1,    36,    51,   152,    93,   259,   102,
       8,    -1,    61,    -1,    25,    -1,    47,    -1,   105,    -1,
      62,    -1,    44,    51,   152,    -1,    20,    59,   152,   110,
      95,   152,    -1,    48,    95,   152,    -1,    48,    87,   152,
      -1,    48,    21,    -1,    96,   266,   189,    -1,   267,    -1,
     266,   143,   267,    -1,   268,   166,    -1,    10,    -1,    96,
     197,    -1,   113,    95,   152,    -1,    81,    59,   152,    -1,
      36,    83,   152,   114,     8,   102,     8,    -1,    44,    83,
     152,   114,     8,    -1,   275,    -1,   152,    -1,   152,   276,
      -1,   277,    -1,   276,   277,    -1,    13,    -1,    14,    -1,
     146,   197,   147,    -1,   146,     8,   147,    -1,   197,   127,
     279,    -1,   279,   127,   197,    -1,     8,    -1,    -1,   281,
     284,    -1,    27,    -1,   283,   166,    -1,   197,    -1,   282,
      -1,   284,   143,   282,    -1,    45,   284,   280,   185,   189,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   174,   174,   175,   176,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   220,   221,   221,   221,   221,   221,   221,   222,   222,
     222,   222,   222,   222,   223,   223,   223,   223,   223,   224,
     224,   224,   224,   224,   225,   225,   225,   225,   225,   226,
     226,   226,   226,   226,   226,   227,   227,   227,   227,   227,
     228,   228,   228,   228,   228,   228,   229,   229,   229,   229,
     229,   229,   230,   230,   230,   230,   230,   231,   231,   231,
     231,   231,   232,   232,   232,   232,   232,   233,   233,   233,
     233,   233,   234,   234,   234,   234,   234,   234,   235,   235,
     235,   235,   235,   235,   236,   236,   236,   236,   236,   237,
     237,   237,   237,   241,   241,   241,   247,   248,   249,   253,
     254,   255,   259,   260,   268,   269,   276,   278,   282,   286,
     293,   294,   295,   299,   312,   319,   321,   326,   335,   351,
     352,   356,   357,   360,   362,   363,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   379,   380,   383,   385,   389,
     393,   394,   395,   399,   404,   408,   415,   423,   431,   440,
     445,   450,   455,   460,   465,   470,   475,   480,   485,   490,
     495,   500,   505,   510,   515,   520,   525,   530,   535,   540,
     545,   553,   554,   559,   565,   571,   577,   583,   584,   585,
     586,   587,   591,   592,   603,   604,   605,   609,   615,   622,
     628,   634,   636,   639,   641,   648,   652,   658,   660,   666,
     668,   672,   683,   685,   689,   693,   700,   701,   705,   706,
     707,   710,   712,   716,   721,   728,   730,   734,   738,   739,
     743,   748,   753,   759,   764,   772,   777,   784,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   804,   805,   806,
     807,   808,   809,   810,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   831,   832,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   846,   847,   851,   852,   856,   857,   861,
     862,   866,   867,   873,   876,   878,   882,   883,   884,   885,
     886,   887,   888,   889,   890,   895,   900,   905,   910,   919,
     920,   923,   925,   933,   938,   943,   948,   949,   950,   954,
     959,   964,   969,   978,   979,   983,   984,   985,   997,   998,
    1002,  1003,  1004,  1005,  1006,  1013,  1014,  1015,  1019,  1020,
    1026,  1034,  1035,  1038,  1040,  1044,  1045,  1049,  1050,  1054,
    1055,  1059,  1063,  1064,  1068,  1069,  1070,  1071,  1072,  1075,
    1076,  1080,  1081,  1085,  1091,  1101,  1109,  1113,  1120,  1121,
    1128,  1138,  1144,  1146,  1150,  1155,  1159,  1166,  1168,  1172,
    1173,  1179,  1187,  1188,  1194,  1198,  1204,  1212,  1213,  1217,
    1231,  1237,  1241,  1246,  1260,  1271,  1272,  1273,  1274,  1275,
    1276,  1277,  1278,  1279,  1283,  1291,  1298,  1309,  1313,  1320,
    1321,  1325,  1329,  1330,  1334,  1338,  1345,  1352,  1358,  1359,
    1360,  1364,  1365,  1366,  1367,  1373,  1384,  1385,  1386,  1387,
    1388,  1393,  1404,  1416,  1425,  1434,  1444,  1452,  1453,  1457,
    1461,  1465,  1475,  1486,  1497,  1508,  1519,  1520,  1524,  1527,
    1528,  1532,  1533,  1534,  1535,  1539,  1540,  1544,  1549,  1551,
    1555,  1564,  1568,  1576,  1577,  1581
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENT", "TOK_ATIDENT",
  "TOK_CONST_INT", "TOK_CONST_FLOAT", "TOK_CONST_MVA", "TOK_QUOTED_STRING",
  "TOK_USERVAR", "TOK_SYSVAR", "TOK_CONST_STRINGS", "TOK_BAD_NUMERIC",
  "TOK_SUBKEY", "TOK_DOT_NUMBER", "TOK_ADD", "TOK_AGENT", "TOK_ALTER",
  "TOK_AS", "TOK_ASC", "TOK_ATTACH", "TOK_ATTRIBUTES", "TOK_AVG",
  "TOK_BEGIN", "TOK_BETWEEN", "TOK_BIGINT", "TOK_BOOL", "TOK_BY",
  "TOK_CALL", "TOK_CHARACTER", "TOK_CHUNK", "TOK_COLLATION", "TOK_COLUMN",
  "TOK_COMMIT", "TOK_COMMITTED", "TOK_COUNT", "TOK_CREATE",
  "TOK_DATABASES", "TOK_DELETE", "TOK_DESC", "TOK_DESCRIBE",
  "TOK_DISTINCT", "TOK_DIV", "TOK_DOUBLE", "TOK_DROP", "TOK_FACET",
  "TOK_FALSE", "TOK_FLOAT", "TOK_FLUSH", "TOK_FOR", "TOK_FROM",
  "TOK_FUNCTION", "TOK_GLOBAL", "TOK_GROUP", "TOK_GROUPBY",
  "TOK_GROUP_CONCAT", "TOK_HAVING", "TOK_ID", "TOK_IN", "TOK_INDEX",
  "TOK_INSERT", "TOK_INT", "TOK_INTEGER", "TOK_INTO", "TOK_IS",
  "TOK_ISOLATION", "TOK_JSON", "TOK_LEVEL", "TOK_LIKE", "TOK_LIMIT",
  "TOK_MATCH", "TOK_MAX", "TOK_META", "TOK_MIN", "TOK_MOD", "TOK_MULTI",
  "TOK_MULTI64", "TOK_NAMES", "TOK_NULL", "TOK_OPTION", "TOK_ORDER",
  "TOK_OPTIMIZE", "TOK_PLAN", "TOK_PLUGIN", "TOK_PLUGINS", "TOK_PROFILE",
  "TOK_RAND", "TOK_RAMCHUNK", "TOK_READ", "TOK_RECONFIGURE",
  "TOK_REPEATABLE", "TOK_REPLACE", "TOK_REMAP", "TOK_RETURNS",
  "TOK_ROLLBACK", "TOK_RTINDEX", "TOK_SELECT", "TOK_SERIALIZABLE",
  "TOK_SET", "TOK_SETTINGS", "TOK_SESSION", "TOK_SHOW", "TOK_SONAME",
  "TOK_START", "TOK_STATUS", "TOK_STRING", "TOK_SUM", "TOK_TABLE",
  "TOK_TABLES", "TOK_THREADS", "TOK_TO", "TOK_TRANSACTION", "TOK_TRUE",
  "TOK_TRUNCATE", "TOK_TYPE", "TOK_UNCOMMITTED", "TOK_UPDATE",
  "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", "TOK_WEIGHT", "TOK_WHERE",
  "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", "'&'", "'='", "TOK_NE", "'<'",
  "'>'", "TOK_GTE", "TOK_LTE", "'+'", "'-'", "'*'", "'/'", "'%'",
  "TOK_NOT", "TOK_NEG", "';'", "'('", "')'", "','", "'{'", "'}'", "'['",
  "']'", "$accept", "request", "statement", "ident_set", "ident",
  "multi_stmt_list", "multi_stmt", "select", "select1",
  "opt_tablefunc_args", "tablefunc_args_list", "tablefunc_arg",
  "subselect_start", "opt_outer_order", "opt_outer_limit", "select_from",
  "select_items_list", "select_item", "opt_alias", "select_expr",
  "ident_list", "opt_where_clause", "where_clause", "where_expr",
  "where_item", "filter_item", "expr_ident", "const_int", "const_float",
  "const_list", "string_list", "opt_group_clause", "opt_int",
  "group_items_list", "opt_having_clause", "opt_group_order_clause",
  "group_order_clause", "opt_order_clause", "order_clause",
  "order_items_list", "order_item", "opt_limit_clause", "limit_clause",
  "opt_option_clause", "option_clause", "option_list", "option_item",
  "named_const_list", "named_const", "expr", "function", "arglist", "arg",
  "consthash", "hash_key", "hash_val", "show_stmt", "like_filter",
  "show_what", "index_or_table", "opt_chunk", "set_stmt",
  "set_global_stmt", "set_string_value", "boolean_value", "set_value",
  "simple_set_value", "transact_op", "start_transaction", "insert_into",
  "insert_or_replace", "opt_column_list", "column_ident", "column_list",
  "insert_rows_list", "insert_row", "insert_vals_list", "insert_val",
  "opt_insert_options", "insert_options_list", "insert_option",
  "delete_from", "call_proc", "call_args_list", "call_arg",
  "const_string_list", "opt_call_opts_list", "call_opts_list", "call_opt",
  "opt_as", "call_opt_name", "describe", "describe_tok", "show_tables",
  "show_databases", "update", "update_items_list", "update_item",
  "alter_col_type", "alter", "show_variables", "opt_show_variables_where",
  "show_variables_where", "show_variables_where_list",
  "show_variables_where_entry", "show_collation", "show_character_set",
  "set_transaction", "opt_scope", "isolation_level", "create_function",
  "udf_type", "drop_function", "attach_index", "flush_rtindex",
  "flush_ramchunk", "flush_index", "select_sysvar", "sysvar_list",
  "sysvar_item", "sysvar_name", "select_dual", "truncate",
  "optimize_index", "create_plugin", "drop_plugin", "json_field",
  "json_expr", "subscript", "subkey", "streq", "strval",
  "opt_facet_by_items_list", "facet_by", "facet_item", "facet_expr",
  "facet_items_list", "facet_stmt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   124,    38,    61,   380,    60,
      62,   381,   382,    43,    45,    42,    47,    37,   383,   384,
      59,    40,    41,    44,   123,   125,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   148,   149,   149,   149,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   152,   152,   152,   153,   153,   153,   154,
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     159,   159,   159,   160,   161,   162,   162,   162,   163,   164,
     164,   165,   165,   166,   166,   166,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   168,   168,   169,   169,   170,
     171,   171,   171,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   175,   175,   176,   176,   176,   177,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   182,   182,   183,
     183,   184,   185,   185,   186,   186,   187,   187,   188,   188,
     188,   189,   189,   190,   190,   191,   191,   192,   193,   193,
     194,   194,   194,   194,   194,   195,   195,   196,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   203,   204,   205,   205,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   207,
     207,   208,   208,   209,   209,   209,   209,   209,   209,   210,
     210,   210,   210,   211,   211,   212,   212,   212,   213,   213,
     214,   214,   214,   214,   214,   215,   215,   215,   216,   216,
     217,   218,   218,   219,   219,   220,   220,   221,   221,   222,
     222,   223,   224,   224,   225,   225,   225,   225,   225,   226,
     226,   227,   227,   228,   229,   230,   231,   231,   232,   232,
     233,   233,   234,   234,   235,   235,   236,   237,   237,   238,
     238,   239,   240,   240,   241,   242,   243,   244,   244,   245,
     245,   245,   245,   245,   245,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   247,   247,   247,   248,   248,   249,
     249,   250,   251,   251,   252,   253,   254,   255,   256,   256,
     256,   257,   257,   257,   257,   258,   259,   259,   259,   259,
     259,   260,   261,   262,   263,   264,   265,   266,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   274,   275,   276,
     276,   277,   277,   277,   277,   278,   278,   279,   280,   280,
     281,   282,   283,   284,   284,   285
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     1,     1,     8,     1,     9,     0,     2,     1,     3,
       1,     1,     1,     0,     3,     0,     2,     4,    11,     1,
       3,     1,     2,     0,     1,     2,     1,     4,     4,     4,
       4,     4,     4,     3,     5,     1,     3,     0,     1,     2,
       1,     3,     3,     4,     1,     3,     3,     5,     6,     5,
       6,     3,     4,     5,     3,     3,     3,     3,     3,     3,
       5,     5,     5,     3,     3,     3,     3,     3,     3,     3,
       4,     1,     1,     4,     3,     3,     1,     1,     4,     4,
       4,     3,     1,     2,     1,     2,     1,     1,     3,     1,
       3,     0,     4,     0,     1,     1,     3,     0,     2,     0,
       1,     5,     0,     1,     3,     5,     1,     3,     1,     2,
       2,     0,     1,     2,     4,     0,     1,     2,     1,     3,
       3,     3,     5,     6,     3,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     3,
       4,     4,     4,     4,     4,     4,     4,     3,     6,     6,
       3,     8,    14,     1,     3,     1,     1,     3,     5,     1,
       1,     1,     1,     2,     0,     2,     1,     2,     2,     3,
       1,     1,     1,     2,     4,     4,     3,     4,     4,     1,
       1,     0,     2,     4,     4,     4,     3,     4,     4,     7,
       5,     5,     9,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       7,     1,     1,     0,     3,     1,     1,     1,     3,     1,
       3,     3,     1,     3,     1,     1,     1,     3,     2,     0,
       2,     1,     3,     3,     4,     6,     1,     3,     1,     3,
       1,     3,     0,     2,     1,     3,     3,     0,     1,     1,
       1,     3,     1,     1,     3,     3,     6,     1,     3,     3,
       3,     5,     4,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     6,     4,     4,     5,     0,
       1,     2,     1,     3,     3,     2,     3,     6,     0,     1,
       1,     2,     2,     2,     1,     7,     1,     1,     1,     1,
       1,     3,     6,     3,     3,     2,     3,     1,     3,     2,
       1,     2,     3,     3,     7,     5,     1,     1,     2,     1,
       2,     1,     1,     3,     3,     3,     3,     1,     0,     2,
       1,     2,     1,     1,     3,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   358,     0,   355,     0,     0,   403,   402,
       0,     0,   361,     0,   362,   356,     0,   438,   438,     0,
       0,     0,     0,     2,     3,   126,   129,   132,   134,   130,
     131,     7,     8,   357,     5,     0,     6,     9,    10,     0,
      11,    12,    13,    28,    14,    15,    16,    23,    17,    18,
      19,    20,    21,    22,    24,    25,    26,    27,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    66,    65,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,   124,    84,    83,    85,    86,
      87,    88,    90,    89,    91,    92,    94,    95,    93,    96,
      97,    98,    99,   101,   102,   100,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   125,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,     0,   455,     0,     0,     0,    31,   259,
     261,   262,   477,   264,   460,   263,    38,    41,    50,    57,
      59,    66,    65,   260,     0,    71,    78,    80,    93,   108,
     120,     0,   151,     0,     0,     0,   258,     0,   149,   153,
     156,   286,   241,   457,   153,     0,   287,   288,     0,     0,
      44,    63,    68,     0,   100,     0,     0,     0,     0,   435,
     314,   439,   329,   314,   321,   322,   320,   440,   314,   330,
     314,   245,   316,   313,     0,     0,   359,     0,   165,     0,
       1,     0,     4,   128,     0,   314,     0,     0,     0,     0,
       0,     0,     0,   451,     0,   454,   453,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    78,    80,   265,   266,     0,   310,
     309,     0,     0,   471,   472,     0,   468,   469,     0,     0,
       0,   154,   152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   456,   242,   459,     0,     0,     0,     0,     0,
       0,     0,   353,   354,   352,   351,   350,   336,   348,     0,
       0,     0,   314,     0,   436,     0,   405,   318,   317,   404,
       0,   323,   246,   331,   429,   462,     0,     0,   482,   483,
     153,   478,     0,     0,     0,   127,   363,   401,   426,     0,
       0,     0,   212,   214,   376,   216,     0,     0,   374,   375,
     388,   392,   386,     0,     0,     0,   384,     0,   306,     0,
     297,   305,     0,   303,     0,   305,     0,     0,     0,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,   300,
       0,     0,     0,   284,     0,   285,     0,   477,     0,   470,
     143,   167,   150,   156,   155,   276,   277,   283,   282,   274,
     273,   280,   475,   281,   271,   272,   279,   278,   267,   268,
     269,   270,   275,   243,   458,   289,     0,   476,   337,   338,
       0,     0,     0,     0,   344,   346,   335,   345,     0,   343,
     347,   334,   333,     0,   314,   319,   314,   315,     0,   247,
     248,     0,     0,   326,     0,     0,     0,   427,   430,     0,
       0,   407,     0,   166,   481,   480,     0,   232,     0,     0,
       0,     0,     0,     0,   213,   215,   390,   378,   217,     0,
       0,     0,     0,   447,   448,   446,   450,   449,     0,     0,
     202,    41,    50,    57,     0,    66,   206,    71,    77,   120,
       0,   201,   169,   170,   174,     0,   207,   465,     0,     0,
       0,   291,     0,   157,   294,     0,   162,   296,   295,   161,
     292,   293,   158,     0,   159,     0,     0,   160,     0,     0,
       0,   312,   311,   307,   474,   473,     0,   221,   168,     0,
     290,     0,   341,   340,     0,   349,     0,   324,   325,     0,
       0,   328,   332,   327,   428,     0,   431,   432,     0,     0,
     245,     0,   484,     0,   241,   233,   479,   366,   365,   367,
       0,     0,     0,   425,   452,   377,     0,   389,     0,   397,
     387,   393,   394,   385,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,     0,   304,   164,
       0,     0,     0,     0,     0,     0,   223,   229,   244,     0,
       0,     0,     0,   444,   437,   251,   254,     0,   250,   249,
       0,     0,     0,   409,   410,   408,   406,   413,   414,     0,
     485,   364,     0,     0,   379,   369,   416,   418,   417,   423,
     415,   421,   419,   420,   422,   424,   218,   391,   398,     0,
       0,   445,   464,     0,     0,     0,     0,   211,   204,     0,
       0,   205,   172,   171,     0,     0,   181,     0,   199,     0,
     197,   175,   188,   198,   176,   189,   185,   194,   184,   193,
     186,   195,   187,   196,     0,     0,     0,     0,   299,   298,
       0,   308,     0,     0,   224,     0,     0,   227,   230,   339,
       0,   442,   441,   443,     0,     0,   255,     0,   434,   433,
     412,     0,    90,   238,   234,   236,   368,     0,     0,   372,
       0,     0,   360,   400,   399,   396,   397,   395,   210,   203,
     209,   208,   173,     0,     0,   219,     0,     0,   200,   182,
       0,   141,   142,   140,   137,   138,   133,   467,     0,   466,
       0,     0,     0,   145,     0,     0,     0,   232,     0,     0,
     252,     0,     0,   411,     0,   239,   240,     0,   371,     0,
       0,   380,   381,   370,   183,   191,   192,   190,   177,   179,
       0,     0,     0,     0,   301,     0,     0,     0,   135,   225,
     222,     0,   228,   241,   342,   257,   256,   253,   235,   237,
     373,     0,     0,   220,   178,   180,   139,     0,   144,   146,
       0,     0,   245,   383,   382,     0,     0,   226,   231,   148,
       0,   147,     0,     0,   302
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,   157,   196,    24,    25,    26,    27,   706,
     764,   765,   546,   773,   808,    28,   197,   198,   292,   199,
     411,   547,   376,   512,   513,   514,   515,   488,   369,   489,
     757,   627,   715,   810,   777,   717,   718,   574,   575,   734,
     735,   312,   313,   341,   342,   459,   460,   725,   726,   385,
     201,   382,   383,   281,   282,   543,    29,   336,   233,   234,
     464,    30,    31,   451,   452,   327,   328,    32,    33,    34,
      35,   480,   579,   580,   654,   655,   738,   370,   742,   791,
     792,    36,    37,   371,   372,   490,   492,   591,   592,   669,
     745,    38,    39,    40,    41,    42,   470,   471,   665,    43,
      44,   467,   468,   566,   567,    45,    46,    47,   216,   634,
      48,   498,    49,    50,    51,    52,    53,    54,   202,   203,
     204,    55,    56,    57,    58,    59,   205,   206,   286,   287,
     207,   208,   477,   478,   349,   350,   351,   243
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -660
static const yytype_int16 yypact[] =
{
    4598,    95,    74,  -660,  3854,  -660,    48,    88,  -660,  -660,
      51,    89,  -660,   124,  -660,  -660,   832,  3974,   532,    18,
      91,  3854,   143,  -660,   -19,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,   154,  -660,  -660,  -660,  3854,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    3854,  3854,  3854,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,    97,  3854,
    3854,  3854,  3854,  3854,  -660,  3854,  3854,  3854,   100,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,   107,   131,   144,   162,
     177,   193,   194,  -660,   200,   216,   217,   218,   219,   222,
     223,  1684,  -660,  1684,  1684,  3298,    59,   -11,  -660,  3407,
     165,  -660,   -39,  -660,  3407,   159,   172,  -660,    99,   116,
     167,  4094,  3854,  2709,   176,   180,   254,  3527,   269,  -660,
     161,  -660,  -660,   161,  -660,  -660,  -660,  -660,   161,  -660,
     161,   289,  -660,  -660,  3854,   252,  -660,  3854,  -660,   -34,
    -660,  1684,   105,  -660,  3854,   161,   284,    72,   264,    41,
     287,   263,   -29,  -660,   267,  -660,  -660,  -660,   974,  1684,
    1826,    -5,  1826,  1826,   240,  1684,  1826,  1826,  1684,  1684,
    1684,  1684,   242,   244,   245,   246,  -660,  -660,  4316,  -660,
    -660,   -40,   261,  -660,  -660,  1968,    66,  -660,  2346,  1116,
    3854,  -660,  -660,  1684,  1684,  1684,  1684,  1684,  1684,  1684,
    1684,  1684,  1684,  1684,  1684,  1684,  1684,  1684,  1684,  1684,
     385,   389,  -660,  -660,  -660,   -47,  1684,  2709,  2709,   277,
     278,   355,  -660,  -660,  -660,  -660,  -660,   274,  -660,  2469,
     344,   306,     9,   307,  -660,   404,  -660,  -660,  -660,  -660,
    3854,  -660,  -660,    31,    50,  -660,  3854,  3854,  4614,  -660,
    3407,    -7,  1258,  4214,   294,  -660,   273,  -660,  -660,   383,
     384,   323,  -660,  -660,  -660,  -660,   101,    32,  -660,  -660,
    -660,   295,  -660,    34,   432,  2100,  -660,   433,   316,  1400,
    -660,  4599,    79,  -660,  4349,  4614,    82,  3854,   304,    85,
      92,  -660,  4380,   102,   115,   544,   582,   680,  4413,  -660,
    1542,  1684,  1684,  -660,  3298,  -660,  2589,   300,   298,  -660,
    -660,   -29,  -660,  4614,  -660,  -660,  -660,  4628,  4641,   658,
     561,   146,  -660,   146,   118,   118,   118,   118,    -9,    -9,
    -660,  -660,  -660,   305,  -660,  -660,   371,   146,   274,   274,
     309,  3069,   442,  2709,  -660,  -660,  -660,  -660,   447,  -660,
    -660,  -660,  -660,   387,   161,  -660,   161,  -660,   329,   314,
    -660,   359,   454,  -660,   361,   453,  3854,  -660,  -660,    69,
     -24,  -660,   336,  -660,  -660,  -660,  1684,   386,  1684,  3636,
     347,  3854,  3854,  3854,  -660,  -660,  -660,  -660,  -660,   117,
     119,    41,   326,  -660,  -660,  -660,  -660,  -660,   363,   367,
    -660,   330,   331,   332,   335,   339,  -660,   340,   341,   342,
    2100,    66,   346,  -660,  -660,   192,  -660,  -660,  1116,   345,
    3854,  -660,  1826,  -660,  -660,   348,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  1684,  -660,  1684,  1684,  -660,  4218,  4252,
     362,  -660,  -660,  -660,  -660,  -660,   390,   435,  -660,   487,
    -660,    14,  -660,  -660,   366,  -660,    52,  -660,  -660,  2223,
    3854,  -660,  -660,  -660,  -660,   373,   378,  -660,    36,  3854,
     289,    84,  -660,   475,   434,  -660,   364,  -660,  -660,  -660,
     125,   368,   286,  -660,  -660,  -660,    14,  -660,   496,    56,
    -660,   365,  -660,  -660,   497,   502,  3854,   379,  3854,   375,
     376,  3854,   505,   396,   -31,  2100,    84,     4,   -16,    70,
      80,    84,    84,    84,    84,   481,   397,   483,  -660,  -660,
    4446,  4477,  4283,  2589,  1116,   401,   539,   423,  -660,   128,
     405,     0,   459,  -660,  -660,  -660,  -660,  3854,   408,  -660,
     542,  3854,    10,  -660,  -660,  -660,  -660,  -660,  -660,  2829,
    -660,  -660,  3636,    46,   -26,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  3745,
      46,  -660,  -660,    66,   409,   410,   411,  -660,  -660,   412,
     415,  -660,  -660,  -660,   436,   440,  -660,    19,  -660,   480,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,    13,  3189,   417,  3854,  -660,  -660,
     425,  -660,    -2,   488,  -660,   540,   517,   515,  -660,  -660,
      14,  -660,  -660,  -660,   446,   163,  -660,   566,  -660,  -660,
    -660,   166,   438,    81,   437,  -660,  -660,    39,   173,  -660,
     572,   368,  -660,  -660,  -660,  -660,   558,  -660,  -660,  -660,
    -660,  -660,  -660,    84,    84,  -660,   184,   186,  -660,  -660,
      19,  -660,  -660,  -660,   444,  -660,  -660,    66,   439,  -660,
    1826,  3854,   550,   514,  2949,   508,  2949,   386,   189,    14,
    -660,  3854,   443,  -660,   448,  -660,  -660,  2949,  -660,    46,
     462,   450,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
     587,   195,   202,  3189,  -660,   207,  2949,   591,  -660,  -660,
     455,   573,  -660,   434,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,   594,   572,  -660,  -660,  -660,  -660,   456,   437,   463,
    2949,  2949,   289,  -660,  -660,   466,   603,  -660,   437,  -660,
    1826,  -660,   213,   467,  -660
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -660,  -660,  -660,   -14,    -4,  -660,   369,  -660,   231,  -660,
    -660,  -191,  -660,  -660,  -660,    67,    -3,   333,  -186,  -660,
     -10,  -660,  -303,  -481,  -660,  -161,  -637,  -217,  -543,  -541,
    -140,  -660,  -660,  -660,  -660,  -660,  -660,  -154,  -660,  -659,
    -162,  -567,  -660,  -569,  -660,  -660,    71,  -660,  -152,   226,
    -660,  -258,   108,  -660,   230,    15,  -660,  -207,  -660,  -660,
    -660,  -660,  -660,   201,  -660,   -86,   203,  -660,  -660,  -660,
    -660,  -660,    -8,  -660,  -660,   -98,  -660,  -485,  -660,  -660,
    -175,  -660,  -660,  -660,   158,  -660,  -660,  -660,   -20,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,    83,  -660,  -660,
    -660,  -660,  -660,  -660,    12,  -660,  -660,  -660,   636,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,   349,
    -660,  -660,  -660,  -660,  -660,  -660,   -52,  -332,  -660,   372,
    -660,   358,  -660,  -660,   183,  -660,   185,  -660
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -478
static const yytype_int16 yytable[] =
{
     158,   646,   386,   215,   389,   390,   589,   650,   393,   394,
     629,   239,   733,   686,   472,   362,   337,   238,   314,   362,
     475,   338,   759,   339,   362,   644,   241,   755,   648,   604,
     310,   435,   368,   293,   721,   245,   387,   362,   357,   288,
     486,   362,   363,   516,   362,   461,   362,   363,   771,   364,
     365,   362,   363,   740,   364,   365,   246,   247,   248,   493,
     365,   462,   688,   685,   346,   294,   692,   695,   697,   699,
     701,   703,   283,   284,   668,   362,   363,   335,   690,   283,
     284,   494,   283,   284,   365,   362,   363,   359,   693,   362,
     363,   436,   375,   605,   365,   495,   496,   375,   365,   159,
     785,   731,   162,   404,   311,   405,   484,   485,   548,   347,
     164,   682,   450,  -106,   347,   722,   360,   741,   465,   569,
     786,   242,   689,  -467,   683,   455,   307,   308,   309,   236,
     388,   160,   289,    62,   163,   463,   476,   809,   161,   497,
     631,   289,   632,   240,   448,   687,   756,   828,   448,   633,
     733,   252,   730,   448,   760,   250,   251,   238,   253,   254,
     293,   255,   256,   257,   474,  -461,   448,   570,   739,   733,
     366,   466,   838,   448,   487,   366,   165,   642,   516,   778,
     366,   487,   367,   167,   166,   746,   237,   737,   293,   542,
      60,   280,   294,   837,   733,   291,   568,   320,  -388,  -388,
     291,   352,    61,   353,   366,   285,   354,   293,   321,   326,
     795,   797,   285,   333,   366,   285,   606,   244,   366,   801,
     294,   521,   522,   315,   524,   522,   316,   527,   522,   335,
     343,   438,   439,   345,   528,   522,  -466,   472,   249,   294,
     356,   258,   200,   317,   530,   522,   832,   557,   259,   558,
     607,   305,   306,   307,   308,   309,   608,   531,   522,   585,
     586,   587,   588,   839,   674,   318,   676,   651,   652,   679,
     719,   586,   260,   516,   368,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   238,   261,   414,  -440,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   262,   820,   780,   781,   329,   783,   586,
     217,   656,   657,   326,   326,   788,   789,   516,   263,   609,
     610,   611,   612,   613,   614,   449,   798,   586,   799,   800,
     615,   814,   586,   658,   264,   265,   458,   824,   586,   215,
     293,   266,   469,   473,   825,   800,   291,   659,   660,   827,
     522,   643,   661,   222,   647,   843,   522,   267,   268,   269,
     270,   662,   663,   271,   272,   330,   223,   334,   340,   666,
     344,   511,   294,   358,   361,   769,   224,   374,   225,   226,
     373,   377,   391,   525,   399,   400,   401,   402,   406,   684,
     433,   664,   691,   694,   696,   698,   700,   702,   228,   174,
     280,   229,   541,   231,   440,   441,   542,   442,   443,   453,
     454,   456,   457,   232,   479,   481,   482,   276,   483,   277,
     278,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   368,   449,   491,   326,
     499,   517,   516,  -477,   516,   545,   526,   544,   549,   550,
     551,   554,   484,   368,   556,   516,   559,   560,   561,   562,
     563,   564,   565,   571,   581,   594,   573,   348,   593,   595,
     605,   596,   597,   598,   516,   578,   599,   582,   583,   584,
     600,   601,   602,   603,   381,   384,   624,   616,   626,   623,
     619,   392,   628,   630,   395,   396,   397,   398,   516,   516,
     640,   641,   649,   310,   667,   671,   511,   476,   670,   653,
     672,   408,   805,   680,   675,   413,   617,   677,   678,   415,
     416,   417,   418,   419,   420,   421,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   794,   796,   681,   704,
     705,   707,   437,   713,   714,   716,   720,   723,   217,   727,
     728,   748,   749,   750,   751,   638,   458,   752,   758,   766,
     753,   218,   815,   219,   754,   469,   770,   774,   772,   220,
     775,   776,   368,   779,   782,   790,   668,   806,   413,   784,
     787,   804,   842,   807,   221,   817,   293,   803,   811,   821,
     818,   222,   673,   822,   673,   823,   829,   673,   830,   835,
     831,   511,   833,   293,   223,   278,   836,   840,   841,   844,
     519,   355,   826,   625,   224,   812,   225,   226,   294,   541,
     802,   712,   412,   813,   293,   819,   381,   538,   539,   816,
     618,   639,   227,   724,   540,   294,   228,   565,   711,   229,
     230,   231,   553,   793,   736,   511,   555,   834,   578,   590,
     747,   232,   645,   729,   235,   768,   294,   422,   409,   572,
     434,     0,     0,   576,     0,   744,     0,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,     0,     0,     0,     0,   532,   533,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,     0,
     293,   763,   348,   767,   348,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
       0,     0,   293,     0,   534,   535,     0,     0,     0,     0,
       0,     0,   294,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   413,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   294,     0,     0,     0,     0,   620,
       0,   621,   622,     0,     0,     0,     0,   238,     0,     0,
     511,     0,   511,     0,     0,     0,     0,   724,     0,     0,
       0,     0,     0,   511,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,     0,     0,     0,   763,
       0,     0,   511,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,     0,     0,
       0,     0,     0,   536,     0,     0,   511,   511,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,   171,     0,
     172,   173,   174,     0,     0,     0,   175,    64,    65,    66,
     413,    67,    68,    69,   176,    71,    72,   177,    74,     0,
      75,    76,    77,    78,    79,    80,    81,   178,    83,    84,
      85,    86,    87,    88,     0,   179,    90,     0,     0,   180,
      92,    93,     0,    94,    95,    96,   181,   182,    99,   183,
     184,   100,   101,   102,   185,   104,     0,   105,   106,   107,
     108,     0,   109,   186,   111,   187,     0,   113,   114,   115,
       0,   116,     0,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   188,   129,   130,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   189,   142,
     143,   144,   145,   146,     0,   147,   148,   149,   150,   151,
     152,   153,   190,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,   192,     0,     0,
     193,     0,     0,   194,     0,     0,   195,   273,   169,   170,
     171,     0,   378,   173,     0,     0,     0,     0,   175,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,   177,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,   179,    90,     0,
       0,   180,    92,    93,     0,    94,    95,    96,    97,    98,
      99,   183,   184,   100,   101,   102,   185,   104,     0,   105,
     106,   107,   108,     0,   109,   274,   111,   275,     0,   113,
     114,   115,     0,   116,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   188,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,   147,   148,   149,
     150,   151,   152,   153,   190,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,     0,
       0,     0,   193,     0,     0,   379,   380,     0,   195,   273,
     169,   170,   171,     0,   172,   173,     0,     0,     0,     0,
     175,    64,    65,    66,     0,    67,    68,    69,   176,    71,
      72,   177,    74,     0,    75,    76,    77,    78,    79,    80,
      81,   178,    83,    84,    85,    86,    87,    88,     0,   179,
      90,     0,     0,   180,    92,    93,     0,    94,    95,    96,
     181,   182,    99,   183,   184,   100,   101,   102,   185,   104,
       0,   105,   106,   107,   108,     0,   109,   186,   111,   187,
       0,   113,   114,   115,     0,   116,     0,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   188,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   189,   142,   143,   144,   145,   146,     0,   147,
     148,   149,   150,   151,   152,   153,   190,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     191,   192,     0,     0,   193,     0,     0,   194,     0,     0,
     195,   168,   169,   170,   171,     0,   172,   173,     0,     0,
       0,     0,   175,    64,    65,    66,     0,    67,    68,    69,
     176,    71,    72,   177,    74,     0,    75,    76,    77,    78,
      79,    80,    81,   178,    83,    84,    85,    86,    87,    88,
       0,   179,    90,     0,     0,   180,    92,    93,     0,    94,
      95,    96,   181,   182,    99,   183,   184,   100,   101,   102,
     185,   104,     0,   105,   106,   107,   108,     0,   109,   186,
     111,   187,     0,   113,   114,   115,     0,   116,     0,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     188,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   189,   142,   143,   144,   145,   146,
       0,   147,   148,   149,   150,   151,   152,   153,   190,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,   192,     0,     0,   193,     0,     0,   194,
       0,     0,   195,   273,   169,   170,   171,     0,   172,   173,
       0,     0,     0,     0,   175,    64,    65,    66,     0,    67,
      68,    69,    70,    71,    72,   177,    74,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,   179,    90,     0,     0,   180,    92,    93,
       0,    94,    95,    96,    97,    98,    99,   183,   184,   100,
     101,   102,   185,   104,     0,   105,   106,   107,   108,     0,
     109,   274,   111,   275,     0,   113,   114,   115,     0,   116,
       0,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   188,   129,   130,   131,   518,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     0,   147,   148,   149,   150,   151,   152,   153,
     190,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,     0,     0,   193,     0,
       0,   194,     0,     0,   195,   273,   169,   170,   171,     0,
     378,   173,     0,     0,     0,     0,   175,    64,    65,    66,
       0,    67,    68,    69,    70,    71,    72,   177,    74,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,   179,    90,     0,     0,   180,
      92,    93,     0,    94,    95,    96,    97,    98,    99,   183,
     184,   100,   101,   102,   185,   104,     0,   105,   106,   107,
     108,     0,   109,   274,   111,   275,     0,   113,   114,   115,
       0,   116,     0,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   188,   129,   130,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     0,   147,   148,   149,   150,   151,
     152,   153,   190,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,     0,     0,
     193,     0,     0,   194,   380,     0,   195,   273,   169,   170,
     171,     0,   172,   173,     0,     0,     0,     0,   175,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,   177,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,   179,    90,     0,
       0,   180,    92,    93,     0,    94,    95,    96,    97,    98,
      99,   183,   184,   100,   101,   102,   185,   104,     0,   105,
     106,   107,   108,     0,   109,   274,   111,   275,     0,   113,
     114,   115,     0,   116,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   188,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,   147,   148,   149,
     150,   151,   152,   153,   190,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,     0,
       0,     0,   193,     0,     0,   194,     0,     0,   195,   273,
     169,   170,   171,     0,   378,   173,     0,     0,     0,     0,
     175,    64,    65,    66,     0,    67,    68,    69,    70,    71,
      72,   177,    74,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,   179,
      90,     0,     0,   180,    92,    93,     0,    94,    95,    96,
      97,    98,    99,   183,   184,   100,   101,   102,   185,   104,
       0,   105,   106,   107,   108,     0,   109,   274,   111,   275,
       0,   113,   114,   115,     0,   116,     0,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   188,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     0,   147,
     148,   149,   150,   151,   152,   153,   190,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     191,     0,     0,     0,   193,     0,     0,   194,     0,     0,
     195,   273,   169,   170,   171,     0,   407,   173,     0,     0,
       0,     0,   175,    64,    65,    66,     0,    67,    68,    69,
      70,    71,    72,   177,    74,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,   179,    90,     0,     0,   180,    92,    93,     0,    94,
      95,    96,    97,    98,    99,   183,   184,   100,   101,   102,
     185,   104,     0,   105,   106,   107,   108,     0,   109,   274,
     111,   275,     0,   113,   114,   115,     0,   116,     0,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     188,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
       0,   147,   148,   149,   150,   151,   152,   153,   190,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,    63,   500,     0,   193,     0,     0,   194,
       0,     0,   195,     0,     0,    64,    65,    66,     0,    67,
      68,    69,    70,    71,    72,   501,    74,     0,    75,    76,
      77,    78,    79,    80,    81,   502,    83,    84,    85,    86,
      87,    88,     0,   503,    90,   504,     0,    91,    92,    93,
       0,    94,    95,    96,   505,    98,    99,   506,     0,   100,
     101,   102,   507,   104,     0,   105,   106,   107,   108,     0,
     508,   110,   111,   112,     0,   113,   114,   115,     0,   116,
       0,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,     0,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     0,   147,   148,   149,   150,   151,   152,   153,
     509,   155,   156,     0,     0,     0,    63,     0,   635,     0,
       0,   636,     0,     0,     0,     0,     0,     0,    64,    65,
      66,   510,    67,    68,    69,    70,    71,    72,    73,    74,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     0,    89,    90,     0,     0,
      91,    92,    93,     0,    94,    95,    96,    97,    98,    99,
       0,     0,   100,   101,   102,   103,   104,     0,   105,   106,
     107,   108,     0,   109,   110,   111,   112,     0,   113,   114,
     115,     0,   116,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,    66,   637,    67,    68,    69,    70,    71,
      72,    73,    74,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,    89,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
      97,    98,    99,     0,     0,   100,   101,   102,   103,   104,
       0,   105,   106,   107,   108,     0,   109,   110,   111,   112,
       0,   113,   114,   115,     0,   116,     0,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     0,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
       0,     0,    63,     0,   362,     0,     0,   444,     0,     0,
       0,     0,     0,     0,    64,    65,    66,   410,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,   445,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,     0,     0,   100,   101,
     102,   103,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,   446,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   447,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    63,     0,   362,     0,     0,     0,     0,     0,
       0,     0,     0,   448,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,     0,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,     0,     0,   100,   101,
     102,   103,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    63,     0,   322,   323,     0,   324,     0,     0,
       0,     0,     0,   448,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,     0,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,     0,     0,   100,   101,
     102,   103,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,   325,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    63,   500,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,   501,    74,     0,    75,    76,    77,
      78,    79,    80,    81,   502,    83,    84,    85,    86,    87,
      88,     0,   503,    90,   504,     0,    91,    92,    93,     0,
      94,    95,    96,   505,    98,    99,   506,     0,   100,   101,
     102,   507,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,     0,
     117,   118,   119,   120,   121,   732,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   509,
     155,   156,    63,   500,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,   501,    74,     0,    75,    76,    77,
      78,    79,    80,    81,   502,    83,    84,    85,    86,    87,
      88,     0,   503,    90,   504,     0,    91,    92,    93,     0,
      94,    95,    96,   505,    98,    99,   506,     0,   100,   101,
     102,   507,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   509,
     155,   156,    63,     0,   552,     0,     0,   444,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,     0,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,     0,     0,   100,   101,
     102,   103,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    63,     0,   761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,     0,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,   762,     0,   100,   101,
     102,   103,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    63,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     0,    64,    65,    66,     0,    67,    68,    69,
      70,    71,    72,    73,    74,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,    89,    90,     0,     0,    91,    92,    93,     0,    94,
      95,    96,    97,    98,    99,     0,   279,   100,   101,   102,
     103,   104,     0,   105,   106,   107,   108,     0,   109,   110,
     111,   112,     0,   113,   114,   115,     0,   116,     0,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      63,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,    64,    65,    66,   290,    67,    68,    69,    70,
      71,    72,    73,    74,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,     0,     0,    91,    92,    93,     0,    94,    95,
      96,    97,    98,    99,     0,     0,   100,   101,   102,   103,
     104,     0,   105,   106,   107,   108,     0,   109,   110,   111,
     112,     0,   113,   114,   115,     0,   116,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,     0,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      63,     0,     0,     0,     0,   331,     0,     0,     0,     0,
       0,     0,    64,    65,    66,     0,    67,    68,    69,    70,
      71,    72,    73,    74,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,     0,     0,    91,    92,    93,     0,    94,    95,
      96,    97,    98,    99,     0,     0,   100,   101,   102,   103,
     104,     0,   105,   106,   107,   108,     0,   109,   110,   111,
     112,     0,   113,   114,   115,     0,   116,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   332,   140,   141,   142,   143,   144,   145,   146,    63,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,    64,    65,    66,     0,    67,    68,    69,    70,    71,
      72,    73,    74,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,    89,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
      97,    98,    99,   577,     0,   100,   101,   102,   103,   104,
       0,   105,   106,   107,   108,     0,   109,   110,   111,   112,
       0,   113,   114,   115,     0,   116,     0,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    63,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
      64,    65,    66,     0,    67,    68,    69,    70,    71,    72,
      73,    74,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,    89,    90,
       0,     0,    91,    92,    93,     0,    94,    95,    96,    97,
      98,    99,     0,     0,   100,   101,   102,   103,   104,     0,
     105,   106,   107,   108,   743,   109,   110,   111,   112,     0,
     113,   114,   115,     0,   116,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    63,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,     0,
       0,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,     0,     0,   100,   101,   102,   103,   104,     0,   105,
     106,   107,   108,     0,   109,   110,   111,   112,     0,   113,
     114,   115,     0,   116,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    63,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,    75,   210,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,     0,
       0,    91,    92,    93,     0,    94,   211,    96,    97,    98,
      99,     0,     0,   212,   101,   102,   103,   104,     0,   105,
     106,   107,   108,     0,   109,   110,   111,   112,     0,   113,
     114,   213,     0,   116,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   132,   133,   134,   214,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,     0,     0,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    63,     0,     0,
       0,     0,     0,   319,     0,     0,     0,     0,     0,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,     0,
       0,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,     0,     0,   100,   101,   102,   103,   104,     0,   105,
     106,   107,   108,     0,   109,   110,   111,   112,     0,   113,
     114,     0,     0,   116,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,  -439,     0,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    63,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,    75,   210,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,     0,
     293,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,     0,     0,   100,   101,   102,   103,   104,     0,   105,
     106,   107,   108,     0,   109,   110,   111,   112,     0,   113,
     114,   213,   294,   116,   293,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   293,   294,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,     0,
       0,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,     0,   294,   293,     0,
       0,   533,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     294,   293,     0,     0,     0,   535,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,     0,   293,   294,     0,     0,   710,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   294,   293,     0,     0,   403,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   294,   293,     0,
       0,   523,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,     0,   293,
     294,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   294,     0,     0,     0,   537,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,     0,     0,     0,     0,   708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     1,     0,     0,     2,   709,
       0,     3,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     5,     0,     0,     6,     0,     7,     8,     9,     0,
       0,   293,    10,     0,     0,     0,    11,     0,   520,     0,
       0,     0,     0,     0,     0,     0,   293,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,     0,     0,   294,     0,     0,     0,     0,     0,    13,
       0,     0,     0,   293,     0,     0,     0,     0,   294,    14,
       0,     0,    15,     0,    16,     0,    17,     0,     0,    18,
       0,    19,   294,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,    21,   294,     0,     0,     0,     0,
       0,     0,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309
};

static const yytype_int16 yycheck[] =
{
       4,   570,   260,    17,   262,   263,   491,   574,   266,   267,
     551,    21,   649,     9,   346,     5,   223,    21,   204,     5,
      27,   228,     9,   230,     5,   568,    45,     8,   571,   510,
      69,    78,   249,    42,    34,    39,    41,     5,   245,    50,
       8,     5,     6,   375,     5,    14,     5,     6,    50,     8,
      14,     5,     6,    79,     8,    14,    60,    61,    62,    25,
      14,    30,    78,   606,    98,    74,   609,   610,   611,   612,
     613,   614,    13,    14,    18,     5,     6,    68,     8,    13,
      14,    47,    13,    14,    14,     5,     6,    15,     8,     5,
       6,   138,   121,   124,    14,    61,    62,   121,    14,    51,
      19,   642,    51,   143,   143,   145,     5,     6,   411,   143,
      21,   142,   329,   104,   143,   115,    44,   143,    68,   143,
      39,   140,   138,    64,   605,   332,   135,   136,   137,   111,
     135,    83,   143,    59,    83,   104,   143,   774,    50,   105,
      88,   143,    90,     0,   134,   141,   687,   806,   134,    97,
     787,   161,   142,   134,   141,   159,   160,   161,   162,   163,
      42,   165,   166,   167,   350,     0,   134,   470,   653,   806,
     134,   121,   831,   134,   142,   134,    87,   141,   510,   720,
     134,   142,   141,    59,    95,   670,    95,   141,    42,   406,
      95,   195,    74,   830,   831,   199,   127,   211,   142,   143,
     204,    96,   107,    98,   134,   146,   101,    42,   212,   213,
     753,   754,   146,   217,   134,   146,    24,    63,   134,   760,
      74,   142,   143,    64,   142,   143,   127,   142,   143,    68,
     234,   317,   318,   237,   142,   143,    64,   569,   141,    74,
     244,   141,    16,   127,   142,   143,   813,   454,   141,   456,
      58,   133,   134,   135,   136,   137,    64,   142,   143,   142,
     143,   142,   143,   832,   596,    98,   598,   142,   143,   601,
     142,   143,   141,   605,   491,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   288,   141,   290,   111,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   141,   789,   142,   143,   127,   142,   143,
      16,    25,    26,   317,   318,   142,   143,   649,   141,   127,
     128,   129,   130,   131,   132,   329,   142,   143,   142,   143,
     138,   142,   143,    47,   141,   141,   340,   142,   143,   353,
      42,   141,   346,   347,   142,   143,   350,    61,    62,   142,
     143,   568,    66,    59,   571,   142,   143,   141,   141,   141,
     141,    75,    76,   141,   141,   111,    72,    98,    79,   586,
     118,   375,    74,    89,   110,   707,    82,   114,    84,    85,
      93,   114,   142,   387,   142,   141,   141,   141,   127,   606,
       5,   105,   609,   610,   611,   612,   613,   614,   104,    10,
     404,   107,   406,   109,   127,   127,   623,    52,   134,    65,
     104,   104,     8,   119,   141,    32,    32,   191,    95,   193,
     194,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   653,   441,   143,   443,
       8,     8,   774,   127,   776,   147,   142,   147,   143,    78,
     141,     9,     5,   670,    67,   787,   127,   143,    99,     5,
      99,     8,   466,   127,   117,   102,    80,   241,   142,   102,
     124,   141,   141,   141,   806,   479,   141,   481,   482,   483,
     141,   141,   141,   141,   258,   259,    96,   142,    53,   127,
     142,   265,     5,   127,   268,   269,   270,   271,   830,   831,
     127,   123,    27,    69,     8,     8,   510,   143,   143,   141,
       8,   285,   770,     8,   135,   289,   520,   142,   142,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   753,   754,   142,    58,
     143,    58,   316,   142,     5,   122,   141,    88,    16,   141,
       8,   142,   142,   142,   142,   559,   560,   142,    78,   142,
     124,    29,   779,    31,   124,   569,   141,    27,    80,    37,
      53,    56,   789,   127,     8,     3,    18,    27,   352,   141,
     143,   142,   840,    69,    52,   142,    42,   143,    80,   127,
     142,    59,   596,   143,   598,     8,     5,   601,   143,   143,
      27,   605,     8,    42,    72,   379,   143,   141,     5,   142,
     379,   242,   803,   546,    82,   776,    84,    85,    74,   623,
     760,   624,   289,   777,    42,   787,   400,   401,   402,   781,
     522,   560,   100,   637,   404,    74,   104,   641,   623,   107,
     108,   109,   441,   741,   652,   649,   443,   822,   652,   491,
     670,   119,   569,   641,    18,   707,    74,   299,   286,   476,
     311,    -1,    -1,   478,    -1,   669,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,    -1,    -1,    -1,   142,   143,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
      42,   705,   476,   707,   478,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,    -1,    42,    -1,   142,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   518,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,   533,
      -1,   535,   536,    -1,    -1,    -1,    -1,   771,    -1,    -1,
     774,    -1,   776,    -1,    -1,    -1,    -1,   781,    -1,    -1,
      -1,    -1,    -1,   787,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,    -1,    -1,   803,
      -1,    -1,   806,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,    -1,
      -1,    -1,    -1,   143,    -1,    -1,   830,   831,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
     624,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    -1,    75,    76,    77,
      -1,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,    -1,
     138,    -1,    -1,   141,    -1,    -1,   144,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    77,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,   138,    -1,    -1,   141,   142,    -1,   144,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    75,    76,    77,    -1,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,    -1,   138,    -1,    -1,   141,    -1,    -1,
     144,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    -1,    75,    76,    77,    -1,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,    -1,   138,    -1,    -1,   141,
      -1,    -1,   144,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    -1,    75,    76,    77,    -1,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,   138,    -1,
      -1,   141,    -1,    -1,   144,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    -1,    75,    76,    77,
      -1,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,
     138,    -1,    -1,   141,   142,    -1,   144,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    77,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,   138,    -1,    -1,   141,    -1,    -1,   144,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    75,    76,    77,    -1,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,    -1,    -1,    -1,   138,    -1,    -1,   141,    -1,    -1,
     144,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    -1,    75,    76,    77,    -1,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,     3,     4,    -1,   138,    -1,    -1,   141,
      -1,    -1,   144,    -1,    -1,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    -1,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    -1,    75,    76,    77,    -1,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,     3,    -1,     5,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,   141,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    -1,    75,    76,
      77,    -1,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,   141,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    75,    76,    77,    -1,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,     3,    -1,     5,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,   141,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,    -1,     5,     6,    -1,     8,    -1,    -1,
      -1,    -1,    -1,   134,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,    -1,     5,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,     3,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    -1,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    -1,    75,    76,    77,    -1,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       3,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    -1,    75,    76,    77,    -1,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    -1,    75,    76,    77,    -1,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     3,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      -1,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    75,    76,    77,    -1,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     3,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      75,    76,    77,    -1,    79,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,     3,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    77,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    77,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,     3,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    -1,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      42,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    77,    74,    79,    42,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    42,    74,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,    74,    42,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      74,    42,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,    -1,    42,    74,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    74,    42,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,    74,    42,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,    42,
      74,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,    74,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,    17,    -1,    -1,    20,   142,
      -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    36,    -1,    38,    39,    40,    -1,
      -1,    42,    44,    -1,    -1,    -1,    48,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    74,    91,
      -1,    -1,    94,    -1,    96,    -1,    98,    -1,    -1,   101,
      -1,   103,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    74,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    17,    20,    23,    28,    33,    36,    38,    39,    40,
      44,    48,    60,    81,    91,    94,    96,    98,   101,   103,
     113,   116,   149,   150,   153,   154,   155,   156,   163,   204,
     209,   210,   215,   216,   217,   218,   229,   230,   239,   240,
     241,   242,   243,   247,   248,   253,   254,   255,   258,   260,
     261,   262,   263,   264,   265,   269,   270,   271,   272,   273,
      95,   107,    59,     3,    15,    16,    17,    19,    20,    21,
      22,    23,    24,    25,    26,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    43,
      44,    47,    48,    49,    51,    52,    53,    54,    55,    56,
      59,    60,    61,    62,    63,    65,    66,    67,    68,    70,
      71,    72,    73,    75,    76,    77,    79,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   151,   152,    51,
      83,    50,    51,    83,    21,    87,    95,    59,     3,     4,
       5,     6,     8,     9,    10,    14,    22,    25,    35,    43,
      47,    54,    55,    57,    58,    62,    71,    73,    92,   106,
     120,   134,   135,   138,   141,   144,   152,   164,   165,   167,
     197,   198,   266,   267,   268,   274,   275,   278,   279,    10,
      29,    52,    59,    77,   100,   151,   256,    16,    29,    31,
      37,    52,    59,    72,    82,    84,    85,   100,   104,   107,
     108,   109,   119,   206,   207,   256,   111,    95,   152,   168,
       0,    45,   140,   285,    63,   152,   152,   152,   152,   141,
     152,   152,   168,   152,   152,   152,   152,   152,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,     3,    71,    73,   197,   197,   197,    58,
     152,   201,   202,    13,    14,   146,   276,   277,    50,   143,
      18,   152,   166,    42,    74,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      69,   143,   189,   190,   166,    64,   127,   127,    98,     9,
     151,   152,     5,     6,     8,    78,   152,   213,   214,   127,
     111,     8,   104,   152,    98,    68,   205,   205,   205,   205,
      79,   191,   192,   152,   118,   152,    98,   143,   197,   282,
     283,   284,    96,    98,   101,   154,   152,   205,    89,    15,
      44,   110,     5,     6,     8,    14,   134,   141,   175,   176,
     225,   231,   232,    93,   114,   121,   170,   114,     8,   141,
     142,   197,   199,   200,   197,   197,   199,    41,   135,   199,
     199,   142,   197,   199,   199,   197,   197,   197,   197,   142,
     141,   141,   141,   142,   143,   145,   127,     8,   197,   277,
     141,   168,   165,   197,   152,   197,   197,   197,   197,   197,
     197,   197,   279,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,     5,   267,    78,   138,   197,   213,   213,
     127,   127,    52,   134,     8,    46,    78,   112,   134,   152,
     175,   211,   212,    65,   104,   205,   104,     8,   152,   193,
     194,    14,    30,   104,   208,    68,   121,   249,   250,   152,
     244,   245,   275,   152,   166,    27,   143,   280,   281,   141,
     219,    32,    32,    95,     5,     6,     8,   142,   175,   177,
     233,   143,   234,    25,    47,    61,    62,   105,   259,     8,
       4,    25,    35,    43,    45,    54,    57,    62,    70,   120,
     141,   152,   171,   172,   173,   174,   275,     8,    96,   156,
      49,   142,   143,   142,   142,   152,   142,   142,   142,   142,
     142,   142,   142,   143,   142,   143,   143,   142,   197,   197,
     202,   152,   175,   203,   147,   147,   160,   169,   170,   143,
      78,   141,     5,   211,     9,   214,    67,   205,   205,   127,
     143,    99,     5,    99,     8,   152,   251,   252,   127,   143,
     170,   127,   282,    80,   185,   186,   284,    57,   152,   220,
     221,   117,   152,   152,   152,   142,   143,   142,   143,   225,
     232,   235,   236,   142,   102,   102,   141,   141,   141,   141,
     141,   141,   141,   141,   171,   124,    24,    58,    64,   127,
     128,   129,   130,   131,   132,   138,   142,   152,   200,   142,
     197,   197,   197,   127,    96,   163,    53,   179,     5,   177,
     127,    88,    90,    97,   257,     5,     8,   141,   152,   194,
     127,   123,   141,   175,   176,   245,   191,   175,   176,    27,
     189,   142,   143,   141,   222,   223,    25,    26,    47,    61,
      62,    66,    75,    76,   105,   246,   175,     8,    18,   237,
     143,     8,     8,   152,   275,   135,   275,   142,   142,   275,
       8,   142,   142,   171,   175,   176,     9,   141,    78,   138,
       8,   175,   176,     8,   175,   176,   175,   176,   175,   176,
     175,   176,   175,   176,    58,   143,   157,    58,   142,   142,
     143,   203,   164,   142,     5,   180,   122,   183,   184,   142,
     141,    34,   115,    88,   152,   195,   196,   141,     8,   252,
     142,   177,    86,   174,   187,   188,   220,   141,   224,   225,
      79,   143,   226,    69,   152,   238,   225,   236,   142,   142,
     142,   142,   142,   124,   124,     8,   177,   178,    78,     9,
     141,     5,    57,   152,   158,   159,   142,   152,   274,   275,
     141,    50,    80,   161,    27,    53,    56,   182,   177,   127,
     142,   143,     8,   142,   141,    19,    39,   143,   142,   143,
       3,   227,   228,   223,   175,   176,   175,   176,   142,   142,
     143,   177,   178,   143,   142,   199,    27,    69,   162,   174,
     181,    80,   173,   185,   142,   175,   196,   142,   142,   188,
     225,   127,   143,     8,   142,   142,   159,   142,   187,     5,
     143,    27,   189,     8,   228,   143,   143,   174,   187,   191,
     141,     5,   199,   142,   142
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (pParser, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, pParser)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, pParser); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, SqlParser_c * pParser)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, pParser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    SqlParser_c * pParser;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (pParser);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, SqlParser_c * pParser)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, pParser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    SqlParser_c * pParser;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, pParser);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, SqlParser_c * pParser)
#else
static void
yy_reduce_print (yyvsp, yyrule, pParser)
    YYSTYPE *yyvsp;
    int yyrule;
    SqlParser_c * pParser;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , pParser);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, pParser); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, SqlParser_c * pParser)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, pParser)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    SqlParser_c * pParser;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (pParser);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (SqlParser_c * pParser);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (SqlParser_c * pParser)
#else
int
yyparse (pParser)
    SqlParser_c * pParser;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    { pParser->PushQuery(); ;}
    break;

  case 126:

    { pParser->PushQuery(); ;}
    break;

  case 127:

    { pParser->PushQuery(); ;}
    break;

  case 128:

    { pParser->PushQuery(); ;}
    break;

  case 133:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by table argument
			pParser->ToString ( pParser->m_pStmt->m_sTableFunc, (yyvsp[(2) - (8)]) );
		;}
    break;

  case 135:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by subselect
		;}
    break;

  case 138:

    {
			pParser->ToString ( pParser->m_pStmt->m_dTableFuncArgs.Add(), (yyvsp[(1) - (1)]) );
		;}
    break;

  case 139:

    {
			pParser->ToString ( pParser->m_pStmt->m_dTableFuncArgs.Add(), (yyvsp[(3) - (3)]) );
		;}
    break;

  case 143:

    {
		CSphVector<CSphQueryItem> & dItems = pParser->m_pQuery->m_dItems;
		if ( dItems.GetLength()!=1 || dItems[0].m_sExpr!="*" )
		{
			yyerror ( pParser, "outer select list must be a single star" );
			YYERROR;
		}
		dItems.Reset();
		pParser->ResetSelect();
	;}
    break;

  case 144:

    {
			pParser->ToString ( pParser->m_pQuery->m_sOuterOrderBy, (yyvsp[(3) - (3)]) );
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 146:

    {
			pParser->m_pQuery->m_iOuterLimit = (yyvsp[(2) - (2)]).m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 147:

    {
			pParser->m_pQuery->m_iOuterOffset = (yyvsp[(2) - (4)]).m_iValue;
			pParser->m_pQuery->m_iOuterLimit = (yyvsp[(4) - (4)]).m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 148:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->ToString ( pParser->m_pQuery->m_sIndexes, (yyvsp[(4) - (11)]) );
		;}
    break;

  case 151:

    { pParser->AddItem ( &(yyvsp[(1) - (1)]) ); ;}
    break;

  case 154:

    { pParser->AliasLastItem ( &(yyvsp[(1) - (1)]) ); ;}
    break;

  case 155:

    { pParser->AliasLastItem ( &(yyvsp[(2) - (2)]) ); ;}
    break;

  case 156:

    { pParser->AddItem ( &(yyvsp[(1) - (1)]) ); ;}
    break;

  case 157:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_AVG, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 158:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_MAX, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 159:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_MIN, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 160:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_SUM, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 161:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_CAT, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 162:

    { if ( !pParser->AddItem ( "count(*)", &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ) ) YYERROR; ;}
    break;

  case 163:

    { if ( !pParser->AddItem ( "groupby()", &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ) ) YYERROR; ;}
    break;

  case 164:

    { if ( !pParser->AddDistinct ( &(yyvsp[(4) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(5) - (5)]) ) ) YYERROR; ;}
    break;

  case 166:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 173:

    {
			if ( !pParser->SetMatch((yyvsp[(3) - (4)])) )
				YYERROR;
		;}
    break;

  case 175:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[(1) - (3)]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( (yyvsp[(3) - (3)]).m_iValue );
		;}
    break;

  case 176:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[(1) - (3)]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( (yyvsp[(3) - (3)]).m_iValue );
			pFilter->m_bExclude = true;
		;}
    break;

  case 177:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[(1) - (5)]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *(yyvsp[(4) - (5)]).m_pValues.Ptr();
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 178:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[(1) - (6)]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *(yyvsp[(5) - (6)]).m_pValues.Ptr();
			pFilter->m_dValues.Uniq();
			pFilter->m_bExclude = true;
		;}
    break;

  case 179:

    {
			if ( !pParser->AddStringListFilter ( (yyvsp[(1) - (5)]), (yyvsp[(4) - (5)]), false ) )
				YYERROR;
		;}
    break;

  case 180:

    {
			if ( !pParser->AddStringListFilter ( (yyvsp[(1) - (6)]), (yyvsp[(5) - (6)]), true ) )
				YYERROR;
		;}
    break;

  case 181:

    {
			if ( !pParser->AddUservarFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), false ) )
				YYERROR;
		;}
    break;

  case 182:

    {
			if ( !pParser->AddUservarFilter ( (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]), true ) )
				YYERROR;
		;}
    break;

  case 183:

    {
			if ( !pParser->AddIntRangeFilter ( (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]).m_iValue, (yyvsp[(5) - (5)]).m_iValue ) )
				YYERROR;
		;}
    break;

  case 184:

    {
			if ( !pParser->AddIntFilterGreater ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 185:

    {
			if ( !pParser->AddIntFilterLesser ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 186:

    {
			if ( !pParser->AddIntFilterGreater ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 187:

    {
			if ( !pParser->AddIntFilterLesser ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 188:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_fValue, (yyvsp[(3) - (3)]).m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 189:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_fValue, (yyvsp[(3) - (3)]).m_fValue, true, true ) )
				YYERROR;
		;}
    break;

  case 190:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]).m_fValue, (yyvsp[(5) - (5)]).m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 191:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]).m_iValue, (yyvsp[(5) - (5)]).m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 192:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]).m_fValue, (yyvsp[(5) - (5)]).m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 193:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_fValue, FLT_MAX, false ) )
				YYERROR;
		;}
    break;

  case 194:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), -FLT_MAX, (yyvsp[(3) - (3)]).m_fValue, false ) )
				YYERROR;
		;}
    break;

  case 195:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_fValue, FLT_MAX, true ) )
				YYERROR;
		;}
    break;

  case 196:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), -FLT_MAX, (yyvsp[(3) - (3)]).m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 197:

    {
			if ( !pParser->AddStringFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), false ) )
				YYERROR;
		;}
    break;

  case 198:

    {
			if ( !pParser->AddStringFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), true ) )
				YYERROR;
		;}
    break;

  case 199:

    {
			if ( !pParser->AddNullFilter ( (yyvsp[(1) - (3)]), true ) )
				YYERROR;
		;}
    break;

  case 200:

    {
			if ( !pParser->AddNullFilter ( (yyvsp[(1) - (4)]), false ) )
				YYERROR;
		;}
    break;

  case 202:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 203:

    {
			(yyval).m_iType = SPHINXQL_TOK_COUNT;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 204:

    {
			(yyval).m_iType = SPHINXQL_TOK_GROUPBY;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 205:

    {
			(yyval).m_iType = SPHINXQL_TOK_WEIGHT;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 206:

    {
			(yyval).m_iType = SPHINXQL_TOK_ID;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 212:

    { (yyval).m_iType = TOK_CONST_INT; (yyval).m_iValue = (yyvsp[(1) - (1)]).m_iValue; ;}
    break;

  case 213:

    {
			(yyval).m_iType = TOK_CONST_INT;
			if ( (uint64_t)(yyvsp[(2) - (2)]).m_iValue > (uint64_t)LLONG_MAX )
				(yyval).m_iValue = LLONG_MIN;
			else
				(yyval).m_iValue = -(yyvsp[(2) - (2)]).m_iValue;
		;}
    break;

  case 214:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = (yyvsp[(1) - (1)]).m_fValue; ;}
    break;

  case 215:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = -(yyvsp[(2) - (2)]).m_fValue; ;}
    break;

  case 216:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = (yyvsp[(1) - (1)]).m_fValue; ;}
    break;

  case 217:

    {
			assert ( !(yyval).m_pValues.Ptr() );
			(yyval).m_pValues = new RefcountedVector_c<SphAttr_t> ();
			(yyval).m_pValues->Add ( (yyvsp[(1) - (1)]).m_iValue ); 
		;}
    break;

  case 218:

    {
			(yyval).m_pValues->Add ( (yyvsp[(3) - (3)]).m_iValue );
		;}
    break;

  case 219:

    {
			assert ( !(yyval).m_pValues.Ptr() );
			(yyval).m_pValues = new RefcountedVector_c<SphAttr_t> ();
			(yyval).m_pValues->Add ( (yyvsp[(1) - (1)]).m_iValue );
		;}
    break;

  case 220:

    {
			(yyval).m_pValues->Add ( (yyvsp[(3) - (3)]).m_iValue );
		;}
    break;

  case 224:

    {
			pParser->SetGroupbyLimit ( (yyvsp[(1) - (1)]).m_iValue );
		;}
    break;

  case 225:

    {
			pParser->AddGroupBy ( (yyvsp[(1) - (1)]) );
		;}
    break;

  case 226:

    {
			pParser->AddGroupBy ( (yyvsp[(3) - (3)]) );
		;}
    break;

  case 228:

    {
			pParser->AddHaving();
		;}
    break;

  case 231:

    {
			if ( pParser->m_pQuery->m_sGroupBy.IsEmpty() )
			{
				yyerror ( pParser, "you must specify GROUP BY element in order to use WITHIN GROUP ORDER BY clause" );
				YYERROR;
			}
			pParser->ToString ( pParser->m_pQuery->m_sSortBy, (yyvsp[(5) - (5)]) );
		;}
    break;

  case 234:

    {
			pParser->ToString ( pParser->m_pQuery->m_sOrderBy, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 235:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 237:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 239:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) ); ;}
    break;

  case 240:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) ); ;}
    break;

  case 243:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = (yyvsp[(2) - (2)]).m_iValue;
		;}
    break;

  case 244:

    {
			pParser->m_pQuery->m_iOffset = (yyvsp[(2) - (4)]).m_iValue;
			pParser->m_pQuery->m_iLimit = (yyvsp[(4) - (4)]).m_iValue;
		;}
    break;

  case 250:

    {
			if ( !pParser->AddOption ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ) )
				YYERROR;
		;}
    break;

  case 251:

    {
			if ( !pParser->AddOption ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ) )
				YYERROR;
		;}
    break;

  case 252:

    {
			if ( !pParser->AddOption ( (yyvsp[(1) - (5)]), pParser->GetNamedVec ( (yyvsp[(4) - (5)]).m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( (yyvsp[(4) - (5)]).m_iValue );
		;}
    break;

  case 253:

    {
			if ( !pParser->AddOption ( (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]) ) )
				YYERROR;
		;}
    break;

  case 254:

    {
			if ( !pParser->AddOption ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ) )
				YYERROR;
		;}
    break;

  case 255:

    {
			(yyval).m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( (yyval).m_iValue, (yyvsp[(1) - (1)]) );
		;}
    break;

  case 256:

    {
			pParser->AddConst( (yyval).m_iValue, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 257:

    {
			(yyval) = (yyvsp[(1) - (3)]);
			(yyval).m_iValue = (yyvsp[(3) - (3)]).m_iValue;
		;}
    break;

  case 259:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 260:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 265:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) ); ;}
    break;

  case 266:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) ); ;}
    break;

  case 267:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 268:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 269:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 270:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 271:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 272:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 273:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 274:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 275:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 276:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 277:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 278:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 279:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 280:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 281:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 282:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 283:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 284:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 285:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 289:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 290:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 291:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 292:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 293:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 294:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 295:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 296:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 297:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 298:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (6)]), (yyvsp[(6) - (6)]) ); ;}
    break;

  case 299:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (6)]), (yyvsp[(6) - (6)]) ); ;}
    break;

  case 300:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 301:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (8)]), (yyvsp[(8) - (8)]) ); ;}
    break;

  case 302:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (14)]), (yyvsp[(14) - (14)]) ); ;}
    break;

  case 307:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 308:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (5)]), (yyvsp[(5) - (5)]) ); ;}
    break;

  case 315:

    { pParser->ToStringUnescape ( pParser->m_pStmt->m_sStringParam, (yyvsp[(2) - (2)]) ); ;}
    break;

  case 316:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 317:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 318:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 319:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS; ;}
    break;

  case 320:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PROFILE; ;}
    break;

  case 321:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLAN; ;}
    break;

  case 322:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLUGINS; ;}
    break;

  case 323:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_THREADS; ;}
    break;

  case 324:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->ToStringUnescape ( pParser->m_pStmt->m_sIndex, (yyvsp[(2) - (4)]) );
		;}
    break;

  case 325:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(2) - (4)]) );
		;}
    break;

  case 326:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_STATUS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(2) - (3)]) );
		;}
    break;

  case 327:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_SETTINGS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(2) - (4)]) );
		;}
    break;

  case 328:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_SETTINGS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(2) - (4)]) );
			pParser->m_pStmt->m_iIntParam = int((yyvsp[(3) - (4)]).m_fValue*10);
		;}
    break;

  case 332:

    {
			pParser->m_pStmt->m_iIntParam = (yyvsp[(2) - (2)]).m_iValue;
		;}
    break;

  case 333:

    {
			pParser->SetStatement ( (yyvsp[(2) - (4)]), SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = (yyvsp[(4) - (4)]).m_iValue;
		;}
    break;

  case 334:

    {
			pParser->SetStatement ( (yyvsp[(2) - (4)]), SET_LOCAL );
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, (yyvsp[(4) - (4)]) );
		;}
    break;

  case 335:

    {
			pParser->SetStatement ( (yyvsp[(2) - (4)]), SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 336:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 337:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 338:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 339:

    {
			pParser->SetStatement ( (yyvsp[(3) - (7)]), SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *(yyvsp[(6) - (7)]).m_pValues.Ptr();
		;}
    break;

  case 340:

    {
			pParser->SetStatement ( (yyvsp[(3) - (5)]), SET_GLOBAL_SVAR );
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, (yyvsp[(5) - (5)]) ).Unquote();
		;}
    break;

  case 341:

    {
			pParser->SetStatement ( (yyvsp[(3) - (5)]), SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_iSetValue = (yyvsp[(5) - (5)]).m_iValue;
		;}
    break;

  case 342:

    {
			pParser->SetStatement ( (yyvsp[(5) - (9)]), SET_INDEX_UVAR );
			pParser->m_pStmt->m_dSetValues = *(yyvsp[(8) - (9)]).m_pValues.Ptr();
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(3) - (9)]) );
		;}
    break;

  case 345:

    { (yyval).m_iValue = 1; ;}
    break;

  case 346:

    { (yyval).m_iValue = 0; ;}
    break;

  case 347:

    {
			(yyval).m_iValue = (yyvsp[(1) - (1)]).m_iValue;
			if ( (yyval).m_iValue!=0 && (yyval).m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 355:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 356:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 357:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 360:

    {
			// everything else is pushed directly into parser within the rules
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(3) - (7)]) );
		;}
    break;

  case 361:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 362:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 367:

    { if ( !pParser->AddSchemaItem ( &(yyvsp[(1) - (1)]) ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 368:

    { if ( !pParser->AddSchemaItem ( &(yyvsp[(3) - (3)]) ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 371:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 372:

    { AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[(1) - (1)]) ); ;}
    break;

  case 373:

    { AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[(3) - (3)]) ); ;}
    break;

  case 374:

    { (yyval).m_iType = TOK_CONST_INT; (yyval).m_iValue = (yyvsp[(1) - (1)]).m_iValue; ;}
    break;

  case 375:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = (yyvsp[(1) - (1)]).m_fValue; ;}
    break;

  case 376:

    { (yyval).m_iType = TOK_QUOTED_STRING; (yyval).m_iStart = (yyvsp[(1) - (1)]).m_iStart; (yyval).m_iEnd = (yyvsp[(1) - (1)]).m_iEnd; ;}
    break;

  case 377:

    { (yyval).m_iType = TOK_CONST_MVA; (yyval).m_pValues = (yyvsp[(2) - (3)]).m_pValues; ;}
    break;

  case 378:

    { (yyval).m_iType = TOK_CONST_MVA; ;}
    break;

  case 383:

    { if ( !pParser->AddInsertOption ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ) ) YYERROR; ;}
    break;

  case 384:

    {
		if ( !pParser->DeleteStatement ( &(yyvsp[(3) - (4)]) ) )
			YYERROR;
	;}
    break;

  case 385:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->ToString ( pParser->m_pStmt->m_sCallProc, (yyvsp[(2) - (6)]) );
		;}
    break;

  case 386:

    {
			AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[(1) - (1)]) );
		;}
    break;

  case 387:

    {
			AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 389:

    {
			(yyval).m_iType = TOK_CONST_STRINGS;
		;}
    break;

  case 390:

    {
			// FIXME? for now, one such array per CALL statement, tops
			if ( pParser->m_pStmt->m_dCallStrings.GetLength() )
			{
				yyerror ( pParser, "unexpected constant string list" );
				YYERROR;
			}
			pParser->ToStringUnescape ( pParser->m_pStmt->m_dCallStrings.Add(), (yyvsp[(1) - (1)]) );
		;}
    break;

  case 391:

    {
			pParser->ToStringUnescape ( pParser->m_pStmt->m_dCallStrings.Add(), (yyvsp[(3) - (3)]) );
		;}
    break;

  case 394:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 396:

    {
			pParser->ToString ( pParser->m_pStmt->m_dCallOptNames.Add(), (yyvsp[(3) - (3)]) );
			AddInsval ( pParser, pParser->m_pStmt->m_dCallOptValues, (yyvsp[(1) - (3)]) );
		;}
    break;

  case 401:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESCRIBE;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(2) - (3)]) );
		;}
    break;

  case 404:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 405:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_DATABASES; ;}
    break;

  case 406:

    {
			if ( !pParser->UpdateStatement ( &(yyvsp[(2) - (6)]) ) )
				YYERROR;
		;}
    break;

  case 409:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( (DWORD)(yyvsp[(3) - (3)]).m_iValue );
			DWORD uHi = (DWORD)( (yyvsp[(3) - (3)]).m_iValue>>32 );
			if ( uHi )
			{
				pParser->m_pStmt->m_tUpdate.m_dPool.Add ( uHi );
				pParser->AddUpdatedAttr ( (yyvsp[(1) - (3)]), SPH_ATTR_BIGINT );
			} else
			{
				pParser->AddUpdatedAttr ( (yyvsp[(1) - (3)]), SPH_ATTR_INTEGER );
			}
		;}
    break;

  case 410:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( sphF2DW ( (yyvsp[(3) - (3)]).m_fValue ) );
			pParser->AddUpdatedAttr ( (yyvsp[(1) - (3)]), SPH_ATTR_FLOAT );
		;}
    break;

  case 411:

    {
			pParser->UpdateMVAAttr ( (yyvsp[(1) - (5)]), (yyvsp[(4) - (5)]) );
		;}
    break;

  case 412:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( (yyvsp[(1) - (4)]), tNoValues );
		;}
    break;

  case 413:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( (DWORD)(yyvsp[(3) - (3)]).m_iValue );
			DWORD uHi = (DWORD)( (yyvsp[(3) - (3)]).m_iValue>>32 );
			if ( uHi )
			{
				pParser->m_pStmt->m_tUpdate.m_dPool.Add ( uHi );
				pParser->AddUpdatedAttr ( (yyvsp[(1) - (3)]), SPH_ATTR_BIGINT );
			} else
			{
				pParser->AddUpdatedAttr ( (yyvsp[(1) - (3)]), SPH_ATTR_INTEGER );
			}
		;}
    break;

  case 414:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( sphF2DW ( (yyvsp[(3) - (3)]).m_fValue ) );
			pParser->AddUpdatedAttr ( (yyvsp[(1) - (3)]), SPH_ATTR_FLOAT );
		;}
    break;

  case 415:

    { (yyval).m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 416:

    { (yyval).m_iValue = SPH_ATTR_BIGINT; ;}
    break;

  case 417:

    { (yyval).m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 418:

    { (yyval).m_iValue = SPH_ATTR_BOOL; ;}
    break;

  case 419:

    { (yyval).m_iValue = SPH_ATTR_UINT32SET; ;}
    break;

  case 420:

    { (yyval).m_iValue = SPH_ATTR_INT64SET; ;}
    break;

  case 421:

    { (yyval).m_iValue = SPH_ATTR_JSON; ;}
    break;

  case 422:

    { (yyval).m_iValue = SPH_ATTR_STRING; ;}
    break;

  case 423:

    { (yyval).m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 424:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_ADD;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (7)]) );
			pParser->ToString ( tStmt.m_sAlterAttr, (yyvsp[(6) - (7)]) );
			tStmt.m_eAlterColType = (ESphAttr)(yyvsp[(7) - (7)]).m_iValue;
		;}
    break;

  case 425:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_DROP;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (6)]) );
			pParser->ToString ( tStmt.m_sAlterAttr, (yyvsp[(6) - (6)]) );
		;}
    break;

  case 426:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_RECONFIGURE;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (4)]) );
		;}
    break;

  case 427:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 428:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
			pParser->ToStringUnescape ( pParser->m_pStmt->m_sStringParam, (yyvsp[(5) - (5)]) );
		;}
    break;

  case 435:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_COLLATION;
		;}
    break;

  case 436:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CHARACTER_SET;
		;}
    break;

  case 437:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 445:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNCTION;
			pParser->ToString ( tStmt.m_sUdfName, (yyvsp[(3) - (7)]) );
			pParser->ToStringUnescape ( tStmt.m_sUdfLib, (yyvsp[(7) - (7)]) );
			tStmt.m_eUdfType = (ESphAttr) (yyvsp[(5) - (7)]).m_iValue;
		;}
    break;

  case 446:

    { (yyval).m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 447:

    { (yyval).m_iValue = SPH_ATTR_BIGINT; ;}
    break;

  case 448:

    { (yyval).m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 449:

    { (yyval).m_iValue = SPH_ATTR_STRINGPTR; ;}
    break;

  case 450:

    { (yyval).m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 451:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNCTION;
			pParser->ToString ( tStmt.m_sUdfName, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 452:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (6)]) );
			pParser->ToString ( tStmt.m_sStringParam, (yyvsp[(6) - (6)]) );
		;}
    break;

  case 453:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 454:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RAMCHUNK;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 455:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_INDEX;
		;}
    break;

  case 456:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_SYSVAR;
			pParser->ToString ( pParser->m_pStmt->m_tQuery.m_sQuery, (yyvsp[(2) - (3)]) );
		;}
    break;

  case 460:

    { pParser->AddItem ( &(yyvsp[(1) - (1)]) ); ;}
    break;

  case 461:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_DUAL;
			pParser->ToString ( pParser->m_pStmt->m_tQuery.m_sQuery, (yyvsp[(2) - (2)]) );
		;}
    break;

  case 462:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_TRUNCATE_RTINDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 463:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_OPTIMIZE_INDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 464:

    {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_CREATE_PLUGIN;
			pParser->ToString ( s.m_sUdfName, (yyvsp[(3) - (7)]) );
			pParser->ToStringUnescape ( s.m_sStringParam, (yyvsp[(5) - (7)]) );
			pParser->ToStringUnescape ( s.m_sUdfLib, (yyvsp[(7) - (7)]) );
		;}
    break;

  case 465:

    {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_DROP_PLUGIN;
			pParser->ToString ( s.m_sUdfName, (yyvsp[(3) - (5)]) );
			pParser->ToStringUnescape ( s.m_sStringParam, (yyvsp[(5) - (5)]) );
		;}
    break;

  case 468:

    { (yyval) = (yyvsp[(1) - (2)]); (yyval).m_iEnd = (yyvsp[(2) - (2)]).m_iEnd; ;}
    break;

  case 470:

    { (yyval) = (yyvsp[(1) - (2)]); (yyval).m_iEnd = (yyvsp[(2) - (2)]).m_iEnd; ;}
    break;

  case 471:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).m_iEnd = (yyvsp[(1) - (1)]).m_iEnd; ;}
    break;

  case 472:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).m_iEnd = (yyvsp[(1) - (1)]).m_iEnd; ;}
    break;

  case 473:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 474:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 475:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 476:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 480:

    {
			pParser->m_pQuery->m_sFacetBy = pParser->m_pQuery->m_sGroupBy;
			pParser->m_pQuery->m_sGroupBy = "";
			pParser->AddCount ();
		;}
    break;

  case 482:

    {
			pParser->AddItem ( &(yyvsp[(1) - (1)]) );
			pParser->AddGroupBy ( (yyvsp[(1) - (1)]) );
		;}
    break;

  case 485:

    {
			pParser->m_pStmt->m_eStmt = STMT_FACET;
			if ( pParser->m_pQuery->m_sFacetBy.IsEmpty() )
			{
				pParser->m_pQuery->m_sFacetBy = pParser->m_pQuery->m_sGroupBy;
				pParser->AddCount ();
			}
		;}
    break;


/* Line 1267 of yacc.c.  */

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (pParser, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (pParser, yymsg);
	  }
	else
	  {
	    yyerror (pParser, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, pParser);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, pParser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (pParser, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, pParser);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, pParser);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





#if USE_WINDOWS
#pragma warning(pop)
#endif

