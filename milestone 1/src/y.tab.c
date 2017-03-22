/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "grammar.y" /* yacc.c:339  */


#define NOTHING -1

#include "info.h"
#include <stdio.h>
#include <stdlib.h>

#define SYMTABSIZE 50
#define IDLENGTH 15
#define IDENTOFFSET 2;

enum ParseTreeNodeType {BASE,TRANSLATION_BLOCK};

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif


int evaulate(PARSE_TREE);
PARSE_TREE create_node(char *, int, PARSE_TREE *);
PARSE_TREE create_tnode(char *, char *);
void print_node(PARSE_TREE);
void print_file(PARSE_TREE);
struct symTabNode{
	char identifier[IDLENGTH];
};

typedef struct symTabNode SYMTABNODE;
typedef SYMTABNODE *SYMTABNODEPTR;

int currentSymTabSize=0;

extern int yylex();
void yyerror(const char* s);




#line 114 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    I_CONSTANT = 259,
    F_CONSTANT = 260,
    STRING_LITERAL = 261,
    FUNC_NAME = 262,
    SIZEOF = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPEDEF_NAME = 285,
    ENUMERATION_CONSTANT = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    INLINE = 292,
    CONST = 293,
    RESTRICT = 294,
    VOLATILE = 295,
    BOOL = 296,
    CHAR = 297,
    SHORT = 298,
    INT = 299,
    LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VOID = 305,
    COMPLEX = 306,
    IMAGINARY = 307,
    STRUCT = 308,
    UNION = 309,
    ENUM = 310,
    ELLIPSIS = 311,
    CASE = 312,
    DEFAULT = 313,
    IF = 314,
    ELSE = 315,
    SWITCH = 316,
    WHILE = 317,
    DO = 318,
    FOR = 319,
    GOTO = 320,
    CONTINUE = 321,
    BREAK = 322,
    RETURN = 323,
    ALIGNAS = 324,
    ALIGNOF = 325,
    ATOMIC = 326,
    GENERIC = 327,
    NORETURN = 328,
    STATIC_ASSERT = 329,
    THREAD_LOCAL = 330
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define FUNC_NAME 262
#define SIZEOF 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPEDEF_NAME 285
#define ENUMERATION_CONSTANT 286
#define TYPEDEF 287
#define EXTERN 288
#define STATIC 289
#define AUTO 290
#define REGISTER 291
#define INLINE 292
#define CONST 293
#define RESTRICT 294
#define VOLATILE 295
#define BOOL 296
#define CHAR 297
#define SHORT 298
#define INT 299
#define LONG 300
#define SIGNED 301
#define UNSIGNED 302
#define FLOAT 303
#define DOUBLE 304
#define VOID 305
#define COMPLEX 306
#define IMAGINARY 307
#define STRUCT 308
#define UNION 309
#define ENUM 310
#define ELLIPSIS 311
#define CASE 312
#define DEFAULT 313
#define IF 314
#define ELSE 315
#define SWITCH 316
#define WHILE 317
#define DO 318
#define FOR 319
#define GOTO 320
#define CONTINUE 321
#define BREAK 322
#define RETURN 323
#define ALIGNAS 324
#define ALIGNOF 325
#define ATOMIC 326
#define GENERIC 327
#define NORETURN 328
#define STATIC_ASSERT 329
#define THREAD_LOCAL 330

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 51 "grammar.y" /* yacc.c:355  */

  int intVal;
  char *str;
  struct treeNode *tVal;

#line 310 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 327 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  481

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    92,    85,     2,
      76,    77,    86,    87,    78,    88,    82,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    99,
      93,    98,    94,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    96,    84,    89,     2,     2,     2,
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
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    84,    89,    94,   101,   109,   114,   119,
     127,   135,   140,   148,   161,   166,   176,   183,   193,   198,
     206,   213,   221,   228,   235,   241,   247,   257,   271,   276,
     286,   291,   297,   303,   309,   315,   323,   334,   339,   344,
     349,   354,   359,   367,   372,   383,   388,   395,   402,   412,
     417,   424,   434,   439,   446,   456,   461,   468,   475,   482,
     492,   497,   504,   514,   519,   529,   534,   544,   549,   559,
     564,   574,   579,   589,   594,   606,   611,   621,   626,   631,
     636,   641,   646,   651,   656,   661,   666,   671,   679,   684,
     694,   702,   708,   715,   723,   729,   734,   740,   745,   751,
     756,   762,   767,   773,   781,   786,   796,   803,   811,   816,
     821,   826,   831,   836,   844,   849,   854,   859,   864,   869,
     874,   879,   884,   889,   894,   899,   904,   909,   914,   919,
     927,   935,   944,   953,   958,   966,   971,   979,   985,   992,
    1000,  1005,  1010,  1015,  1023,  1028,  1038,  1044,  1051,  1059,
    1067,  1076,  1085,  1095,  1104,  1109,  1119,  1126,  1134,  1145,
    1150,  1155,  1160,  1168,  1173,  1181,  1189,  1200,  1206,  1214,
    1219,  1226,  1233,  1241,  1251,  1260,  1269,  1279,  1288,  1296,
    1304,  1312,  1319,  1330,  1337,  1343,  1349,  1357,  1362,  1372,
    1379,  1387,  1392,  1402,  1408,  1414,  1422,  1427,  1437,  1443,
    1451,  1457,  1462,  1470,  1477,  1483,  1490,  1499,  1507,  1516,
    1524,  1531,  1538,  1545,  1553,  1563,  1572,  1581,  1591,  1599,
    1607,  1613,  1620,  1627,  1638,  1645,  1653,  1662,  1668,  1673,
    1680,  1690,  1699,  1704,  1713,  1720,  1729,  1743,  1748,  1753,
    1758,  1763,  1768,  1776,  1783,  1791,  1801,  1807,  1817,  1822,
    1831,  1836,  1844,  1849,  1858,  1869,  1878,  1890,  1899,  1910,
    1920,  1931,  1941,  1955,  1962,  1968,  1974,  1980,  1990,  2000,
    2005,  2014,  2019,  2027,  2035,  2045,  2050
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF",
  "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('",
  "')'", "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "base", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    40,    41,    44,    58,
      91,    93,    46,   123,   125,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -369

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-369)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2150,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,    33,   -50,   -36,  -369,   -34,
    -369,  -369,    54,  2240,  2240,  -369,    38,  -369,  -369,  2240,
    2240,  2240,  -369,    31,  2150,  -369,  -369,   -24,    44,   877,
    2349,  1625,  -369,    73,   175,  -369,   -53,  -369,  1836,    -9,
      46,  -369,  -369,   -14,  2278,  -369,  -369,  -369,  -369,  -369,
      44,  -369,   -19,    97,  -369,  -369,  -369,  -369,  -369,  -369,
    1647,  1669,  1669,  -369,    20,    41,   877,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,   168,  -369,  1625,
    -369,   -57,   129,   172,   130,   202,    39,    72,    76,   191,
       5,  -369,   134,  2349,    85,  2349,   145,   161,   165,   179,
    -369,  -369,  -369,   175,    73,  -369,   479,  1383,  -369,    54,
    -369,  2052,  1790,   965,    -9,  2278,  1952,  -369,    55,  -369,
     104,  1625,    24,  -369,   877,  -369,   877,  -369,  -369,  2349,
    1625,   395,  -369,  -369,   148,   190,   242,  -369,  -369,  1405,
    1625,   249,  -369,  1625,  1625,  1625,  1625,  1625,  1625,  1625,
    1625,  1625,  1625,  1625,  1625,  1625,  1625,  1625,  1625,  1625,
    1625,  1625,  -369,  -369,  1903,   987,    71,  -369,    84,  -369,
    -369,  -369,   278,  -369,  -369,  -369,  -369,    96,   210,  1625,
     211,   215,   217,   220,   743,   221,   296,   203,   204,   382,
    -369,  -369,   -46,  -369,  -369,  -369,  -369,   600,  -369,  -369,
    -369,  -369,  -369,  1361,  -369,  -369,  -369,  -369,  -369,  -369,
      70,   224,   227,  -369,   150,  1229,  -369,   225,   228,  1009,
    1999,  -369,  -369,  1625,  -369,   -45,  -369,   232,    27,  -369,
    -369,  -369,  -369,   246,   247,   250,   241,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  1625,  -369,
    1625,  1493,  -369,  -369,   156,  -369,   126,  -369,  -369,  -369,
    -369,   -57,   -57,   129,   129,   172,   172,   172,   172,   130,
     130,   202,    39,    72,    76,   191,   158,  -369,   252,   256,
    1229,  -369,   245,   254,  1097,    84,  2104,  1119,   259,   743,
     258,   743,  1625,  1625,  1625,   276,   690,   240,  -369,  -369,
    -369,   -18,  -369,  -369,  -369,  1625,   337,  -369,   105,  1383,
      57,  -369,  1735,  -369,   116,  -369,  -369,  2196,  -369,   338,
     261,  1229,  -369,  -369,  1625,  -369,   266,   268,  -369,  -369,
      87,  -369,  1625,  -369,   267,   267,  -369,  2315,  -369,  -369,
    1361,  -369,  -369,  1625,  -369,  1625,  -369,  -369,   270,  1229,
    -369,  -369,  1625,  -369,   274,  -369,   279,  1229,  -369,   277,
     280,  1141,   265,  -369,   743,  -369,   163,   176,   182,   281,
     787,   787,  -369,  -369,   284,  -369,  1251,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,   285,   286,  -369,  -369,  -369,
    -369,   289,   185,  -369,   290,   124,  -369,  -369,  -369,   292,
     293,  -369,  -369,   297,  1229,  -369,  -369,  1625,  -369,   299,
    -369,  -369,   743,   743,   743,  1625,  1515,  1537,  -369,  -369,
    -369,  1383,  -369,  -369,  1625,  -369,  2315,  1625,  1273,  -369,
    -369,  -369,  -369,   300,   303,  -369,   317,  -369,  -369,   188,
     743,   197,   743,   200,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,   743,   295,  -369,   743,  -369,   743,  -369,  -369,  -369,
    -369
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   163,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,   162,   164,     0,
     111,   272,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   268,   269,   271,   153,     0,     0,
       0,     0,   169,     0,   186,    91,     0,   104,   107,   168,
       0,    94,    96,   132,     0,    98,   100,   102,     1,   270,
       0,    10,   157,     0,   154,     2,     7,     8,    11,    12,
       0,     0,     0,     9,     0,     0,     0,    37,    38,    39,
      40,    41,    42,    18,     3,     4,     6,    30,    43,     0,
      45,    49,    52,    55,    60,    63,    65,    67,    69,    71,
      73,    90,     0,   141,   199,   143,     0,     0,     0,     0,
     162,   187,   185,   184,     0,    92,     0,     0,   275,     0,
     274,     0,     0,     0,   167,     0,     0,   135,     0,   139,
       0,     0,     0,   149,     0,    34,     0,    31,    32,     0,
       0,    43,    75,    88,     0,     0,     0,    24,    25,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,   140,     0,     0,   201,   198,   202,   142,
     165,   158,     0,   170,   188,   183,   105,   107,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   252,     0,   250,   251,   237,   238,     0,   248,   239,
     240,   241,   242,     0,   226,   106,   276,   273,   196,   181,
     195,     0,   190,   191,     0,     0,   171,    38,     0,     0,
       0,   130,   136,     0,   137,     0,   144,   148,     0,   151,
     156,   150,   155,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    77,     0,     5,
       0,     0,    23,    20,     0,    28,     0,    22,    46,    47,
      48,    50,    51,    53,    54,    58,    59,    56,    57,    61,
      62,    64,    66,    68,    70,    72,     0,   220,     0,     0,
       0,   204,    38,     0,     0,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   264,   265,
     266,     0,   253,   247,   249,     0,     0,   228,     0,     0,
       0,   232,     0,   193,   201,   194,   180,     0,   182,     0,
       0,     0,   172,   179,     0,   178,    38,     0,   131,   146,
       0,   138,     0,   152,    35,     0,    36,     0,    76,    89,
       0,    44,    21,     0,    19,     0,   221,   203,     0,     0,
     205,   211,     0,   210,     0,   222,     0,     0,   212,    38,
       0,     0,     0,   243,     0,   245,     0,     0,     0,     0,
       0,     0,   263,   267,     0,   235,     0,   224,   227,   231,
     233,   189,   192,   197,   174,     0,     0,   175,   177,   145,
     147,     0,     0,    14,     0,     0,    29,    74,   207,     0,
       0,   209,   223,     0,     0,   213,   219,     0,   218,     0,
     236,   244,     0,     0,     0,     0,     0,     0,   234,   225,
     230,     0,   173,   176,     0,    13,     0,     0,     0,    26,
     206,   208,   215,     0,     0,   216,   255,   256,   257,     0,
       0,     0,     0,     0,   229,    17,    15,    16,    27,   214,
     217,     0,     0,   261,     0,   259,     0,   254,   258,   262,
     260
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -369,  -369,  -369,  -369,  -369,  -369,  -369,   -86,  -369,  -369,
     264,  -369,   -51,   114,   117,    99,   113,   219,   214,   218,
     222,   226,  -369,   -31,   -65,  -369,   -83,   -42,   -48,    11,
    -369,   275,  -369,   -43,  -369,  -369,   269,  -117,    -8,  -369,
      52,  -369,   340,  -119,  -369,   -49,  -369,  -369,   -20,   -52,
     -32,  -120,  -130,  -369,    74,  -369,   -11,   -98,  -172,  -123,
      47,  -368,  -369,    78,   -47,   -62,  -369,    90,  -369,   208,
    -191,  -369,  -369,  -369,  -369,  -369,   401,  -369,  -369
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    93,    94,    72,    95,    96,   412,   413,    97,   274,
     151,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   152,   153,   268,   212,   112,    31,   129,
      56,    57,    33,    34,    35,    36,   136,   137,   114,   245,
     246,    37,    73,    74,    38,    39,    40,    41,   119,    59,
      60,   123,   298,   232,   233,   234,   414,   299,   188,   327,
     328,   329,   330,   331,    42,   214,   215,   216,   217,   218,
     219,   220,   221,   222,    43,    44,    45,    46,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     115,   115,   231,   154,   225,   121,   113,   113,   134,   118,
     128,    32,    58,   239,   305,   115,   187,   139,   111,   242,
     111,   113,   122,   252,   180,   124,    49,    71,   441,   163,
      71,    68,   270,   350,   164,   165,    47,   115,   116,   117,
      50,    63,    51,   113,    61,    62,   125,    71,   162,    52,
      65,    66,    67,   322,   351,    32,   138,    52,    52,    70,
     270,   154,   224,   154,   115,   304,   115,   132,   238,   135,
     113,   133,   113,    52,   194,   155,    52,   276,   213,   141,
     441,   393,   186,   226,   121,   256,   115,   115,   139,   139,
      52,   195,   113,   113,   275,   115,   149,   115,   296,   250,
     115,   113,   181,   113,   197,   183,   113,   189,   251,   197,
     111,   353,   278,   279,   280,   341,    48,   150,   247,    52,
     303,    64,    53,   242,   176,   391,   321,   138,   138,   252,
      53,    53,   335,   253,   243,   254,   121,   325,   255,   326,
      54,    54,   315,   230,   170,   171,   332,   184,   130,    53,
     185,   185,   186,    55,   244,   399,    54,   310,   224,    54,
     306,   184,   305,    53,   307,   185,   243,   177,   111,   213,
     340,    54,   178,    54,   347,   142,   376,   156,   157,   158,
     369,   143,   248,   396,   168,   169,   121,   381,   249,   397,
     194,   115,   332,   139,   127,   230,   185,   113,   334,   436,
     437,   349,   448,   358,   270,   359,   398,   364,   449,   179,
     333,   182,   111,     8,     9,    10,   166,   167,   174,   175,
     361,   227,   190,   172,   173,   269,   270,   338,   339,   386,
     387,   388,   138,   362,   363,   368,   270,   365,   191,   374,
     432,   270,   380,   192,   159,   272,   120,   383,   160,   385,
     161,   121,   277,   433,   270,   194,   193,   424,   121,   434,
     270,    54,   445,   446,   224,   472,   270,   271,   390,   285,
     286,   287,   288,   440,   474,   270,   405,   476,   270,   406,
     281,   282,   134,   394,   308,   283,   284,   289,   290,   309,
     311,   312,   194,   313,   111,   224,   314,   316,   416,   317,
     334,   336,   318,   319,   419,   337,   342,   420,   115,   343,
     410,   352,   423,    98,   113,    98,   429,   230,   464,   357,
     194,   111,   431,   354,   355,   440,   370,   356,   121,   366,
     247,   224,   194,   367,   417,   371,   382,   384,   389,   392,
     395,   403,   404,   230,   145,   147,   148,   407,   230,   408,
     360,   418,   459,   461,   463,   421,   422,   435,   425,   453,
     466,   426,   454,    98,   430,   438,   442,   443,   444,   447,
     456,   457,   458,   450,   451,   194,   224,   471,   452,   465,
     455,   469,   467,   224,   470,    75,    76,    77,    78,    79,
      80,   292,    81,    82,   478,   291,   293,   115,   473,   196,
     475,   294,   409,   113,   240,    98,   295,   415,   400,   477,
     140,   402,   479,    83,   480,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   324,     0,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    69,     0,     0,     0,     0,
       0,     0,    84,     0,    85,     0,     0,     0,    86,     0,
       0,     0,     0,    98,     0,     0,     0,    87,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,     0,     0,
       0,   320,   198,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     1,
      83,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    98,   199,   200,   201,     0,
     202,   203,   204,   205,   206,   207,   208,   209,    26,    84,
      27,    85,    28,    29,    30,    86,     0,     0,     0,     0,
       0,     0,   126,   210,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,   211,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   198,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       1,    83,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,   199,   200,   201,
       0,   202,   203,   204,   205,   206,   207,   208,   209,    26,
      84,    27,    85,    28,    29,    30,    86,     0,     0,     0,
       0,     0,     0,   126,   323,    87,    88,    89,    90,    91,
      92,     0,     0,    75,    76,    77,    78,    79,    80,   211,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    83,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   198,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,     0,     0,    26,
      84,    27,    85,    28,    29,    30,    86,     0,     0,     0,
       0,     0,     0,     0,    83,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,   211,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
     199,   200,   201,     0,   202,   203,   204,   205,   206,   207,
     208,   209,     0,    84,     0,    85,     0,     0,    83,    86,
       0,     0,     0,     0,     0,     0,   126,     0,    87,    88,
      89,    90,    91,    92,     0,     0,     0,     0,     0,     0,
       0,     0,   211,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,    85,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,    92,     0,     0,
      75,    76,    77,    78,    79,    80,   211,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    83,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    27,    85,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,    92,    75,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    83,    81,    82,   235,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    83,    81,
      82,   300,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,    84,   120,    85,     0,     0,
      83,    86,     0,   344,     0,     0,   236,     8,     9,    10,
      87,   237,    89,    90,    91,    92,     0,    84,   120,    85,
       0,     0,     0,    86,     0,     0,     0,     0,   301,     0,
       0,     0,    87,   302,    89,    90,    91,    92,     0,    84,
     120,    85,     0,     0,     0,    86,     0,     0,     0,     0,
     345,     0,     0,     0,    87,   346,    89,    90,    91,    92,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    83,    81,
      82,   372,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      83,    81,    82,   377,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,    84,   120,    85,
       0,     0,    83,    86,     0,   427,     0,     0,   373,     8,
       9,    10,    87,    88,    89,    90,    91,    92,     0,    84,
     120,    85,     0,     0,     0,    86,     0,     0,     0,     0,
     378,     0,     0,     0,    87,   379,    89,    90,    91,    92,
       0,    84,   120,    85,     0,     0,     0,    86,     0,     0,
       0,     0,   428,     0,     0,     0,    87,    88,    89,    90,
      91,    92,    75,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      83,    81,    82,     0,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
     120,    85,     0,     0,    83,    86,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
       0,    84,     0,    85,     0,     0,     0,    86,     0,     0,
       0,   325,     0,   326,   223,   439,    87,    88,    89,    90,
      91,    92,     0,    84,     0,    85,     0,     0,     0,    86,
       0,     0,     0,   325,     0,   326,   223,   468,    87,    88,
      89,    90,    91,    92,    75,    76,    77,    78,    79,    80,
       0,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    83,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,    85,     0,     0,    83,    86,     0,     0,
       0,   325,     0,   326,   223,     0,    87,    88,    89,    90,
      91,    92,     0,    84,     0,    85,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,   223,     0,    87,    88,
      89,    90,    91,    92,     0,    84,     0,    85,     0,     0,
       0,    86,   273,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    75,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    83,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    83,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,    85,     0,     0,    83,    86,
       0,     0,     0,     0,     0,     0,   360,     0,    87,    88,
      89,    90,    91,    92,     0,    84,     0,    85,     0,     0,
       0,    86,   460,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,     0,    84,     0,    85,
       0,     0,     0,    86,   462,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,    92,    75,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    83,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    83,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,    85,     0,     0,
      83,    86,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,     0,    84,     0,    85,
       0,     0,     0,   144,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,    92,    52,    84,
       0,    85,     0,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     0,     0,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,   228,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,   332,   297,     0,     0,   185,     0,     0,     0,     0,
       1,    54,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,     1,   229,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,   127,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,   184,
     297,     0,     1,   185,     0,     0,     0,     0,     0,    54,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,    29,     0,     0,     1,
       0,     0,     0,     0,     0,     0,   241,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   348,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     1,   126,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,     0,    30,
       1,   375,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,    29,    30,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       1,    30,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    26,
       0,    27,     0,    28,     0,    30,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,    27,
       0,     0,    29,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,   411,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,    27,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27
};

static const yytype_int16 yycheck[] =
{
      49,    50,   132,    86,   127,    54,    49,    50,    60,    51,
      58,     0,    32,   133,   186,    64,   114,    64,    49,   136,
      51,    64,    54,   142,    19,    78,    76,     3,   396,    86,
       3,     0,    78,    78,    91,    92,     3,    86,    49,    50,
      76,     3,    76,    86,    33,    34,    99,     3,    99,     3,
      39,    40,    41,    99,    99,    44,    64,     3,     3,    83,
      78,   144,   127,   146,   113,   185,   115,    76,   133,    83,
     113,    80,   115,     3,   123,    86,     3,   160,   126,    98,
     448,    99,   114,   131,   133,   150,   135,   136,   135,   136,
       3,   123,   135,   136,   159,   144,    76,   146,   181,   141,
     149,   144,    97,   146,   124,   113,   149,   115,    84,   129,
     141,    84,   163,   164,   165,   235,    83,    76,   138,     3,
     185,    83,    76,   240,    85,   316,   209,   135,   136,   248,
      76,    76,   230,   144,    79,   146,   185,    80,   149,    82,
      86,    86,   204,   132,    14,    15,    76,    76,    58,    76,
      80,    80,   184,    99,    99,    98,    86,   199,   223,    86,
      76,    76,   334,    76,    80,    80,    79,    95,   199,   217,
     235,    86,    96,    86,   239,    78,   306,     9,    10,    11,
     300,    84,    78,    78,    12,    13,   235,   307,    84,    84,
     239,   240,    76,   240,    98,   184,    80,   240,   230,   390,
     391,   243,    78,   268,    78,   270,   329,    81,    84,    18,
     230,    77,   243,    38,    39,    40,    87,    88,    16,    17,
     271,   131,    77,    93,    94,    77,    78,    77,    78,   312,
     313,   314,   240,    77,    78,   300,    78,    79,    77,   304,
      77,    78,   307,    78,    76,     3,    71,   309,    80,   311,
      82,   300,     3,    77,    78,   304,    77,   377,   307,    77,
      78,    86,    77,    78,   329,    77,    78,    77,   316,   170,
     171,   172,   173,   396,    77,    78,   341,    77,    78,   344,
     166,   167,   334,   325,     6,   168,   169,   174,   175,    79,
      79,    76,   341,    76,   325,   360,    76,    76,   363,     3,
     332,    77,    99,    99,   369,    78,    81,   372,   357,    81,
     352,    79,   377,    49,   357,    51,   381,   306,   441,    78,
     369,   352,   384,    77,    77,   448,    81,    77,   377,    77,
     350,   396,   381,    77,   365,    81,    77,    79,    62,    99,
       3,     3,    81,   332,    80,    81,    82,    81,   337,    81,
      83,    81,   435,   436,   437,    81,    77,    76,    81,   424,
     446,    81,   427,    99,    99,    81,    81,    81,    79,    79,
     432,   433,   434,    81,    81,   424,   441,    60,    81,   444,
      81,    81,   447,   448,    81,     3,     4,     5,     6,     7,
       8,   177,    10,    11,    99,   176,   178,   446,   460,   124,
     462,   179,   350,   446,   135,   141,   180,   360,   330,   471,
      70,   337,   474,    31,   476,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,   217,    -1,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,   199,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   271,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,     3,     4,     5,     6,     7,     8,    99,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      31,    76,    -1,    34,    -1,    -1,    81,    38,    39,    40,
      85,    86,    87,    88,    89,    90,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    31,    76,    -1,    34,    -1,    -1,    81,    38,
      39,    40,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      30,    86,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    30,    77,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    98,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    -1,    30,    80,    -1,    -1,    -1,    -1,    -1,    86,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    84,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    83,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      30,    77,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      30,    75,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    69,
      -1,    71,    -1,    73,    -1,    75,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    71,
      -1,    -1,    74,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   128,   129,   132,   133,   134,   135,   141,   144,   145,
     146,   147,   164,   174,   175,   176,   177,     3,    83,    76,
      76,    76,     3,    76,    86,    99,   130,   131,   148,   149,
     150,   129,   129,     3,    83,   129,   129,   129,     0,   176,
      83,     3,   103,   142,   143,     3,     4,     5,     6,     7,
       8,    10,    11,    31,    70,    72,    76,    85,    86,    87,
      88,    89,    90,   101,   102,   104,   105,   108,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   127,   133,   138,   145,   156,   156,   127,   148,
      71,   145,   150,   151,    78,    99,    83,    98,   128,   129,
     167,   178,    76,    80,   149,    83,   136,   137,   138,   164,
     142,    98,    78,    84,    76,   110,    76,   110,   110,    76,
      76,   110,   123,   124,   126,   156,     9,    10,    11,    76,
      80,    82,   112,    86,    91,    92,    87,    88,    12,    13,
      14,    15,    93,    94,    16,    17,    85,    95,    96,    18,
      19,    97,    77,   138,    76,    80,   150,   157,   158,   138,
      77,    77,    78,    77,   145,   150,   131,   148,     3,    57,
      58,    59,    61,    62,    63,    64,    65,    66,    67,    68,
      84,    99,   126,   128,   165,   166,   167,   168,   169,   170,
     171,   172,   173,    83,   124,   159,   128,   167,     3,    77,
     129,   152,   153,   154,   155,    34,    81,    86,   124,   151,
     136,    84,   137,    79,    99,   139,   140,   148,    78,    84,
     127,    84,   143,   156,   156,   156,   124,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    98,   125,    77,
      78,    77,     3,    77,   109,   124,   126,     3,   112,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   116,
     116,   117,   118,   119,   120,   121,   126,    77,   152,   157,
      34,    81,    86,   124,   151,   158,    76,    80,     6,    79,
     127,    79,    76,    76,    76,   165,    76,     3,    99,    99,
      99,   126,    99,    84,   169,    80,    82,   159,   160,   161,
     162,   163,    76,   148,   150,   157,    77,    78,    77,    78,
     124,   151,    81,    81,    34,    81,    86,   124,    84,   127,
      78,    99,    79,    84,    77,    77,    77,    78,   124,   124,
      83,   112,    77,    78,    81,    79,    77,    77,   124,   151,
      81,    81,    34,    81,   124,    77,   152,    34,    81,    86,
     124,   151,    77,   165,    79,   165,   126,   126,   126,    62,
     128,   170,    99,    99,   127,     3,    78,    84,   159,    98,
     163,    56,   154,     3,    81,   124,   124,    81,    81,   140,
     127,    58,   106,   107,   156,   160,   124,   123,    81,   124,
     124,    81,    77,   124,   151,    81,    81,    34,    81,   124,
      99,   165,    77,    77,    77,    76,   170,   170,    81,    84,
     159,   161,    81,    81,    79,    77,    78,    79,    78,    84,
      81,    81,    81,   124,   124,    81,   165,   165,   165,   126,
      77,   126,    77,   126,   159,   124,   107,   124,    84,    81,
      81,    60,    77,   165,    77,   165,    77,   165,    99,   165,
     165
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   150,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   154,   154,   155,   155,   156,   156,
     157,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   160,   160,   160,
     160,   161,   162,   162,   163,   163,   164,   165,   165,   165,
     165,   165,   165,   166,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   171,   172,   172,   172,
     172,   172,   172,   173,   173,   173,   173,   173,   174,   175,
     175,   176,   176,   177,   177,   178,   178
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     4,
       5,     5,     6,     2,     1,     3,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     1,     2,
       1,     1,     1,     2,     7,     5,     5,     5,     7,     6,
       7,     6,     7,     3,     2,     2,     2,     3,     1,     1,
       2,     1,     1,     4,     3,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 79 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("IDENTIFIER", (yyvsp[0].str));
		(yyval.tVal) = create_node("primary_expression", 1, arr);
	}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("primary_expression", 1, arr);
	}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 89 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("primary_expression", 1, arr);
	}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 94 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = create_tnode("(", "(");
		arr[1] = (yyvsp[-1].tVal);
		arr[2] = create_tnode(")", ")");
		(yyval.tVal) = create_node("primary_expression", 3, arr);
	}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 101 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("primary_expression", 1, arr);
	}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 109 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("I_CONSTANT", (yyvsp[0].str));
		(yyval.tVal) = create_node("constant", 1, arr);
	}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 114 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("F_CONSTANT", (yyvsp[0].str));
		(yyval.tVal) = create_node("constant", 1, arr);
	}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 119 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("ENUMERATION_CONSTANT", (yyvsp[0].str));
		(yyval.tVal) = create_node("constant", 1, arr);
	}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 127 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("IDENTIFIER", (yyvsp[0].str));
		(yyval.tVal) = create_node("enumeration_constant", 1, arr);
	}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 135 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("STRING_LITERAL", (yyvsp[0].str));
		(yyval.tVal) = create_node("string", 1, arr);
	}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 140 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("FUNC_NAME", (yyvsp[0].str));
		(yyval.tVal) = create_node("string", 1, arr);
	}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 148 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[7];
		arr[0] = create_tnode("GENERIC", (yyvsp[-5].str));
		arr[1] = create_tnode("(", "(");
		arr[2] = (yyvsp[-3].tVal);
		arr[3]= create_tnode(",", ",");;
		arr[4]= (yyvsp[-1].tVal);
		arr[5]= create_tnode(")", ")");;
		(yyval.tVal) = create_node("generic_selection", 6, arr);
	}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 161 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("generic_assoc_list", 1, arr);
	}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 166 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode(",", ",");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("generic_assoc_list", 3, arr);
	}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 176 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode(":", ":");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("generic_association", 3, arr);
	}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 183 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = create_tnode("DEFAULT", (yyvsp[-2].str));
		arr[1] = create_tnode(":", ":");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("generic_association", 3, arr);
	}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 193 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("postfix_expression", 1, arr);
	}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 198 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = (yyvsp[-3].tVal);
		arr[1] = create_tnode("[", "[");
		arr[2] = (yyvsp[-1].tVal);
		arr[3] = create_tnode("[", "]");
		(yyval.tVal) = create_node("postfix_expression", 4, arr);
	}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 206 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("(", "(");
		arr[2] = create_tnode(")", ")");
		(yyval.tVal) = create_node("postfix_expression", 3, arr);
	}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 213 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = (yyvsp[-3].tVal);
		arr[1] = create_tnode("(", "(");
		arr[2] = (yyvsp[-1].tVal);
		arr[3] = create_tnode(")", ")");
		(yyval.tVal) = create_node("postfix_expression", 4, arr);
	}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 221 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode(".", ".");
		arr[2] = create_tnode("IDENTIFIER", (yyvsp[0].str));
		(yyval.tVal) = create_node("postfix_expression", 3, arr);
	}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 228 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("PTR_OP", (yyvsp[-1].str));
		arr[2] = create_tnode("IDENTIFIER", (yyvsp[0].str));
		(yyval.tVal) = create_node("postfix_expression", 3, arr);
	}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 235 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=(yyvsp[-1].tVal);
		arr[1] = create_tnode("INC_OP", (yyvsp[0].str));
		(yyval.tVal) = create_node("postfix_expression", 2, arr);
	}
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 241 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=(yyvsp[-1].tVal);
		arr[1] = create_tnode("DEC_OP", (yyvsp[0].str));
		(yyval.tVal) = create_node("postfix_expression", 2, arr);
	}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 247 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[7];
		arr[0] = create_tnode("(", "(");
		arr[1] = (yyvsp[-4].tVal);
		arr[2] = create_tnode(")", ")");
		arr[3] = create_tnode("{", "{");
		arr[4] = (yyvsp[-1].tVal);
		arr[5] = create_tnode("}", "}");
		(yyval.tVal) = create_node("postfix_expression", 6, arr);
	}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 257 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[8];
		arr[0] = create_tnode("(", "(");
		arr[1] = (yyvsp[-5].tVal);
		arr[2] = create_tnode(")", ")");
		arr[3] = create_tnode("{", "{");
		arr[4] = (yyvsp[-2].tVal);
		arr[5] = create_tnode(",", ",");
		arr[6] = create_tnode("}", "}");
		(yyval.tVal) = create_node("postfix_expression", 7, arr);
	}
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 271 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("argument_expression_list", 1, arr);
	}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 276 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode(",", ",");
		arr[2] = (yyvsp[0].tVal) ;
		(yyval.tVal) = create_node("argument_expression_list", 3, arr);
	}
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 286 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("unary_expression", 1, arr);
	}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 291 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[1]=(yyvsp[0].tVal);
		arr[0] = create_tnode("INC_OP", (yyvsp[-1].str));
		(yyval.tVal) = create_node("unary_expression", 2, arr);
	}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 297 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[1]=(yyvsp[0].tVal);
		arr[0] = create_tnode("DEC_OP", (yyvsp[-1].str));
		(yyval.tVal) = create_node("unary_expression", 2, arr);
	}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 303 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[1]=(yyvsp[0].tVal);
		arr[0] = (yyvsp[-1].tVal);
		(yyval.tVal) = create_node("unary_expression", 2, arr);
	}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 309 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[1]=(yyvsp[0].tVal);
		arr[0] = create_tnode("SIZEOF", (yyvsp[-1].str));
		(yyval.tVal) = create_node("unary_expression", 2, arr);
	}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 315 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = create_tnode("SIZEOF", (yyvsp[-3].str));
		arr[1] = create_tnode("(", "(");
		arr[2] = (yyvsp[-1].tVal);
		arr[3] = create_tnode(")", ")");
		(yyval.tVal) = create_node("unary_expression", 4, arr);
	}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 323 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = create_tnode("ALIGNOF", (yyvsp[-3].str));
		arr[1] = create_tnode("(", "(");
		arr[2] = (yyvsp[-1].tVal);
		arr[3] = create_tnode(")", ")");
		(yyval.tVal) = create_node("unary_expression", 4, arr);
	}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 334 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("&", "&");
		(yyval.tVal) = create_node("unary_operator", 1, arr);
	}
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 339 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("*", "*");
		(yyval.tVal) = create_node("unary_operator", 1, arr);
	}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 344 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("+", "+");
		(yyval.tVal) = create_node("unary_operator", 1, arr);
	}
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 349 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("-", "-");
		(yyval.tVal) = create_node("unary_operator", 1, arr);
	}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 354 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("~", "~");
		(yyval.tVal) = create_node("unary_operator", 1, arr);
	}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 359 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=create_tnode("!", "!");
		(yyval.tVal) = create_node("unary_operator", 1, arr);
	}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 367 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("cast_expression", 1, arr);
	}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 372 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = create_tnode("(", "(");
		arr[1] = (yyvsp[-2].tVal);
		arr[2] = create_tnode(")", ")");
		arr[3] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("cast_expression", 4, arr);
	}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 383 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("multiplicative_expression", 1, arr);
	}
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 388 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("*", "*");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("multiplicative_expression", 3, arr);
	}
#line 2669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 395 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("/", "/");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("multiplicative_expression", 3, arr);
	}
#line 2681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 402 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("%", "%");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("multiplicative_expression", 3, arr);
	}
#line 2693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 412 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("additive_expression", 1, arr);
	}
#line 2703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 417 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("+", "+");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("additive_expression", 3, arr);
	}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 424 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("-", "-");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("additive_expression", 3, arr);
	}
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 434 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("shift_expression", 1, arr);
	}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 439 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("LEFT_OP", (yyvsp[-1].str));
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("shift_expression", 3, arr);
	}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 446 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("RIGHT_OP", (yyvsp[-1].str));
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("shift_expression", 3, arr);
	}
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 456 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("relational_expression", 1, arr);
	}
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 461 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("<", "<");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("relational_expression", 3, arr);
	}
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 468 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode(">", ">");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("relational_expression", 3, arr);
	}
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 475 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("LE_OP", (yyvsp[-1].str));
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("relational_expression", 3, arr);
	}
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 482 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("GE_OP", (yyvsp[-1].str));
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("relational_expression", 3, arr);
	}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 492 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("equality_expression", 1, arr);
	}
#line 2829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 497 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("EQ_OP", (yyvsp[-1].str));
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("equality_expression", 3, arr);
	}
#line 2841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 504 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("NE_OP", (yyvsp[-1].str));
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("equality_expression", 3, arr);
	}
#line 2853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 514 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("and_expression", 1, arr);
	}
#line 2863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 519 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("&", "&");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("and_expression", 3, arr);
	}
#line 2875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 529 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("exclusive_or_expression", 1, arr);
	}
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 534 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("^", "^");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("exclusive_or_expression", 3, arr);
	}
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 544 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("inclusive_or_expression", 1, arr);
	}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 549 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("|", "|");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("inclusive_or_expression", 3, arr);
	}
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 559 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("logical_and_expression", 1, arr);
	}
#line 2929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 564 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("AND_OP", (yyvsp[-1].str));
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("logical_and_expression", 3, arr);
	}
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 574 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("logical_or_expression", 1, arr);
	}
#line 2951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 579 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("OR_OP", (yyvsp[-1].str));
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("logical_or_expression", 3, arr);
	}
#line 2963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 589 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("conditional_expression", 1, arr);
	}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 594 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[6];
		arr[0] = (yyvsp[-4].tVal);
		arr[1] = create_tnode("?", "?");
		arr[2] = (yyvsp[-2].tVal);
		arr[3] = create_tnode(":", ":");
		arr[4] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("conditional_expression", 5, arr);
	}
#line 2987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 606 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("assignment_expression", 1, arr);
	}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 611 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = (yyvsp[-1].tVal);
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("assignment_expression", 3, arr);
	}
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 621 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("=", "=");
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 626 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("MUL_ASSIGN", (yyvsp[0].str));
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 631 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("DIV_ASSIGN", (yyvsp[0].str));
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 636 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("MOD_ASSIGN", (yyvsp[0].str));
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 641 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("ADD_ASSIGN", (yyvsp[0].str));
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 646 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("SUB_ASSIGN", (yyvsp[0].str));
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 651 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("LEFT_ASSIGN", (yyvsp[0].str));
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 656 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("RIGHT_ASSIGN", (yyvsp[0].str));
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 661 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("AND_ASSIGN", (yyvsp[0].str));
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 666 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("XOR_ASSIGN", (yyvsp[0].str));
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 671 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= create_tnode("OR_ASSIGN", (yyvsp[0].str));
		(yyval.tVal) = create_node("assignment_operator", 1, arr);
	}
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 679 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("assignment_expression", 1, arr);
	}
#line 3129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 684 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode(",", ",");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("assignment_expression", 3, arr);
	}
#line 3141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 694 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]= (yyvsp[0].tVal);
		(yyval.tVal) = create_node("constant_expression", 1, arr);
	}
#line 3151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 702 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = create_tnode(";", ";");
		(yyval.tVal) = create_node("declaration", 2, arr);
	}
#line 3162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 708 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = (yyvsp[-1].tVal);
		arr[2] = create_tnode(";", ";");
		(yyval.tVal) = create_node("declaration", 3, arr);
	}
#line 3174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 715 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration", 1, arr);
	}
#line 3184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 723 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_specifiers", 2, arr);
	}
#line 3195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 729 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_specifiers", 1, arr);
	}
#line 3205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 734 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_specifiers", 2, arr);
	}
#line 3216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 740 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_specifiers", 1, arr);
	}
#line 3226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 745 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_specifiers", 2, arr);
	}
#line 3237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 751 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_specifiers", 1, arr);
	}
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 756 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_specifiers", 2, arr);
	}
#line 3258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 762 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_specifiers", 1, arr);
	}
#line 3268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 767 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_specifiers", 2, arr);
	}
#line 3279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 773 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_specifiers", 1, arr);
	}
#line 3289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 781 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("init_declarator_list", 1, arr);
	}
#line 3299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 786 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode(",", ",");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("init_declarator_list", 3, arr);
	}
#line 3311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 796 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("=", "=");
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("init_declarator", 3, arr);
	}
#line 3323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 803 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("init_declarator", 1, arr);
	}
#line 3333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 811 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("TYPEDEF", (yyvsp[0].str));
		(yyval.tVal) = create_node("storage_class_specifier", 1, arr);
	}
#line 3343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 816 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("EXTERN", (yyvsp[0].str));
		(yyval.tVal) = create_node("storage_class_specifier", 1, arr);
	}
#line 3353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 821 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("STATIC", (yyvsp[0].str));
		(yyval.tVal) = create_node("storage_class_specifier", 1, arr);
	}
#line 3363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 826 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("THREAD_LOCAL", (yyvsp[0].str));
		(yyval.tVal) = create_node("storage_class_specifier", 1, arr);
	}
#line 3373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 831 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("AUTO", (yyvsp[0].str));
		(yyval.tVal) = create_node("storage_class_specifier", 1, arr);
	}
#line 3383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 836 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("REGISTER", (yyvsp[0].str));
		(yyval.tVal) = create_node("storage_class_specifier", 1, arr);
	}
#line 3393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 844 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("VOID", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 849 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("CHAR", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 854 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("SHORT", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 859 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("INT", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 864 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("LONG", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 869 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("FLOAT", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 874 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("DOUBLE", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 879 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("SIGNED", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 884 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("UNSIGNED", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 889 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("BOOL", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 894 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("COMPLEX", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 899 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("IMAGINARY", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 904 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 909 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 914 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 919 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("TYPEDEF_NAME", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_specifier", 1, arr);
	}
#line 3553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 927 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = (yyvsp[-3].tVal);
		arr[1] = create_tnode("{", "{");
		arr[2] = (yyvsp[-1].tVal);
		arr[3] = create_tnode("}", "}");
		(yyval.tVal) = create_node("struct_or_union_specifier", 4, arr);
	}
#line 3566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 935 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[6];
		arr[0] = (yyvsp[-4].tVal);
		arr[1] = create_tnode("IDENTIFIER", (yyvsp[-3].str));
		arr[2] = create_tnode("{", "{");
		arr[3] = (yyvsp[-1].tVal);
		arr[4] = create_tnode("}", "}");
		(yyval.tVal) = create_node("struct_or_union_specifier", 5, arr);
	}
#line 3580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 944 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = create_tnode("IDENTIFIER", (yyvsp[0].str));
		(yyval.tVal) = create_node("struct_or_union_specifier", 2, arr);
	}
#line 3591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 953 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("STRUCT", (yyvsp[0].str));
		(yyval.tVal) = create_node("struct_or_union", 1, arr);
	}
#line 3601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 958 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("UNION", (yyvsp[0].str));
		(yyval.tVal) = create_node("struct_or_union", 1, arr);
	}
#line 3611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 966 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("struct_declaration_list", 1, arr);
	}
#line 3621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 971 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=(yyvsp[-1].tVal);arr[1]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("struct_declaration_list", 2, arr);
	}
#line 3631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 979 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=(yyvsp[-1].tVal);
		arr[1]=create_tnode(";", ";");
		(yyval.tVal) = create_node("struct_declaration", 2, arr);
	}
#line 3642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 985 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = (yyvsp[-1].tVal);
 		arr[2]=create_tnode(";", ";");
		(yyval.tVal) = create_node("struct_declaration", 3, arr);
	}
#line 3654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 992 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("struct_declaration", 1, arr);
	}
#line 3664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1000 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=(yyvsp[-1].tVal);arr[1]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("specifier_qualifier_list", 2, arr);
	}
#line 3674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1005 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("specifier_qualifier_list", 1, arr);
	}
#line 3684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1010 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=(yyvsp[-1].tVal);arr[1]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("specifier_qualifier_list", 2, arr);
	}
#line 3694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1015 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("specifier_qualifier_list", 1, arr);
	}
#line 3704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1023 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("struct_declarator_list", 1, arr);
	}
#line 3714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1028 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[2] = (yyvsp[0].tVal);
 		arr[1]=create_tnode(",", ",");
		(yyval.tVal) = create_node("struct_declarator_list", 3, arr);
	}
#line 3726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1038 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[1] = (yyvsp[0].tVal);
 		arr[0]=create_tnode(":", ":");
		(yyval.tVal) = create_node("struct_declarator", 2, arr);
	}
#line 3737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1044 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[2] = (yyvsp[0].tVal);
 		arr[1]=create_tnode(":", ":");
		(yyval.tVal) = create_node("struct_declarator", 3, arr);
	}
#line 3749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1051 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("struct_declarator", 1, arr);
	}
#line 3759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1059 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = create_tnode("ENUM", (yyvsp[-3].str));
		arr[1] = create_tnode("{", "{");
		arr[2] = (yyvsp[-1].tVal);
		arr[3] = create_tnode("}", "}");
		(yyval.tVal) = create_node("enum_specifier", 4, arr);
	}
#line 3772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1067 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[6];
		arr[0] = create_tnode("ENUM", (yyvsp[-4].str));
		arr[1] = create_tnode("{", "{");
		arr[2] = (yyvsp[-2].tVal);
		arr[3] = create_tnode(",", ",");
		arr[4] = create_tnode("}", "}");
		(yyval.tVal) = create_node("enum_specifier", 5, arr);
	}
#line 3786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1076 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[6];
		arr[0] = create_tnode("ENUM", (yyvsp[-4].str));
		arr[1] = create_tnode("IDENTIFIER", (yyvsp[-3].str));
		arr[2] = create_tnode("{", "{");
		arr[3] = (yyvsp[-1].tVal);
		arr[4] = create_tnode("}", "}");
		(yyval.tVal) = create_node("enum_specifier", 5, arr);
	}
#line 3800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1085 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[7];
		arr[0] = create_tnode("ENUM", (yyvsp[-5].str));
		arr[1] = create_tnode("IDENTIFIER", (yyvsp[-4].str));
		arr[2] = create_tnode("{", "{");
		arr[3] = (yyvsp[-2].tVal);
		arr[4] = create_tnode(",", ",");
		arr[5] = create_tnode("}", "}");
		(yyval.tVal) = create_node("enum_specifier", 6, arr);
	}
#line 3815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1095 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = create_tnode("ENUM", (yyvsp[-1].str));
		arr[1] = create_tnode("IDENTIFIER", (yyvsp[0].str));
		(yyval.tVal) = create_node("enum_specifier", 2, arr);
	}
#line 3826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1104 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("enumerator_list", 1, arr);
	}
#line 3836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1109 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[2] = (yyvsp[0].tVal);
 		arr[1]=create_tnode(",", ",");
		(yyval.tVal) = create_node("enumerator_list", 3, arr);
	}
#line 3848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1119 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[2] = (yyvsp[0].tVal);
 		arr[1]=create_tnode("=", "=");
		(yyval.tVal) = create_node("enumerator", 3, arr);
	}
#line 3860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1126 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("enumerator", 1, arr);
	}
#line 3870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1134 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = create_tnode("ATOMIC", (yyvsp[-3].str));
		arr[1] = create_tnode("(", "(");
		arr[2] = (yyvsp[-1].tVal);
		arr[3] = create_tnode(")", ")");
		(yyval.tVal) = create_node("atomic_type_specifier", 4, arr);
	}
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1145 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("CONST", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_qualifier", 1, arr);
	}
#line 3893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1150 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("RESTRICT", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_qualifier", 1, arr);
	}
#line 3903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1155 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("VOLATILE", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_qualifier", 1, arr);
	}
#line 3913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1160 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("ATOMIC", (yyvsp[0].str));
		(yyval.tVal) = create_node("type_qualifier", 1, arr);
	}
#line 3923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1168 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("INLINE", (yyvsp[0].str));
		(yyval.tVal) = create_node("function_specifier", 1, arr);
	}
#line 3933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1173 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("NORETURN", (yyvsp[0].str));
		(yyval.tVal) = create_node("function_specifier", 1, arr);
	}
#line 3943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1181 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = create_tnode("ALIGNAS", (yyvsp[-3].str));
		arr[1] = create_tnode("(", "(");
		arr[2] = (yyvsp[-1].tVal);
		arr[3] = create_tnode(")", ")");
		(yyval.tVal) = create_node("alignment_specifier", 4, arr);
	}
#line 3956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1189 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = create_tnode("ALIGNAS", (yyvsp[-3].str));
		arr[1] = create_tnode("(", "(");
		arr[2] = (yyvsp[-1].tVal);
		arr[3] = create_tnode(")", ")");
		(yyval.tVal) = create_node("alignment_specifier", 4, arr);
	}
#line 3969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1200 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declarator", 2, arr);
	}
#line 3980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1206 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declarator", 1, arr);
	}
#line 3990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1214 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("IDENTIFIER", (yyvsp[0].str));
		(yyval.tVal) = create_node("direct_declarator", 1, arr);
	}
#line 4000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1219 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = create_tnode("(", "(");
		arr[1] = (yyvsp[-1].tVal);
 		arr[2]=create_tnode(")", ")");
		(yyval.tVal) = create_node("direct_declarator", 3, arr);
	}
#line 4012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1226 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode("[", "[");
 		arr[2] = create_tnode("]", "]");
		(yyval.tVal) = create_node("direct_declarator", 3, arr);
	}
#line 4024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1233 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = (yyvsp[-3].tVal);
		arr[1] = create_tnode("[", "[");
		arr[2] = create_tnode("*", "*");
 		arr[3] = create_tnode("]", "]");
		(yyval.tVal) = create_node("direct_declarator", 4, arr);
	}
#line 4037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1241 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[7];
		arr[0] = (yyvsp[-5].tVal);
		arr[1] = create_tnode("[", "[");
		arr[2] = create_tnode("STATIC", (yyvsp[-3].str));
		arr[3] = (yyvsp[-2].tVal);
		arr[4] = (yyvsp[-1].tVal);
 		arr[5] = create_tnode("]", "]");
		(yyval.tVal) = create_node("direct_declarator", 6, arr);
	}
#line 4052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1251 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[6];
		arr[0] = (yyvsp[-4].tVal);
		arr[1] = create_tnode("[", "[");
		arr[2] = create_tnode("STATIC", (yyvsp[-2].str));
		arr[3] = (yyvsp[-1].tVal);
 		arr[4] = create_tnode("]", "]");
		(yyval.tVal) = create_node("direct_declarator", 5, arr);
	}
#line 4066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1260 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[6];
		arr[0] = (yyvsp[-4].tVal);
		arr[1] = create_tnode("[", "[");
		arr[2] = (yyvsp[-2].tVal);
		arr[3] = create_tnode("*", "*");
 		arr[4] = create_tnode("]", "]");
		(yyval.tVal) = create_node("direct_declarator", 5, arr);
	}
#line 4080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1269 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[7];
		arr[0] = (yyvsp[-5].tVal);
		arr[1] = create_tnode("[", "[");
		arr[2] = (yyvsp[-3].tVal);
		arr[3] = create_tnode("STATIC", (yyvsp[-2].str));
		arr[4] = (yyvsp[-1].tVal);
 		arr[5] = create_tnode("]", "]");
		(yyval.tVal) = create_node("direct_declarator", 6, arr);
	}
#line 4095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1279 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[6];
		arr[0] = (yyvsp[-4].tVal);
		arr[1] = create_tnode("[", "[");
		arr[2] = (yyvsp[-2].tVal);
		arr[3] = (yyvsp[-1].tVal);
 		arr[4] = create_tnode("]", "]");
		(yyval.tVal) = create_node("direct_declarator", 5, arr);
	}
#line 4109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1288 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = (yyvsp[-3].tVal);
		arr[1] = create_tnode("[", "[");
		arr[2] = (yyvsp[-1].tVal);
 		arr[3] = create_tnode("]", "]");
		(yyval.tVal) = create_node("direct_declarator", 4, arr);
	}
#line 4122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1296 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = (yyvsp[-3].tVal);
		arr[1] = create_tnode("[", "[");
		arr[2] = (yyvsp[-1].tVal);
 		arr[3] = create_tnode("]", "]");
		(yyval.tVal) = create_node("direct_declarator", 4, arr);
	}
#line 4135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1304 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = (yyvsp[-3].tVal);
		arr[1] = create_tnode("(", "(");
		arr[2] = (yyvsp[-1].tVal);
 		arr[3] = create_tnode(")", ")");
		(yyval.tVal) = create_node("direct_declarator", 4, arr);
	}
#line 4148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1312 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[1] = create_tnode("(", "(");
		arr[0] = (yyvsp[-2].tVal);
 		arr[2]=create_tnode(")", ")");
		(yyval.tVal) = create_node("direct_declarator", 3, arr);
	}
#line 4160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1319 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0] = (yyvsp[-3].tVal);
		arr[1] = create_tnode("(", "(");
		arr[2] = (yyvsp[-1].tVal);
 		arr[3] = create_tnode(")", ")");
		(yyval.tVal) = create_node("direct_declarator", 4, arr);
	}
#line 4173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1330 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = create_tnode("*", "*");
		arr[1] = (yyvsp[-1].tVal);
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("pointer", 3, arr);
	}
#line 4185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1337 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = create_tnode("*", "*");
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("pointer", 2, arr);
	}
#line 4196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1343 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = create_tnode("*", "*");
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("pointer", 2, arr);
	}
#line 4207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1349 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("*", "*");
		(yyval.tVal) = create_node("pointer", 1, arr);
	}
#line 4217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1357 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("type_qualifier_list", 1, arr);
	}
#line 4227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1362 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("type_qualifier_list", 2, arr);
	}
#line 4238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1372 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[1] = create_tnode(",", ",");
		arr[0] = (yyvsp[-2].tVal);
		arr[2] = create_tnode("ELLIPSIS", (yyvsp[0].str));
		(yyval.tVal) = create_node("parameter_type_list", 3, arr);
	}
#line 4250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1379 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("parameter_type_list", 1, arr);
	}
#line 4260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1387 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("parameter_list", 1, arr);
	}
#line 4270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1392 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[1] = create_tnode(",", ",");
		arr[0] = (yyvsp[-2].tVal);
		arr[2] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("parameter_list", 3, arr);
	}
#line 4282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1402 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("parameter_declaration", 2, arr);
	}
#line 4293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1408 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("parameter_declaration", 2, arr);
	}
#line 4304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1414 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("parameter_declaration", 1, arr);
	}
#line 4314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1422 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("IDENTIFIER", (yyvsp[0].str));
		(yyval.tVal) = create_node("identifier_list", 1, arr);
	}
#line 4324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1427 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0] = (yyvsp[-2].tVal);
		arr[1] = create_tnode(",", ",");
		arr[2] = create_tnode("IDENTIFIER", (yyvsp[0].str));
		(yyval.tVal) = create_node("identifier_list", 3, arr);
	}
#line 4336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1437 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("type_name", 2, arr);
	}
#line 4347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1443 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("type_name", 1, arr);
	}
#line 4357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1451 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0] = (yyvsp[-1].tVal);
		arr[1] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("abstract_declarator", 2, arr);
	}
#line 4368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1457 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("abstract_declarator", 1, arr);
	}
#line 4378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1462 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("abstract_declarator", 1, arr);
	}
#line 4388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1470 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("(","(");
    arr[1]=(yyvsp[-1].tVal);
    arr[2]=create_tnode(")",")");
		(yyval.tVal) = create_node("direct_abstract_declarator", 3, arr);
	}
#line 4400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1477 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[3];
    arr[0]=create_tnode("[","[");
    arr[1]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 2, arr);
	}
#line 4411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1483 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("[","[");
    arr[1]=create_tnode("*","*");
    arr[2]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 3, arr);
	}
#line 4423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1490 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[6];
    arr[0]=create_tnode("[","[");
    arr[1]=create_tnode("STATIC",(yyvsp[-3].str));
    arr[2]=(yyvsp[-2].tVal);
    arr[3]=(yyvsp[-1].tVal);
    arr[4]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 5, arr);
	}
#line 4437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1499 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[5];
    arr[0]=create_tnode("[","[");
    arr[1]=create_tnode("STATIC",(yyvsp[-2].str));
    arr[2]=(yyvsp[-1].tVal);
    arr[4]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 4, arr);
	}
#line 4450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1507 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[6];
    arr[0]=create_tnode("[","[");
    arr[1]=(yyvsp[-3].tVal);
    arr[2]=create_tnode("STATIC",(yyvsp[-2].str));
    arr[3]=(yyvsp[-1].tVal);
    arr[4]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 5, arr);
	}
#line 4464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1516 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[5];
    arr[0]=create_tnode("[","[");
    arr[1]=(yyvsp[-2].tVal);
    arr[2]=(yyvsp[-1].tVal);
    arr[4]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 4, arr);
	}
#line 4477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1524 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("[","[");
    arr[1]=(yyvsp[-1].tVal);
    arr[2]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 3, arr);
	}
#line 4489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1531 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("[","[");
    arr[1]=(yyvsp[-1].tVal);
    arr[2]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 3, arr);
	}
#line 4501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1538 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=(yyvsp[-2].tVal);
    arr[1]=create_tnode("[","[");
    arr[2]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 3, arr);
	}
#line 4513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1545 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[5];
    arr[0]=(yyvsp[-3].tVal);
    arr[1]=create_tnode("[","[");
    arr[2]=create_tnode("*","*");
    arr[3]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 4, arr);
	}
#line 4526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1553 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[7];
    arr[0]=(yyvsp[-5].tVal);
    arr[1]=create_tnode("[","[");
    arr[2]=create_tnode("STATIC",(yyvsp[-3].str));
    arr[3]=(yyvsp[-2].tVal);
    arr[4]=(yyvsp[-1].tVal);
    arr[5]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 6, arr);
	}
#line 4541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1563 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[6];
    arr[0]=(yyvsp[-4].tVal);
    arr[1]=create_tnode("[","[");
    arr[2]=create_tnode("STATIC",(yyvsp[-2].str));
    arr[3]=(yyvsp[-1].tVal);
    arr[4]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 5, arr);
	}
#line 4555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1572 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[6];
    arr[0]=(yyvsp[-4].tVal);
    arr[1]=create_tnode("[","[");
    arr[2]=(yyvsp[-2].tVal);
    arr[3]=(yyvsp[-1].tVal);
    arr[4]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 5, arr);
	}
#line 4569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1581 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[7];
    arr[0]=(yyvsp[-5].tVal);
    arr[1]=create_tnode("[","[");
    arr[2]=(yyvsp[-3].tVal);
    arr[3]=create_tnode("STATIC",(yyvsp[-2].str));
    arr[4]=(yyvsp[-1].tVal);
    arr[5]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 6, arr);
	}
#line 4584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1591 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[5];
    arr[0]=(yyvsp[-3].tVal);
    arr[1]=create_tnode("[","[");
    arr[2]=(yyvsp[-1].tVal);
    arr[3]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 4, arr);
	}
#line 4597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1599 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[5];
    arr[0]=(yyvsp[-3].tVal);
    arr[1]=create_tnode("[","[");
    arr[2]=(yyvsp[-1].tVal);
    arr[3]=create_tnode("]","]");
		(yyval.tVal) = create_node("direct_abstract_declarator", 4, arr);
	}
#line 4610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1607 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[3];
    arr[0]=create_tnode("(","(");
    arr[1]=create_tnode(")",")");
		(yyval.tVal) = create_node("direct_abstract_declarator", 2, arr);
	}
#line 4621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1613 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("(","(");
    arr[1]=(yyvsp[-1].tVal);
    arr[2]=create_tnode(")",")");
		(yyval.tVal) = create_node("direct_abstract_declarator", 3, arr);
	}
#line 4633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1620 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
  	arr[0]=(yyvsp[-2].tVal);
    arr[1]=create_tnode("(","(");
    arr[2]=create_tnode(")",")");
		(yyval.tVal) = create_node("direct_abstract_declarator", 3, arr);
	}
#line 4645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1627 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[5];
  	arr[0]=(yyvsp[-3].tVal);
    arr[1]=create_tnode("(","(");
    arr[2]=(yyvsp[-1].tVal);
    arr[3]=create_tnode(")",")");
		(yyval.tVal) = create_node("direct_abstract_declarator", 4, arr);
	}
#line 4658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1638 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("{","{");
    arr[1]=(yyvsp[-1].tVal);
    arr[2]=create_tnode("}","}");
		(yyval.tVal) = create_node("initializer", 3, arr);
	}
#line 4670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1645 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[5];
    arr[0]=create_tnode("{","{");
    arr[1]=(yyvsp[-2].tVal);
    arr[2]=create_tnode(",",",");
    arr[3]=create_tnode("}","}");
		(yyval.tVal) = create_node("initializer", 4, arr);
	}
#line 4683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1653 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("initializer", 1, arr);
	}
#line 4693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1662 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[3];
    arr[0]=(yyvsp[-1].tVal);
    arr[1]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("initializer_list", 2, arr);
	}
#line 4704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1668 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("initializer_list", 1, arr);
	}
#line 4714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1673 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=(yyvsp[-3].tVal);
    arr[1]=create_tnode(",",",");
    arr[2]=(yyvsp[-1].tVal);
		(yyval.tVal) = create_node("initializer_list", 3, arr);
	}
#line 4726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1680 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=(yyvsp[-2].tVal);
    arr[1]=create_tnode(",",",");
    arr[2]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("initializer_list", 3, arr);
	}
#line 4738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1690 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[3];
    arr[0]=(yyvsp[-1].tVal);
    arr[1]=create_tnode("=","=");
		(yyval.tVal) = create_node("designation", 2, arr);
	}
#line 4749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1699 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("designator_list", 1, arr);
	}
#line 4759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1704 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[3];
    arr[0]=(yyvsp[-1].tVal);
    arr[1]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("designator_list", 2, arr);
	}
#line 4770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1713 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("[","[");
    arr[1]=(yyvsp[-1].tVal);
    arr[2]=create_tnode("]","]");
		(yyval.tVal) = create_node("designator", 3, arr);
	}
#line 4782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1720 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[3];
    arr[0]=create_tnode(".",".");
    arr[1]=create_tnode("IDENTIFIER",(yyvsp[0].str));
		(yyval.tVal) = create_node("designator", 2, arr);
	}
#line 4793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1729 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[8];
		arr[0]=create_tnode("STATIC_ASSERT",(yyvsp[-6].str));
    arr[1]=create_tnode("(","(");
    arr[2]=(yyvsp[-4].tVal);
    arr[3]=create_tnode(",",",");
    arr[4]=create_tnode("STRING_LITERAL",(yyvsp[-2].str));
    arr[5]=create_tnode(")",")");
    arr[6]=create_tnode(";",";");
		(yyval.tVal) = create_node("static_assert_declaration", 7, arr);
	}
#line 4809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1743 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("statement", 1, arr);
	}
#line 4819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1748 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("statement", 1, arr);
	}
#line 4829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1753 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("statement", 1, arr);
	}
#line 4839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1758 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("statement", 1, arr);
	}
#line 4849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1763 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("statement", 1, arr);
	}
#line 4859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1768 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("statement", 1, arr);
	}
#line 4869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1776 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("IDENTIFIER",(yyvsp[-2].str));
    arr[1]=create_tnode(":",":");
    arr[2]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("labeled_statement", 3, arr);
	}
#line 4881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1783 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[5];
    arr[0]=create_tnode("CASE",(yyvsp[-3].str));
    arr[1]=(yyvsp[-2].tVal);
    arr[2]=create_tnode(":",":");
    arr[3]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("labeled_statement", 4, arr);
	}
#line 4894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1791 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("DEFAULT",(yyvsp[-2].str));
    arr[1]=create_tnode(":",":");
    arr[2]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("labeled_statement", 3, arr);
	}
#line 4906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1801 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[3];
    arr[0]=create_tnode("{","{");
    arr[1]=create_tnode("}","}");
		(yyval.tVal) = create_node("compound_statement", 2, arr);
	}
#line 4917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1807 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("{","{");
    arr[1]=(yyvsp[-1].tVal);
    arr[2]=create_tnode("}","}");
		(yyval.tVal) = create_node("compound_statement", 3, arr);
	}
#line 4929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1817 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("block_item_list", 1, arr);
	}
#line 4939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1822 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[3];
    arr[0]=(yyvsp[-1].tVal);
    arr[1]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("block_item_list", 2, arr);
	}
#line 4950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1831 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("block_item", 1, arr);
	}
#line 4960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1836 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
    arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("block_item", 1, arr);
	}
#line 4970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1844 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[2];
		arr[0]=create_tnode(";",";");
		(yyval.tVal) = create_node("expression_statement", 1, arr);
	}
#line 4980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1849 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[3];
    arr[0]=(yyvsp[-1].tVal);
		arr[1]=create_tnode(";",";");
		(yyval.tVal) = create_node("expression_statement", 2, arr);
	}
#line 4991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1858 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[8];
		arr[0]=create_tnode("IF",(yyvsp[-6].str));
    arr[1]=create_tnode("(","(");
    arr[2]=(yyvsp[-4].tVal);
    arr[3]=create_tnode(")",")");
    arr[4]=(yyvsp[-2].tVal);
    arr[5]=create_tnode("ELSE",(yyvsp[-1].str));
    arr[6]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("selection_statement", 7, arr);
	}
#line 5007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1869 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[6];
		arr[0]=create_tnode("IF",(yyvsp[-4].str));
    arr[1]=create_tnode("(","(");
    arr[2]=(yyvsp[-2].tVal);
    arr[3]=create_tnode(")",")");
    arr[4]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("selection_statement", 5, arr);
	}
#line 5021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1878 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[6];
		arr[0]=create_tnode("SWITCH",(yyvsp[-4].str));
    arr[1]=create_tnode("(","(");
    arr[2]=(yyvsp[-2].tVal);
    arr[3]=create_tnode(")",")");
    arr[4]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("selection_statement", 5, arr);
	}
#line 5035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1890 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[6];
		arr[0]=create_tnode("WHILE",(yyvsp[-4].str));
    arr[1]=create_tnode("(","(");
    arr[2]=(yyvsp[-2].tVal);
    arr[3]=create_tnode(")",")");
    arr[4]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("iteration_statement", 5, arr);
	}
#line 5049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1899 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[8];
		arr[0]=create_tnode("DO",(yyvsp[-6].str));
    arr[1]=(yyvsp[-5].tVal);
    arr[2]=create_tnode("WHILE",(yyvsp[-4].str));
    arr[3]=create_tnode("(","(");
    arr[4]=(yyvsp[-2].tVal);
    arr[5]=create_tnode(")",")");
    arr[6]=create_tnode(";",";");
		(yyval.tVal) = create_node("iteration_statement", 7, arr);
	}
#line 5065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1910 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[7];
		arr[0]=create_tnode("FOR",(yyvsp[-5].str));
    arr[1]=create_tnode("(","(");
    arr[2]=(yyvsp[-3].tVal);
    arr[3]=(yyvsp[-2].tVal);
    arr[4]=create_tnode(")",")");
    arr[5]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("iteration_statement", 6, arr);
	}
#line 5080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1920 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[8];
		arr[0]=create_tnode("FOR",(yyvsp[-6].str));
    arr[1]=create_tnode("(","(");
    arr[2]=(yyvsp[-4].tVal);
    arr[3]=(yyvsp[-3].tVal);
    arr[4]=(yyvsp[-2].tVal);
    arr[5]=create_tnode(")",")");
    arr[6]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("iteration_statement", 7, arr);
	}
#line 5096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1931 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[7];
		arr[0]=create_tnode("FOR",(yyvsp[-5].str));
    arr[1]=create_tnode("(","(");
    arr[2]=(yyvsp[-3].tVal);
    arr[3]=(yyvsp[-2].tVal);
    arr[4]=create_tnode(")",")");
    arr[5]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("iteration_statement", 6, arr);
	}
#line 5111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1941 "grammar.y" /* yacc.c:1646  */
    {
  	PARSE_TREE arr[8];
		arr[0]=create_tnode("FOR",(yyvsp[-6].str));
    arr[1]=create_tnode("(","(");
    arr[2]=(yyvsp[-4].tVal);
    arr[3]=(yyvsp[-3].tVal);
    arr[4]=(yyvsp[-2].tVal);
    arr[5]=create_tnode(")",")");
    arr[6]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("iteration_statement", 7, arr);
	}
#line 5127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1955 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0]=create_tnode("GOTO",(yyvsp[-2].str));
    arr[1]=create_tnode("IDENTIFIER",(yyvsp[-1].str));
    arr[2]=create_tnode(";",";");
		(yyval.tVal) = create_node("jump_statement", 3, arr);
	}
#line 5139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1962 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=create_tnode("CONTINUE",(yyvsp[-1].str));
    arr[1]=create_tnode(";",";");
		(yyval.tVal) = create_node("jump_statement", 2, arr);
	}
#line 5150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1968 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=create_tnode("BREAK",(yyvsp[-1].str));
    arr[1]=create_tnode(";",";");
		(yyval.tVal) = create_node("jump_statement", 2, arr);
	}
#line 5161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1974 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=create_tnode("RETURN",(yyvsp[-1].str));
    arr[1]=create_tnode(";",";");
		(yyval.tVal) = create_node("jump_statement", 2, arr);
	}
#line 5172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1980 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0]=create_tnode("RETURN",(yyvsp[-2].str));
    arr[1]=(yyvsp[-1].tVal);
    arr[2]=create_tnode(";",";");
		(yyval.tVal) = create_node("jump_statement", 3, arr);
	}
#line 5184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1990 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE ParseTree;
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		ParseTree = create_node("base", 1, arr);
		print_file(ParseTree);
	}
#line 5196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2000 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("translation_unit", 1, arr);
	}
#line 5206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2005 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=(yyvsp[-1].tVal);
    	arr[1]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("translation_unit", 2, arr);
	}
#line 5217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2014 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("external_declaration", 1, arr);
	}
#line 5227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2019 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("external_declaration", 1, arr);
	}
#line 5237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2027 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[5];
		arr[0]=(yyvsp[-3].tVal);
    arr[1]=(yyvsp[-2].tVal);
    arr[2]=(yyvsp[-1].tVal);
    arr[3]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("function_definition", 4, arr);
	}
#line 5250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2035 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[4];
		arr[0]=(yyvsp[-2].tVal);
    arr[1]=(yyvsp[-1].tVal);
    arr[2]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("function_definition", 3, arr);
	}
#line 5262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2045 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[2];
		arr[0] = (yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_list", 1, arr);
	}
#line 5272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2050 "grammar.y" /* yacc.c:1646  */
    {
		PARSE_TREE arr[3];
		arr[0]=(yyvsp[-1].tVal);
    arr[1]=(yyvsp[0].tVal);
		(yyval.tVal) = create_node("declaration_list", 2, arr);
	}
#line 5283 "y.tab.c" /* yacc.c:1646  */
    break;


#line 5287 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
  return yyresult;
}
#line 2058 "grammar.y" /* yacc.c:1906  */

#include <stdio.h>
#include "lex.yy.c"
int id=0;

FILE *fp;

void print_file(PARSE_TREE tree){
	fp=fopen("final.txt","w");
	fprintf(fp,"graph milestone{\n");
	
	print_node(tree);
	fprintf(fp,"}");
}

void print_node(PARSE_TREE tree){
	int temp=0;
	int noc=tree->no_of_child,i;
	
	
	if(tree->typ==1){
		if(tree->name == tree->ac_name){
			return;
		}
		else 
		fprintf(fp," \"%s_%d\" -- \"%s_%d\";\n",tree->name,tree->uid,tree->ac_name,tree->uid);
		return;
	}
	
	printf("%d\n\n\n\n\n\n",noc);
	for(i=0;i<noc;i++){
		fprintf(fp,"\"%s_%d\" -- \"%s_%d\";\n",tree->name,tree->uid,(tree->child[i])->name,(tree->child[i])->uid);
	}
	

	/*
	for(i=0;i<noc;i++){
		if(((tree->child)[i])->child==0 || tree->typ==1){
			fprintf(fp," \"%s_%d\" -- \"%s_%s_%d\";\n",tree->name,tree->uid,(tree->child[i])->ac_name,(tree->child[i])->name,(tree->child[i])->uid);
		}
		else{
			fprintf(fp,"\"%s_%d\" -- \"%s_%d\";\n",tree->name,tree->uid,(tree->child[i])->name,(tree->child[i])->uid);
		}
	}
	*/
	
	
	//printf("tree name %s\n\n\n\n\n",tree->name);
	for(i=0;i<noc;i++){
		//printf("tree name %s\n uid = %d \n\n\n\n",((tree->child[i])->child[0])->name,tree->child[i]->no_of_child);
		print_node((tree->child)[i]);
	}

}


void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}

PARSE_TREE create_node(char * na, int noc, PARSE_TREE *ch){
	PARSE_TREE t;
	t = (PARSE_TREE)malloc(sizeof(TREE_NODE));
	t->name =na;
	t->typ = 0;
	t->uid = id++;
	t->no_of_child = noc;
	int i;
	for(i=0;i<noc;i++)
	t->child[i] = ch[i];

	return (t);

}

PARSE_TREE create_tnode(char * na, char *ana){
	PARSE_TREE t;
	t = (PARSE_TREE)malloc(sizeof(TREE_NODE));
	t->name =na;
	t->typ = 1;
	t->uid = id++;
	t->no_of_child = 0;
	t->ac_name = ana;
	return (t);

}


