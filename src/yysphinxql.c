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
     TOK_AVG = 276,
     TOK_BEGIN = 277,
     TOK_BETWEEN = 278,
     TOK_BIGINT = 279,
     TOK_BOOL = 280,
     TOK_BY = 281,
     TOK_CALL = 282,
     TOK_CHARACTER = 283,
     TOK_COLLATION = 284,
     TOK_COLUMN = 285,
     TOK_COMMIT = 286,
     TOK_COMMITTED = 287,
     TOK_COUNT = 288,
     TOK_CREATE = 289,
     TOK_DATABASES = 290,
     TOK_DELETE = 291,
     TOK_DESC = 292,
     TOK_DESCRIBE = 293,
     TOK_DISTINCT = 294,
     TOK_DIV = 295,
     TOK_DOUBLE = 296,
     TOK_DROP = 297,
     TOK_FACET = 298,
     TOK_FALSE = 299,
     TOK_FLOAT = 300,
     TOK_FLUSH = 301,
     TOK_FOR = 302,
     TOK_FROM = 303,
     TOK_FUNCTION = 304,
     TOK_GLOBAL = 305,
     TOK_GROUP = 306,
     TOK_GROUPBY = 307,
     TOK_GROUP_CONCAT = 308,
     TOK_HAVING = 309,
     TOK_ID = 310,
     TOK_IN = 311,
     TOK_INDEX = 312,
     TOK_INSERT = 313,
     TOK_INT = 314,
     TOK_INTEGER = 315,
     TOK_INTO = 316,
     TOK_IS = 317,
     TOK_ISOLATION = 318,
     TOK_JSON = 319,
     TOK_LEVEL = 320,
     TOK_LIKE = 321,
     TOK_LIMIT = 322,
     TOK_MATCH = 323,
     TOK_MAX = 324,
     TOK_META = 325,
     TOK_MIN = 326,
     TOK_MOD = 327,
     TOK_MULTI = 328,
     TOK_MULTI64 = 329,
     TOK_NAMES = 330,
     TOK_NULL = 331,
     TOK_OPTION = 332,
     TOK_ORDER = 333,
     TOK_OPTIMIZE = 334,
     TOK_PLAN = 335,
     TOK_PLUGIN = 336,
     TOK_PLUGINS = 337,
     TOK_PROFILE = 338,
     TOK_RAND = 339,
     TOK_RAMCHUNK = 340,
     TOK_READ = 341,
     TOK_REPEATABLE = 342,
     TOK_REPLACE = 343,
     TOK_REMAP = 344,
     TOK_RETURNS = 345,
     TOK_ROLLBACK = 346,
     TOK_RTINDEX = 347,
     TOK_SELECT = 348,
     TOK_SERIALIZABLE = 349,
     TOK_SET = 350,
     TOK_SESSION = 351,
     TOK_SHOW = 352,
     TOK_SONAME = 353,
     TOK_START = 354,
     TOK_STATUS = 355,
     TOK_STRING = 356,
     TOK_SUM = 357,
     TOK_TABLE = 358,
     TOK_TABLES = 359,
     TOK_THREADS = 360,
     TOK_TO = 361,
     TOK_TRANSACTION = 362,
     TOK_TRUE = 363,
     TOK_TRUNCATE = 364,
     TOK_TYPE = 365,
     TOK_UNCOMMITTED = 366,
     TOK_UPDATE = 367,
     TOK_VALUES = 368,
     TOK_VARIABLES = 369,
     TOK_WARNINGS = 370,
     TOK_WEIGHT = 371,
     TOK_WHERE = 372,
     TOK_WITHIN = 373,
     TOK_OR = 374,
     TOK_AND = 375,
     TOK_NE = 376,
     TOK_GTE = 377,
     TOK_LTE = 378,
     TOK_NOT = 379,
     TOK_NEG = 380
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
#define TOK_AVG 276
#define TOK_BEGIN 277
#define TOK_BETWEEN 278
#define TOK_BIGINT 279
#define TOK_BOOL 280
#define TOK_BY 281
#define TOK_CALL 282
#define TOK_CHARACTER 283
#define TOK_COLLATION 284
#define TOK_COLUMN 285
#define TOK_COMMIT 286
#define TOK_COMMITTED 287
#define TOK_COUNT 288
#define TOK_CREATE 289
#define TOK_DATABASES 290
#define TOK_DELETE 291
#define TOK_DESC 292
#define TOK_DESCRIBE 293
#define TOK_DISTINCT 294
#define TOK_DIV 295
#define TOK_DOUBLE 296
#define TOK_DROP 297
#define TOK_FACET 298
#define TOK_FALSE 299
#define TOK_FLOAT 300
#define TOK_FLUSH 301
#define TOK_FOR 302
#define TOK_FROM 303
#define TOK_FUNCTION 304
#define TOK_GLOBAL 305
#define TOK_GROUP 306
#define TOK_GROUPBY 307
#define TOK_GROUP_CONCAT 308
#define TOK_HAVING 309
#define TOK_ID 310
#define TOK_IN 311
#define TOK_INDEX 312
#define TOK_INSERT 313
#define TOK_INT 314
#define TOK_INTEGER 315
#define TOK_INTO 316
#define TOK_IS 317
#define TOK_ISOLATION 318
#define TOK_JSON 319
#define TOK_LEVEL 320
#define TOK_LIKE 321
#define TOK_LIMIT 322
#define TOK_MATCH 323
#define TOK_MAX 324
#define TOK_META 325
#define TOK_MIN 326
#define TOK_MOD 327
#define TOK_MULTI 328
#define TOK_MULTI64 329
#define TOK_NAMES 330
#define TOK_NULL 331
#define TOK_OPTION 332
#define TOK_ORDER 333
#define TOK_OPTIMIZE 334
#define TOK_PLAN 335
#define TOK_PLUGIN 336
#define TOK_PLUGINS 337
#define TOK_PROFILE 338
#define TOK_RAND 339
#define TOK_RAMCHUNK 340
#define TOK_READ 341
#define TOK_REPEATABLE 342
#define TOK_REPLACE 343
#define TOK_REMAP 344
#define TOK_RETURNS 345
#define TOK_ROLLBACK 346
#define TOK_RTINDEX 347
#define TOK_SELECT 348
#define TOK_SERIALIZABLE 349
#define TOK_SET 350
#define TOK_SESSION 351
#define TOK_SHOW 352
#define TOK_SONAME 353
#define TOK_START 354
#define TOK_STATUS 355
#define TOK_STRING 356
#define TOK_SUM 357
#define TOK_TABLE 358
#define TOK_TABLES 359
#define TOK_THREADS 360
#define TOK_TO 361
#define TOK_TRANSACTION 362
#define TOK_TRUE 363
#define TOK_TRUNCATE 364
#define TOK_TYPE 365
#define TOK_UNCOMMITTED 366
#define TOK_UPDATE 367
#define TOK_VALUES 368
#define TOK_VARIABLES 369
#define TOK_WARNINGS 370
#define TOK_WEIGHT 371
#define TOK_WHERE 372
#define TOK_WITHIN 373
#define TOK_OR 374
#define TOK_AND 375
#define TOK_NE 376
#define TOK_GTE 377
#define TOK_LTE 378
#define TOK_NOT 379
#define TOK_NEG 380




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
#define YYFINAL  187
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4375

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  132
/* YYNRULES -- Number of rules.  */
#define YYNRULES  422
/* YYNRULES -- Number of states.  */
#define YYNSTATES  772

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   380

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   133,   122,     2,
     137,   138,   131,   129,   139,   130,   142,   132,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   136,
     125,   123,   126,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   143,     2,   144,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   140,   121,   141,     2,     2,     2,     2,
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
     115,   116,   117,   118,   119,   120,   124,   127,   128,   134,
     135
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
     160,   162,   164,   168,   171,   173,   175,   177,   186,   188,
     198,   199,   202,   204,   208,   210,   212,   214,   215,   219,
     220,   223,   228,   240,   242,   246,   248,   251,   252,   254,
     257,   259,   264,   269,   274,   279,   284,   289,   293,   299,
     301,   305,   306,   308,   311,   313,   317,   321,   326,   328,
     332,   336,   342,   349,   353,   358,   364,   368,   372,   376,
     380,   384,   386,   392,   398,   404,   408,   412,   416,   420,
     424,   428,   432,   437,   441,   443,   445,   450,   454,   458,
     460,   462,   467,   472,   477,   481,   483,   486,   488,   491,
     493,   495,   499,   500,   505,   506,   508,   510,   514,   515,
     518,   519,   521,   527,   528,   530,   534,   540,   542,   546,
     548,   551,   554,   555,   557,   560,   565,   566,   568,   571,
     573,   577,   581,   585,   591,   598,   602,   604,   608,   612,
     614,   616,   618,   620,   622,   624,   626,   629,   632,   636,
     640,   644,   648,   652,   656,   660,   664,   668,   672,   676,
     680,   684,   688,   692,   696,   700,   704,   708,   710,   712,
     714,   718,   723,   728,   733,   738,   743,   748,   753,   757,
     764,   771,   775,   784,   799,   801,   805,   807,   809,   813,
     819,   821,   823,   825,   827,   830,   831,   834,   836,   839,
     842,   846,   848,   850,   852,   855,   860,   865,   869,   874,
     879,   884,   888,   893,   898,   906,   912,   918,   928,   930,
     932,   934,   936,   938,   940,   944,   946,   948,   950,   952,
     954,   956,   958,   960,   962,   965,   973,   975,   977,   978,
     982,   984,   986,   988,   992,   994,   998,  1002,  1004,  1008,
    1010,  1012,  1014,  1018,  1021,  1022,  1025,  1027,  1031,  1035,
    1040,  1047,  1049,  1053,  1055,  1059,  1061,  1065,  1066,  1069,
    1071,  1075,  1079,  1080,  1082,  1084,  1086,  1090,  1092,  1094,
    1098,  1102,  1109,  1111,  1115,  1119,  1123,  1129,  1134,  1138,
    1142,  1144,  1146,  1148,  1150,  1152,  1154,  1156,  1158,  1166,
    1173,  1178,  1184,  1185,  1187,  1190,  1192,  1196,  1200,  1203,
    1207,  1214,  1215,  1217,  1219,  1222,  1225,  1228,  1230,  1238,
    1240,  1242,  1244,  1246,  1250,  1257,  1261,  1265,  1269,  1271,
    1275,  1278,  1282,  1286,  1294,  1300,  1303,  1305,  1308,  1310,
    1312,  1316,  1320,  1324,  1328,  1330,  1331,  1334,  1336,  1339,
    1341,  1343,  1347
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     146,     0,    -1,   147,    -1,   150,    -1,   150,   136,    -1,
     212,    -1,   224,    -1,   204,    -1,   205,    -1,   210,    -1,
     225,    -1,   234,    -1,   236,    -1,   237,    -1,   238,    -1,
     243,    -1,   248,    -1,   249,    -1,   253,    -1,   255,    -1,
     256,    -1,   257,    -1,   258,    -1,   250,    -1,   259,    -1,
     261,    -1,   262,    -1,   263,    -1,   242,    -1,   264,    -1,
     265,    -1,     3,    -1,    16,    -1,    20,    -1,    21,    -1,
      22,    -1,    25,    -1,    29,    -1,    33,    -1,    46,    -1,
      49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,
      63,    -1,    65,    -1,    66,    -1,    68,    -1,    69,    -1,
      70,    -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,
      85,    -1,    84,    -1,    86,    -1,    87,    -1,    90,    -1,
      91,    -1,    92,    -1,    94,    -1,    96,    -1,    99,    -1,
     100,    -1,   101,    -1,   102,    -1,   104,    -1,   105,    -1,
     109,    -1,   110,    -1,   111,    -1,   114,    -1,   115,    -1,
     116,    -1,   118,    -1,    64,    -1,   148,    -1,    75,    -1,
     107,    -1,   151,    -1,   150,   136,   151,    -1,   150,   276,
      -1,   152,    -1,   201,    -1,   153,    -1,    93,     3,   137,
     137,   153,   138,   154,   138,    -1,   160,    -1,    93,   161,
      48,   137,   157,   160,   138,   158,   159,    -1,    -1,   139,
     155,    -1,   156,    -1,   155,   139,   156,    -1,   149,    -1,
       5,    -1,    55,    -1,    -1,    78,    26,   184,    -1,    -1,
      67,     5,    -1,    67,     5,   139,     5,    -1,    93,   161,
      48,   165,   166,   176,   180,   179,   182,   186,   188,    -1,
     162,    -1,   161,   139,   162,    -1,   131,    -1,   164,   163,
      -1,    -1,   149,    -1,    18,   149,    -1,   194,    -1,    21,
     137,   194,   138,    -1,    69,   137,   194,   138,    -1,    71,
     137,   194,   138,    -1,   102,   137,   194,   138,    -1,    53,
     137,   194,   138,    -1,    33,   137,   131,   138,    -1,    52,
     137,   138,    -1,    33,   137,    39,   149,   138,    -1,   149,
      -1,   165,   139,   149,    -1,    -1,   167,    -1,   117,   168,
      -1,   169,    -1,   168,   120,   168,    -1,   137,   168,   138,
      -1,    68,   137,     8,   138,    -1,   170,    -1,   172,   123,
     173,    -1,   172,   124,   173,    -1,   172,    56,   137,   175,
     138,    -1,   172,   134,    56,   137,   175,   138,    -1,   172,
      56,     9,    -1,   172,   134,    56,     9,    -1,   172,    23,
     173,   120,   173,    -1,   172,   126,   173,    -1,   172,   125,
     173,    -1,   172,   127,   173,    -1,   172,   128,   173,    -1,
     172,   123,   174,    -1,   171,    -1,   172,    23,   174,   120,
     174,    -1,   172,    23,   173,   120,   174,    -1,   172,    23,
     174,   120,   173,    -1,   172,   126,   174,    -1,   172,   125,
     174,    -1,   172,   127,   174,    -1,   172,   128,   174,    -1,
     172,   123,     8,    -1,   172,   124,     8,    -1,   172,    62,
      76,    -1,   172,    62,   134,    76,    -1,   172,   124,   174,
      -1,   149,    -1,     4,    -1,    33,   137,   131,   138,    -1,
      52,   137,   138,    -1,   116,   137,   138,    -1,    55,    -1,
     266,    -1,    60,   137,   266,   138,    -1,    41,   137,   266,
     138,    -1,    24,   137,   266,   138,    -1,    43,   137,   138,
      -1,     5,    -1,   130,     5,    -1,     6,    -1,   130,     6,
      -1,    14,    -1,   173,    -1,   175,   139,   173,    -1,    -1,
      51,   177,    26,   178,    -1,    -1,     5,    -1,   172,    -1,
     178,   139,   172,    -1,    -1,    54,   170,    -1,    -1,   181,
      -1,   118,    51,    78,    26,   184,    -1,    -1,   183,    -1,
      78,    26,   184,    -1,    78,    26,    84,   137,   138,    -1,
     185,    -1,   184,   139,   185,    -1,   172,    -1,   172,    19,
      -1,   172,    37,    -1,    -1,   187,    -1,    67,     5,    -1,
      67,     5,   139,     5,    -1,    -1,   189,    -1,    77,   190,
      -1,   191,    -1,   190,   139,   191,    -1,   149,   123,   149,
      -1,   149,   123,     5,    -1,   149,   123,   137,   192,   138,
      -1,   149,   123,   149,   137,     8,   138,    -1,   149,   123,
       8,    -1,   193,    -1,   192,   139,   193,    -1,   149,   123,
     173,    -1,   149,    -1,     4,    -1,    55,    -1,     5,    -1,
       6,    -1,    14,    -1,     9,    -1,   130,   194,    -1,   134,
     194,    -1,   194,   129,   194,    -1,   194,   130,   194,    -1,
     194,   131,   194,    -1,   194,   132,   194,    -1,   194,   125,
     194,    -1,   194,   126,   194,    -1,   194,   122,   194,    -1,
     194,   121,   194,    -1,   194,   133,   194,    -1,   194,    40,
     194,    -1,   194,    72,   194,    -1,   194,   128,   194,    -1,
     194,   127,   194,    -1,   194,   123,   194,    -1,   194,   124,
     194,    -1,   194,   120,   194,    -1,   194,   119,   194,    -1,
     137,   194,   138,    -1,   140,   198,   141,    -1,   195,    -1,
     266,    -1,   269,    -1,   266,    62,    76,    -1,   266,    62,
     134,    76,    -1,     3,   137,   196,   138,    -1,    56,   137,
     196,   138,    -1,    60,   137,   196,   138,    -1,    24,   137,
     196,   138,    -1,    45,   137,   196,   138,    -1,    41,   137,
     196,   138,    -1,     3,   137,   138,    -1,    71,   137,   194,
     139,   194,   138,    -1,    69,   137,   194,   139,   194,   138,
      -1,   116,   137,   138,    -1,     3,   137,   194,    47,   149,
      56,   266,   138,    -1,    89,   137,   194,   139,   194,   139,
     137,   196,   138,   139,   137,   196,   138,   138,    -1,   197,
      -1,   196,   139,   197,    -1,   194,    -1,     8,    -1,   199,
     123,   200,    -1,   198,   139,   199,   123,   200,    -1,   149,
      -1,    56,    -1,   173,    -1,   149,    -1,    97,   203,    -1,
      -1,    66,     8,    -1,   115,    -1,   100,   202,    -1,    70,
     202,    -1,    16,   100,   202,    -1,    83,    -1,    80,    -1,
      82,    -1,   105,   188,    -1,    16,     8,   100,   202,    -1,
      16,   149,   100,   202,    -1,    57,   149,   100,    -1,    95,
     148,   123,   207,    -1,    95,   148,   123,   206,    -1,    95,
     148,   123,    76,    -1,    95,    75,   208,    -1,    95,    10,
     123,   208,    -1,    95,    28,    95,   208,    -1,    95,    50,
       9,   123,   137,   175,   138,    -1,    95,    50,   148,   123,
     206,    -1,    95,    50,   148,   123,     5,    -1,    95,    57,
     149,    50,     9,   123,   137,   175,   138,    -1,   149,    -1,
       8,    -1,   108,    -1,    44,    -1,   173,    -1,   209,    -1,
     208,   130,   209,    -1,   149,    -1,    76,    -1,     8,    -1,
       5,    -1,     6,    -1,    31,    -1,    91,    -1,   211,    -1,
      22,    -1,    99,   107,    -1,   213,    61,   149,   214,   113,
     217,   221,    -1,    58,    -1,    88,    -1,    -1,   137,   216,
     138,    -1,   149,    -1,    55,    -1,   215,    -1,   216,   139,
     215,    -1,   218,    -1,   217,   139,   218,    -1,   137,   219,
     138,    -1,   220,    -1,   219,   139,   220,    -1,   173,    -1,
     174,    -1,     8,    -1,   137,   175,   138,    -1,   137,   138,
      -1,    -1,    77,   222,    -1,   223,    -1,   222,   139,   223,
      -1,     3,   123,     8,    -1,    36,    48,   165,   167,    -1,
      27,   149,   137,   226,   229,   138,    -1,   227,    -1,   226,
     139,   227,    -1,   220,    -1,   137,   228,   138,    -1,     8,
      -1,   228,   139,     8,    -1,    -1,   139,   230,    -1,   231,
      -1,   230,   139,   231,    -1,   220,   232,   233,    -1,    -1,
      18,    -1,   149,    -1,    67,    -1,   235,   149,   202,    -1,
      38,    -1,    37,    -1,    97,   104,   202,    -1,    97,    35,
     202,    -1,   112,   165,    95,   239,   167,   188,    -1,   240,
      -1,   239,   139,   240,    -1,   149,   123,   173,    -1,   149,
     123,   174,    -1,   149,   123,   137,   175,   138,    -1,   149,
     123,   137,   138,    -1,   266,   123,   173,    -1,   266,   123,
     174,    -1,    60,    -1,    24,    -1,    45,    -1,    25,    -1,
      73,    -1,    74,    -1,    64,    -1,   101,    -1,    17,   103,
     149,    15,    30,   149,   241,    -1,    17,   103,   149,    42,
      30,   149,    -1,    97,   251,   114,   244,    -1,    97,   251,
     114,    66,     8,    -1,    -1,   245,    -1,   117,   246,    -1,
     247,    -1,   246,   119,   247,    -1,   149,   123,     8,    -1,
      97,    29,    -1,    97,    28,    95,    -1,    95,   251,   107,
      63,    65,   252,    -1,    -1,    50,    -1,    96,    -1,    86,
     111,    -1,    86,    32,    -1,    87,    86,    -1,    94,    -1,
      34,    49,   149,    90,   254,    98,     8,    -1,    59,    -1,
      24,    -1,    45,    -1,   101,    -1,    42,    49,   149,    -1,
      20,    57,   149,   106,    92,   149,    -1,    46,    92,   149,
      -1,    46,    85,   149,    -1,    93,   260,   186,    -1,    10,
      -1,    10,   142,   149,    -1,    93,   194,    -1,   109,    92,
     149,    -1,    79,    57,   149,    -1,    34,    81,   149,   110,
       8,    98,     8,    -1,    42,    81,   149,   110,     8,    -1,
     149,   267,    -1,   268,    -1,   267,   268,    -1,    13,    -1,
      14,    -1,   143,   194,   144,    -1,   143,     8,   144,    -1,
     194,   123,   270,    -1,   270,   123,   194,    -1,     8,    -1,
      -1,   272,   275,    -1,    26,    -1,   274,   163,    -1,   194,
      -1,   273,    -1,   275,   139,   273,    -1,    43,   275,   271,
     182,   186,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   171,   171,   172,   173,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   213,   214,   214,   214,   214,   214,   215,   215,   215,
     215,   216,   216,   216,   216,   216,   217,   217,   217,   217,
     217,   218,   218,   218,   218,   218,   218,   218,   219,   219,
     219,   219,   220,   220,   220,   220,   220,   221,   221,   221,
     221,   221,   221,   222,   222,   222,   222,   223,   227,   227,
     227,   233,   234,   235,   239,   240,   244,   245,   253,   254,
     261,   263,   267,   271,   278,   279,   280,   284,   297,   304,
     306,   311,   320,   336,   337,   341,   342,   345,   347,   348,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   364,
     365,   368,   370,   374,   378,   379,   380,   384,   389,   393,
     400,   408,   416,   425,   430,   435,   440,   445,   450,   455,
     460,   465,   470,   475,   480,   485,   490,   495,   500,   505,
     510,   515,   520,   528,   532,   533,   538,   544,   550,   556,
     562,   563,   564,   565,   566,   570,   571,   582,   583,   584,
     588,   594,   600,   602,   605,   607,   614,   618,   624,   626,
     632,   634,   638,   649,   651,   655,   659,   666,   667,   671,
     672,   673,   676,   678,   682,   687,   694,   696,   700,   704,
     705,   709,   714,   719,   725,   730,   738,   743,   750,   760,
     761,   762,   763,   764,   765,   766,   767,   768,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   793,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   808,   812,   813,   817,   818,   822,   823,
     827,   828,   832,   833,   839,   842,   844,   848,   849,   850,
     851,   852,   853,   854,   855,   856,   861,   866,   876,   881,
     886,   891,   892,   893,   897,   902,   907,   912,   921,   922,
     926,   927,   928,   940,   941,   945,   946,   947,   948,   949,
     956,   957,   958,   962,   963,   969,   977,   978,   981,   983,
     987,   988,   992,   993,   997,   998,  1002,  1006,  1007,  1011,
    1012,  1013,  1014,  1015,  1018,  1019,  1023,  1024,  1028,  1034,
    1044,  1052,  1056,  1063,  1064,  1071,  1081,  1087,  1089,  1093,
    1098,  1102,  1109,  1111,  1115,  1116,  1122,  1130,  1131,  1137,
    1141,  1147,  1155,  1156,  1160,  1174,  1180,  1184,  1189,  1203,
    1214,  1215,  1216,  1217,  1218,  1219,  1220,  1221,  1225,  1233,
    1245,  1249,  1256,  1257,  1261,  1265,  1266,  1270,  1274,  1281,
    1288,  1294,  1295,  1296,  1300,  1301,  1302,  1303,  1309,  1320,
    1321,  1322,  1323,  1328,  1339,  1351,  1360,  1371,  1379,  1380,
    1384,  1394,  1405,  1416,  1427,  1438,  1441,  1442,  1446,  1447,
    1448,  1449,  1453,  1454,  1458,  1463,  1465,  1469,  1478,  1482,
    1490,  1491,  1495
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
  "TOK_AS", "TOK_ASC", "TOK_ATTACH", "TOK_AVG", "TOK_BEGIN", "TOK_BETWEEN",
  "TOK_BIGINT", "TOK_BOOL", "TOK_BY", "TOK_CALL", "TOK_CHARACTER",
  "TOK_COLLATION", "TOK_COLUMN", "TOK_COMMIT", "TOK_COMMITTED",
  "TOK_COUNT", "TOK_CREATE", "TOK_DATABASES", "TOK_DELETE", "TOK_DESC",
  "TOK_DESCRIBE", "TOK_DISTINCT", "TOK_DIV", "TOK_DOUBLE", "TOK_DROP",
  "TOK_FACET", "TOK_FALSE", "TOK_FLOAT", "TOK_FLUSH", "TOK_FOR",
  "TOK_FROM", "TOK_FUNCTION", "TOK_GLOBAL", "TOK_GROUP", "TOK_GROUPBY",
  "TOK_GROUP_CONCAT", "TOK_HAVING", "TOK_ID", "TOK_IN", "TOK_INDEX",
  "TOK_INSERT", "TOK_INT", "TOK_INTEGER", "TOK_INTO", "TOK_IS",
  "TOK_ISOLATION", "TOK_JSON", "TOK_LEVEL", "TOK_LIKE", "TOK_LIMIT",
  "TOK_MATCH", "TOK_MAX", "TOK_META", "TOK_MIN", "TOK_MOD", "TOK_MULTI",
  "TOK_MULTI64", "TOK_NAMES", "TOK_NULL", "TOK_OPTION", "TOK_ORDER",
  "TOK_OPTIMIZE", "TOK_PLAN", "TOK_PLUGIN", "TOK_PLUGINS", "TOK_PROFILE",
  "TOK_RAND", "TOK_RAMCHUNK", "TOK_READ", "TOK_REPEATABLE", "TOK_REPLACE",
  "TOK_REMAP", "TOK_RETURNS", "TOK_ROLLBACK", "TOK_RTINDEX", "TOK_SELECT",
  "TOK_SERIALIZABLE", "TOK_SET", "TOK_SESSION", "TOK_SHOW", "TOK_SONAME",
  "TOK_START", "TOK_STATUS", "TOK_STRING", "TOK_SUM", "TOK_TABLE",
  "TOK_TABLES", "TOK_THREADS", "TOK_TO", "TOK_TRANSACTION", "TOK_TRUE",
  "TOK_TRUNCATE", "TOK_TYPE", "TOK_UNCOMMITTED", "TOK_UPDATE",
  "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", "TOK_WEIGHT", "TOK_WHERE",
  "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", "'&'", "'='", "TOK_NE", "'<'",
  "'>'", "TOK_GTE", "TOK_LTE", "'+'", "'-'", "'*'", "'/'", "'%'",
  "TOK_NOT", "TOK_NEG", "';'", "'('", "')'", "','", "'{'", "'}'", "'.'",
  "'['", "']'", "$accept", "request", "statement", "ident_set", "ident",
  "multi_stmt_list", "multi_stmt", "select", "select1",
  "opt_tablefunc_args", "tablefunc_args_list", "tablefunc_arg",
  "subselect_start", "opt_outer_order", "opt_outer_limit", "select_from",
  "select_items_list", "select_item", "opt_alias", "select_expr",
  "ident_list", "opt_where_clause", "where_clause", "where_expr",
  "where_item", "filter_item", "expr_float_unhandled", "expr_ident",
  "const_int", "const_float", "const_list", "opt_group_clause", "opt_int",
  "group_items_list", "opt_having_clause", "opt_group_order_clause",
  "group_order_clause", "opt_order_clause", "order_clause",
  "order_items_list", "order_item", "opt_limit_clause", "limit_clause",
  "opt_option_clause", "option_clause", "option_list", "option_item",
  "named_const_list", "named_const", "expr", "function", "arglist", "arg",
  "consthash", "hash_key", "hash_val", "show_stmt", "like_filter",
  "show_what", "set_stmt", "set_global_stmt", "set_string_value",
  "boolean_value", "set_value", "simple_set_value", "transact_op",
  "start_transaction", "insert_into", "insert_or_replace",
  "opt_column_list", "column_ident", "column_list", "insert_rows_list",
  "insert_row", "insert_vals_list", "insert_val", "opt_insert_options",
  "insert_options_list", "insert_option", "delete_from", "call_proc",
  "call_args_list", "call_arg", "const_string_list", "opt_call_opts_list",
  "call_opts_list", "call_opt", "opt_as", "call_opt_name", "describe",
  "describe_tok", "show_tables", "show_databases", "update",
  "update_items_list", "update_item", "alter_col_type", "alter",
  "show_variables", "opt_show_variables_where", "show_variables_where",
  "show_variables_where_list", "show_variables_where_entry",
  "show_collation", "show_character_set", "set_transaction", "opt_scope",
  "isolation_level", "create_function", "udf_type", "drop_function",
  "attach_index", "flush_rtindex", "flush_ramchunk", "select_sysvar",
  "sysvar_name", "select_dual", "truncate", "optimize_index",
  "create_plugin", "drop_plugin", "json_field", "subscript", "subkey",
  "streq", "strval", "opt_facet_by_items_list", "facet_by", "facet_item",
  "facet_expr", "facet_items_list", "facet_stmt", 0
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
     375,   124,    38,    61,   376,    60,    62,   377,   378,    43,
      45,    42,    47,    37,   379,   380,    59,    40,    41,    44,
     123,   125,    46,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   145,   146,   146,   146,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   149,   149,
     149,   150,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   156,   156,   157,   158,   159,
     159,   159,   160,   161,   161,   162,   162,   163,   163,   163,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   165,
     165,   166,   166,   167,   168,   168,   168,   169,   169,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   171,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   173,   173,   174,   174,   174,
     175,   175,   176,   176,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   185,   186,   186,   187,   187,   188,   188,   189,   190,
     190,   191,   191,   191,   191,   191,   192,   192,   193,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   200,   201,   202,   202,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   204,   204,
     204,   204,   204,   204,   205,   205,   205,   205,   206,   206,
     207,   207,   207,   208,   208,   209,   209,   209,   209,   209,
     210,   210,   210,   211,   211,   212,   213,   213,   214,   214,
     215,   215,   216,   216,   217,   217,   218,   219,   219,   220,
     220,   220,   220,   220,   221,   221,   222,   222,   223,   224,
     225,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   231,   232,   232,   233,   233,   234,   235,   235,   236,
     237,   238,   239,   239,   240,   240,   240,   240,   240,   240,
     241,   241,   241,   241,   241,   241,   241,   241,   242,   242,
     243,   243,   244,   244,   245,   246,   246,   247,   248,   249,
     250,   251,   251,   251,   252,   252,   252,   252,   253,   254,
     254,   254,   254,   255,   256,   257,   258,   259,   260,   260,
     261,   262,   263,   264,   265,   266,   267,   267,   268,   268,
     268,   268,   269,   269,   270,   271,   271,   272,   273,   274,
     275,   275,   276
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
       1,     1,     3,     2,     1,     1,     1,     8,     1,     9,
       0,     2,     1,     3,     1,     1,     1,     0,     3,     0,
       2,     4,    11,     1,     3,     1,     2,     0,     1,     2,
       1,     4,     4,     4,     4,     4,     4,     3,     5,     1,
       3,     0,     1,     2,     1,     3,     3,     4,     1,     3,
       3,     5,     6,     3,     4,     5,     3,     3,     3,     3,
       3,     1,     5,     5,     5,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     1,     1,     4,     3,     3,     1,
       1,     4,     4,     4,     3,     1,     2,     1,     2,     1,
       1,     3,     0,     4,     0,     1,     1,     3,     0,     2,
       0,     1,     5,     0,     1,     3,     5,     1,     3,     1,
       2,     2,     0,     1,     2,     4,     0,     1,     2,     1,
       3,     3,     3,     5,     6,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       3,     4,     4,     4,     4,     4,     4,     4,     3,     6,
       6,     3,     8,    14,     1,     3,     1,     1,     3,     5,
       1,     1,     1,     1,     2,     0,     2,     1,     2,     2,
       3,     1,     1,     1,     2,     4,     4,     3,     4,     4,
       4,     3,     4,     4,     7,     5,     5,     9,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     7,     1,     1,     0,     3,
       1,     1,     1,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     3,     2,     0,     2,     1,     3,     3,     4,
       6,     1,     3,     1,     3,     1,     3,     0,     2,     1,
       3,     3,     0,     1,     1,     1,     3,     1,     1,     3,
       3,     6,     1,     3,     3,     3,     5,     4,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     6,
       4,     5,     0,     1,     2,     1,     3,     3,     2,     3,
       6,     0,     1,     1,     2,     2,     2,     1,     7,     1,
       1,     1,     1,     3,     6,     3,     3,     3,     1,     3,
       2,     3,     3,     7,     5,     2,     1,     2,     1,     1,
       3,     3,     3,     3,     1,     0,     2,     1,     2,     1,
       1,     3,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   303,     0,   300,     0,     0,   348,   347,
       0,     0,   306,     0,   307,   301,     0,   381,   381,     0,
       0,     0,     0,     2,     3,    81,    84,    86,    88,    85,
       7,     8,     9,   302,     5,     0,     6,    10,    11,     0,
      12,    13,    14,    28,    15,    16,    17,    23,    18,    19,
      20,    21,    22,    24,    25,    26,    27,    29,    30,     0,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    77,    46,    47,    48,
      49,    50,    79,    51,    52,    53,    54,    56,    55,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    80,    70,    71,    72,    73,    74,    75,    76,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,   210,   212,   213,   414,   215,   398,   214,    34,     0,
      38,     0,     0,    43,    44,   211,     0,     0,    49,     0,
       0,    67,    75,     0,   105,     0,     0,     0,   209,     0,
     103,   107,   110,   237,   192,   238,   239,     0,     0,     0,
      41,     0,     0,    63,     0,     0,     0,     0,   378,   265,
     382,     0,   265,   272,   273,   271,   383,   265,   265,   196,
     267,   264,     0,   304,     0,   119,     0,     1,     0,     4,
      83,     0,   265,     0,     0,     0,     0,     0,     0,   393,
       0,   396,   395,   402,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    49,     0,   216,   217,     0,   261,   260,     0,     0,
     408,   409,     0,   405,   406,     0,     0,     0,   108,   106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,   193,
       0,     0,     0,     0,     0,     0,     0,   298,   299,   297,
     296,   295,   281,   293,     0,     0,     0,   265,     0,   379,
       0,   350,     0,   269,   268,   349,     0,   274,   197,   372,
     401,     0,     0,   419,   420,   107,   415,     0,     0,    82,
     308,   346,     0,     0,     0,   165,   167,   321,   169,     0,
       0,   319,   320,   333,   337,   331,     0,     0,     0,   329,
       0,   257,     0,   248,   256,     0,   254,   399,     0,   256,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,     0,   251,     0,     0,     0,   235,     0,   236,
       0,   414,     0,   407,    97,   121,   104,   110,   109,   227,
     228,   234,   233,   225,   224,   231,   412,   232,   222,   223,
     230,   229,   218,   219,   220,   221,   226,   194,   240,     0,
     413,   282,   283,     0,     0,     0,     0,   289,   291,   280,
     290,     0,   288,   292,   279,   278,     0,   265,   270,   265,
     266,   277,     0,   198,   199,     0,     0,   370,   373,     0,
       0,   352,     0,   120,   418,   417,     0,   183,     0,     0,
       0,     0,     0,     0,   166,   168,   335,   323,   170,     0,
       0,     0,     0,   390,   391,   389,   392,     0,     0,   155,
       0,    38,     0,     0,    43,   159,     0,    48,    75,     0,
     154,   123,   124,   128,   141,     0,   160,   404,     0,     0,
       0,   242,     0,   111,   245,     0,   116,   247,   246,   115,
     243,   244,   112,     0,   113,     0,     0,   114,     0,     0,
       0,   263,   262,   258,   411,   410,     0,   172,   122,     0,
     241,     0,   286,   285,     0,   294,     0,   275,   276,     0,
       0,   371,     0,   374,   375,     0,     0,   196,     0,   421,
       0,   192,   184,   416,   311,   310,   312,     0,     0,     0,
     369,   394,   322,     0,   334,     0,   342,   332,   338,   339,
     330,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,   255,   118,     0,     0,     0,
       0,     0,     0,   174,   180,   195,     0,     0,     0,     0,
     387,   380,   202,   205,     0,   201,   200,     0,     0,     0,
     354,   355,   353,   351,   358,   359,     0,   422,   309,     0,
       0,   324,   314,   361,   363,   362,   360,   366,   364,   365,
     367,   368,   171,   336,   343,     0,     0,   388,   403,     0,
       0,     0,     0,   164,   157,     0,     0,   158,   126,   125,
       0,     0,   133,     0,   151,     0,   149,   129,   140,   150,
     130,   153,   137,   146,   136,   145,   138,   147,   139,   148,
       0,     0,     0,     0,   250,   249,     0,   259,     0,     0,
     175,     0,     0,   178,   181,   284,     0,   385,   384,   386,
       0,     0,   206,     0,   377,   376,   357,     0,    56,   189,
     185,   187,   313,     0,     0,   317,     0,     0,   305,   345,
     344,   341,   342,   340,   163,   156,   162,   161,   127,     0,
       0,     0,   152,   134,     0,    95,    96,    94,    91,    92,
      87,     0,     0,     0,     0,    99,     0,     0,     0,   183,
       0,     0,   203,     0,     0,   356,     0,   190,   191,     0,
     316,     0,     0,   325,   326,   315,   135,   143,   144,   142,
     131,     0,     0,   252,     0,     0,     0,    89,   176,   173,
       0,   179,   192,   287,   208,   207,   204,   186,   188,   318,
       0,     0,   132,    93,     0,    98,   100,     0,     0,   196,
     328,   327,     0,     0,   177,   182,   102,     0,   101,     0,
       0,   253
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,   110,   148,    24,    25,    26,    27,   642,
     698,   699,   486,   705,   737,    28,   149,   150,   239,   151,
     355,   487,   319,   451,   452,   453,   454,   455,   428,   312,
     429,   564,   651,   739,   709,   653,   654,   511,   512,   670,
     671,   258,   259,   287,   288,   403,   404,   661,   662,   329,
     153,   325,   326,   228,   229,   483,    29,   281,   181,    30,
      31,   394,   395,   272,   273,    32,    33,    34,    35,   420,
     516,   517,   591,   592,   674,   313,   678,   723,   724,    36,
      37,   314,   315,   430,   432,   528,   529,   605,   681,    38,
      39,    40,    41,    42,   410,   411,   601,    43,    44,   407,
     408,   503,   504,    45,    46,    47,   165,   571,    48,   437,
      49,    50,    51,    52,    53,   154,    54,    55,    56,    57,
      58,   155,   233,   234,   156,   157,   417,   418,   294,   295,
     296,   190
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -657
static const yytype_int16 yypact[] =
{
    4225,   -18,    39,  -657,  3668,  -657,    41,    40,  -657,  -657,
      49,    42,  -657,    91,  -657,  -657,   716,  2831,  3955,    44,
      87,  3668,   182,  -657,   -15,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,   127,  -657,  -657,  -657,  3668,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  3668,
    3668,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,    61,  3668,  3668,  3668,  3668,  3668,  3668,  3668,  3668,
      72,  -657,  -657,  -657,  -657,  -657,    62,  -657,    95,    98,
     107,   114,   124,   131,   134,  -657,   138,   149,   155,   175,
     176,   180,   189,  1544,  -657,  1544,  1544,  3151,    16,     1,
    -657,  3254,    92,  -657,   162,   266,  -657,   207,   208,   242,
    3771,  3668,  2728,   231,   217,   235,  3359,   248,  -657,   279,
    -657,  3668,   279,  -657,  -657,  -657,  -657,   279,   279,   271,
    -657,  -657,   238,  -657,  3668,  -657,   -32,  -657,  1544,    78,
    -657,  3668,   279,    74,   244,    31,   264,   245,   -36,  -657,
     246,  -657,  -657,  -657,   854,  3668,  1544,  1682,     4,  1682,
    1682,   237,  1544,  1682,  1682,  1544,  1544,  1544,  1544,   241,
     239,   247,   272,  -657,  -657,  3952,  -657,  -657,    35,   251,
    -657,  -657,  1820,    16,  -657,  2159,   992,  3668,  -657,  -657,
    1544,  1544,  1544,  1544,  1544,  1544,  1544,  1544,  1544,  1544,
    1544,  1544,  1544,  1544,  1544,  1544,  1544,   376,  -657,  -657,
     -29,  1544,  2728,  2728,   262,   280,   360,  -657,  -657,  -657,
    -657,  -657,   281,  -657,  2273,   349,   313,    -9,   316,  -657,
     412,  -657,   322,  -657,  -657,  -657,  3668,  -657,  -657,    11,
    -657,  3668,  3668,  4242,  -657,  3254,   -10,  1130,   236,  -657,
     286,  -657,   400,   401,   341,  -657,  -657,  -657,  -657,   118,
       7,  -657,  -657,  -657,   295,  -657,    59,   427,  1942,  -657,
     428,   314,  1268,  -657,  4226,    56,  -657,  -657,  3973,  4242,
      64,  3668,   303,    67,    88,  -657,  3993,    99,   104,   486,
     523,   562,  4014,  -657,  1406,  1544,  1544,  -657,  3151,  -657,
    2389,   299,   392,  -657,  -657,   -36,  -657,  4242,  -657,  -657,
    -657,   267,   418,  3271,  3870,   711,  -657,   711,   275,   275,
     275,   275,    53,    53,  -657,  -657,  -657,   305,  -657,   370,
     711,   281,   281,   310,  2945,   439,  2728,  -657,  -657,  -657,
    -657,   444,  -657,  -657,  -657,  -657,   385,   279,  -657,   279,
    -657,  -657,   328,   315,  -657,   447,  3668,  -657,  -657,    46,
      60,  -657,   329,  -657,  -657,  -657,  1544,   379,  1544,  3462,
     346,  3668,  3668,  3668,  -657,  -657,  -657,  -657,  -657,   109,
     111,    31,   327,  -657,  -657,  -657,  -657,   362,   368,  -657,
     330,   333,   334,   335,   336,  -657,   337,   338,   339,  1942,
      16,   357,  -657,  -657,  -657,   174,  -657,  -657,   992,   340,
    3668,  -657,  1682,  -657,  -657,   342,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  1544,  -657,  1544,  1544,  -657,  3772,  3802,
     356,  -657,  -657,  -657,  -657,  -657,   388,   431,  -657,   478,
    -657,    19,  -657,  -657,   363,  -657,     0,  -657,  -657,  2056,
    3668,  -657,   364,   366,  -657,    26,  3668,   271,    48,  -657,
     462,   162,  -657,   350,  -657,  -657,  -657,   116,   361,   221,
    -657,  -657,  -657,    19,  -657,   485,    52,  -657,   355,  -657,
    -657,   491,   492,  3668,   372,  3668,   367,   369,  3668,   493,
     371,   -38,  1942,    48,    13,   -28,    66,    70,    48,    48,
      48,    48,   448,   389,   450,  -657,  -657,  4087,  4108,  3837,
    2389,   992,   394,   503,   409,  -657,   126,   373,   -14,   451,
    -657,  -657,  -657,  -657,  3668,   393,  -657,   544,  3668,     6,
    -657,  -657,  -657,  -657,  -657,  -657,  2505,  -657,  -657,  3462,
      36,   -19,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  3565,    36,  -657,  -657,    16,
     415,   416,   417,  -657,  -657,   419,   421,  -657,  -657,  -657,
     440,   441,  -657,    19,  -657,   488,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
      18,  3048,   433,  3668,  -657,  -657,   429,  -657,     3,   487,
    -657,   543,   521,   519,  -657,  -657,    19,  -657,  -657,  -657,
     453,   135,  -657,   569,  -657,  -657,  -657,   139,   442,    80,
     445,  -657,  -657,     8,   141,  -657,   575,   361,  -657,  -657,
    -657,  -657,   563,  -657,  -657,  -657,  -657,  -657,  -657,    48,
      48,   145,  -657,  -657,    19,  -657,  -657,  -657,   449,  -657,
    -657,   456,  1682,  3668,   554,   516,  2614,   508,  2614,   379,
     151,    19,  -657,  3668,   458,  -657,   459,  -657,  -657,  2614,
    -657,    36,   464,   452,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,   165,  3048,  -657,   172,  2614,   593,  -657,  -657,   461,
     577,  -657,   162,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
     596,   575,  -657,  -657,   481,   445,   482,  2614,  2614,   271,
    -657,  -657,   489,   617,  -657,   445,  -657,  1682,  -657,   186,
     490,  -657
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -657,  -657,  -657,    -7,    -4,  -657,   434,  -657,   307,  -657,
    -657,  -105,  -657,  -657,  -657,   144,    71,   395,   343,  -657,
      12,  -657,  -309,  -411,  -657,   -75,  -657,  -565,  -122,  -482,
    -484,  -657,  -657,  -657,  -657,  -657,  -657,   -74,  -657,  -656,
     -83,  -508,  -657,  -506,  -657,  -657,   140,  -657,   -72,   117,
    -657,  -205,   195,  -657,   311,   100,  -657,  -158,  -657,  -657,
    -657,   274,  -657,    -6,   277,  -657,  -657,  -657,  -657,  -657,
      75,  -657,  -657,   -12,  -657,  -425,  -657,  -657,   -85,  -657,
    -657,  -657,   240,  -657,  -657,  -657,    63,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,   161,  -657,  -657,  -657,  -657,
    -657,  -657,    90,  -657,  -657,  -657,   652,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -266,  -657,   443,  -657,   426,  -657,  -657,   257,  -657,
     256,  -657
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -415
static const yytype_int16 yytable[] =
{
     111,   583,   330,   587,   333,   334,   526,   566,   337,   338,
     164,   305,   305,   305,   283,   426,   415,   185,   657,   284,
     285,   669,   622,   581,   305,   412,   585,   693,   188,   230,
     231,   305,   306,   186,   301,   192,   305,   306,   541,   307,
     308,   305,   306,   331,   307,   308,   488,   378,   624,   235,
     308,   703,   456,   305,   306,   193,   194,   280,   676,   230,
     231,   621,   308,   291,   628,   631,   633,   635,   637,   639,
     604,   305,   306,   311,   626,   305,   306,   405,   629,   755,
     308,   318,   542,   433,   308,    59,   568,   569,   114,   302,
     112,   -65,  -400,   240,   570,   667,    60,   658,   115,   717,
     618,   507,   765,   292,   434,   379,   625,   292,   196,   197,
     185,   199,   200,   201,   202,   203,   303,   718,   435,   398,
     677,   189,   113,   424,   425,   241,   198,   117,   406,   416,
     116,   619,   240,   152,   118,   332,   391,   391,   391,   691,
     236,   738,   236,   227,   666,   427,   427,   238,   119,   391,
     623,   183,   393,   265,   669,   694,   309,   266,   271,   232,
     436,   309,   278,   579,   241,   675,   309,   282,   310,   505,
     669,   297,   710,   673,   348,   298,   349,   318,   309,   184,
     290,   682,   187,   456,   254,   255,   256,   300,   191,   232,
    -333,  -333,   764,   669,   461,   462,   309,   543,   195,   506,
     309,   327,   464,   462,   205,   467,   462,   727,   729,   204,
     731,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   468,   462,   482,   257,
     544,   185,   206,   358,   759,   207,   545,   470,   462,   497,
     412,   498,   471,   462,   208,   593,   594,   522,   523,   524,
     525,   209,   166,   766,   588,   589,   381,   382,   271,   271,
     223,   210,   224,   225,   655,   523,   595,   610,   211,   612,
     392,   212,   615,   712,   713,   213,   456,   715,   523,   720,
     721,   596,   402,   730,   523,   597,   214,   409,   413,   743,
     523,   238,   215,   171,   598,   599,   749,   546,   547,   548,
     549,   550,   551,   752,   523,   293,   172,   240,   552,   311,
     754,   462,   216,   217,   450,   240,   173,   218,   174,   175,
     456,   324,   600,   328,   770,   462,   219,   465,   260,   336,
     261,   262,   339,   340,   341,   342,   177,   263,  -383,   241,
     274,   179,   275,   279,   227,   280,   481,   241,   286,   352,
     304,   180,   289,   357,   316,   317,   320,   359,   360,   361,
     362,   363,   364,   365,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   350,   335,   344,   701,   380,   343,
     392,   377,   271,   580,   345,   383,   584,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   602,   502,   384,   252,   253,   254,   255,   256,   346,
     385,   386,   396,   397,   357,   515,   399,   519,   520,   521,
     400,   620,   401,   419,   627,   630,   632,   634,   636,   638,
     421,   422,   240,   423,   431,   438,   457,  -414,   482,   225,
     456,   466,   456,   484,   489,   450,   490,   491,   494,   424,
     496,   499,   508,   456,   500,   501,   554,   510,   240,   518,
     531,   324,   478,   479,   241,   530,   532,   533,   311,   456,
     534,   535,   536,   537,   538,   539,   540,   542,   553,   560,
     556,   561,   563,   565,   311,   578,   567,   577,   586,   416,
     241,   456,   456,   603,   606,   575,   402,   734,   590,   607,
     608,   616,   409,   611,   640,   613,   643,   614,   650,   617,
     656,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   240,   652,   641,   609,
     663,   609,   649,   293,   609,   293,   485,   659,   450,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   664,   684,   685,   686,   481,   687,   241,   688,
     689,   690,   769,   240,   692,   704,   702,   726,   728,   706,
     660,   700,   707,   708,   502,   357,   711,   714,   722,   716,
     735,   604,   450,   736,   719,   515,   740,   750,   732,   744,
     557,   751,   558,   559,   733,   241,   746,   747,   756,   311,
     757,   680,   240,   758,   760,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     762,   763,   768,   299,   472,   473,   767,   753,   771,   459,
     562,   356,   648,   741,   241,   742,   748,   697,   414,   609,
     576,   745,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   555,   493,   480,
     647,   474,   475,   495,   672,   725,   761,   582,   665,   683,
     182,   527,   366,   509,   513,     0,   353,     0,   357,     0,
       0,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,     0,     0,     0,   185,
       0,   476,   450,     0,   450,     0,     0,     0,     0,   660,
       0,     0,     0,     0,     0,   450,     0,     0,     0,   120,
     121,   122,   123,     0,   124,   125,   126,     0,   697,     0,
     127,   450,    62,     0,     0,     0,    63,   128,    65,     0,
     129,    66,     0,     0,     0,    67,     0,     0,     0,   130,
       0,   240,     0,   450,   450,     0,     0,   131,     0,     0,
       0,   132,    69,     0,     0,    70,    71,    72,   133,   134,
       0,   135,   136,     0,     0,     0,   137,     0,     0,    75,
      76,    77,    78,   241,    79,   138,    81,   139,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,     0,   140,    91,    92,    93,     0,
      94,     0,    95,     0,     0,    96,    97,    98,   141,     0,
     100,   101,     0,   102,     0,   103,   104,   105,     0,     0,
     106,   107,   142,     0,   109,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,     0,   143,   144,     0,     0,
     145,     0,     0,   146,     0,     0,   147,   220,   121,   122,
     123,     0,   321,   125,     0,     0,     0,     0,   127,     0,
      62,     0,     0,     0,    63,    64,    65,     0,   129,    66,
       0,     0,     0,    67,     0,     0,     0,    68,     0,     0,
       0,     0,     0,     0,     0,   131,     0,     0,     0,   132,
      69,     0,     0,    70,    71,    72,    73,    74,     0,   135,
     136,     0,     0,     0,   137,     0,     0,    75,    76,    77,
      78,     0,    79,   221,    81,   222,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,     0,   140,    91,    92,    93,     0,    94,     0,
      95,     0,     0,    96,    97,    98,    99,     0,   100,   101,
       0,   102,     0,   103,   104,   105,     0,     0,   106,   107,
     142,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   145,     0,
       0,   322,   323,     0,   147,   220,   121,   122,   123,     0,
     124,   125,     0,     0,     0,     0,   127,     0,    62,     0,
       0,     0,    63,   128,    65,     0,   129,    66,     0,     0,
       0,    67,     0,     0,     0,   130,     0,     0,     0,     0,
       0,     0,     0,   131,     0,     0,     0,   132,    69,     0,
       0,    70,    71,    72,   133,   134,     0,   135,   136,     0,
       0,     0,   137,     0,     0,    75,    76,    77,    78,     0,
      79,   138,    81,   139,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
       0,   140,    91,    92,    93,     0,    94,     0,    95,     0,
       0,    96,    97,    98,   141,     0,   100,   101,     0,   102,
       0,   103,   104,   105,     0,     0,   106,   107,   142,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,   144,     0,     0,   145,     0,     0,   146,
       0,     0,   147,   120,   121,   122,   123,     0,   124,   125,
       0,     0,     0,     0,   127,     0,    62,     0,     0,     0,
      63,   128,    65,     0,   129,    66,     0,     0,     0,    67,
       0,     0,     0,   130,     0,     0,     0,     0,     0,     0,
       0,   131,     0,     0,     0,   132,    69,     0,     0,    70,
      71,    72,   133,   134,     0,   135,   136,     0,     0,     0,
     137,     0,     0,    75,    76,    77,    78,     0,    79,   138,
      81,   139,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,     0,   140,
      91,    92,    93,     0,    94,     0,    95,     0,     0,    96,
      97,    98,   141,     0,   100,   101,     0,   102,     0,   103,
     104,   105,     0,     0,   106,   107,   142,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,   144,     0,     0,   145,     0,     0,   146,     0,     0,
     147,   220,   121,   122,   123,     0,   124,   125,     0,     0,
       0,     0,   127,     0,    62,     0,     0,     0,    63,    64,
      65,     0,   129,    66,     0,     0,     0,    67,     0,     0,
       0,    68,     0,     0,     0,     0,     0,     0,     0,   131,
       0,     0,     0,   132,    69,     0,     0,    70,    71,    72,
      73,    74,     0,   135,   136,     0,     0,     0,   137,     0,
       0,    75,    76,    77,    78,     0,    79,   221,    81,   222,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,     0,   140,    91,    92,
      93,   458,    94,     0,    95,     0,     0,    96,    97,    98,
      99,     0,   100,   101,     0,   102,     0,   103,   104,   105,
       0,     0,   106,   107,   142,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,   145,     0,     0,   146,     0,     0,   147,   220,
     121,   122,   123,     0,   321,   125,     0,     0,     0,     0,
     127,     0,    62,     0,     0,     0,    63,    64,    65,     0,
     129,    66,     0,     0,     0,    67,     0,     0,     0,    68,
       0,     0,     0,     0,     0,     0,     0,   131,     0,     0,
       0,   132,    69,     0,     0,    70,    71,    72,    73,    74,
       0,   135,   136,     0,     0,     0,   137,     0,     0,    75,
      76,    77,    78,     0,    79,   221,    81,   222,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,     0,   140,    91,    92,    93,     0,
      94,     0,    95,     0,     0,    96,    97,    98,    99,     0,
     100,   101,     0,   102,     0,   103,   104,   105,     0,     0,
     106,   107,   142,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
     145,     0,     0,   146,   323,     0,   147,   220,   121,   122,
     123,     0,   124,   125,     0,     0,     0,     0,   127,     0,
      62,     0,     0,     0,    63,    64,    65,     0,   129,    66,
       0,     0,     0,    67,     0,     0,     0,    68,     0,     0,
       0,     0,     0,     0,     0,   131,     0,     0,     0,   132,
      69,     0,     0,    70,    71,    72,    73,    74,     0,   135,
     136,     0,     0,     0,   137,     0,     0,    75,    76,    77,
      78,     0,    79,   221,    81,   222,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,     0,   140,    91,    92,    93,     0,    94,     0,
      95,     0,     0,    96,    97,    98,    99,     0,   100,   101,
       0,   102,     0,   103,   104,   105,     0,     0,   106,   107,
     142,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   145,     0,
       0,   146,     0,     0,   147,   220,   121,   122,   123,     0,
     321,   125,     0,     0,     0,     0,   127,     0,    62,     0,
       0,     0,    63,    64,    65,     0,   129,    66,     0,     0,
       0,    67,     0,     0,     0,    68,     0,     0,     0,     0,
       0,     0,     0,   131,     0,     0,     0,   132,    69,     0,
       0,    70,    71,    72,    73,    74,     0,   135,   136,     0,
       0,     0,   137,     0,     0,    75,    76,    77,    78,     0,
      79,   221,    81,   222,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
       0,   140,    91,    92,    93,     0,    94,     0,    95,     0,
       0,    96,    97,    98,    99,     0,   100,   101,     0,   102,
       0,   103,   104,   105,     0,     0,   106,   107,   142,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,   145,     0,     0,   146,
       0,     0,   147,   220,   121,   122,   123,     0,   351,   125,
       0,     0,     0,     0,   127,     0,    62,     0,     0,     0,
      63,    64,    65,     0,   129,    66,     0,     0,     0,    67,
       0,     0,     0,    68,     0,     0,     0,     0,     0,     0,
       0,   131,     0,     0,     0,   132,    69,     0,     0,    70,
      71,    72,    73,    74,     0,   135,   136,     0,     0,     0,
     137,     0,     0,    75,    76,    77,    78,     0,    79,   221,
      81,   222,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,     0,   140,
      91,    92,    93,     0,    94,     0,    95,     0,     0,    96,
      97,    98,    99,     0,   100,   101,     0,   102,     0,   103,
     104,   105,     0,     0,   106,   107,   142,     0,   109,     0,
       0,     0,     0,     0,     0,    61,   439,     0,     0,     0,
     143,     0,     0,     0,   145,     0,     0,   146,    62,     0,
     147,     0,    63,    64,    65,     0,   440,    66,     0,     0,
       0,    67,     0,     0,     0,   441,     0,     0,     0,     0,
       0,     0,     0,   442,     0,   443,     0,     0,    69,     0,
       0,    70,    71,    72,   444,    74,     0,   445,     0,     0,
       0,     0,   446,     0,     0,    75,    76,    77,    78,     0,
     447,    80,    81,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,    91,    92,    93,     0,    94,     0,    95,     0,
       0,    96,    97,    98,    99,     0,   100,   101,     0,   102,
       0,   103,   104,   105,     0,     0,   106,   107,   448,    61,
     109,   572,     0,     0,   573,     0,     0,     0,     0,     0,
       0,     0,    62,     0,     0,     0,    63,    64,    65,   449,
       0,    66,     0,     0,     0,    67,     0,     0,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     0,     0,    70,    71,    72,    73,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,     0,    79,    80,    81,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,     0,     0,    91,    92,    93,     0,
      94,     0,    95,     0,     0,    96,    97,    98,    99,     0,
     100,   101,    61,   102,     0,   103,   104,   105,     0,     0,
     106,   107,   108,     0,   109,    62,     0,     0,     0,    63,
      64,    65,     0,     0,    66,     0,     0,     0,    67,     0,
       0,     0,    68,   574,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,     0,     0,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,     0,    79,    80,    81,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,     0,     0,    91,
      92,    93,     0,    94,     0,    95,     0,     0,    96,    97,
      98,    99,     0,   100,   101,     0,   102,     0,   103,   104,
     105,     0,     0,   106,   107,   108,    61,   109,   305,     0,
       0,   387,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,     0,    63,    64,    65,   354,     0,    66,     0,
       0,     0,    67,     0,     0,     0,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   388,     0,    69,
       0,     0,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
       0,    79,    80,    81,     0,     0,     0,     0,    82,   389,
       0,     0,     0,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     0,    91,    92,    93,     0,    94,     0,    95,
       0,     0,    96,    97,    98,    99,     0,   100,   101,     0,
     102,   390,   103,   104,   105,     0,     0,   106,   107,   108,
       0,   109,    61,     0,   305,     0,     0,     0,     0,     0,
       0,     0,     0,   391,     0,    62,     0,     0,     0,    63,
      64,    65,     0,     0,    66,     0,     0,     0,    67,     0,
       0,     0,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,     0,     0,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,     0,    79,    80,    81,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,     0,     0,    91,
      92,    93,     0,    94,     0,    95,     0,     0,    96,    97,
      98,    99,     0,   100,   101,     0,   102,     0,   103,   104,
     105,     0,     0,   106,   107,   108,     0,   109,    61,   439,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   391,
       0,    62,     0,     0,     0,    63,    64,    65,     0,   440,
      66,     0,     0,     0,    67,     0,     0,     0,   441,     0,
       0,     0,     0,     0,     0,     0,   442,     0,   443,     0,
       0,    69,     0,     0,    70,    71,    72,   444,    74,     0,
     445,     0,     0,     0,     0,   446,     0,     0,    75,    76,
      77,    78,     0,    79,    80,    81,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,    86,   668,
      88,    89,    90,     0,     0,    91,    92,    93,     0,    94,
       0,    95,     0,     0,    96,    97,    98,    99,     0,   100,
     101,     0,   102,     0,   103,   104,   105,    61,   439,   106,
     107,   448,     0,   109,     0,     0,     0,     0,     0,     0,
      62,     0,     0,     0,    63,    64,    65,     0,   440,    66,
       0,     0,     0,    67,     0,     0,     0,   441,     0,     0,
       0,     0,     0,     0,     0,   442,     0,   443,     0,     0,
      69,     0,     0,    70,    71,    72,   444,    74,     0,   445,
       0,     0,     0,     0,   446,     0,     0,    75,    76,    77,
      78,     0,    79,    80,    81,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,     0,     0,    91,    92,    93,     0,    94,     0,
      95,     0,     0,    96,    97,    98,    99,     0,   100,   101,
       0,   102,     0,   103,   104,   105,     0,     0,   106,   107,
     448,    61,   109,   267,   268,     0,   269,     0,     0,     0,
       0,     0,     0,     0,    62,     0,     0,     0,    63,    64,
      65,     0,     0,    66,     0,     0,     0,    67,     0,     0,
       0,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,     0,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,     0,    79,    80,    81,     0,
       0,     0,     0,    82,   270,     0,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     0,    91,    92,
      93,     0,    94,     0,    95,     0,     0,    96,    97,    98,
      99,     0,   100,   101,    61,   102,     0,   103,   104,   105,
       0,   158,   106,   107,   108,     0,   109,    62,     0,     0,
       0,    63,    64,    65,     0,     0,    66,     0,     0,   159,
      67,     0,     0,     0,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
      70,   160,    72,    73,    74,     0,     0,     0,   161,     0,
       0,     0,     0,     0,    75,    76,    77,    78,     0,    79,
      80,    81,     0,     0,     0,     0,   162,     0,     0,     0,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,    91,    92,    93,     0,    94,     0,   163,     0,     0,
      96,    97,    98,    99,     0,   100,   101,     0,     0,     0,
     103,   104,   105,     0,     0,   106,   107,   108,    61,   109,
     492,     0,     0,   387,     0,     0,     0,     0,     0,     0,
       0,    62,     0,     0,     0,    63,    64,    65,     0,     0,
      66,     0,     0,     0,    67,     0,     0,     0,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,    70,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,     0,    79,    80,    81,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,    91,    92,    93,     0,    94,
       0,    95,     0,     0,    96,    97,    98,    99,     0,   100,
     101,    61,   102,   695,   103,   104,   105,     0,     0,   106,
     107,   108,     0,   109,    62,     0,     0,     0,    63,    64,
      65,     0,     0,    66,     0,     0,     0,    67,     0,     0,
       0,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,     0,    70,    71,    72,
      73,    74,     0,   696,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,     0,    79,    80,    81,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     0,    91,    92,
      93,     0,    94,     0,    95,     0,     0,    96,    97,    98,
      99,     0,   100,   101,    61,   102,     0,   103,   104,   105,
       0,     0,   106,   107,   108,     0,   109,    62,     0,     0,
       0,    63,    64,    65,     0,     0,    66,     0,     0,     0,
      67,     0,     0,     0,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
      70,    71,    72,    73,    74,     0,     0,   226,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,     0,    79,
      80,    81,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,    91,    92,    93,     0,    94,     0,    95,     0,     0,
      96,    97,    98,    99,     0,   100,   101,    61,   102,     0,
     103,   104,   105,     0,     0,   106,   107,   108,     0,   109,
      62,     0,   237,     0,    63,    64,    65,     0,     0,    66,
       0,     0,     0,    67,     0,     0,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,     0,     0,    70,    71,    72,    73,    74,     0,     0,
       0,   240,     0,     0,     0,     0,     0,    75,    76,    77,
      78,     0,    79,    80,    81,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,     0,   241,    91,    92,    93,     0,    94,     0,
      95,     0,     0,    96,    97,    98,    99,     0,   100,   101,
       0,   102,    61,   103,   104,   105,     0,   276,   106,   107,
     108,     0,   109,     0,     0,    62,     0,     0,     0,    63,
      64,    65,     0,     0,    66,     0,     0,     0,    67,     0,
       0,     0,    68,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,    69,     0,     0,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,     0,    79,    80,    81,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,     0,     0,    91,
      92,    93,     0,    94,     0,    95,     0,     0,    96,   277,
      98,    99,     0,   100,   101,    61,   102,     0,   103,   104,
     105,     0,     0,   106,   107,   108,     0,   109,    62,     0,
       0,     0,    63,    64,    65,     0,     0,    66,     0,     0,
       0,    67,     0,     0,     0,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,     0,
       0,    70,    71,    72,    73,    74,     0,   514,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,     0,
      79,    80,    81,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,    91,    92,    93,     0,    94,     0,    95,     0,
       0,    96,    97,    98,    99,     0,   100,   101,    61,   102,
       0,   103,   104,   105,     0,     0,   106,   107,   108,     0,
     109,    62,     0,     0,     0,    63,    64,    65,     0,     0,
      66,     0,     0,     0,    67,     0,     0,     0,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,    70,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,   679,    79,    80,    81,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,    91,    92,    93,     0,    94,
       0,    95,     0,     0,    96,    97,    98,    99,     0,   100,
     101,    61,   102,     0,   103,   104,   105,     0,     0,   106,
     107,   108,     0,   109,    62,     0,     0,     0,    63,    64,
      65,     0,     0,    66,     0,     0,     0,    67,     0,     0,
       0,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,     0,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,     0,    79,    80,    81,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     0,    91,    92,
      93,     0,    94,     0,    95,     0,     0,    96,    97,    98,
      99,     0,   100,   101,    61,   102,     0,   103,   104,   105,
     264,     0,   106,   107,   108,     0,   109,    62,     0,     0,
       0,    63,    64,    65,     0,     0,    66,     0,     0,     0,
      67,     0,     0,     0,    68,     0,     0,     0,     0,     0,
       0,     0,   240,     0,     0,     0,     0,    69,     0,     0,
      70,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,     0,    79,
      80,    81,   240,     0,   241,     0,     0,     0,     0,     0,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,    91,    92,    93,     0,    94,     0,    95,     0,     0,
      96,    97,    98,    99,   241,   100,   101,   240,  -382,     0,
     103,   104,   105,     0,     0,   106,   107,   108,     0,   109,
       0,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,     0,     0,     0,   241,
     240,   473,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,     0,     0,     0,     0,
       0,   475,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   166,     0,     0,     0,     0,   646,     0,     0,     0,
       0,     0,     0,   167,   168,     0,     0,     0,     0,     0,
     169,     0,   240,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,     0,   170,     0,     0,     0,     0,
       0,     0,   171,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,   172,     0,     0,     0,     0,
       0,     0,     0,   240,     0,   173,     0,   174,   175,     0,
       0,     0,     0,     0,     0,   241,     0,     0,     0,     0,
       0,   176,     0,     0,   240,   177,     0,     0,     0,   178,
     179,     0,     0,     0,     0,   241,     0,     0,     0,     0,
     180,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   241,     0,     0,     0,
     347,     0,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
       0,   463,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   240,     0,     0,
       0,   469,     0,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   240,     0,
       0,     0,   477,     0,     0,     0,     0,     0,     0,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,     0,     0,     0,     0,   644,     0,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,     1,     0,     0,     2,   645,     3,     0,     0,
       0,     0,     4,     0,     0,     0,     5,     0,     0,     6,
       0,     7,     8,     9,     0,     0,   240,    10,     0,     0,
       0,    11,     0,   460,     0,     0,     0,     0,     0,     0,
       0,     0,   240,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    14,   241,     0,    15,     0,    16,     0,
      17,     0,    18,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
       0,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256
};

static const yytype_int16 yycheck[] =
{
       4,   507,   207,   511,   209,   210,   431,   491,   213,   214,
      17,     5,     5,     5,   172,     8,    26,    21,    32,   177,
     178,   586,     9,   505,     5,   291,   508,     9,    43,    13,
      14,     5,     6,    21,   192,    39,     5,     6,   449,     8,
      14,     5,     6,    39,     8,    14,   355,    76,    76,    48,
      14,    48,   318,     5,     6,    59,    60,    66,    77,    13,
      14,   543,    14,    95,   546,   547,   548,   549,   550,   551,
      18,     5,     6,   195,     8,     5,     6,    66,     8,   735,
      14,   117,   120,    24,    14,   103,    86,    87,    48,    15,
      49,   100,     0,    40,    94,   579,    57,   111,    49,    19,
     138,   410,   758,   139,    45,   134,   134,   139,   112,   113,
     114,   115,   116,   117,   118,   119,    42,    37,    59,   277,
     139,   136,    81,     5,     6,    72,   114,    85,   117,   139,
      81,   542,    40,    16,    92,   131,   130,   130,   130,   623,
     139,   706,   139,   147,   138,   138,   138,   151,    57,   130,
     137,   107,   274,   160,   719,   137,   130,   161,   162,   143,
     101,   130,   166,   137,    72,   590,   130,   171,   137,   123,
     735,    93,   656,   137,   139,    97,   141,   117,   130,    92,
     184,   606,     0,   449,   131,   132,   133,   191,    61,   143,
     138,   139,   757,   758,   138,   139,   130,    23,   137,   139,
     130,   205,   138,   139,   142,   138,   139,   689,   690,   137,
     694,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   138,   139,   350,    67,
      56,   235,   137,   237,   742,   137,    62,   138,   139,   397,
     506,   399,   138,   139,   137,    24,    25,   138,   139,   138,
     139,   137,    16,   759,   138,   139,   262,   263,   262,   263,
     143,   137,   145,   146,   138,   139,    45,   533,   137,   535,
     274,   137,   538,   138,   139,   137,   542,   138,   139,   138,
     139,    60,   286,   138,   139,    64,   137,   291,   292,   138,
     139,   295,   137,    57,    73,    74,   721,   123,   124,   125,
     126,   127,   128,   138,   139,   188,    70,    40,   134,   431,
     138,   139,   137,   137,   318,    40,    80,   137,    82,    83,
     586,   204,   101,   206,   138,   139,   137,   331,    62,   212,
     123,   123,   215,   216,   217,   218,   100,    95,   107,    72,
     123,   105,   107,    95,   348,    66,   350,    72,    77,   232,
     106,   115,   114,   236,    90,   110,   110,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   123,   138,   137,   643,   261,   138,
     384,     5,   386,   505,   137,   123,   508,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   523,   406,   123,   129,   130,   131,   132,   133,   137,
      50,   130,    63,   100,   297,   419,   100,   421,   422,   423,
       8,   543,   100,   137,   546,   547,   548,   549,   550,   551,
      30,    30,    40,    92,   139,     8,     8,   123,   560,   322,
     706,   138,   708,   144,   139,   449,    76,   137,     9,     5,
      65,   123,   123,   719,   139,     8,   460,    78,    40,   113,
      98,   344,   345,   346,    72,   138,    98,   137,   590,   735,
     137,   137,   137,   137,   137,   137,   137,   120,   138,   123,
     138,    93,    51,     5,   606,   119,   123,   123,    26,   139,
      72,   757,   758,     8,   139,   499,   500,   702,   137,     8,
       8,     8,   506,   131,    56,   138,    56,   138,     5,   138,
     137,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    40,   118,   139,   533,
     137,   535,   138,   416,   538,   418,   144,    86,   542,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,     8,   138,   138,   138,   560,   138,    72,   138,
     120,   120,   767,    40,    76,    78,   137,   689,   690,    26,
     574,   138,    51,    54,   578,   458,   123,     8,     3,   137,
      26,    18,   586,    67,   139,   589,    78,   123,   139,   711,
     473,   139,   475,   476,   138,    72,   138,   138,     5,   721,
     139,   605,    40,    26,     8,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     139,   139,     5,   189,   138,   139,   137,   732,   138,   322,
     486,   236,   561,   708,    72,   709,   719,   641,   295,   643,
     500,   713,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   462,   384,   348,
     560,   138,   139,   386,   589,   677,   751,   506,   578,   606,
      18,   431,   246,   416,   418,    -1,   233,    -1,   561,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    -1,    -1,    -1,   703,
      -1,   139,   706,    -1,   708,    -1,    -1,    -1,    -1,   713,
      -1,    -1,    -1,    -1,    -1,   719,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,   732,    -1,
      14,   735,    16,    -1,    -1,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      -1,    40,    -1,   757,   758,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    66,    72,    68,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    91,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,   100,   101,   102,    -1,
     104,   105,    -1,   107,    -1,   109,   110,   111,    -1,    -1,
     114,   115,   116,    -1,   118,    -1,   125,   126,   127,   128,
     129,   130,   131,   132,   133,    -1,   130,   131,    -1,    -1,
     134,    -1,    -1,   137,    -1,    -1,   140,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,
      16,    -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    90,    91,    92,    -1,    94,    -1,
      96,    -1,    -1,    99,   100,   101,   102,    -1,   104,   105,
      -1,   107,    -1,   109,   110,   111,    -1,    -1,   114,   115,
     116,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,   134,    -1,
      -1,   137,   138,    -1,   140,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    14,    -1,    16,    -1,
      -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    90,    91,    92,    -1,    94,    -1,    96,    -1,
      -1,    99,   100,   101,   102,    -1,   104,   105,    -1,   107,
      -1,   109,   110,   111,    -1,    -1,   114,   115,   116,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,   131,    -1,    -1,   134,    -1,    -1,   137,
      -1,    -1,   140,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,    92,    -1,    94,    -1,    96,    -1,    -1,    99,
     100,   101,   102,    -1,   104,   105,    -1,   107,    -1,   109,
     110,   111,    -1,    -1,   114,   115,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     130,   131,    -1,    -1,   134,    -1,    -1,   137,    -1,    -1,
     140,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    89,    90,    91,
      92,    93,    94,    -1,    96,    -1,    -1,    99,   100,   101,
     102,    -1,   104,   105,    -1,   107,    -1,   109,   110,   111,
      -1,    -1,   114,   115,   116,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,
      -1,    -1,   134,    -1,    -1,   137,    -1,    -1,   140,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      14,    -1,    16,    -1,    -1,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    91,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,   100,   101,   102,    -1,
     104,   105,    -1,   107,    -1,   109,   110,   111,    -1,    -1,
     114,   115,   116,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,
     134,    -1,    -1,   137,   138,    -1,   140,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,
      16,    -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    90,    91,    92,    -1,    94,    -1,
      96,    -1,    -1,    99,   100,   101,   102,    -1,   104,   105,
      -1,   107,    -1,   109,   110,   111,    -1,    -1,   114,   115,
     116,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,   134,    -1,
      -1,   137,    -1,    -1,   140,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    14,    -1,    16,    -1,
      -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    90,    91,    92,    -1,    94,    -1,    96,    -1,
      -1,    99,   100,   101,   102,    -1,   104,   105,    -1,   107,
      -1,   109,   110,   111,    -1,    -1,   114,   115,   116,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,    -1,    -1,    -1,   134,    -1,    -1,   137,
      -1,    -1,   140,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,    92,    -1,    94,    -1,    96,    -1,    -1,    99,
     100,   101,   102,    -1,   104,   105,    -1,   107,    -1,   109,
     110,   111,    -1,    -1,   114,   115,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
     130,    -1,    -1,    -1,   134,    -1,    -1,   137,    16,    -1,
     140,    -1,    20,    21,    22,    -1,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    96,    -1,
      -1,    99,   100,   101,   102,    -1,   104,   105,    -1,   107,
      -1,   109,   110,   111,    -1,    -1,   114,   115,   116,     3,
     118,     5,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    -1,    20,    21,    22,   137,
      -1,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,   100,   101,   102,    -1,
     104,   105,     3,   107,    -1,   109,   110,   111,    -1,    -1,
     114,   115,   116,    -1,   118,    16,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    96,    -1,    -1,    99,   100,
     101,   102,    -1,   104,   105,    -1,   107,    -1,   109,   110,
     111,    -1,    -1,   114,   115,   116,     3,   118,     5,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    20,    21,    22,   137,    -1,    25,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,    96,
      -1,    -1,    99,   100,   101,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,    -1,    -1,   114,   115,   116,
      -1,   118,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   130,    -1,    16,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    96,    -1,    -1,    99,   100,
     101,   102,    -1,   104,   105,    -1,   107,    -1,   109,   110,
     111,    -1,    -1,   114,   115,   116,    -1,   118,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
      -1,    16,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    96,    -1,    -1,    99,   100,   101,   102,    -1,   104,
     105,    -1,   107,    -1,   109,   110,   111,     3,     4,   114,
     115,   116,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      96,    -1,    -1,    99,   100,   101,   102,    -1,   104,   105,
      -1,   107,    -1,   109,   110,   111,    -1,    -1,   114,   115,
     116,     3,   118,     5,     6,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    96,    -1,    -1,    99,   100,   101,
     102,    -1,   104,   105,     3,   107,    -1,   109,   110,   111,
      -1,    10,   114,   115,   116,    -1,   118,    16,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,   100,   101,   102,    -1,   104,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,   115,   116,     3,   118,
       5,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    96,    -1,    -1,    99,   100,   101,   102,    -1,   104,
     105,     3,   107,     5,   109,   110,   111,    -1,    -1,   114,
     115,   116,    -1,   118,    16,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    96,    -1,    -1,    99,   100,   101,
     102,    -1,   104,   105,     3,   107,    -1,   109,   110,   111,
      -1,    -1,   114,   115,   116,    -1,   118,    16,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,   100,   101,   102,    -1,   104,   105,     3,   107,    -1,
     109,   110,   111,    -1,    -1,   114,   115,   116,    -1,   118,
      16,    -1,    18,    -1,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    72,    90,    91,    92,    -1,    94,    -1,
      96,    -1,    -1,    99,   100,   101,   102,    -1,   104,   105,
      -1,   107,     3,   109,   110,   111,    -1,     8,   114,   115,
     116,    -1,   118,    -1,    -1,    16,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,    46,    -1,    -1,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    96,    -1,    -1,    99,   100,
     101,   102,    -1,   104,   105,     3,   107,    -1,   109,   110,
     111,    -1,    -1,   114,   115,   116,    -1,   118,    16,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    96,    -1,
      -1,    99,   100,   101,   102,    -1,   104,   105,     3,   107,
      -1,   109,   110,   111,    -1,    -1,   114,   115,   116,    -1,
     118,    16,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    96,    -1,    -1,    99,   100,   101,   102,    -1,   104,
     105,     3,   107,    -1,   109,   110,   111,    -1,    -1,   114,
     115,   116,    -1,   118,    16,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    96,    -1,    -1,    99,   100,   101,
     102,    -1,   104,   105,     3,   107,    -1,   109,   110,   111,
       9,    -1,   114,   115,   116,    -1,   118,    16,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    40,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,   100,   101,   102,    72,   104,   105,    40,   107,    -1,
     109,   110,   111,    -1,    -1,   114,   115,   116,    -1,   118,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    -1,    -1,    -1,    72,
      40,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    -1,    -1,    -1,    -1,
      -1,   139,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,    16,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    40,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    80,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    40,   100,    -1,    -1,    -1,   104,
     105,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
     115,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    72,    -1,    -1,    -1,
     138,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,
      -1,   138,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,    40,    -1,    -1,
      -1,   138,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,    40,    -1,
      -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,    -1,    -1,    -1,    -1,   138,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,    17,    -1,    -1,    20,   138,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      -1,    36,    37,    38,    -1,    -1,    40,    42,    -1,    -1,
      -1,    46,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    72,    -1,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    17,    20,    22,    27,    31,    34,    36,    37,    38,
      42,    46,    58,    79,    88,    91,    93,    95,    97,    99,
     109,   112,   146,   147,   150,   151,   152,   153,   160,   201,
     204,   205,   210,   211,   212,   213,   224,   225,   234,   235,
     236,   237,   238,   242,   243,   248,   249,   250,   253,   255,
     256,   257,   258,   259,   261,   262,   263,   264,   265,   103,
      57,     3,    16,    20,    21,    22,    25,    29,    33,    46,
      49,    50,    51,    52,    53,    63,    64,    65,    66,    68,
      69,    70,    75,    80,    81,    82,    83,    84,    85,    86,
      87,    90,    91,    92,    94,    96,    99,   100,   101,   102,
     104,   105,   107,   109,   110,   111,   114,   115,   116,   118,
     148,   149,    49,    81,    48,    49,    81,    85,    92,    57,
       3,     4,     5,     6,     8,     9,    10,    14,    21,    24,
      33,    41,    45,    52,    53,    55,    56,    60,    69,    71,
      89,   102,   116,   130,   131,   134,   137,   140,   149,   161,
     162,   164,   194,   195,   260,   266,   269,   270,    10,    28,
      50,    57,    75,    96,   148,   251,    16,    28,    29,    35,
      50,    57,    70,    80,    82,    83,    96,   100,   104,   105,
     115,   203,   251,   107,    92,   149,   165,     0,    43,   136,
     276,    61,   149,   149,   149,   137,   149,   149,   165,   149,
     149,   149,   149,   149,   137,   142,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
       3,    69,    71,   194,   194,   194,    56,   149,   198,   199,
      13,    14,   143,   267,   268,    48,   139,    18,   149,   163,
      40,    72,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,    67,   186,   187,
      62,   123,   123,    95,     9,   148,   149,     5,     6,     8,
      76,   149,   208,   209,   123,   107,     8,   100,   149,    95,
      66,   202,   149,   202,   202,   202,    77,   188,   189,   114,
     149,    95,   139,   194,   273,   274,   275,    93,    97,   151,
     149,   202,    15,    42,   106,     5,     6,     8,    14,   130,
     137,   173,   174,   220,   226,   227,    90,   110,   117,   167,
     110,     8,   137,   138,   194,   196,   197,   149,   194,   194,
     196,    39,   131,   196,   196,   138,   194,   196,   196,   194,
     194,   194,   194,   138,   137,   137,   137,   138,   139,   141,
     123,     8,   194,   268,   137,   165,   162,   194,   149,   194,
     194,   194,   194,   194,   194,   194,   270,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,     5,    76,   134,
     194,   208,   208,   123,   123,    50,   130,     8,    44,    76,
     108,   130,   149,   173,   206,   207,    63,   100,   202,   100,
       8,   100,   149,   190,   191,    66,   117,   244,   245,   149,
     239,   240,   266,   149,   163,    26,   139,   271,   272,   137,
     214,    30,    30,    92,     5,     6,     8,   138,   173,   175,
     228,   139,   229,    24,    45,    59,   101,   254,     8,     4,
      24,    33,    41,    43,    52,    55,    60,    68,   116,   137,
     149,   168,   169,   170,   171,   172,   266,     8,    93,   153,
      47,   138,   139,   138,   138,   149,   138,   138,   138,   138,
     138,   138,   138,   139,   138,   139,   139,   138,   194,   194,
     199,   149,   173,   200,   144,   144,   157,   166,   167,   139,
      76,   137,     5,   206,     9,   209,    65,   202,   202,   123,
     139,     8,   149,   246,   247,   123,   139,   167,   123,   273,
      78,   182,   183,   275,    55,   149,   215,   216,   113,   149,
     149,   149,   138,   139,   138,   139,   220,   227,   230,   231,
     138,    98,    98,   137,   137,   137,   137,   137,   137,   137,
     137,   168,   120,    23,    56,    62,   123,   124,   125,   126,
     127,   128,   134,   138,   149,   197,   138,   194,   194,   194,
     123,    93,   160,    51,   176,     5,   175,   123,    86,    87,
      94,   252,     5,     8,   137,   149,   191,   123,   119,   137,
     173,   174,   240,   188,   173,   174,    26,   186,   138,   139,
     137,   217,   218,    24,    25,    45,    60,    64,    73,    74,
     101,   241,   173,     8,    18,   232,   139,     8,     8,   149,
     266,   131,   266,   138,   138,   266,     8,   138,   138,   168,
     173,   174,     9,   137,    76,   134,     8,   173,   174,     8,
     173,   174,   173,   174,   173,   174,   173,   174,   173,   174,
      56,   139,   154,    56,   138,   138,   139,   200,   161,   138,
       5,   177,   118,   180,   181,   138,   137,    32,   111,    86,
     149,   192,   193,   137,     8,   247,   138,   175,    84,   172,
     184,   185,   215,   137,   219,   220,    77,   139,   221,    67,
     149,   233,   220,   231,   138,   138,   138,   138,   138,   120,
     120,   175,    76,     9,   137,     5,    55,   149,   155,   156,
     138,   266,   137,    48,    78,   158,    26,    51,    54,   179,
     175,   123,   138,   139,     8,   138,   137,    19,    37,   139,
     138,   139,     3,   222,   223,   218,   173,   174,   173,   174,
     138,   175,   139,   138,   196,    26,    67,   159,   172,   178,
      78,   170,   182,   138,   173,   193,   138,   138,   185,   220,
     123,   139,   138,   156,   138,   184,     5,   139,    26,   186,
       8,   223,   139,   139,   172,   184,   188,   137,     5,   196,
     138,   138
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
	if (yyx+yyn<int(sizeof(yycheck)/sizeof(yycheck[0])) && yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
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

  case 81:

    { pParser->PushQuery(); ;}
    break;

  case 82:

    { pParser->PushQuery(); ;}
    break;

  case 83:

    { pParser->PushQuery(); ;}
    break;

  case 87:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by table argument
			pParser->ToString ( pParser->m_pStmt->m_sTableFunc, (yyvsp[(2) - (8)]) );
		;}
    break;

  case 89:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by subselect
		;}
    break;

  case 92:

    {
			pParser->ToString ( pParser->m_pStmt->m_dTableFuncArgs.Add(), (yyvsp[(1) - (1)]) );
		;}
    break;

  case 93:

    {
			pParser->ToString ( pParser->m_pStmt->m_dTableFuncArgs.Add(), (yyvsp[(3) - (3)]) );
		;}
    break;

  case 97:

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

  case 98:

    {
			pParser->ToString ( pParser->m_pQuery->m_sOuterOrderBy, (yyvsp[(3) - (3)]) );
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 100:

    {
			pParser->m_pQuery->m_iOuterLimit = (yyvsp[(2) - (2)]).m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 101:

    {
			pParser->m_pQuery->m_iOuterOffset = (yyvsp[(2) - (4)]).m_iValue;
			pParser->m_pQuery->m_iOuterLimit = (yyvsp[(4) - (4)]).m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 102:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->ToString ( pParser->m_pQuery->m_sIndexes, (yyvsp[(4) - (11)]) );
		;}
    break;

  case 105:

    { pParser->AddItem ( &(yyvsp[(1) - (1)]) ); ;}
    break;

  case 108:

    { pParser->AliasLastItem ( &(yyvsp[(1) - (1)]) ); ;}
    break;

  case 109:

    { pParser->AliasLastItem ( &(yyvsp[(2) - (2)]) ); ;}
    break;

  case 110:

    { pParser->AddItem ( &(yyvsp[(1) - (1)]) ); ;}
    break;

  case 111:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_AVG, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 112:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_MAX, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 113:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_MIN, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 114:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_SUM, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 115:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_CAT, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 116:

    { if ( !pParser->AddItem ( "count(*)", &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ) ) YYERROR; ;}
    break;

  case 117:

    { if ( !pParser->AddItem ( "groupby()", &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ) ) YYERROR; ;}
    break;

  case 118:

    { if ( !pParser->AddDistinct ( &(yyvsp[(4) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(5) - (5)]) ) ) YYERROR; ;}
    break;

  case 120:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 127:

    {
			if ( !pParser->SetMatch((yyvsp[(3) - (4)])) )
				YYERROR;
		;}
    break;

  case 129:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[(1) - (3)]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( (yyvsp[(3) - (3)]).m_iValue );
		;}
    break;

  case 130:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[(1) - (3)]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( (yyvsp[(3) - (3)]).m_iValue );
			pFilter->m_bExclude = true;
		;}
    break;

  case 131:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[(1) - (5)]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *(yyvsp[(4) - (5)]).m_pValues.Ptr();
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 132:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[(1) - (6)]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *(yyvsp[(5) - (6)]).m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 133:

    {
			if ( !pParser->AddUservarFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), false ) )
				YYERROR;
		;}
    break;

  case 134:

    {
			if ( !pParser->AddUservarFilter ( (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]), true ) )
				YYERROR;
		;}
    break;

  case 135:

    {
			if ( !pParser->AddIntRangeFilter ( (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]).m_iValue, (yyvsp[(5) - (5)]).m_iValue ) )
				YYERROR;
		;}
    break;

  case 136:

    {
			if ( !pParser->AddIntFilterGreater ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 137:

    {
			if ( !pParser->AddIntFilterLesser ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 138:

    {
			if ( !pParser->AddIntFilterGreater ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 139:

    {
			if ( !pParser->AddIntFilterLesser ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 140:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_fValue, (yyvsp[(3) - (3)]).m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 141:

    {
			yyerror ( pParser, "NEQ filter on floats is not (yet?) supported" );
			YYERROR;
		;}
    break;

  case 142:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]).m_fValue, (yyvsp[(5) - (5)]).m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 143:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]).m_iValue, (yyvsp[(5) - (5)]).m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 144:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]).m_fValue, (yyvsp[(5) - (5)]).m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 145:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_fValue, FLT_MAX, false ) )
				YYERROR;
		;}
    break;

  case 146:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), -FLT_MAX, (yyvsp[(3) - (3)]).m_fValue, false ) )
				YYERROR;
		;}
    break;

  case 147:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).m_fValue, FLT_MAX, true ) )
				YYERROR;
		;}
    break;

  case 148:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[(1) - (3)]), -FLT_MAX, (yyvsp[(3) - (3)]).m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 149:

    {
			if ( !pParser->AddStringFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), false ) )
				YYERROR;
		;}
    break;

  case 150:

    {
			if ( !pParser->AddStringFilter ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), true ) )
				YYERROR;
		;}
    break;

  case 151:

    {
			if ( !pParser->AddNullFilter ( (yyvsp[(1) - (3)]), true ) )
				YYERROR;
		;}
    break;

  case 152:

    {
			if ( !pParser->AddNullFilter ( (yyvsp[(1) - (4)]), false ) )
				YYERROR;
		;}
    break;

  case 155:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 156:

    {
			(yyval).m_iType = SPHINXQL_TOK_COUNT;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 157:

    {
			(yyval).m_iType = SPHINXQL_TOK_GROUPBY;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 158:

    {
			(yyval).m_iType = SPHINXQL_TOK_WEIGHT;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 159:

    {
			(yyval).m_iType = SPHINXQL_TOK_ID;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 165:

    { (yyval).m_iType = TOK_CONST_INT; (yyval).m_iValue = (yyvsp[(1) - (1)]).m_iValue; ;}
    break;

  case 166:

    {
			(yyval).m_iType = TOK_CONST_INT;
			if ( (uint64_t)(yyvsp[(2) - (2)]).m_iValue > (uint64_t)LLONG_MAX )
				(yyval).m_iValue = LLONG_MIN;
			else
				(yyval).m_iValue = -(yyvsp[(2) - (2)]).m_iValue;
		;}
    break;

  case 167:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = (yyvsp[(1) - (1)]).m_fValue; ;}
    break;

  case 168:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = -(yyvsp[(2) - (2)]).m_fValue; ;}
    break;

  case 169:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = (yyvsp[(1) - (1)]).m_fValue; ;}
    break;

  case 170:

    {
			assert ( !(yyval).m_pValues.Ptr() );
			(yyval).m_pValues = new RefcountedVector_c<SphAttr_t> ();
			(yyval).m_pValues->Add ( (yyvsp[(1) - (1)]).m_iValue ); 
		;}
    break;

  case 171:

    {
			(yyval).m_pValues->Add ( (yyvsp[(3) - (3)]).m_iValue );
		;}
    break;

  case 175:

    {
			pParser->SetGroupbyLimit ( (yyvsp[(1) - (1)]).m_iValue );
		;}
    break;

  case 176:

    {
			pParser->AddGroupBy ( (yyvsp[(1) - (1)]) );
		;}
    break;

  case 177:

    {
			pParser->AddGroupBy ( (yyvsp[(3) - (3)]) );
		;}
    break;

  case 179:

    {
			pParser->AddHaving();
		;}
    break;

  case 182:

    {
			if ( pParser->m_pQuery->m_sGroupBy.IsEmpty() )
			{
				yyerror ( pParser, "you must specify GROUP BY element in order to use WITHIN GROUP ORDER BY clause" );
				YYERROR;
			}
			pParser->ToString ( pParser->m_pQuery->m_sSortBy, (yyvsp[(5) - (5)]) );
		;}
    break;

  case 185:

    {
			pParser->ToString ( pParser->m_pQuery->m_sOrderBy, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 186:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 188:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 190:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) ); ;}
    break;

  case 191:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) ); ;}
    break;

  case 194:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = (yyvsp[(2) - (2)]).m_iValue;
		;}
    break;

  case 195:

    {
			pParser->m_pQuery->m_iOffset = (yyvsp[(2) - (4)]).m_iValue;
			pParser->m_pQuery->m_iLimit = (yyvsp[(4) - (4)]).m_iValue;
		;}
    break;

  case 201:

    {
			if ( !pParser->AddOption ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ) )
				YYERROR;
		;}
    break;

  case 202:

    {
			if ( !pParser->AddOption ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ) )
				YYERROR;
		;}
    break;

  case 203:

    {
			if ( !pParser->AddOption ( (yyvsp[(1) - (5)]), pParser->GetNamedVec ( (yyvsp[(4) - (5)].m_iValue) ) ) )
				YYERROR;
			pParser->FreeNamedVec ( (yyvsp[(4) - (5)].m_iValue) );
		;}
    break;

  case 204:

    {
			if ( !pParser->AddOption ( (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]) ) )
				YYERROR;
		;}
    break;

  case 205:

    {
			if ( !pParser->AddOption ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ) )
				YYERROR;
		;}
    break;

  case 206:

    {
			(yyval.m_iValue) = pParser->AllocNamedVec ();
			pParser->AddConst ( (yyval.m_iValue), (yyvsp[(1) - (1)]) );
		;}
    break;

  case 207:

    {
			pParser->AddConst( (yyval.m_iValue), (yyvsp[(3) - (3)]) );
		;}
    break;

  case 208:

    {
			(yyval) = (yyvsp[(1) - (3)]);
			(yyval).m_iValue = (yyvsp[(3) - (3)]).m_iValue;
		;}
    break;

  case 210:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 211:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 216:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) ); ;}
    break;

  case 217:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) ); ;}
    break;

  case 218:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 219:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 220:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 221:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 222:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 223:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 224:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 225:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 226:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 227:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 228:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 229:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 230:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 231:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 232:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 233:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 234:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 235:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 236:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 240:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 241:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 242:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 243:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 244:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 245:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 246:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 247:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]) ); ;}
    break;

  case 248:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 249:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (6)]), (yyvsp[(6) - (6)]) ); ;}
    break;

  case 250:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (6)]), (yyvsp[(6) - (6)]) ); ;}
    break;

  case 251:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 252:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (8)]), (yyvsp[(8) - (8)]) ); ;}
    break;

  case 253:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (14)]), (yyvsp[(14) - (14)]) ); ;}
    break;

  case 258:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 259:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (5)]), (yyvsp[(5) - (5)]) ); ;}
    break;

  case 266:

    { pParser->ToStringUnescape ( pParser->m_pStmt->m_sStringParam, (yyvsp[(2) - (2)]) ); ;}
    break;

  case 267:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 268:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 269:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 270:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS; ;}
    break;

  case 271:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PROFILE; ;}
    break;

  case 272:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLAN; ;}
    break;

  case 273:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLUGINS; ;}
    break;

  case 274:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_THREADS; ;}
    break;

  case 275:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->ToStringUnescape ( pParser->m_pStmt->m_sIndex, (yyvsp[(2) - (4)]) );
		;}
    break;

  case 276:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(2) - (4)]) );
		;}
    break;

  case 277:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_STATUS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(2) - (3)]) );
		;}
    break;

  case 278:

    {
			pParser->SetStatement ( (yyvsp[(2) - (4)]), SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = (yyvsp[(4) - (4)]).m_iValue;
		;}
    break;

  case 279:

    {
			pParser->SetStatement ( (yyvsp[(2) - (4)]), SET_LOCAL );
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, (yyvsp[(4) - (4)]) );
		;}
    break;

  case 280:

    {
			pParser->SetStatement ( (yyvsp[(2) - (4)]), SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 281:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 282:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 283:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 284:

    {
			pParser->SetStatement ( (yyvsp[(3) - (7)]), SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *(yyvsp[(6) - (7)]).m_pValues.Ptr();
		;}
    break;

  case 285:

    {
			pParser->SetStatement ( (yyvsp[(3) - (5)]), SET_GLOBAL_SVAR );
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, (yyvsp[(5) - (5)]) ).Unquote();
		;}
    break;

  case 286:

    {
			pParser->SetStatement ( (yyvsp[(3) - (5)]), SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_iSetValue = (yyvsp[(5) - (5)]).m_iValue;
		;}
    break;

  case 287:

    {
			pParser->SetStatement ( (yyvsp[(5) - (9)]), SET_INDEX_UVAR );
			pParser->m_pStmt->m_dSetValues = *(yyvsp[(8) - (9)]).m_pValues.Ptr();
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(3) - (9)]) );
		;}
    break;

  case 290:

    { (yyval).m_iValue = 1; ;}
    break;

  case 291:

    { (yyval).m_iValue = 0; ;}
    break;

  case 292:

    {
			(yyval).m_iValue = (yyvsp[(1) - (1)]).m_iValue;
			if ( (yyval).m_iValue!=0 && (yyval).m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 300:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 301:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 302:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 305:

    {
			// everything else is pushed directly into parser within the rules
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(3) - (7)]) );
		;}
    break;

  case 306:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 307:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 312:

    { if ( !pParser->AddSchemaItem ( &(yyvsp[(1) - (1)]) ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 313:

    { if ( !pParser->AddSchemaItem ( &(yyvsp[(3) - (3)]) ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 316:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 317:

    { AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[(1) - (1)]) ); ;}
    break;

  case 318:

    { AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[(3) - (3)]) ); ;}
    break;

  case 319:

    { (yyval).m_iType = TOK_CONST_INT; (yyval).m_iValue = (yyvsp[(1) - (1)]).m_iValue; ;}
    break;

  case 320:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = (yyvsp[(1) - (1)]).m_fValue; ;}
    break;

  case 321:

    { (yyval).m_iType = TOK_QUOTED_STRING; (yyval).m_iStart = (yyvsp[(1) - (1)]).m_iStart; (yyval).m_iEnd = (yyvsp[(1) - (1)]).m_iEnd; ;}
    break;

  case 322:

    { (yyval).m_iType = TOK_CONST_MVA; (yyval).m_pValues = (yyvsp[(2) - (3)]).m_pValues; ;}
    break;

  case 323:

    { (yyval).m_iType = TOK_CONST_MVA; ;}
    break;

  case 328:

    { if ( !pParser->AddInsertOption ( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ) ) YYERROR; ;}
    break;

  case 329:

    {
		if ( !pParser->DeleteStatement ( &(yyvsp[(3) - (4)]) ) )
			YYERROR;
	;}
    break;

  case 330:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->ToString ( pParser->m_pStmt->m_sCallProc, (yyvsp[(2) - (6)]) );
		;}
    break;

  case 331:

    {
			AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[(1) - (1)]) );
		;}
    break;

  case 332:

    {
			AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 334:

    {
			(yyval).m_iType = TOK_CONST_STRINGS;
		;}
    break;

  case 335:

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

  case 336:

    {
			pParser->ToStringUnescape ( pParser->m_pStmt->m_dCallStrings.Add(), (yyvsp[(3) - (3)]) );
		;}
    break;

  case 339:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 341:

    {
			pParser->ToString ( pParser->m_pStmt->m_dCallOptNames.Add(), (yyvsp[(3) - (3)]) );
			AddInsval ( pParser, pParser->m_pStmt->m_dCallOptValues, (yyvsp[(1) - (3)]) );
		;}
    break;

  case 346:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESCRIBE;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[(2) - (3)]) );
		;}
    break;

  case 349:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 350:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_DATABASES; ;}
    break;

  case 351:

    {
			if ( !pParser->UpdateStatement ( &(yyvsp[(2) - (6)]) ) )
				YYERROR;
		;}
    break;

  case 354:

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

  case 355:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( sphF2DW ( (yyvsp[(3) - (3)]).m_fValue ) );
			pParser->AddUpdatedAttr ( (yyvsp[(1) - (3)]), SPH_ATTR_FLOAT );
		;}
    break;

  case 356:

    {
			pParser->UpdateMVAAttr ( (yyvsp[(1) - (5)]), (yyvsp[(4) - (5)]) );
		;}
    break;

  case 357:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( (yyvsp[(1) - (4)]), tNoValues );
		;}
    break;

  case 358:

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

  case 359:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( sphF2DW ( (yyvsp[(3) - (3)]).m_fValue ) );
			pParser->AddUpdatedAttr ( (yyvsp[(1) - (3)]), SPH_ATTR_FLOAT );
		;}
    break;

  case 360:

    { (yyval).m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 361:

    { (yyval).m_iValue = SPH_ATTR_BIGINT; ;}
    break;

  case 362:

    { (yyval).m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 363:

    { (yyval).m_iValue = SPH_ATTR_BOOL; ;}
    break;

  case 364:

    { (yyval).m_iValue = SPH_ATTR_UINT32SET; ;}
    break;

  case 365:

    { (yyval).m_iValue = SPH_ATTR_INT64SET; ;}
    break;

  case 366:

    { (yyval).m_iValue = SPH_ATTR_JSON; ;}
    break;

  case 367:

    { (yyval).m_iValue = SPH_ATTR_STRING; ;}
    break;

  case 368:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_ADD;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (7)]) );
			pParser->ToString ( tStmt.m_sAlterAttr, (yyvsp[(6) - (7)]) );
			tStmt.m_eAlterColType = (ESphAttr)(yyvsp[(7) - (7)]).m_iValue;
		;}
    break;

  case 369:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_DROP;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (6)]) );
			pParser->ToString ( tStmt.m_sAlterAttr, (yyvsp[(6) - (6)]) );
		;}
    break;

  case 370:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 371:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
			pParser->ToStringUnescape ( pParser->m_pStmt->m_sStringParam, (yyvsp[(5) - (5)]) );
		;}
    break;

  case 378:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_COLLATION;
		;}
    break;

  case 379:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CHARACTER_SET;
		;}
    break;

  case 380:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 388:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNCTION;
			pParser->ToString ( tStmt.m_sUdfName, (yyvsp[(3) - (7)]) );
			pParser->ToStringUnescape ( tStmt.m_sUdfLib, (yyvsp[(7) - (7)]) );
			tStmt.m_eUdfType = (ESphAttr) (yyvsp[(5) - (7)].m_iValue);
		;}
    break;

  case 389:

    { (yyval.m_iValue) = SPH_ATTR_INTEGER; ;}
    break;

  case 390:

    { (yyval.m_iValue) = SPH_ATTR_BIGINT; ;}
    break;

  case 391:

    { (yyval.m_iValue) = SPH_ATTR_FLOAT; ;}
    break;

  case 392:

    { (yyval.m_iValue) = SPH_ATTR_STRINGPTR; ;}
    break;

  case 393:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNCTION;
			pParser->ToString ( tStmt.m_sUdfName, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 394:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (6)]) );
			pParser->ToString ( tStmt.m_sStringParam, (yyvsp[(6) - (6)]) );
		;}
    break;

  case 395:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 396:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RAMCHUNK;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 397:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_SYSVAR;
			pParser->ToString ( pParser->m_pStmt->m_tQuery.m_sQuery, (yyvsp[(2) - (3)]) );
		;}
    break;

  case 400:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_DUAL;
			pParser->ToString ( pParser->m_pStmt->m_tQuery.m_sQuery, (yyvsp[(2) - (2)]) );
		;}
    break;

  case 401:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_TRUNCATE_RTINDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 402:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_OPTIMIZE_INDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[(3) - (3)]) );
		;}
    break;

  case 403:

    {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_CREATE_PLUGIN;
			pParser->ToString ( s.m_sUdfName, (yyvsp[(3) - (7)]) );
			pParser->ToStringUnescape ( s.m_sStringParam, (yyvsp[(5) - (7)]) );
			pParser->ToStringUnescape ( s.m_sUdfLib, (yyvsp[(7) - (7)]) );
		;}
    break;

  case 404:

    {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_DROP_PLUGIN;
			pParser->ToString ( s.m_sUdfName, (yyvsp[(3) - (5)]) );
			pParser->ToStringUnescape ( s.m_sStringParam, (yyvsp[(5) - (5)]) );
		;}
    break;

  case 405:

    { (yyval) = (yyvsp[(1) - (2)]); (yyval).m_iEnd = (yyvsp[(2) - (2)]).m_iEnd; ;}
    break;

  case 407:

    { (yyval) = (yyvsp[(1) - (2)]); (yyval).m_iEnd = (yyvsp[(2) - (2)]).m_iEnd; ;}
    break;

  case 408:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).m_iEnd = (yyvsp[(1) - (1)]).m_iEnd; ;}
    break;

  case 409:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).m_iEnd = (yyvsp[(1) - (1)]).m_iEnd; ;}
    break;

  case 410:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 411:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 412:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 413:

    { TRACK_BOUNDS ( (yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) ); ;}
    break;

  case 417:

    {
			pParser->m_pQuery->m_sFacetBy = pParser->m_pQuery->m_sGroupBy;
			pParser->m_pQuery->m_sGroupBy = "";
			pParser->AddCount ();
		;}
    break;

  case 419:

    {
			pParser->AddItem ( &(yyvsp[(1) - (1)]) );
			pParser->AddGroupBy ( (yyvsp[(1) - (1)]) );
		;}
    break;

  case 422:

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

