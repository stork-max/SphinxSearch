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
     SEL_TOKEN = 258,
     SEL_ID = 259,
     SEL_AS = 260,
     SEL_AVG = 261,
     SEL_MAX = 262,
     SEL_MIN = 263,
     SEL_SUM = 264,
     SEL_GROUP_CONCAT = 265,
     SEL_GROUPBY = 266,
     SEL_COUNT = 267,
     SEL_WEIGHT = 268,
     SEL_DISTINCT = 269,
     SEL_OPTION = 270,
     SEL_COMMENT_OPEN = 271,
     SEL_COMMENT_CLOSE = 272,
     TOK_DIV = 273,
     TOK_MOD = 274,
     TOK_NEG = 275,
     TOK_LTE = 276,
     TOK_GTE = 277,
     TOK_EQ = 278,
     TOK_NE = 279,
     TOK_CONST_STRING = 280,
     TOK_OR = 281,
     TOK_AND = 282,
     TOK_NOT = 283,
     TOK_IS = 284,
     TOK_NULL = 285,
     TOK_FOR = 286,
     TOK_FUNC_IN = 287
   };
#endif
/* Tokens.  */
#define SEL_TOKEN 258
#define SEL_ID 259
#define SEL_AS 260
#define SEL_AVG 261
#define SEL_MAX 262
#define SEL_MIN 263
#define SEL_SUM 264
#define SEL_GROUP_CONCAT 265
#define SEL_GROUPBY 266
#define SEL_COUNT 267
#define SEL_WEIGHT 268
#define SEL_DISTINCT 269
#define SEL_OPTION 270
#define SEL_COMMENT_OPEN 271
#define SEL_COMMENT_CLOSE 272
#define TOK_DIV 273
#define TOK_MOD 274
#define TOK_NEG 275
#define TOK_LTE 276
#define TOK_GTE 277
#define TOK_EQ 278
#define TOK_NE 279
#define TOK_CONST_STRING 280
#define TOK_OR 281
#define TOK_AND 282
#define TOK_NOT 283
#define TOK_IS 284
#define TOK_NULL 285
#define TOK_FOR 286
#define TOK_FUNC_IN 287




/* Copy the first part of user declarations.  */


#if USE_WINDOWS
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif


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
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   818

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,    29,     2,
      43,    44,    34,    32,    42,    33,    48,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,     2,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,    45,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,    28,    47,     2,     2,     2,     2,
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
      25,    26,    27,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    16,    18,    21,
      22,    24,    27,    29,    34,    39,    44,    49,    54,    58,
      63,    69,    71,    75,    78,    81,    85,    89,    93,    97,
     101,   105,   109,   113,   117,   121,   125,   129,   133,   137,
     141,   145,   149,   153,   157,   159,   161,   165,   170,   174,
     176,   178,   183,   187,   194,   201,   205,   211,   216,   218,
     222,   226,   232,   234,   236,   238,   240,   247,   249,   251,
     254,   256,   259,   261,   263,   265,   267,   269,   271,   273,
     275,   277,   279,   281,   283,   285,   287,   289,   291,   293,
     295,   297,   299,   301,   303,   305,   307,   310,   314,   318
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    53,    64,    -1,    64,    -1,
      54,    -1,    53,    42,    54,    -1,    34,    -1,    56,    55,
      -1,    -1,     3,    -1,     5,     3,    -1,    57,    -1,     6,
      43,    57,    44,    -1,     7,    43,    57,    44,    -1,     8,
      43,    57,    44,    -1,     9,    43,    57,    44,    -1,    10,
      43,    57,    44,    -1,    11,    43,    44,    -1,    12,    43,
      34,    44,    -1,    12,    43,    14,     3,    44,    -1,    58,
      -1,    45,    58,    45,    -1,    33,    57,    -1,    37,    57,
      -1,    57,    32,    57,    -1,    57,    33,    57,    -1,    57,
      34,    57,    -1,    57,    35,    57,    -1,    57,    30,    57,
      -1,    57,    31,    57,    -1,    57,    29,    57,    -1,    57,
      28,    57,    -1,    57,    36,    57,    -1,    57,    18,    57,
      -1,    57,    19,    57,    -1,    57,    21,    57,    -1,    57,
      22,    57,    -1,    57,    23,    57,    -1,    57,    24,    57,
      -1,    57,    27,    57,    -1,    57,    26,    57,    -1,    43,
      57,    44,    -1,    46,    61,    47,    -1,    59,    -1,    66,
      -1,    65,    38,    39,    -1,    65,    38,    37,    39,    -1,
      57,    23,    25,    -1,     4,    -1,     3,    -1,     3,    43,
      60,    44,    -1,     3,    43,    44,    -1,     8,    43,    57,
      42,    57,    44,    -1,     7,    43,    57,    42,    57,    44,
      -1,    13,    43,    44,    -1,     3,    43,    57,    70,    44,
      -1,    41,    43,    60,    44,    -1,    63,    -1,    60,    42,
      63,    -1,    62,    23,     3,    -1,    61,    42,    62,    23,
       3,    -1,     3,    -1,    41,    -1,    57,    -1,    25,    -1,
      16,    15,     3,    23,     3,    17,    -1,    66,    -1,    68,
      -1,     3,    67,    -1,    69,    -1,    67,    69,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    14,    -1,    15,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,    26,
      -1,    27,    -1,    37,    -1,    39,    -1,    48,    68,    -1,
      49,    57,    50,    -1,    49,    25,    50,    -1,    40,    68,
      41,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    58,    59,    63,    64,    68,    69,    71,
      73,    74,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   123,
     124,   128,   129,   130,   131,   132,   133,   134,   138,   139,
     143,   144,   148,   149,   153,   154,   158,   165,   166,   170,
     174,   175,   179,   180,   180,   180,   180,   180,   180,   180,
     181,   181,   181,   181,   181,   181,   182,   182,   182,   182,
     182,   182,   182,   182,   183,   183,   187,   188,   189,   193
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEL_TOKEN", "SEL_ID", "SEL_AS",
  "SEL_AVG", "SEL_MAX", "SEL_MIN", "SEL_SUM", "SEL_GROUP_CONCAT",
  "SEL_GROUPBY", "SEL_COUNT", "SEL_WEIGHT", "SEL_DISTINCT", "SEL_OPTION",
  "SEL_COMMENT_OPEN", "SEL_COMMENT_CLOSE", "TOK_DIV", "TOK_MOD", "TOK_NEG",
  "TOK_LTE", "TOK_GTE", "TOK_EQ", "TOK_NE", "TOK_CONST_STRING", "TOK_OR",
  "TOK_AND", "'|'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "TOK_NOT", "TOK_IS", "TOK_NULL", "TOK_FOR", "TOK_FUNC_IN", "','", "'('",
  "')'", "'`'", "'{'", "'}'", "'.'", "'['", "']'", "$accept", "select",
  "select_list", "select_item", "opt_alias", "select_expr", "expr",
  "select_atom", "function", "arglist", "consthash", "hash_key", "arg",
  "comment", "json_field", "json_expr", "subscript", "ident", "subkey",
  "for_loop", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   124,    38,
      60,    62,    43,    45,    42,    47,    37,   283,   284,   285,
     286,   287,    44,    40,    41,    96,   123,   125,    46,    91,
      93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    53,    53,    54,    54,    55,
      55,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    65,    65,    66,
      67,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     1,     2,     0,
       1,     2,     1,     4,     4,     4,     4,     4,     3,     4,
       5,     1,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     4,     3,     1,
       1,     4,     3,     6,     6,     3,     5,     4,     1,     3,
       3,     5,     1,     1,     1,     1,     6,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    50,    49,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,     0,    85,    86,    87,    88,    89,
      90,    91,    92,    93,     0,     7,    94,    95,     0,     0,
       0,     0,     0,     2,     5,     9,    12,    21,    44,     4,
       0,    45,    68,     0,     0,     0,    69,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    23,    24,     0,     0,    50,    49,
       0,    62,    63,     0,     0,     1,     0,     3,    10,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      52,    64,     0,    58,    72,    73,    76,    77,    82,    94,
      96,     0,     0,    71,     0,     0,     0,     0,     0,    18,
       0,     0,    55,     0,     0,     0,    64,     0,    42,    22,
       0,    43,     0,     6,    11,    34,    35,    36,    37,    48,
      38,    39,    41,    40,    32,    31,    29,    30,    25,    26,
      27,    28,    33,     0,    46,     0,     0,     0,    51,    98,
      97,    13,     0,    14,     0,    15,    16,    17,     0,    19,
       0,     0,     0,    57,     0,    60,    47,     0,    56,    59,
       0,     0,    20,     0,     0,     0,    54,    53,    66,    61,
      72,    99,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    80,    35,    36,    37,    38,   102,
      73,    74,   103,    39,    40,    41,    46,    42,    47,   156
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -44
static const yytype_int16 yypact[] =
{
      72,   -31,   -15,   -44,    -7,    31,    46,    61,    67,    71,
      73,    76,   -44,   -44,    82,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   358,   -44,   358,   -44,    77,   358,
      10,     0,   126,   -12,   -44,     5,   718,   -44,   -44,   -44,
      90,    91,   -44,   138,   402,   182,    54,   -44,   358,   358,
     358,   358,   358,    83,    -5,    86,   128,   -44,    92,    93,
     -44,   -44,   -44,   -44,   -44,   -44,   226,   540,   -44,   -44,
      87,   -44,   -44,   -36,   111,   -44,   270,   -44,   -44,   134,
     -44,   358,   358,   358,   358,   314,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   -17,   -44,
     -44,   698,    11,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   104,   461,   -44,   559,   486,   513,   578,   597,   -44,
     136,   122,   -44,   132,   358,   358,   718,    12,   -44,   -44,
       0,   -44,   164,   -44,   -44,   -44,   -44,    89,    89,   -44,
     782,   782,    16,   737,   756,   775,    89,    89,    -3,    -3,
     -44,   -44,   -44,   129,   -44,   402,   125,   226,   -44,   -44,
     -44,   -44,   358,   -44,   358,   -44,   -44,   -44,   130,   -44,
     167,   654,   676,   -44,   149,   -44,   -44,   135,   -44,   -44,
     616,   635,   -44,   156,   175,   439,   -44,   -44,   -44,   -44,
      54,   -44,   -44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   -44,   123,   -44,   -44,   -24,   150,   -44,   144,
     -44,    68,    55,   178,    28,    29,   -44,   -43,   170,   -44
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -74
static const yytype_int16 yytable[] =
{
      64,   110,    65,    71,    14,    67,   130,   -72,    78,   120,
      79,   131,    43,    68,    69,    81,    82,    44,    45,   101,
     153,   112,   154,   -73,   114,   115,   116,   117,   118,   121,
      76,    95,    96,    97,    81,    82,    48,    83,    84,    85,
      86,    72,   126,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   157,   157,   158,   173,   135,   136,   137,
     138,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    49,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    50,
      15,    16,    17,    18,    19,    20,    21,    56,    22,    23,
     171,   172,    44,    45,    51,    24,    25,    81,    82,    26,
      52,    27,   177,    28,    53,    29,    54,    30,    31,    55,
      66,    93,    94,    95,    96,    97,    75,   119,    98,   -67,
     122,   123,   129,   126,   132,   124,   125,   134,   180,   168,
     181,     1,     2,     3,    57,    58,    59,    60,    61,    62,
      63,    11,    12,    13,   159,   170,    15,    16,    17,    18,
      19,    20,    21,    99,    22,    23,   169,   175,   176,   178,
     183,    24,   184,   188,   182,    26,   185,    27,   189,    28,
      70,    29,   100,    30,    31,     1,     2,     3,    57,    58,
      59,    60,    61,    62,    63,    11,    12,    13,   174,   133,
      15,    16,    17,    18,    19,    20,    21,   111,    22,    23,
     127,    77,   179,   191,   192,    24,   113,     0,     0,    26,
       0,    27,     0,    28,     0,    29,     0,    30,    31,     1,
       2,     3,    57,    58,    59,    60,    61,    62,    63,    11,
      12,    13,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    99,    22,    23,     0,     0,     0,     0,     0,    24,
       0,     0,     0,    26,     0,    27,     0,    28,     0,    29,
       0,    30,    31,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,    15,    16,
      17,    18,    19,    20,    21,     0,    22,    23,     0,     0,
       0,     0,     0,    24,    25,     0,     0,    26,     0,    27,
       0,    28,     0,    29,     0,    30,    31,     1,     2,     3,
      57,    58,    59,    60,    61,    62,    63,    11,    12,    13,
       0,     0,    15,    16,    17,    18,    19,    20,    21,   139,
      22,    23,     0,     0,     0,     0,     0,    24,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    29,     0,    30,
      31,     1,     2,     3,    57,    58,    59,    60,    61,    62,
      63,    11,    12,    13,     0,     0,    15,    16,    17,    18,
      19,    20,    21,     0,    22,    23,     0,     0,     0,     0,
       0,    24,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    29,     0,    30,    31,   104,   105,     3,    57,   106,
     107,    60,    61,    62,    63,   108,    12,    13,     0,     0,
      15,    16,    17,    18,    19,    20,    21,     0,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
       0,    27,   190,   105,     3,    57,   106,   107,    60,    61,
      62,    63,   108,    12,    13,     0,     0,    15,    16,    17,
      18,    19,    20,    21,     0,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,     0,    27,    81,
      82,     0,    83,    84,    85,    86,     0,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,     0,     0,
       0,     0,     0,     0,    81,    82,     0,    83,    84,    85,
      86,   160,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,     0,   162,     0,
     163,    81,    82,     0,    83,    84,    85,    86,     0,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,     0,   164,     0,   165,    81,    82,
       0,    83,    84,    85,    86,     0,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    81,    82,     0,
      83,    84,    85,    86,   128,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    81,    82,     0,    83,
      84,    85,    86,   161,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    81,    82,     0,    83,    84,
      85,    86,   166,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    81,    82,     0,    83,    84,    85,
      86,   167,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    81,    82,     0,    83,    84,    85,    86,
     186,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    81,    82,     0,    83,    84,    85,    86,   187,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     0,     0,     0,    81,    82,   162,    83,    84,    85,
      86,     0,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,     0,    81,    82,   164,    83,
      84,    85,    86,     0,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     0,    81,    82,   155,    83,
      84,    85,    86,     0,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    81,    82,     0,    83,    84,
      85,    86,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    81,    82,     0,    83,    84,    85,
      86,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    81,    82,     0,    83,    84,    85,    86,
      81,    82,     0,    83,    84,    91,    92,    93,    94,    95,
      96,    97,    91,    92,    93,    94,    95,    96,    97
};

static const yytype_int16 yycheck[] =
{
      24,    44,    26,     3,    16,    29,    42,    38,     3,    14,
       5,    47,    43,     3,     4,    18,    19,    48,    49,    43,
      37,    45,    39,    38,    48,    49,    50,    51,    52,    34,
      42,    34,    35,    36,    18,    19,    43,    21,    22,    23,
      24,    41,    66,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    42,    42,    44,    44,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    43,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    43,
      18,    19,    20,    21,    22,    23,    24,    15,    26,    27,
     124,   125,    48,    49,    43,    33,    34,    18,    19,    37,
      43,    39,   155,    41,    43,    43,    43,    45,    46,    43,
      43,    32,    33,    34,    35,    36,     0,    44,    38,    38,
      44,     3,    45,   157,    23,    43,    43,     3,   162,     3,
     164,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    50,    23,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    44,     3,    39,    44,
       3,    33,    23,    17,    44,    37,    41,    39,     3,    41,
      30,    43,    44,    45,    46,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,   130,    76,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      66,    33,   157,   185,   185,    33,    46,    -1,    -1,    37,
      -1,    39,    -1,    41,    -1,    43,    -1,    45,    46,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    46,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,    39,
      -1,    41,    -1,    43,    -1,    45,    46,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      46,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    37,    -1,    39,    -1,    41,
      -1,    43,    -1,    45,    46,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    18,
      19,    -1,    21,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      24,    50,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    18,    19,    -1,    21,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    18,    19,
      -1,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    18,    19,    -1,
      21,    22,    23,    24,    44,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    18,    19,    -1,    21,
      22,    23,    24,    44,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    18,    19,    -1,    21,    22,
      23,    24,    44,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    18,    19,    -1,    21,    22,    23,
      24,    44,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    18,    19,    -1,    21,    22,    23,    24,
      44,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    18,    19,    -1,    21,    22,    23,    24,    44,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    18,    19,    42,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    18,    19,    42,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    18,    19,    40,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    18,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    18,    19,    -1,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    18,    19,    -1,    21,    22,    23,    24,
      18,    19,    -1,    21,    22,    30,    31,    32,    33,    34,
      35,    36,    30,    31,    32,    33,    34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    20,    21,    22,
      23,    24,    26,    27,    33,    34,    37,    39,    41,    43,
      45,    46,    52,    53,    54,    56,    57,    58,    59,    64,
      65,    66,    68,    43,    48,    49,    67,    69,    43,    43,
      43,    43,    43,    43,    43,    43,    15,     6,     7,     8,
       9,    10,    11,    12,    57,    57,    43,    57,     3,     4,
      58,     3,    41,    61,    62,     0,    42,    64,     3,     5,
      55,    18,    19,    21,    22,    23,    24,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    38,    25,
      44,    57,    60,    63,     3,     4,     7,     8,    13,    37,
      68,    25,    57,    69,    57,    57,    57,    57,    57,    44,
      14,    34,    44,     3,    43,    43,    57,    60,    44,    45,
      42,    47,    23,    54,     3,    57,    57,    57,    57,    25,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    37,    39,    40,    70,    42,    44,    50,
      50,    44,    42,    44,    42,    44,    44,    44,     3,    44,
      23,    57,    57,    44,    62,     3,    39,    68,    44,    63,
      57,    57,    44,     3,    23,    41,    44,    44,    17,     3,
       3,    65,    66
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, SelectParser_t * pParser)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, pParser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    SelectParser_t * pParser;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, SelectParser_t * pParser)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, pParser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    SelectParser_t * pParser;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, SelectParser_t * pParser)
#else
static void
yy_reduce_print (yyvsp, yyrule, pParser)
    YYSTYPE *yyvsp;
    int yyrule;
    SelectParser_t * pParser;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, SelectParser_t * pParser)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, pParser)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    SelectParser_t * pParser;
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
int yyparse (SelectParser_t * pParser);
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
yyparse (SelectParser_t * pParser)
#else
int
yyparse (pParser)
    SelectParser_t * pParser;
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
        case 7:

    { pParser->AddItem ( &(yyvsp[(1) - (1)]) ); ;}
    break;

  case 10:

    { pParser->AliasLastItem ( &(yyvsp[(1) - (1)]) ); ;}
    break;

  case 11:

    { pParser->AliasLastItem ( &(yyvsp[(2) - (2)]) ); ;}
    break;

  case 12:

    { pParser->AddItem ( &(yyvsp[(1) - (1)]) ); ;}
    break;

  case 13:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_AVG, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 14:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_MAX, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 15:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_MIN, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 16:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_SUM, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 17:

    { pParser->AddItem ( &(yyvsp[(3) - (4)]), SPH_AGGR_CAT, &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 18:

    { pParser->AddItem ( "groupby()", &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); ;}
    break;

  case 19:

    { pParser->AddItem ( "count(*)", &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); ;}
    break;

  case 20:

    { pParser->AddItem ( "@distinct", &(yyvsp[(1) - (5)]), &(yyvsp[(5) - (5)]) ); ;}
    break;

  case 22:

    { (yyval) = (yyvsp[(2) - (3)]); (yyval).m_iEnd = (yyvsp[(2) - (3)]).m_iEnd; ;}
    break;

  case 23:

    { (yyval) = (yyvsp[(1) - (2)]); (yyval).m_iEnd = (yyvsp[(2) - (2)]).m_iEnd; ;}
    break;

  case 24:

    { (yyval) = (yyvsp[(1) - (2)]); (yyval).m_iEnd = (yyvsp[(2) - (2)]).m_iEnd; ;}
    break;

  case 25:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 26:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 27:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 28:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 29:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 30:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 31:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 32:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 33:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 34:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 35:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 36:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 37:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 38:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 39:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 40:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 41:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 42:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 43:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 46:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 47:

    { (yyval) = (yyvsp[(1) - (4)]); (yyval).m_iEnd = (yyvsp[(4) - (4)]).m_iEnd; ;}
    break;

  case 48:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 51:

    { (yyval) = (yyvsp[(1) - (4)]); (yyval).m_iEnd = (yyvsp[(4) - (4)]).m_iEnd; ;}
    break;

  case 52:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 53:

    { (yyval) = (yyvsp[(1) - (6)]); (yyval).m_iEnd = (yyvsp[(6) - (6)]).m_iEnd; ;}
    break;

  case 54:

    { (yyval) = (yyvsp[(1) - (6)]); (yyval).m_iEnd = (yyvsp[(6) - (6)]).m_iEnd; ;}
    break;

  case 55:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 56:

    { (yyval) = (yyvsp[(1) - (5)]); (yyval).m_iEnd = (yyvsp[(5) - (5)]).m_iEnd; ;}
    break;

  case 57:

    { (yyval) = (yyvsp[(1) - (4)]); (yyval).m_iEnd = (yyvsp[(4) - (4)]).m_iEnd; ;}
    break;

  case 66:

    {
			pParser->AddOption ( &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]) );
		;}
    break;

  case 69:

    { (yyval) = (yyvsp[(1) - (2)]); (yyval).m_iEnd = (yyvsp[(2) - (2)]).m_iEnd; ;}
    break;

  case 71:

    { (yyval) = (yyvsp[(1) - (2)]); (yyval).m_iEnd = (yyvsp[(2) - (2)]).m_iEnd; ;}
    break;

  case 96:

    { (yyval) = (yyvsp[(1) - (2)]); (yyval).m_iEnd = (yyvsp[(2) - (2)]).m_iEnd; ;}
    break;

  case 97:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 98:

    { (yyval) = (yyvsp[(1) - (3)]); (yyval).m_iEnd = (yyvsp[(3) - (3)]).m_iEnd; ;}
    break;

  case 99:

    { (yyval) = (yyvsp[(1) - (4)]); (yyval).m_iEnd = (yyvsp[(4) - (4)]).m_iEnd; ;}
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

