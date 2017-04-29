/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

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
#include <bits/stdc++.h>
#include "info.h"
using namespace std;

#define pb push_back
#define For(i,a,b) for(int (i)=(a);(i) < (b); ++(i))
typedef vector<int> vi;

extern FILE *yyin;
extern int yylex();
void yyerror(const char* s);
extern int yydebug;
extern int  yylineno;
const char* bhej;
quad_array Quad;
symboltable globalst;
symboltable *current_ST,*hunny;
vector<symboltable *> stack_ST;
vector<string> str_consts;
string named;
string vib;

string current_name;
int counter_temp;
string bing;
int globe,tell;
int flag;
int error_exists;
expression* type_check(expression* t1,expression* t2, string op);

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif



#line 113 "y.tab.c" /* yacc.c:339  */

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
    STRING_LITERAL = 259,
    TYPEDEF_NAME = 260,
    I_CONSTANT = 261,
    F_CONSTANT = 262,
    SIZEOF = 263,
    FUNC_NAME = 264,
    PTR_OP = 265,
    INC_OP = 266,
    DEC_OP = 267,
    LEFT_OP = 268,
    RIGHT_OP = 269,
    LE_OP = 270,
    GE_OP = 271,
    EQ_OP = 272,
    NE_OP = 273,
    AND_OP = 274,
    OR_OP = 275,
    MUL_ASSIGN = 276,
    DIV_ASSIGN = 277,
    MOD_ASSIGN = 278,
    ADD_ASSIGN = 279,
    SUB_ASSIGN = 280,
    LEFT_ASSIGN = 281,
    RIGHT_ASSIGN = 282,
    AND_ASSIGN = 283,
    XOR_ASSIGN = 284,
    OR_ASSIGN = 285,
    TYPEDEF = 286,
    EXTERN = 287,
    STATIC = 288,
    AUTO = 289,
    REGISTER = 290,
    INLINE = 291,
    CONST = 292,
    RESTRICT = 293,
    VOLATILE = 294,
    BOOL = 295,
    CHAR = 296,
    SHORT = 297,
    INT = 298,
    LONG = 299,
    SIGNED = 300,
    UNSIGNED = 301,
    FLOAT = 302,
    DOUBLE = 303,
    VOID = 304,
    COMPLEX = 305,
    IMAGINARY = 306,
    STRUCT = 307,
    UNION = 308,
    ELLIPSIS = 309,
    CASE = 310,
    DEFAULT = 311,
    IF = 312,
    ELSE = 313,
    SWITCH = 314,
    WHILE = 315,
    DO = 316,
    FOR = 317,
    GOTO = 318,
    CONTINUE = 319,
    BREAK = 320,
    RETURN = 321,
    ALIGNAS = 322,
    ALIGNOF = 323,
    ATOMIC = 324,
    GENERIC = 325,
    NORETURN = 326,
    STATIC_ASSERT = 327,
    THREAD_LOCAL = 328
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LITERAL 259
#define TYPEDEF_NAME 260
#define I_CONSTANT 261
#define F_CONSTANT 262
#define SIZEOF 263
#define FUNC_NAME 264
#define PTR_OP 265
#define INC_OP 266
#define DEC_OP 267
#define LEFT_OP 268
#define RIGHT_OP 269
#define LE_OP 270
#define GE_OP 271
#define EQ_OP 272
#define NE_OP 273
#define AND_OP 274
#define OR_OP 275
#define MUL_ASSIGN 276
#define DIV_ASSIGN 277
#define MOD_ASSIGN 278
#define ADD_ASSIGN 279
#define SUB_ASSIGN 280
#define LEFT_ASSIGN 281
#define RIGHT_ASSIGN 282
#define AND_ASSIGN 283
#define XOR_ASSIGN 284
#define OR_ASSIGN 285
#define TYPEDEF 286
#define EXTERN 287
#define STATIC 288
#define AUTO 289
#define REGISTER 290
#define INLINE 291
#define CONST 292
#define RESTRICT 293
#define VOLATILE 294
#define BOOL 295
#define CHAR 296
#define SHORT 297
#define INT 298
#define LONG 299
#define SIGNED 300
#define UNSIGNED 301
#define FLOAT 302
#define DOUBLE 303
#define VOID 304
#define COMPLEX 305
#define IMAGINARY 306
#define STRUCT 307
#define UNION 308
#define ELLIPSIS 309
#define CASE 310
#define DEFAULT 311
#define IF 312
#define ELSE 313
#define SWITCH 314
#define WHILE 315
#define DO 316
#define FOR 317
#define GOTO 318
#define CONTINUE 319
#define BREAK 320
#define RETURN 321
#define ALIGNAS 322
#define ALIGNOF 323
#define ATOMIC 324
#define GENERIC 325
#define NORETURN 326
#define STATIC_ASSERT 327
#define THREAD_LOCAL 328

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 48 "grammar.y" /* yacc.c:355  */

  int intval;
  double doubleval;
  float floatval;
  char charval;
  void *pointer;
  basic_type b_type;
  string *pstring;
  symboldata *symboldat;
  symboltype *symboltypei;
  expression *exp_info;
  decc *declarationi;
  vector<decc*> *decvec;
  parameter *param;
  vector<parameter*> *parameter_list;
  struct treeNode *tVal;
  new_tab curls;

#line 318 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 333 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1991

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  279
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  502

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,     2,     2,    90,    83,     2,
      74,    75,    84,    85,    76,    86,    80,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    97,
      91,    96,    92,    95,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,    93,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,    94,    82,    87,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   120,   127,   144,   147,   148,   151,   155,
     162,   172,   181,   193,   197,   198,   202,   203,   207,   210,
     214,   217,   259,   262,   265,   271,   277,   283,   292,   302,
     315,   318,   325,   332,   338,   344,   349,   354,   358,   362,
     366,   370,   374,   381,   384,   393,   396,   403,   409,   418,
     421,   427,   436,   439,   445,   454,   457,   475,   493,   510,
     530,   533,   550,   570,   573,   582,   585,   594,   597,   606,
     609,   618,   621,   630,   633,   637,   640,   722,   729,   732,
     735,   738,   741,   744,   747,   750,   753,   756,   762,   765,
     771,   776,   777,   868,   872,   873,   874,   875,   879,   880,
     881,   882,   883,   884,   888,   893,   913,   919,   924,   925,
     926,   927,   928,   929,   933,   937,   940,   941,   945,   949,
     953,   957,   958,   959,   960,   961,   962,   963,   964,   967,
     995,   996,   996,  1001,  1005,  1006,  1010,  1011,  1015,  1016,
    1082,  1086,  1087,  1088,  1089,  1093,  1098,  1105,  1106,  1107,
    1111,  1115,  1116,  1117,  1118,  1122,  1123,  1127,  1128,  1132,
    1137,  1150,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,
    1163,  1164,  1169,  1349,  1391,  1395,  1396,  1397,  1401,  1407,
    1408,  1413,  1414,  1422,  1427,  1434,  1440,  1441,  1445,  1446,
    1450,  1451,  1455,  1456,  1457,  1461,  1462,  1463,  1464,  1465,
    1466,  1467,  1468,  1469,  1470,  1471,  1472,  1473,  1474,  1475,
    1476,  1477,  1478,  1479,  1480,  1481,  1485,  1486,  1487,  1491,
    1492,  1493,  1494,  1498,  1502,  1503,  1507,  1508,  1512,  1516,
    1517,  1520,  1523,  1526,  1530,  1535,  1536,  1537,  1541,  1570,
    1571,  1571,  1580,  1581,  1589,  1592,  1598,  1599,  1606,  1629,
    1652,  1652,  1670,  1683,  1688,  1710,  1710,  1725,  1725,  1726,
    1749,  1749,  1753,  1753,  1758,  1758,  1767,  1768,  1769,  1770,
    1771,  1780,  1784,  1785,  1796,  1802,  1812,  1813,  1866,  1867
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL",
  "TYPEDEF_NAME", "I_CONSTANT", "F_CONSTANT", "SIZEOF", "FUNC_NAME",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('", "')'", "','", "':'",
  "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'='", "';'",
  "$accept", "N", "M1", "primary_expression", "constant", "string",
  "generic_selection", "generic_assoc_list", "generic_association",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "MMstruct", "struct_or_union_specifier", "$@1",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "atomic_type_specifier", "type_qualifier",
  "function_specifier", "alignment_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement", "M",
  "compound_statement", "$@2", "block_item_list", "block_item",
  "expression_statement", "if", "else", "selection_statement", "$@3", "P",
  "iteration_statement", "$@4", "$@5", "$@6", "$@7", "$@8",
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
     325,   326,   327,   328,    40,    41,    44,    58,    91,    93,
      46,   123,   125,    38,    42,    43,    45,   126,    33,    47,
      37,    60,    62,    94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -417

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-417)))

#define YYTABLE_NINF -278

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1676,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,   -24,   -21,  -417,    -5,  -417,
    -417,    38,  1775,  1775,  -417,    22,  -417,  1775,  1775,  1775,
    -417,    21,  1676,  -417,     2,   733,  1922,  1315,  -417,    46,
       1,  -417,   -46,  -417,   662,    60,    63,  -417,  -417,    71,
    1824,  -417,  -417,  -417,  -417,  -417,   -22,  -417,  -417,  -417,
    -417,  -417,  1336,  -417,  1357,  1357,    45,    53,   733,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,   262,
    -417,  1315,  -417,   106,   -62,   174,    62,   181,    94,    88,
      98,   175,    23,  -417,   134,  1922,    55,  1922,   140,   144,
     153,   156,  -417,  -417,  -417,     1,    46,  -417,  1187,  -417,
      38,  1676,  1578,   756,    60,  -417,   415,  -417,    39,  -417,
    -417,  -417,   733,  -417,   733,  -417,  -417,  1922,  1315,   588,
    -417,  -417,   132,   164,   246,  -417,  -417,  1208,  1315,   248,
    -417,  1315,  1315,  1315,  1315,  1315,  1315,  1315,  1315,  1315,
    1315,  1315,  1315,  1315,  1315,  1315,  1315,  1315,  1315,  1315,
    -417,  -417,  1477,   825,    73,  -417,    97,  -417,  -417,  -417,
     255,  -417,  -417,  -417,  -417,   166,  1101,  -417,  -417,  -417,
    -417,  -417,    72,   202,   216,  -417,   149,  1032,  -417,   222,
     227,   848,   228,  -417,  -417,  1315,  -417,    10,  -417,   234,
     487,   240,   243,   253,   254,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  1315,  -417,  1315,  1229,
    -417,  -417,   162,  -417,   250,  -417,  -417,  -417,  -417,   106,
     106,   -62,   -62,   174,   174,   174,   174,    62,    62,   181,
      94,    88,    98,   175,   168,  -417,   257,   258,  1032,  -417,
     256,   259,   917,    97,  1627,   940,   264,  1315,   334,  -417,
       6,  1187,   -52,  -417,  1423,  -417,    95,  -417,  -417,  1725,
    -417,   338,   266,  1032,  -417,  -417,  1315,  -417,   267,   270,
    1824,  -417,   129,  -417,  1315,   275,  1315,   280,  -417,   269,
    -417,  -417,  -417,   358,   283,   285,   347,  -417,    86,  -417,
    -417,  -417,  -417,   301,  -417,  -417,   310,  -417,  -417,   323,
     324,   325,  -417,   307,   307,  -417,  1873,  -417,  -417,  1101,
    -417,  -417,  1315,  -417,  1315,  -417,  -417,   312,  1032,  -417,
    -417,  1315,  -417,   314,  -417,   320,  1032,  -417,   317,   321,
    1009,   304,   326,  -417,  1053,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,   327,   329,  -417,  -417,  1526,  -417,  -417,
     574,   332,   574,  1315,  -417,  -417,   336,   306,  -417,  -417,
    -417,    87,  -417,  -417,   487,  1315,  -417,  -417,  -417,   335,
     178,  -417,   337,    67,  -417,  -417,  -417,   339,   340,  -417,
    -417,   343,  1032,  -417,  -417,  1315,  -417,   344,  -417,  -417,
    -417,  -417,  1187,  -417,  -417,  -417,  -417,   574,  -417,   191,
     350,   574,   595,  -417,  -417,  -417,   200,   351,   352,   353,
    1315,  -417,  1873,  1315,  1078,  -417,  -417,  -417,  -417,   349,
     357,  -417,  -417,  -417,   574,  -417,   369,  -417,  -417,   595,
    1676,  1676,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  1315,
     363,   595,  -417,   595,   595,   595,   212,  1315,  -417,   574,
     364,   366,  1315,  -417,   215,  -417,  -417,   574,   574,   223,
    -417,   316,  1315,   380,  -417,  -417,   574,   574,  -417,   367,
     384,  -417,  -417,   370,  -417,  -417,  -417,   574,   574,  -417,
    -417,  -417
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   128,   108,   109,   110,   112,   113,   155,   151,   152,
     153,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   134,   135,     0,   154,   156,     0,   111,
     275,     0,    95,    97,   127,     0,   126,    99,   101,   103,
      93,     0,   271,   272,     0,     0,     0,     0,   161,     0,
     178,    91,     0,   104,   107,   160,     0,    94,    96,   133,
       0,    98,   100,   102,     1,   273,   240,   274,     4,    11,
       9,    10,     0,    12,     0,     0,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    18,     5,     6,     8,    30,
      43,     0,    45,    49,    52,    55,    60,    63,    65,    67,
      69,    71,    73,    90,     0,   142,   191,   144,     0,     0,
       0,     0,   154,   179,   177,   176,     0,    92,     0,   278,
       0,   276,     0,     0,   159,   129,     0,   136,     0,   140,
     239,   238,     0,    34,     0,    31,    32,     0,     0,    43,
      75,    88,     0,     0,     0,    24,    25,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     158,   141,     0,     0,   193,   190,   194,   143,   157,   150,
       0,   162,   180,   175,   105,   107,     0,   218,   106,   279,
     188,   173,   187,     0,   182,   183,     0,     0,   163,    38,
       0,     0,     0,   130,   137,     0,   138,     0,   145,   149,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    77,     0,     7,     0,     0,
      23,    20,     0,    28,     0,    22,    46,    47,    48,    50,
      51,    53,    54,    58,    59,    56,    57,    61,    62,    64,
      66,    68,    70,    72,     0,   212,     0,     0,     0,   196,
      38,     0,     0,   192,     0,     0,     0,     0,     0,   220,
       0,     0,     0,   224,     0,   185,   193,   186,   172,     0,
     174,     0,     0,     0,   164,   171,     0,   170,    38,     0,
       0,   147,     0,   139,     0,     4,     0,     0,   248,     0,
     255,   257,   254,     0,     0,     0,     0,   246,     0,   244,
     245,   229,   230,     3,   242,   231,     0,   232,   233,     0,
       0,     0,   234,    35,     0,    36,     0,    76,    89,     0,
      44,    21,     0,    19,     0,   213,   195,     0,     0,   197,
     203,     0,   202,     0,   214,     0,     0,   204,    38,     0,
       0,     0,     0,   227,     0,   216,   219,   223,   225,   181,
     184,   189,   166,     0,     0,   167,   169,     0,   146,   148,
       0,     0,     0,     0,   238,   238,     0,     0,   267,   268,
     269,     0,   247,   241,     0,     0,   254,   254,   254,     0,
       0,    14,     0,     0,    29,    74,   199,     0,     0,   201,
     215,     0,     0,   205,   211,     0,   210,     0,   228,   226,
     217,   222,     0,   165,   168,   132,   235,     0,   237,     0,
       0,     0,     0,   266,   270,   243,     0,     0,     0,     0,
       0,    13,     0,     0,     0,    26,   198,   200,   207,     0,
       0,   208,   221,   236,     0,     3,     0,     3,     2,     0,
       0,     0,    17,    15,    16,    27,   206,   209,   253,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,     2,     0,     3,     2,     0,     0,     0,
       3,     0,     0,   252,   261,   263,     0,     0,   258,     2,
       0,   265,   256,     0,   249,     3,     3,     0,     0,     2,
     259,   251
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -417,  -179,  -416,  -417,  -417,  -417,  -417,  -417,    14,  -417,
    -417,   211,  -417,   -43,    50,   157,   121,   159,   247,   282,
     284,   281,   302,  -417,   -31,   -86,  -417,   -78,   -25,   -53,
     128,  -417,   333,  -417,   -33,  -417,  -417,  -417,  -417,   161,
    -106,   -50,  -417,   177,  -417,   -42,  -417,  -417,   -14,   -49,
     -48,   -76,  -116,  -417,   192,  -417,    80,   -87,  -159,  -107,
     143,  -345,  -417,   201,   -55,  -276,  -417,   -51,   430,  -417,
    -417,    91,  -231,  -417,  -417,  -417,  -417,  -353,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,   434,  -417,  -417
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   462,   384,    85,    86,    87,    88,   390,   391,    89,
     232,   139,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   140,   141,   226,   308,   104,    30,
     120,    52,    53,    32,    33,   202,    34,   125,    35,   126,
     127,   106,   207,   208,    36,    37,    38,    39,   111,    55,
      56,   115,   256,   194,   195,   196,   392,   257,   176,   269,
     270,   271,   272,   273,    40,   310,   311,   210,   312,   131,
     313,   314,   315,   316,   495,   317,   490,   376,   318,   374,
     375,   319,   320,   321,   322,    41,    42,    43,    44,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     142,   119,   114,   107,   107,   129,   193,   124,   113,   412,
     128,   188,   105,   105,   103,   263,   103,    54,   107,   175,
     204,    64,   110,   154,   155,    59,   267,   105,   268,   459,
     116,   461,   187,   427,   428,   429,   107,   200,     8,     9,
      10,    48,    48,   168,   357,   105,   469,   201,   150,    48,
      45,   117,   214,    46,   142,   171,   142,   177,   174,   482,
     130,   233,   234,   107,   487,   107,    48,   183,   189,    47,
     112,   129,   105,   182,   105,    48,   128,   158,   159,   497,
     498,   113,   354,    66,   107,    50,   292,   261,   355,   412,
     107,   254,   107,   105,   416,   107,   418,   262,    48,   105,
     187,   105,   185,    60,   105,   277,   185,   293,   236,   237,
     238,   282,    49,    49,   209,   289,   205,   263,   169,   137,
      49,   283,    50,    50,   174,   108,   109,   138,    31,   172,
      50,   113,    48,   173,   122,    51,   206,    49,   123,    50,
     327,   443,   328,   434,   276,   446,   274,   172,   345,   435,
     173,   173,  -131,   160,   161,   113,    50,   309,   143,   182,
      57,    58,   228,   228,   356,    61,    62,    63,   458,   274,
      31,   264,   337,   173,   103,   265,   343,   164,   275,   349,
     291,   165,   338,   382,   424,   187,   330,   156,   157,   350,
     151,   447,   166,   476,   167,   152,   153,   363,   162,   163,
     364,   484,   485,    49,   239,   240,   205,   227,   228,   170,
     491,   492,   211,    50,   212,   178,   113,   213,   463,   179,
     182,   499,   500,   113,   280,   281,   276,   124,   381,   180,
     468,   181,   470,   471,   472,   129,   103,   331,   332,   229,
     128,   182,   352,   187,   228,   334,   394,   411,   107,   230,
     192,   235,   397,   431,   432,   398,    90,   105,    90,   266,
     401,   204,   118,   103,   407,   103,   444,   228,   187,   369,
     402,   371,   144,   145,   146,   448,   228,   278,   209,   243,
     244,   245,   246,   133,   107,   135,   136,   473,   228,   475,
     481,   228,   279,   105,   480,   419,   182,   483,   486,   228,
     192,   284,    90,   395,   113,   442,   285,   426,   182,   290,
     493,   294,   129,   241,   242,   323,   439,   128,   324,   440,
     501,   247,   248,   420,   421,   107,   187,   411,   325,   333,
     326,   309,   335,   336,   105,   339,   147,   353,   340,   351,
     148,   361,   149,   373,   452,   362,   365,   454,   187,   366,
      68,    69,   370,    70,    71,    72,    73,   372,    74,    75,
     182,   377,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
     378,   466,   379,   383,   385,   386,   387,   388,   329,   474,
     107,   396,   192,   399,   479,   400,   403,   464,   465,   105,
     404,   408,   192,   423,   489,   409,   413,   192,   414,   417,
     422,   249,   430,   488,   433,    76,    90,    77,   436,   437,
       1,    78,   438,   441,   445,   449,   450,   451,   456,   460,
      79,    80,    81,    82,    83,    84,   457,   467,  -250,   477,
      90,   478,   494,   228,   380,   496,   453,   250,   252,   184,
     251,   367,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   368,
     253,   360,   393,   358,    67,   425,    65,     0,    90,     0,
       0,     0,     0,     0,    26,     0,     0,    28,     0,     0,
     295,    69,     1,    70,    71,    72,    73,   203,    74,    75,
       0,     0,     0,     0,     0,    90,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,   296,   297,   298,    90,   299,   300,   301,   302,
     303,   304,   305,   306,    25,    76,    26,    77,    27,    28,
      29,    78,     0,     0,     0,     0,     0,     0,    66,     0,
      79,    80,    81,    82,    83,    84,     0,   295,    69,     0,
      70,    71,    72,    73,   307,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
       0,    70,    71,    72,    73,     0,    74,    75,     0,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   296,
     297,   298,     0,   299,   300,   301,   302,   303,   304,   305,
     306,     0,    76,     0,    77,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,    66,     0,    79,    80,    81,
      82,    83,    84,    76,     0,    77,     0,     1,     0,    78,
       0,   307,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,   225,     0,     0,     0,     0,     0,
       0,     0,   307,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,    28,    29,    68,    69,     1,    70,
      71,    72,    73,  -277,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,    68,
      69,     0,    70,    71,    72,    73,     0,    74,    75,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,     0,   197,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,    76,    26,    77,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,     0,     0,    76,   112,    77,     0,    68,    69,
      78,    70,    71,    72,    73,   198,    74,    75,     0,    79,
     199,    81,    82,    83,    84,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,   258,    74,
      75,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   286,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,    76,   112,    77,     0,     0,     0,    78,
       0,     0,     0,     0,   259,     0,     0,     0,    79,   260,
      81,    82,    83,    84,     0,     0,    76,   112,    77,     0,
      68,    69,    78,    70,    71,    72,    73,   287,    74,    75,
       0,    79,   288,    81,    82,    83,    84,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
     341,    74,    75,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   346,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,    76,   112,    77,     0,     0,
       0,    78,     0,     0,     0,     0,   342,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     0,     0,    76,   112,
      77,     0,    68,    69,    78,    70,    71,    72,    73,   347,
      74,    75,     0,    79,   348,    81,    82,    83,    84,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,   405,    74,    75,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,     0,    74,    75,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,    76,   112,    77,
       0,    68,    69,    78,    70,    71,    72,    73,   406,    74,
      75,     0,    79,    80,    81,    82,    83,    84,     0,     0,
      76,   112,    77,     0,    68,    69,    78,    70,    71,    72,
      73,     0,    74,    75,     0,    79,    80,    81,    82,    83,
      84,    76,     0,    77,     0,     0,     0,    78,     0,     0,
       0,   267,     0,   268,   186,   410,    79,    80,    81,    82,
      83,    84,     0,     0,     0,     0,    76,     0,    77,     0,
       0,     0,    78,     0,     0,     0,   267,     0,   268,   186,
     455,    79,    80,    81,    82,    83,    84,     0,     0,    76,
       0,    77,     0,     0,     0,    78,     0,     0,     0,   267,
       0,   268,   186,     0,    79,    80,    81,    82,    83,    84,
      68,    69,     0,    70,    71,    72,    73,     0,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,     0,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,     0,    70,    71,    72,    73,     0,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,    77,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,   186,     0,
      79,    80,    81,    82,    83,    84,    76,     0,    77,     0,
       0,     0,    78,   231,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    76,     0,    77,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
     329,     0,    79,    80,    81,    82,    83,    84,    68,    69,
       0,    70,    71,    72,    73,     0,    74,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,     0,    74,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    69,     0,    70,    71,    72,    73,     0,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,    77,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    76,     0,    77,     0,     0,     0,
     132,     0,     0,     0,     0,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    76,    48,    77,     1,     0,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    26,     0,    27,     0,    29,   274,   255,     0,
       0,   173,     0,     0,     0,     0,     0,    50,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,    26,     0,    27,     0,
      29,   172,   255,     0,     0,   173,     0,     0,     0,     0,
       0,    50,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,   190,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   415,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,    29,     0,   191,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,    26,     0,    27,     0,
      29,     0,   344,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   359,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,    26,     0,    27,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,    26,     0,    27,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     1,     0,   389,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26
};

static const yytype_int16 yycheck[] =
{
      78,    54,    50,    45,    46,    60,   122,    56,    50,   354,
      60,   118,    45,    46,    45,   174,    47,    31,    60,   106,
     126,     0,    47,    85,    86,     3,    78,    60,    80,   445,
      76,   447,   118,   386,   387,   388,    78,   123,    37,    38,
      39,     3,     3,    20,    96,    78,   462,   123,    91,     3,
      74,    97,   138,    74,   132,   105,   134,   107,   106,   475,
      82,   147,   148,   105,   480,   107,     3,   115,   121,    74,
      69,   126,   105,   115,   107,     3,   126,    15,    16,   495,
     496,   123,    76,    81,   126,    84,    76,   173,    82,   434,
     132,   169,   134,   126,   370,   137,   372,   173,     3,   132,
     186,   134,   116,    81,   137,   192,   120,    97,   151,   152,
     153,   197,    74,    74,   128,   201,    77,   276,    95,    74,
      74,   197,    84,    84,   172,    45,    46,    74,     0,    74,
      84,   173,     3,    78,    74,    97,    97,    74,    78,    84,
     226,   417,   228,    76,   192,   421,    74,    74,   264,    82,
      78,    78,    81,    91,    92,   197,    84,   210,    78,   201,
      32,    33,    76,    76,   271,    37,    38,    39,   444,    74,
      42,    74,   258,    78,   205,    78,   262,    83,   192,   265,
     205,    93,   258,    97,    97,   271,   229,    13,    14,   265,
      84,   422,    94,   469,    19,    89,    90,   283,    17,    18,
     286,   477,   478,    74,   154,   155,    77,    75,    76,    75,
     486,   487,   132,    84,   134,    75,   258,   137,   449,    75,
     262,   497,   498,   265,    75,    76,   274,   276,   306,    76,
     461,    75,   463,   464,   465,   290,   267,    75,    76,    75,
     290,   283,   267,   329,    76,    77,   332,   354,   290,     3,
     122,     3,   338,    75,    76,   341,    45,   290,    47,     4,
     346,   367,    96,   294,   350,   296,    75,    76,   354,   294,
     346,   296,    10,    11,    12,    75,    76,    75,   292,   158,
     159,   160,   161,    72,   326,    74,    75,    75,    76,   468,
      75,    76,    76,   326,   473,   373,   338,   476,    75,    76,
     172,    79,    91,   334,   346,   412,    79,   385,   350,    81,
     489,    77,   367,   156,   157,    75,   402,   367,    75,   405,
     499,   162,   163,   374,   375,   367,   412,   434,    75,    79,
      76,   384,    75,    75,   367,    79,    74,     3,    79,    75,
      78,     3,    80,    74,   430,    79,    79,   433,   434,    79,
       3,     4,    77,     6,     7,     8,     9,    77,    11,    12,
     402,     3,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
      97,   459,    97,    82,    74,    62,    62,    62,    81,   467,
     432,    79,   264,    79,   472,    75,    79,   450,   451,   432,
      79,    97,   274,    97,   482,    79,    79,   279,    79,    77,
      74,   164,    77,    97,    77,    68,   205,    70,    79,    79,
       5,    74,    79,    79,    74,    74,    74,    74,    79,    60,
      83,    84,    85,    86,    87,    88,    79,    74,    58,    75,
     229,    75,    58,    76,    97,    75,   432,   165,   167,   116,
     166,   290,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   292,
     168,   279,   329,   272,    44,   384,    42,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    82,    11,    12,
      -1,    -1,    -1,    -1,    -1,   294,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,   334,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    -1,     3,     4,    -1,
       6,     7,     8,     9,    97,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    -1,    11,    12,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    68,    -1,    70,    -1,     5,    -1,    74,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    71,    72,    73,     3,     4,     5,     6,
       7,     8,     9,    81,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,     3,
       4,    -1,     6,     7,     8,     9,    -1,    11,    12,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    33,
      -1,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    -1,    -1,    68,    69,    70,    -1,     3,     4,
      74,     6,     7,     8,     9,    79,    11,    12,    -1,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    33,    11,
      12,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    -1,    -1,    68,    69,    70,    -1,
       3,     4,    74,     6,     7,     8,     9,    79,    11,    12,
      -1,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      33,    11,    12,    -1,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    -1,    -1,    68,    69,
      70,    -1,     3,     4,    74,     6,     7,     8,     9,    79,
      11,    12,    -1,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    33,    11,    12,    -1,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      -1,     3,     4,    74,     6,     7,     8,     9,    79,    11,
      12,    -1,    83,    84,    85,    86,    87,    88,    -1,    -1,
      68,    69,    70,    -1,     3,     4,    74,     6,     7,     8,
       9,    -1,    11,    12,    -1,    83,    84,    85,    86,    87,
      88,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    68,
      -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    80,    81,    -1,    83,    84,    85,    86,    87,    88,
       3,     4,    -1,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    68,    -1,    70,    -1,
      -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    68,    -1,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,     3,     4,
      -1,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    68,    -1,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    68,     3,    70,     5,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    84,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     5,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    67,    69,    71,    72,    73,
     127,   128,   131,   132,   134,   136,   142,   143,   144,   145,
     162,   183,   184,   185,   186,    74,    74,    74,     3,    74,
      84,    97,   129,   130,   146,   147,   148,   128,   128,     3,
      81,   128,   128,   128,     0,   185,    81,   166,     3,     4,
       6,     7,     8,     9,    11,    12,    68,    70,    74,    83,
      84,    85,    86,    87,    88,   101,   102,   103,   104,   107,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   126,   132,   139,   143,   154,   154,
     126,   146,    69,   143,   148,   149,    76,    97,    96,   127,
     128,   187,    74,    78,   147,   135,   137,   138,   139,   162,
      82,   167,    74,   109,    74,   109,   109,    74,    74,   109,
     122,   123,   125,   154,    10,    11,    12,    74,    78,    80,
     111,    84,    89,    90,    85,    86,    13,    14,    15,    16,
      91,    92,    17,    18,    83,    93,    94,    19,    20,    95,
      75,   139,    74,    78,   148,   155,   156,   139,    75,    75,
      76,    75,   143,   148,   130,   146,    81,   123,   157,   127,
       3,    75,   128,   150,   151,   152,   153,    33,    79,    84,
     123,   149,   133,    82,   138,    77,    97,   140,   141,   146,
     165,   154,   154,   154,   123,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    96,   124,    75,    76,    75,
       3,    75,   108,   123,   123,     3,   111,   111,   111,   112,
     112,   113,   113,   114,   114,   114,   114,   115,   115,   116,
     117,   118,   119,   120,   125,    75,   150,   155,    33,    79,
      84,   123,   149,   156,    74,    78,     4,    78,    80,   157,
     158,   159,   160,   161,    74,   146,   148,   155,    75,    76,
      75,    76,   123,   149,    79,    79,    33,    79,    84,   123,
      81,   126,    76,    97,    77,     3,    55,    56,    57,    59,
      60,    61,    62,    63,    64,    65,    66,    97,   125,   127,
     163,   164,   166,   168,   169,   170,   171,   173,   176,   179,
     180,   181,   182,    75,    75,    75,    76,   123,   123,    81,
     111,    75,    76,    79,    77,    75,    75,   123,   149,    79,
      79,    33,    79,   123,    75,   150,    33,    79,    84,   123,
     149,    75,   126,     3,    76,    82,   157,    96,   161,    54,
     152,     3,    79,   123,   123,    79,    79,   137,   141,   126,
      77,   126,    77,    74,   177,   178,   175,     3,    97,    97,
      97,   125,    97,    82,   100,    74,    62,    62,    62,    56,
     105,   106,   154,   158,   123,   122,    79,   123,   123,    79,
      75,   123,   149,    79,    79,    33,    79,   123,    97,    79,
      82,   157,   159,    79,    79,    82,   163,    77,   163,   125,
     165,   165,    74,    97,    97,   169,   125,   175,   175,   175,
      77,    75,    76,    77,    76,    82,    79,    79,    79,   123,
     123,    79,   157,   163,    75,    74,   163,   170,    75,    74,
      74,    74,   123,   106,   123,    82,    79,    79,   163,   100,
      60,   100,    99,   170,   127,   127,   125,    74,   170,   100,
     170,   170,   170,    75,   125,    99,   163,    75,    75,   125,
      99,    75,   100,    99,   163,   163,    75,   100,    97,   125,
     174,   163,   163,    99,    58,   172,    75,   100,   100,   163,
     163,    99
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,   100,   101,   101,   101,   101,   101,   102,
     102,   103,   103,   104,   105,   105,   106,   106,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   110,
     110,   110,   110,   111,   111,   112,   112,   112,   112,   113,
     113,   113,   114,   114,   114,   115,   115,   115,   115,   115,
     116,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     126,   127,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   131,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     134,   135,   134,   134,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   139,   139,   140,   140,   141,   141,   141,
     142,   143,   143,   143,   143,   144,   144,   145,   145,   146,
     146,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   148,   148,   148,   148,   149,
     149,   150,   150,   151,   151,   152,   152,   152,   153,   153,
     154,   154,   155,   155,   155,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   157,   157,   157,   158,
     158,   158,   158,   159,   160,   160,   161,   161,   162,   163,
     163,   163,   163,   163,   163,   164,   164,   164,   165,   166,
     167,   166,   168,   168,   169,   169,   170,   170,   171,   172,
     174,   173,   173,   173,   175,   177,   176,   178,   176,   176,
     179,   176,   180,   176,   181,   176,   182,   182,   182,   182,
     182,   183,   184,   184,   185,   185,   186,   186,   187,   187
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     3,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     7,     2,     1,     1,     1,     2,     2,     3,
       1,     2,     1,     2,     1,     1,     3,     2,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       1,     1,     3,     3,     4,     6,     5,     5,     6,     5,
       4,     4,     4,     3,     4,     3,     2,     2,     1,     1,
       2,     3,     1,     1,     3,     2,     2,     1,     1,     3,
       2,     1,     2,     1,     1,     3,     2,     3,     5,     4,
       5,     4,     3,     3,     3,     4,     6,     5,     5,     6,
       4,     4,     2,     3,     3,     4,     3,     4,     1,     2,
       1,     4,     3,     2,     1,     2,     3,     2,     7,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     0,     2,
       0,     5,     1,     3,     1,     1,     1,     2,     1,     1,
       0,    13,     8,     5,     0,     0,    10,     0,     9,    13,
       0,     8,     0,     8,     0,     9,     3,     2,     2,     2,
       3,     1,     1,     2,     2,     1,     3,     2,     1,     2
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
#line 112 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->nextlist=makelist(Quad.nextinstr);
		Quad.emit("","","GOTO","");
	}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 120 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->instr=Quad.nextinstr;
	}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 127 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		string tmp1=(*((yyvsp[0].pstring)));
		symboldata *var=current_ST->lookup(tmp1);
		if(var==NULL){		
				bhej=tmp1.c_str();
				yyerror("undeclared variable");//errorr undeclared tmp1 at line number 
		}
		else{
			(yyval.exp_info)->b_type = var->type.b_type;
			(yyval.exp_info)->pc=var->type.pc;
			(yyval.exp_info)->base_t=var->type.base_t;
			(yyval.exp_info)->loc = tmp1;
			(yyval.exp_info)->return_type=var->type.return_type;
		}

	}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 144 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 148 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-1].exp_info);
	}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 155 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		//$$->loc= Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp(type_int, type_void, 0);
		(yyval.exp_info)->b_type = type_int;
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].intval),"ASSIGN");
	}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 162 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		//$$->loc= Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp(type_float, type_void, 0);
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].doubleval),"ASSIGN");
		(yyval.exp_info)->b_type = type_double;
	}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 172 "grammar.y" /* yacc.c:1646  */
    {
		/*$$=new expression;
		$$->base_t=type_char;
		$$->pc=1;
		$$->b_type=type_pointer;
		$$->loc= Quad.gentmp();
		Quad.emit($$->loc, $1 ,"");
		*/
	}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 181 "grammar.y" /* yacc.c:1646  */
    {
		/*$$=new expression;
		$$->base_t=type_char;
		$$->pc=1;
		$$->b_type=type_pointer;
		$$->loc= Quad.gentmp();
		Quad.emit($$->loc, $1,"");
		*/
	}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 207 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 210 "grammar.y" /* yacc.c:1646  */
    {
		(yyvsp[-3].exp_info)->array_list.push_back((yyvsp[-1].exp_info)->loc);
		(yyval.exp_info)=(yyvsp[-3].exp_info);
	}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 214 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 217 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-3].exp_info);
		string function_name=(yyvsp[-3].exp_info)->loc;
		symboltable *functionsymbol=globalst.lookup(function_name)->nested_symboltable;
		vector<parameter*> arglist=*((yyvsp[-1].parameter_list));
		vector<symboldata*> parameterlist=functionsymbol->order_symbol;
		if(arglist.size()!=functionsymbol->arg_tot){
			yyerror("function not called in right way");
		}

		else{
			For(i,0,arglist.size()){
				if(parameterlist[i]->type.b_type == type_function){
					if(!(arglist[i]->type.base_t==parameterlist[i]->type.return_type && arglist[i]->type.pc==parameterlist[i]->type.pc))
						yyerror("wrong input arguement given");
				}
			}
		}

		For(i,0,arglist.size()){

			//////////////////////////////////////////////////////////////////////////////////////////////////type check here

			if(arglist[i]->type.b_type!=parameterlist[i]->type.b_type){
				if(arglist[i]->type.base_t!=parameterlist[i]->type.b_type)
					yyerror("wrong input arguement given");

				//string temp=Quad.gentmp();
				string temp= current_ST->gentemp(parameterlist[i]->type.b_type,parameterlist[i]->type.base_t,parameterlist[i]->type.pc);
				arglist[i]->name=temp;
			}
			Quad.emit(arglist[i]->name,"","PARAM","");
		}
		basic_type a = globalst.lookup(function_name)->type.b_type;
		basic_type b = globalst.lookup(function_name)->type.base_t;
		basic_type c = globalst.lookup(function_name)->type.return_type;
		int p = globalst.lookup(function_name)->type.pc;
		vib = current_ST->gentemp(c,b,p);
		Quad.emit(function_name,(int)arglist.size(),"CALL");


	}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 259 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 262 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 265 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-1].exp_info)->loc,"ASSIGN","=");
		Quad.emit((yyvsp[-1].exp_info)->loc,(yyvsp[-1].exp_info)->loc,"+","1");
	}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 271 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc=Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc,(yyvsp[-1].exp_info)->loc,"ASSIGN","=");
		Quad.emit((yyvsp[-1].exp_info)->loc,(yyvsp[-1].exp_info)->loc,"+","1");
	}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 277 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type=(yyvsp[-4].symboltypei)->b_type;
		(yyval.exp_info)->pc=(yyvsp[-4].symboltypei)->pc;
		(yyval.exp_info)->base_t=(yyvsp[-4].symboltypei)->base_t;
	}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 283 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type=(yyvsp[-5].symboltypei)->b_type;
		(yyval.exp_info)->pc=(yyvsp[-5].symboltypei)->pc;
		(yyval.exp_info)->base_t=(yyvsp[-5].symboltypei)->base_t;
	}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 292 "grammar.y" /* yacc.c:1646  */
    {
		parameter *temp=new parameter;
		temp->name=(yyvsp[0].exp_info)->loc;
		temp->type.b_type=(yyvsp[0].exp_info)->b_type;
		temp->type.base_t=(yyvsp[0].exp_info)->base_t;
		temp->type.return_type=(yyvsp[0].exp_info)->return_type;
		temp->type.pc=(yyvsp[0].exp_info)->pc;
		(yyval.parameter_list)=new vector<parameter*>;
		(yyval.parameter_list)->pb(temp);
	}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 302 "grammar.y" /* yacc.c:1646  */
    {
		parameter *temp=new parameter;
		temp->name=(yyvsp[0].exp_info)->loc;
		temp->type.b_type=(yyvsp[0].exp_info)->b_type;
		temp->type.base_t=(yyvsp[0].exp_info)->base_t;
		temp->type.return_type=(yyvsp[0].exp_info)->return_type;
		temp->type.pc=(yyvsp[0].exp_info)->pc;
		(yyval.parameter_list)=(yyvsp[-2].parameter_list);
		(yyval.parameter_list)->pb(temp);
	}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 315 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 318 "grammar.y" /* yacc.c:1646  */
    {
		Quad.emit((yyvsp[0].exp_info)->loc,(yyvsp[0].exp_info)->loc,"+","1");
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->loc=current_ST->gentemp((yyvsp[0].exp_info)->b_type,(yyvsp[0].exp_info)->base_t,(yyvsp[0].exp_info)->pc);
		(yyval.exp_info)->b_type = (yyvsp[0].exp_info)->b_type; (yyval.exp_info)->base_t=(yyvsp[0].exp_info)->base_t; (yyval.exp_info)->pc=(yyvsp[0].exp_info)->pc;
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].exp_info)->loc,"ASSIGN","=");
	}
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 325 "grammar.y" /* yacc.c:1646  */
    {
		Quad.emit((yyvsp[0].exp_info)->loc,(yyvsp[0].exp_info)->loc,"-","1");
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->loc=current_ST->gentemp((yyvsp[0].exp_info)->b_type,(yyvsp[0].exp_info)->base_t,(yyvsp[0].exp_info)->pc);
		(yyval.exp_info)->b_type = (yyvsp[0].exp_info)->b_type; (yyval.exp_info)->base_t=(yyvsp[0].exp_info)->base_t; (yyval.exp_info)->pc=(yyvsp[0].exp_info)->pc;
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].exp_info)->loc,"ASSIGN","=");
	}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 332 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->loc=current_ST->gentemp((yyvsp[0].exp_info)->b_type,(yyvsp[0].exp_info)->base_t,(yyvsp[0].exp_info)->pc);
		(yyval.exp_info)->b_type = (yyvsp[0].exp_info)->b_type; (yyval.exp_info)->base_t=(yyvsp[0].exp_info)->base_t; (yyval.exp_info)->pc=(yyvsp[0].exp_info)->pc;
		Quad.emit((yyval.exp_info)->loc,"",(yyvsp[-1].exp_info)->loc,(yyvsp[0].exp_info)->loc);
	}
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 338 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type= type_int;
		(yyval.exp_info)->loc=current_ST->gentemp(type_int,type_void,0);
		Quad.emit((yyval.exp_info)->loc,"","sizeof",(yyvsp[0].exp_info)->loc);
	}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 344 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type= type_int;
		
	}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 349 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 354 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="&";
	}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 358 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="*";
	}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 362 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="+";
	}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 366 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="-";
	}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 370 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="~";
	}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 374 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="!";
	}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 381 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 384 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type=(yyvsp[-2].symboltypei)->b_type;
		(yyval.exp_info)->pc=(yyvsp[-2].symboltypei)->pc;
		(yyval.exp_info)->base_t=(yyvsp[-2].symboltypei)->base_t;
	}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 393 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 396 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "*");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc=current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "*", (yyvsp[0].exp_info)->loc);

	}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 403 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "/");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc=current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "/", (yyvsp[0].exp_info)->loc);
	}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 409 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "%");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc=current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "%", (yyvsp[0].exp_info)->loc);
	}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 418 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 421 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "+");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "+", (yyvsp[0].exp_info)->loc);
	}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 427 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "-");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "-", (yyvsp[0].exp_info)->loc);
	}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 436 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 439 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "<<");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "<<", (yyvsp[0].exp_info)->loc);
	}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 445 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), ">>");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, ">>", (yyvsp[0].exp_info)->loc);
	}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 454 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 457 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "<");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		(yyval.exp_info)->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "GOTO_L", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		(yyval.exp_info)->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");

	}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 475 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), ">");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		(yyval.exp_info)->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "GOTO_G", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		(yyval.exp_info)->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");

	}
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 493 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "<=");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		(yyval.exp_info)->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "GOTO_LE", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		(yyval.exp_info)->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");
	}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 510 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), ">=");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		(yyval.exp_info)->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "GOTO_GE", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		(yyval.exp_info)->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");
	}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 530 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 533 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "==");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		(yyval.exp_info)->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "EQ", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		(yyval.exp_info)->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");
	}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 550 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "!=");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		(yyval.exp_info)->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "NE", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		(yyval.exp_info)->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");
	}
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 570 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 573 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "&");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "&", (yyvsp[0].exp_info)->loc);
	}
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 582 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 585 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "^");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "^", (yyvsp[0].exp_info)->loc);
	}
#line 2797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 594 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 597 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "|");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "!", (yyvsp[0].exp_info)->loc);
	}
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 606 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 609 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "&&");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "&&", (yyvsp[0].exp_info)->loc);
	}
#line 2835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 618 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 621 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "||");
		//$$->loc = Quad.gentmp();
		(yyval.exp_info)->loc = current_ST->gentemp((yyval.exp_info)->b_type,(yyval.exp_info)->base_t,(yyval.exp_info)->pc);
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "||", (yyvsp[0].exp_info)->loc);
	}
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 630 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 637 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 640 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), *(yyvsp[-1].pstring));

		symboldata *var=current_ST->lookup((yyvsp[-2].exp_info)->loc);
		int size = var->type.array_list.size();
		int size2 = (yyvsp[0].exp_info)->array_list.size();
		int i,j;
		string result,temp;
		//cout<<"size2 "<<$3->array_list.size()<<"   "<<$3->loc<<endl;
		//-------for array-------------
		if(size && !size2){
			string new_str,old_str,xxx,t;

			old_str = (yyvsp[-2].exp_info)->array_list[size - 1];
			//t = Quad.gentmp();
			t = current_ST->gentemp(type_int,type_int,0);
			//xxx = Quad.gentmp();
			xxx = current_ST->gentemp(type_int,type_int,0);
			Quad.emit(t,var->type.array_list[size - 1],"ASSIGN","=");
			//new_str = Quad.gentmp();
			new_str = current_ST->gentemp(type_int,type_int,0);
			Quad.emit(new_str, (yyvsp[-2].exp_info)->array_list[size - 1],"ASSIGN","=");
			old_str = new_str;
			//new_str = Quad.gentmp();
			new_str = current_ST->gentemp(type_int,type_int,0);
			for(i=size-2;i>=0;i--){
				

				Quad.emit(new_str,(yyvsp[-2].exp_info)->array_list[i],"*",t);
				Quad.emit(t,t,"*",var->type.array_list[i]);
				
				Quad.emit(xxx,new_str,"+",old_str);
				old_str = xxx;
			}
			stringstream temp1;
			temp1<<(yyvsp[-2].exp_info)->loc<<"["<<old_str<<"]";
			
			temp1>>result;
			Quad.emit(result, (yyvsp[0].exp_info)->loc, "ASSIGN", *(yyvsp[-1].pstring));
		}
		else if(size2 && !size){
			var=current_ST->lookup((yyvsp[0].exp_info)->loc);
			string new_str,old_str,xxx,t;

			old_str = (yyvsp[0].exp_info)->array_list[size2 - 1];
			//t = Quad.gentmp();
			t = current_ST->gentemp(type_int,type_int,0);
			//xxx = Quad.gentmp();
			xxx = current_ST->gentemp(type_int,type_int,0);
			Quad.emit(t,var->type.array_list[size2 - 1],"ASSIGN","=");
			//new_str = Quad.gentmp();
			new_str = current_ST->gentemp(type_int,type_int,0);
			Quad.emit(new_str, (yyvsp[0].exp_info)->array_list[size2 - 1],"ASSIGN","=");
			old_str = new_str;
			//new_str = Quad.gentmp();
			new_str = current_ST->gentemp(type_int,type_int,0);
			for(i=size2-2;i>=0;i--){
				Quad.emit(new_str,(yyvsp[0].exp_info)->array_list[i],"*",t);
				Quad.emit(t,t,"*",var->type.array_list[i]);
				
				Quad.emit(xxx,new_str,"+",old_str);
				old_str = xxx;
			}
			stringstream temp1;
			temp1<<(yyvsp[0].exp_info)->loc<<"["<<old_str<<"]";
			
			temp1>>temp;
			//xxx = Quad.gentmp();
			xxx = current_ST->gentemp(type_int,type_int,0);
			Quad.emit(xxx,temp,"ASSIGN","=");
			Quad.emit((yyvsp[-2].exp_info)->loc, xxx, "ASSIGN", *(yyvsp[-1].pstring));

		}
		else{
			result = (yyvsp[-2].exp_info)->loc;
			Quad.emit(result, (yyvsp[0].exp_info)->loc, "ASSIGN", *(yyvsp[-1].pstring));
		}

	}
#line 2954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 723 "grammar.y" /* yacc.c:1646  */
    {	
		(yyval.pstring) = new string;
		*(yyval.pstring) = "=";
		//*$$ ="=";
		
	}
#line 2965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 729 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="*=";
	}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 732 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="/=";
	}
#line 2981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 735 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="%=";
	}
#line 2989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 738 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="+=";
	}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 741 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="-=";
	}
#line 3005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 744 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="<<=";
	}
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 747 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)=">>=";
	}
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 750 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="&=";
	}
#line 3029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 753 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="^=";
	}
#line 3037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 756 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="|=";
	}
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 762 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 3053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 765 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 771 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 778 "grammar.y" /* yacc.c:1646  */
    {
		basic_type type_current = (yyvsp[-2].b_type);
		int size_now=-1;
		if(type_current==type_char){ 
        	size_now=SZ_CHAR;
        }
        if(type_current==type_int){
        	size_now=SZ_INT;
        }
        if(type_current==type_double){
        	size_now=SZ_DB;
        }
        if(type_current==type_float){ 
        	size_now=SZ_FLOAT;
        }
        if(type_current==type_void){
        	size_now=SZ_INT;
        }
        if(type_current==type_long){
        	size_now=SZ_DB;
        }
        vector<decc*> lst=*((yyvsp[-1].decvec));
        for(vector<decc*>::iterator it=lst.begin();it!=lst.end();it++)
        {
        	//cout<<"inside now"<<endl;
            decc *my_dec = *it;
            symboldata *var=current_ST->Symboltable[my_dec->name];

            if(var == NULL){
            	var = new symboldata;
            	var->nested_symboltable=NULL;
            	var->name = my_dec->name;
            	var->type.pc = my_dec->pc;
            	if(my_dec->pc > 0){
            		var->type.b_type = type_pointer;
            	}
            	var->type.b_type = type_current;
            	if(my_dec->array_list.size()){
            		var->type.b_type = type_array;
            		var->type.base_t = type_current;
            		var->type.array_list = my_dec->array_list;
            	}
            	var->offset = current_ST->offset;
            	//for(string p:my_dec->array_list )
            	//	size_now*=p;
            	var->size = size_now;
            	if(my_dec->initial_value!=NULL){
            		
            		expression *hunny = new expression;
            		hunny->b_type = my_dec->b_type;
            		hunny->base_t = my_dec->b_type;
            		hunny->pc = my_dec->pc;

            		type_check(hunny, my_dec->initial_value, "=");
					Quad.emit(var->name, my_dec->initial_value->loc, "ASSIGN", "=");          	
            	}


            	current_ST->insert(var);
            	continue;
            }
            else if(var->type.b_type == type_function || var->type.base_t == type_function){
            	var->name = my_dec->name;
            	var->type.pc = my_dec->pc;
            	var->type.b_type=type_function;
            	if(var->type.pc)
            		var->type.base_t = type_pointer;
            	var->type.return_type = type_current;	
            	if(my_dec->alist.size()){
            		cout<<"helllo"<<endl;
            		var->type.base_t = type_array;
            		var->type.alist = my_dec->alist;
            	}
            	var->offset = current_ST->offset;
            	for(int p:my_dec->alist )
            		size_now*=p;
            	var->size = size_now;
            	//current_ST->insert(var);
            	//current_ST->offset-=var->size;
            }
            else if(var!=NULL ){
            	bhej = var->name.c_str();
            	yyerror("already declared 1");
            }
            
            
        }


	}
#line 3164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 876 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type) = (yyvsp[0].b_type);
	}
#line 3172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 889 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.decvec) = new vector<decc *>;
		(yyval.decvec)->pb((yyvsp[0].declarationi));
	}
#line 3181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 894 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.decvec)=(yyvsp[-2].decvec);
		(yyval.decvec)->pb((yyvsp[0].declarationi));
	}
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 914 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)->initial_value = (yyvsp[0].exp_info);
		(yyval.declarationi) = (yyvsp[-2].declarationi);

	}
#line 3200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 919 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
	}
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 934 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_void;
	}
#line 3216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 937 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_char;
	}
#line 3224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 942 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_int;
	}
#line 3232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 946 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_long;
	}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 950 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_float;
	}
#line 3248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 954 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_double;
	}
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 967 "grammar.y" /* yacc.c:1646  */
    {	
		if(flag==0){
			(yyval.curls).temp = current_ST;
			(yyval.curls).created = new symboltable;
			stack_ST.pb((yyval.curls).created);
			symboldata *data = new symboldata;
			data->type.b_type = type_struct;
			char a[100] ;
			strcpy(a,current_name.c_str());
			char b[100];
			data->offset = current_ST->offset;
			current_ST->insert(data);
			data->nested_symboltable = (yyval.curls).created;
			data->name = a;
			data->nested_symboltable->parent = current_ST;
			data->nested_symboltable->name = data->name;
			current_ST = (yyval.curls).created;
		}
		else if (flag==1){
			if(current_name!="for")
			flag=0;
			(yyval.curls).temp = current_ST;
		}
	}
#line 3285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 996 "grammar.y" /* yacc.c:1646  */
    {current_name = *((yyvsp[0].pstring));}
#line 3291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 997 "grammar.y" /* yacc.c:1646  */
    {

		current_ST=(yyvsp[-3].curls).temp;
	}
#line 3300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1017 "grammar.y" /* yacc.c:1646  */
    {
		basic_type type_current = (yyvsp[-2].b_type);
		int size_now=-1;
		if(type_current==type_char){ 
        	size_now=SZ_CHAR;
        }
        if(type_current==type_int){
        	size_now=SZ_INT;
        }
        if(type_current==type_double){
        	size_now=SZ_DB;
        }
        if(type_current==type_float){ 
        	size_now=SZ_FLOAT;
        }
        if(type_current==type_void){
        	size_now=SZ_INT;
        }
        if(type_current==type_long){
        	size_now=SZ_DB;
        }

        vector<decc *> temp= *(yyvsp[-1].decvec);
        for(auto it: temp){
        	decc *my_dec = it;
        	symboldata *var=current_ST->lookup(my_dec->name);
	            if(var == NULL){
            	var = new symboldata;
            	var->nested_symboltable=NULL;
            	var->name = my_dec->name;
            	var->type.pc = my_dec->pc;
            	if(my_dec->pc > 0){
            		var->type.base_t = type_pointer;
            	}

            	var->type.b_type = type_current;
            	if(my_dec->alist.size()){
            		var->type.base_t = type_array;
            		var->type.alist = my_dec->alist;
            	}
            	var->offset = current_ST->offset;
            	for(int p:my_dec->alist )
            		size_now*=p;
            	var->size = size_now;
            	if(my_dec->initial_value!=NULL){
            		
            		expression *hunny = new expression;
            		hunny->b_type = my_dec->b_type;
            		hunny->base_t = my_dec->b_type;
            		hunny->pc = my_dec->pc;

            		type_check(hunny, my_dec->initial_value, "=");
					          	
            	}


            	current_ST->insert(var);
            }
	            else {
	            	bhej = my_dec->name.c_str();
	            	yyerror("already declared 2");
	            }
        }

	}
#line 3370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1094 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.decvec)=new vector<decc *>;
		(yyval.decvec)->pb((yyvsp[0].declarationi));
	}
#line 3379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1098 "grammar.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].decvec)->pb((yyvsp[0].declarationi));
		(yyval.decvec)=(yyvsp[-2].decvec);
	}
#line 3388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1133 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
		(yyval.declarationi)->pc = (yyvsp[-1].intval);
	}
#line 3397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1137 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
		(yyval.declarationi)->pc = 0;
	}
#line 3406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1151 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=new decc;
		(yyval.declarationi)->name=*((yyvsp[0].pstring));
	}
#line 3415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1165 "grammar.y" /* yacc.c:1646  */
    {
		(yyvsp[-3].declarationi)->array_list.pb((yyvsp[-1].exp_info)->loc);
		(yyval.declarationi) = (yyvsp[-3].declarationi);
	}
#line 3424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1170 "grammar.y" /* yacc.c:1646  */
    {
		
		(yyval.declarationi)=(yyvsp[-3].declarationi);
		tell=1;
		named=(yyvsp[-3].declarationi)->name;
		(yyval.declarationi)->b_type = type_function;
		symboldata *funcdata=current_ST->lookup((yyval.declarationi)->name);
		Quad.emit((yyvsp[-3].declarationi)->name,"","func_begin","");
		if(funcdata!=NULL){
			
			if(funcdata->nested_symboltable==NULL){
				funcdata->nested_symboltable = new symboltable;
			}
			else if(funcdata->nested_symboltable!=NULL&&funcdata->nested_symboltable->declared==1){

			}
			else if(funcdata->nested_symboltable!=NULL && funcdata->nested_symboltable->defined==1){
				bhej = funcdata->nested_symboltable->name.c_str();
				yyerror("already defined");
			}
			
			else funcdata->nested_symboltable->declared=1;
			



		}
		if(funcdata==NULL){
			funcdata = new symboldata;
			funcdata->name = (yyvsp[-3].declarationi)->name;
			funcdata->type.base_t = type_function;
			funcdata->nested_symboltable = new symboltable;
			funcdata->nested_symboltable->declared=1;
			funcdata->nested_symboltable->name = (yyvsp[-3].declarationi)->name;
			stack_ST.pb(funcdata->nested_symboltable);
			current_ST->insert(funcdata);
			current_ST->Symboltable[funcdata->name]= funcdata;


			for(auto it: *(yyvsp[-1].parameter_list)){
				//cout<<"inside now"<<endl;
				parameter *my_dec = it;

	            int size_now;
	            basic_type type_current = my_dec->type.b_type;
	            if(type_current==type_char){ 
		        	size_now=SZ_CHAR;
		        }
		        if(type_current==type_int){
		        	size_now=SZ_INT;
		        }
		        if(type_current==type_double){
		        	size_now=SZ_DB;
		        }
		        if(type_current==type_float){ 
		        	size_now=SZ_FLOAT;
		        }
		        if(type_current==type_void){
		        	size_now=SZ_INT;
		        }
		        if(type_current==type_long){
		        	size_now=SZ_DB;
		        }

	            symboldata *var=funcdata->nested_symboltable->lookup(my_dec->name);
	            if(var == NULL){
	            	var = new symboldata;
	            	var->nested_symboltable=NULL;
	            	var->name = my_dec->name;
	            	var->type = my_dec->type;
	            	if(my_dec->type.alist.size()){
	            		var->type.base_t = type_array;
	            		var->type.alist = my_dec->type.alist;
	            	}
	            	var->offset = funcdata->nested_symboltable->offset;
	            	for(int q:my_dec->type.alist )
	            		size_now*=q;
	            	var->size = size_now;	
	            	funcdata->nested_symboltable->insert(var);
	            	funcdata->nested_symboltable->arg_tot++;
	            }
	            else {
	            	bhej = my_dec->name.c_str();
	            	yyerror("already declared 3");
	            }
			}
			

			//if(flag==1)
				//current_ST = funcdata->nested_symboltable;

		}

		else{
			if((*(yyvsp[-1].parameter_list)).size()==(funcdata->nested_symboltable->order_symbol).size()){

				vector<symboltype> param,symb;
				for(auto it:*(yyvsp[-1].parameter_list))
					param.pb(it->type);
				for(auto it:funcdata->nested_symboltable->order_symbol)
					symb.pb(it->type);
				
				int yes=1;
				for(int i=0;i<param.size();i++){
					if(param[i].b_type!=symb[i].b_type || param[i].alist!=symb[i].alist || param[i].pc!=symb[i].pc || param[i].base_t!=symb[i].base_t)
						yes=0;
						
				}
				cout<<yes<<endl;
				if(yes){
					delete funcdata->nested_symboltable;
					funcdata->nested_symboltable = new symboltable;
					funcdata->nested_symboltable->name = (yyvsp[-3].declarationi)->name;

					current_ST->Symboltable[funcdata->name]= funcdata;


					for(auto it: *(yyvsp[-1].parameter_list)){
						//cout<<"inside now"<<endl;
						parameter *my_dec = it;

			            int size_now;
			            basic_type type_current = my_dec->type.b_type;
			            if(type_current==type_char){ 
				        	size_now=SZ_CHAR;
				        }
				        if(type_current==type_int){
				        	size_now=SZ_INT;
				        }
				        if(type_current==type_double){
				        	size_now=SZ_DB;
				        }
				        if(type_current==type_float){ 
				        	size_now=SZ_FLOAT;
				        }
				        if(type_current==type_void){
				        	size_now=SZ_INT;
				        }
				        if(type_current==type_long){
				        	size_now=SZ_DB;
				        }

			            symboldata *var=funcdata->nested_symboltable->lookup(my_dec->name);
			            if(var == NULL){
			            	var = new symboldata;
			            	var->nested_symboltable=NULL;
			            	var->name = my_dec->name;
			            	var->type = my_dec->type;
			            	if(my_dec->type.alist.size()){
			            		var->type.base_t = type_array;
			            		var->type.alist = my_dec->type.alist;
			            	}
			            	var->offset = funcdata->nested_symboltable->offset;
			            	for(int q:my_dec->type.alist )
			            		size_now*=q;
			            	var->size = size_now;	
			            	funcdata->nested_symboltable->insert(var);
			            }
					}
				}	

				else{
					string fname=funcdata->name;
					bhej=fname.c_str();
					yyerror("declarations and definition are not same for ");
					//printf("\n\n\n\n\n\n\ndeclarations and definition are not same\n\n\n\n\n\n\n\n");
				}		
			}
			else {
				string fname=funcdata->name;
				bhej=fname.c_str();
				yyerror("declarations and definition are not same for ");
				//printf("\n\n\n\n\n\n\ndeclarations and definition are not same\n\n\n\n\n\n\n\n");
			}
		}
		if(tell==0)
		Quad.emit((yyvsp[-3].declarationi)->name,"","func_ends","");

	}
#line 3608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1350 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=(yyvsp[-2].declarationi);
		tell=1;
		named=(yyvsp[-2].declarationi)->name;
		Quad.emit((yyvsp[-2].declarationi)->name,"","func_begin","");
		(yyval.declarationi)->b_type = type_function;
		symboldata *funcdata=current_ST->lookup((yyval.declarationi)->name);
		if(funcdata==NULL){
			funcdata = new symboldata;
			funcdata->name = (yyvsp[-2].declarationi)->name;
			funcdata->type.base_t = type_function;
			funcdata->offset = current_ST->offset;
			funcdata->nested_symboltable = new symboltable;
			funcdata->nested_symboltable->declared=1;
			funcdata->nested_symboltable->name = (yyvsp[-2].declarationi)->name;
			stack_ST.pb(funcdata->nested_symboltable);
			current_ST->insert(funcdata);
			current_ST->Symboltable[funcdata->name]= funcdata;
			
		}
		else if(funcdata->nested_symboltable->Symboltable.size()!=0){
			bhej = funcdata->name.c_str();
			yyerror("declaration and definition not same");		}
		else{
			if(funcdata->nested_symboltable==NULL){
				funcdata->nested_symboltable = new symboltable;
			}
			else if(funcdata->nested_symboltable!=NULL&&funcdata->nested_symboltable->declared==1){

			}
			else if(funcdata->nested_symboltable!=NULL && funcdata->nested_symboltable->defined==1){
				bhej = funcdata->nested_symboltable->name.c_str();
				yyerror("already defined");
			}
			
			else funcdata->nested_symboltable->declared=1;
			
		}
		if(tell==0)
		Quad.emit((yyvsp[-2].declarationi)->name,"","func_ends","");
	}
#line 3654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1398 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.intval)=1 + (yyvsp[0].intval);
	}
#line 3662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1402 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.intval)=1;
	}
#line 3670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1415 "grammar.y" /* yacc.c:1646  */
    {

		(yyval.parameter_list) = (yyvsp[0].parameter_list);
	}
#line 3679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1423 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.parameter_list)=new vector<parameter *>;
		(yyval.parameter_list)->pb((yyvsp[0].param));
	}
#line 3688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1427 "grammar.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].parameter_list)->pb((yyvsp[0].param));
		(yyval.parameter_list)=(yyvsp[-2].parameter_list);
	}
#line 3697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1435 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.param) = new parameter;
		(yyval.param)->name = (yyvsp[0].declarationi)->name;
		(yyval.param)->type.b_type = (yyvsp[-1].b_type); 
	}
#line 3707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1517 "grammar.y" /* yacc.c:1646  */
    {
		Quad.backpatch((yyvsp[0].exp_info)->nextlist, Quad.nextinstr);
	}
#line 3715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1520 "grammar.y" /* yacc.c:1646  */
    {
		Quad.backpatch((yyvsp[0].exp_info)->nextlist, Quad.nextinstr);
	}
#line 3723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1523 "grammar.y" /* yacc.c:1646  */
    {
		Quad.backpatch((yyvsp[0].exp_info)->nextlist, Quad.nextinstr);
	}
#line 3731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1526 "grammar.y" /* yacc.c:1646  */
    {
		Quad.backpatch((yyvsp[0].exp_info)->nextlist, Quad.nextinstr);

	}
#line 3740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1530 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 3747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1541 "grammar.y" /* yacc.c:1646  */
    {	
		if(flag==0){
			(yyval.curls).temp = current_ST;
			/*
			$$.created = new symboltable;
			stack_ST.pb($$.created);
			symboldata *data = new symboldata;
			char a[100] ;
			strcpy(a,current_name.c_str());
			char b[100];
			sprintf(b,"%d",globe++); 
			data->name = strcat(a,b);
			data->offset = current_ST->offset;
			current_ST->insert(data);
			data->nested_symboltable = $$.created;
			data->nested_symboltable->parent = current_ST;
			data->nested_symboltable->name = data->name;
			current_ST = $$.created;
			*/
		}
		else if (flag==1){
			if(current_name!="for")
			flag=0;
			(yyval.curls).temp = current_ST;
		}
	}
#line 3778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1571 "grammar.y" /* yacc.c:1646  */
    {current_name = "cmpd";}
#line 3784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1572 "grammar.y" /* yacc.c:1646  */
    {
		current_ST=(yyvsp[-2].curls).temp;
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->nextlist = (yyvsp[-1].exp_info)->nextlist;
	}
#line 3794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1581 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		Quad.backpatch((yyvsp[-2].exp_info)->nextlist,(yyvsp[-1].exp_info)->instr);
		(yyval.exp_info)->nextlist=(yyvsp[0].exp_info)->nextlist;
	}
#line 3804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1589 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
	}
#line 3812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1592 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
	}
#line 3820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1599 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)=(yyvsp[-1].exp_info);
	}
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1607 "grammar.y" /* yacc.c:1646  */
    {
		flag=1;
		(yyval.curls).temp = current_ST;
		/*
		$$.created = new symboltable;
		stack_ST.pb($$.created);
		symboldata *data = new symboldata;
		char a[100] = "if_";
		char b[100];
		sprintf(b,"%d",globe++);
		data->offset = current_ST->offset; 
		data->name = strcat(a,b);
		current_ST->insert(data);
		data->nested_symboltable = $$.created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = $$.created;
		*/
	}
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1630 "grammar.y" /* yacc.c:1646  */
    {
		flag=1;
		(yyval.curls).temp = current_ST;
		/*
		$$.created = new symboltable;
		stack_ST.pb($$.created);
		symboldata *data = new symboldata;
		char a[100] = "else_";
		char b[100];
		sprintf(b,"%d",globe++); 
		data->name = strcat(a,b);
		data->offset = current_ST->offset;
		current_ST->insert(data);
		data->nested_symboltable = $$.created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = $$.created;
		*/	
	}
#line 3877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1652 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-7].curls).temp;}
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1652 "grammar.y" /* yacc.c:1646  */
    {
		// cout<<"hello"<<endl;

		Quad.backpatch((yyvsp[-8].exp_info)->nextlist,Quad.nextinstr); 
		current_ST = (yyvsp[-3].curls).temp;
		string tmp2;
		stringstream temp1,temp2;
		temp1<<(yyvsp[-7].exp_info)->instr;
		temp2<<(yyvsp[-2].exp_info)->instr;
		temp1>>tmp2;
		Quad.emit(tmp2, (yyvsp[-10].exp_info)->loc , "NE", "0");
		temp2>>tmp2;
		Quad.emit(tmp2,"","GOTO","");
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->nextlist = merge((yyvsp[-6].exp_info)->nextlist, (yyvsp[-5].exp_info)->nextlist);
		(yyval.exp_info)->nextlist = merge((yyval.exp_info)->nextlist, (yyvsp[-1].exp_info)->nextlist);
		(yyval.exp_info)->nextlist = merge((yyval.exp_info)->nextlist, (yyvsp[0].exp_info)->nextlist);
	}
#line 3906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1670 "grammar.y" /* yacc.c:1646  */
    {
		//cout<<"world"<<endl;
		Quad.backpatch((yyvsp[-3].exp_info)->nextlist,Quad.nextinstr); 
		string tmp2;
		stringstream temp1;
		temp1<<(yyvsp[-2].exp_info)->instr;
		temp1>>tmp2;
		Quad.emit(tmp2, (yyvsp[-5].exp_info)->loc , "NE", "0");
		current_ST = (yyvsp[-7].curls).temp;
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->nextlist = merge((yyvsp[0].exp_info)->nextlist, (yyvsp[-1].exp_info)->nextlist);

	}
#line 3924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1688 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.curls).temp = current_ST;
		/*
		$$.created = new symboltable;
		stack_ST.pb($$.created);
		symboldata *data = new symboldata;
		char a[100] = "for";
		char b[100];
		sprintf(b,"%d",globe++); 
		data->name = strcat(a,b);
		data->offset = current_ST->offset;
		current_ST->insert(data);
		data->nested_symboltable = $$.created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = $$.created;
		*/
		flag=1;
	}
#line 3948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1710 "grammar.y" /* yacc.c:1646  */
    {current_name="while"; }
#line 3954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1710 "grammar.y" /* yacc.c:1646  */
    {
		current_ST = (yyvsp[-7].curls).temp;
		string tmp2;
		stringstream temp1,temp2;
		temp1<<(yyvsp[-5].exp_info)->instr;
		temp1>>tmp2;
		Quad.emit(tmp2,"","GOTO","");
		Quad.backpatch((yyvsp[-2].exp_info)->nextlist,Quad.nextinstr); 
		Quad.backpatch((yyvsp[0].exp_info)->nextlist,(yyvsp[-5].exp_info)->instr); 
		temp2<<(yyvsp[-1].exp_info)->instr;
		temp2>>tmp2;
		Quad.emit(tmp2, (yyvsp[-4].exp_info)->loc , "NE", "0");
		(yyval.exp_info)=new expression;

	}
#line 3974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1725 "grammar.y" /* yacc.c:1646  */
    {current_name="do_while";}
#line 3980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1725 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 3986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1727 "grammar.y" /* yacc.c:1646  */
    {//1  2  3  4                    5  6                    7 8  9          10 11 12 13
		current_ST = (yyvsp[-11].curls).temp;
		Quad.emit("","","GOTO","");
        Quad.backpatch(makelist(Quad.nextinstr-1), (yyvsp[-5].exp_info)->instr );
        Quad.backpatch((yyvsp[-6].exp_info)->nextlist,Quad.nextinstr);
        //cout<<"here 1\n";
        Quad.backpatch((yyvsp[-7].exp_info)->truelist,Quad.nextinstr);
		Quad.backpatch((yyvsp[-7].exp_info)->falselist,Quad.nextinstr);
		(yyvsp[-6].exp_info)->falselist=makelist(Quad.nextinstr);
		//cout<<"\n\n\n "<<$6->loc<<"\n\n\n";
		//Quad.emit("",$6->loc,"EQ","0");
		//Quad.emit($6->loc,"0","ASSIGN","=");
		(yyvsp[-6].exp_info)->truelist=makelist(Quad.nextinstr);
		//Quad.emit("","","GOTO","");
		(yyvsp[-7].exp_info)->b_type=type_bool;
        //cout<<"here 1\n";
        Quad.backpatch((yyvsp[-7].exp_info)->truelist,(yyvsp[-1].exp_info)->instr);
        Quad.backpatch((yyvsp[0].exp_info)->nextlist,(yyvsp[-5].exp_info)->instr);
        Quad.backpatch((yyvsp[-3].exp_info)->nextlist,(yyvsp[-8].exp_info)->instr);
        (yyval.exp_info) = new expression;
        (yyval.exp_info)->nextlist = (yyvsp[-7].exp_info)->falselist;
	}
#line 4013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1749 "grammar.y" /* yacc.c:1646  */
    {cout<<"";}
#line 4019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1750 "grammar.y" /* yacc.c:1646  */
    {	//cout<<"here 4\n";
		current_ST = (yyvsp[-5].curls).temp;
	}
#line 4027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1753 "grammar.y" /* yacc.c:1646  */
    {cout<<"";}
#line 4033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1754 "grammar.y" /* yacc.c:1646  */
    {	
		//cout<<"here 5\n";
		current_ST = (yyvsp[-5].curls).temp;
	}
#line 4042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1758 "grammar.y" /* yacc.c:1646  */
    {cout<<"";}
#line 4048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1759 "grammar.y" /* yacc.c:1646  */
    {
		//cout<<"here 6\n";
		current_ST = (yyvsp[-6].curls).temp;
	}
#line 4057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1772 "grammar.y" /* yacc.c:1646  */
    {
		symboldata *funcdata = globalst.lookup(current_ST->name);
		//cout<<"\n\n\n"<<current_ST->name<<"\n\n\n";
		Quad.emit((yyvsp[-1].exp_info)->loc,"", "RETURN","");
	}
#line 4067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1797 "grammar.y" /* yacc.c:1646  */
    {
		Quad.emit(named,"","func_ends","");
		current_ST = hunny;
		tell=0;
	}
#line 4077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1803 "grammar.y" /* yacc.c:1646  */
    {	
		if(tell==1)
			Quad.emit(named,"","func_ends","");
		tell=0;
	}
#line 4087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1814 "grammar.y" /* yacc.c:1646  */
    {
		flag=1;
		hunny = current_ST;
		symboldata *funcdata=current_ST->lookup((yyvsp[0].declarationi)->name);
		named = (yyvsp[0].declarationi)->name;
		//if not NULL do typecheck here
		if(funcdata==NULL){
			funcdata->nested_symboltable->defined = 1;
			funcdata->nested_symboltable->parent = &globalst;
			current_ST->insert(funcdata);
			current_ST->Symboltable[funcdata->name]= funcdata;
		}
		else{
			funcdata->nested_symboltable->parent = &globalst;
			if(funcdata->nested_symboltable->defined == 1){
				bhej = funcdata->nested_symboltable->name.c_str();
				yyerror("already defined");
			}
			else{
				funcdata->nested_symboltable->defined=1;
				funcdata->nested_symboltable->defined=1;
			}	
		}

		decc *my_dec = (yyvsp[0].declarationi);
		funcdata->name = my_dec->name;
		funcdata->type.pc = my_dec->pc;
		funcdata->type.b_type = my_dec->b_type;
		funcdata->type.return_type = (yyvsp[-1].b_type);
		if(my_dec->pc)
			funcdata->type.base_t = type_pointer;
		funcdata->size=0;
		funcdata->offset=current_ST->offset;
		symboldata *ret_val=new symboldata;
		ret_val->name = "RETURN_VAL";
		ret_val->type.b_type = (yyvsp[-1].b_type);
		ret_val->type.pc = my_dec->pc;
		ret_val->offset = funcdata->nested_symboltable->offset;
		if((yyvsp[-1].b_type)==type_int)
			ret_val->size = 4;

		if(my_dec->pc)
			ret_val->type.base_t = type_pointer;

		funcdata->nested_symboltable->insert(ret_val);
		funcdata->nested_symboltable->Symboltable[ret_val->name]= ret_val;
		current_ST = funcdata->nested_symboltable;

	}
#line 4141 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4145 "y.tab.c" /* yacc.c:1646  */
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
#line 1871 "grammar.y" /* yacc.c:1906  */

int id=0;

FILE *fp;

void print_file(PARSE_TREE tree){
	fp=fopen("final.txt","w");
	fprintf(fp,"graph milestone{\n");
	
	//print_node(tree);
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
		fprintf(fp," \"%s_%d\" -- \"%s\";\n",tree->name,tree->uid,tree->ac_name);
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
	error_exists=1;
	fprintf(stderr, "ERORR : line %d *** %s %s\n",yylineno, s, bhej);
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

void print(symboltable *table){
	cout<<"----------------"<<table->name<<"------------"<<endl;
	//cout<<"name"<<"\t"<<"\t"<<"type"<<"\t"<<"\t"<<"size"<<"\t"<<"\t"<<"offset"<<"\t"<<"base_t\t"<<endl;
		cout<<"name,"<<"type"<<","<<"size"<<","<<"offset"<<","<<"base_t"<<","<<"b_type"<<","<<"return_type"<<endl;

	for(auto t:table->order_symbol){
				
		cout<<t->name<<",";
		if(t->type.b_type==type_char){
			cout<<"char,";
		}
		else if(t->type.b_type==type_int){
			cout<<"int,";
		}
		else if(t->type.b_type==type_double){
			cout<<"double,";
		}
		else if(t->type.b_type==type_float){
			cout<<"float,";
		}
		else if(t->type.b_type==type_function){
			cout<<"function,";
		}
		else if(t->type.b_type==type_struct){
			cout<<"struct,";
		}
		else if(t->type.b_type==type_array){
			cout<<"array,";
		}
		else{
			
			if(t->type.b_type==type_char){
				cout<<"char, ";
			}
			else if(t->type.b_type==type_int){
				cout<<"int, ";
			}
			else if(t->type.b_type==type_double){
				cout<<"double, ";
			}
		}

		/*
		if(t->type.base_t==type_pointer){
			For(i,0,t->type.pc){
				cout<<"*";
			}
			cout<<"\t"<<"\t";
		}
		*/
		cout<<t->size<<","<<t->offset<<","<<t->type.base_t<<","<<t->type.b_type<<","<<t->type.return_type<<",";
		
		
		
		cout<<endl;
	}
}

expression* type_check(expression* t1, expression* t2, string op){
		expression* res;
		res=new expression;
		bhej = op.c_str();
		if(op=="*" || op == "/"){
			if(t1->base_t == type_pointer || t2->base_t == type_pointer || t1->b_type == type_char || t2->b_type == type_char || t1->pc!=0 || t2->pc!=0){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			if(t1->b_type == t2->b_type){
				res->b_type=t1->b_type;
				return res;
			}
			if(t1->b_type == type_int){
				res->b_type=t2->b_type;
				return res;
			}
			if(t2->b_type == type_int){
				res->b_type=t1->b_type;
				return res;
			}
			if(t1->b_type == type_double || t2->b_type==type_double){
				res->b_type= type_double;
				return res;
			}

		}
		if(op=="%" || op == "<<" || op == ">>" || op=="&" || op=="^" || op== "|" || op =="<<=" || op=="<<=" || op=="%=" || op=="&=" || op=="|=" || op=="^="){
			if(t1->base_t == type_pointer || t2->base_t == type_pointer || t1->b_type == type_char || t2->b_type == type_char || t1->pc!=0 || t2->pc!=0){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			if(t1->b_type != type_int || t2->b_type != type_int){
				yyerror("cannot apply operation");// errorr cannot apply operation
				return NULL;
			}
			res->b_type= type_int;
			return res;
		}
		if(op=="+" || op == "-"){
			if(t1->b_type == t2->b_type){
				if(t2->base_t == type_pointer || t1->b_type == type_char || t1->pc!=0){
					yyerror("cannot apply operation");// error cannot apply operation 
					return NULL;
				}
				res->b_type=t1->b_type;
				return res;
			}
			if(t1->b_type == type_int){
				res->b_type=t2->b_type;
				res->base_t= t2->base_t;
				res->pc=t2->pc;
				return res;
			}
			if(t2->b_type == type_int){
				res->b_type=t1->b_type;
				res->base_t=t1->base_t;
				res->pc=t1->pc;
				return res;
			}
			if((t1->b_type == type_double && t2->b_type==type_float) || (t2->b_type==type_double && t1->b_type == type_float)){
				res->b_type= type_double;
				return res;
			}
			yyerror("cannot apply operation");// error cannot apply operation 
					return NULL;

		}
		if(op=="<" || op == "<=" || op == ">" || op == ">="){
			if((t1->b_type != t2->b_type && (t1->b_type==type_char || t2->b_type==type_char)) || t1->base_t == type_pointer || t1->pc!=0 || t2->pc!=0){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			res->b_type= type_bool;
			return res;
		}

		if(op=="==" || op == "!=" ){
			if( t1->base_t != t2-> base_t || t1->pc!=t2->pc || (t1->b_type != t2->b_type && (t1->b_type==type_char || t2->b_type==type_char))){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			res->b_type= type_bool;
			return res;
		}
		if(op=="&&" || op == "||" ){
			if(t1->b_type==t2->b_type && (t1->b_type==type_int || t1->b_type==type_bool)){
				res->b_type= type_bool;
				return res;
			}
			yyerror("cannot apply operation");// error cannot apply operation 
			return NULL;
		}

		if(op=="-=" || op=="+=" || op=="*=" || op=="/="){
			if(t1->b_type!=t2->b_type || t1->base_t == type_pointer || t2->base_t == type_pointer || t1->b_type == type_char || t1->pc!=0 ){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			
			res->b_type= t1->b_type;
			return res;
		}
		if(op=="="){
			//cout<<"type    "<<t1->b_type<<","<<t1->base_t<<"   "<<t2->b_type<<","<<t2->base_t<<endl;

			if(t1->b_type==type_function && t2->b_type==type_function){
				yyerror("cannot assign function to function");
			}
			else if(t2->b_type==type_function){
				//cout<<"in func comparision\n";
				if(t1->pc!=t2->pc){
					yyerror("cannot assign function");
					//cout<<"out1 func comparision\n"; 
					return NULL;	
				}
				else if( t1->pc == 0 && t1->b_type != t2->return_type ){
					yyerror("cannot assign function"); 
					//cout<<"out2 func comparision\n";
					return NULL;	
				}
				else if( t1->pc == 0 && t1->b_type == t2->return_type ){
					res->pc=t1->pc;
					res->base_t=t1->base_t;
					res->b_type = t1->b_type;
					//cout<<"out3 func comparision\n";
					return res;
				}
				else if(t1->base_t != t2->return_type ){
					yyerror("cannot assign function"); 
					//cout<<"out4 func comparision\n";
					return NULL;	
				}
				else {
					res->pc=t1->pc;
					res->base_t=t1->base_t;
					res->b_type = t1->b_type;
					//cout<<"out5 func comparision\n";
					return res;
				}

			}
			else if(t1->b_type == type_array && t2->b_type!=type_array){
				if(t1->base_t == t2->b_type && t1->pc==t2->pc){
					res->pc=t2->pc;
					res->base_t=t2->base_t;
					res->b_type = t2->b_type;
					return res;
				}
			}
			else if(t1->b_type != type_array && t2->b_type==type_array){
				if(t2->base_t == t1->b_type && t1->pc==t2->pc){
					res->pc=t1->pc;
					res->base_t=t1->base_t;
					res->b_type = t1->b_type;
					return res;
				}
			}
			else if(t1->b_type == type_array && t2->b_type==type_array){
				if(t2->base_t == t1->b_type && t1->pc==t2->pc){
					res->pc=t1->pc;
					res->base_t=t1->base_t;
					res->b_type = t1->base_t;
					return res;
				}
			}



			else if(t1->b_type==t2->b_type && t1->base_t == t2->base_t &&  t1->pc== t2->pc ){
				res=t1;
				return res; 
				
			}
			else if(t1->base_t != t2->base_t ||  t1->pc!= t2->pc || t1->b_type==type_char || t2->b_type==type_char){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			else{
				if(t1->b_type==type_double || t2->b_type==type_double ){
					res->b_type=type_double;
				}
				else if(t1->b_type==type_float || t2->b_type==type_float ){
					res->b_type=type_float;
				}
				res->pc=t1->pc;
				res->base_t=t1->base_t;
				return res;

			}
			yyerror("cannot apply operation");// error cannot apply operation 
			return NULL;
		}	
	
}
int main()
{
    yydebug = 0;
    flag=0;
    globe=0;
    tell=0;
    error_exists = 0;
    counter_temp=0;
    current_ST=&(globalst);
    bool failure = yyparse();  
    //int sz = Quad.a1.size();
    //cout<<"number if statements--->>"<<sz<<endl;
    // for(int i=0;i<sz;i++){
    //    cout<<i<<": "; Quad.a1[i].print();
   // }
    
   /* cout<<"----------------SYMBOL_TABLE----------------"<<endl;

    current_ST->print();
    cout<<"--------------------------------------------"<<endl;
    for(map<string,symboldata*> :: iterator it =current_ST->Symboltable.begin(); it !=current_ST->Symboltable.end(); ++it)
    {
        symboldata *tmp = it->second;
        if(tmp->nested_symboltable != NULL)
        {
            cout<<"----------------SYMBOL_TABLE("<<tmp->name<<")----------------"<<endl;
            tmp->nested_symboltable->print();
            cout<<"--------------------------------------------"<<endl;
        }
    }
    
    if(failure)
        printf("failure\n");
    else
        printf("success\n");

    //cout<<stack_ST.size(); 
    if(error_exists==0){
    	int sz=Quad.a1.size();
    	for(int i=0;i<sz;i++){
    		cout<<i<<": "; Quad.a1[i].print();
    	}
    }
    cout<<"error exists"<<error_exists<<endl;
    freopen("symbol_table.csv","w",stdout);
    if(error_exists==0){
	    print(current_ST);
	    cout<<endl;   
	    for(auto t:stack_ST){
	    	print(t);
	    	cout<<endl;
	    }
    }
    */
    GENCODE();
}
