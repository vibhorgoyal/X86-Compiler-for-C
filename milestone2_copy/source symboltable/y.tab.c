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

string current_name;
string bing;
int globe;
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



#line 109 "y.tab.c" /* yacc.c:339  */

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

union YYSTYPE
{
#line 44 "grammar.y" /* yacc.c:355  */

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

#line 314 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 331 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   2067

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  476

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
       0,   107,   107,   115,   124,   141,   144,   145,   148,   152,
     158,   167,   176,   188,   192,   193,   197,   198,   202,   205,
     208,   211,   231,   234,   237,   240,   243,   249,   258,   268,
     281,   284,   290,   296,   302,   308,   313,   318,   322,   326,
     330,   334,   338,   345,   348,   357,   360,   366,   371,   379,
     382,   387,   395,   398,   403,   411,   414,   431,   448,   464,
     483,   486,   502,   521,   524,   532,   535,   543,   546,   554,
     557,   565,   568,   576,   579,   583,   586,   593,   596,   599,
     602,   605,   608,   611,   614,   617,   620,   623,   629,   632,
     638,   644,   645,   736,   740,   741,   742,   743,   747,   748,
     749,   750,   751,   752,   756,   761,   769,   773,   781,   786,
     791,   792,   793,   794,   795,   796,   800,   804,   807,   808,
     812,   816,   820,   824,   825,   826,   827,   828,   829,   830,
     831,   835,   836,   837,   841,   842,   846,   847,   851,   852,
     853,   857,   858,   859,   860,   864,   865,   869,   870,   871,
     875,   879,   880,   881,   882,   886,   887,   891,   892,   896,
     901,   914,   919,   920,   921,   922,   923,   924,   925,   926,
     927,   928,   929,  1103,  1139,  1143,  1144,  1145,  1149,  1156,
    1157,  1162,  1163,  1171,  1176,  1183,  1189,  1190,  1194,  1195,
    1199,  1200,  1204,  1205,  1206,  1210,  1211,  1212,  1213,  1214,
    1215,  1216,  1217,  1218,  1219,  1220,  1221,  1222,  1223,  1224,
    1225,  1226,  1227,  1228,  1229,  1230,  1234,  1235,  1236,  1240,
    1241,  1242,  1243,  1247,  1251,  1252,  1256,  1257,  1261,  1265,
    1266,  1269,  1270,  1273,  1274,  1278,  1279,  1280,  1284,  1311,
    1312,  1312,  1321,  1322,  1330,  1333,  1339,  1340,  1346,  1367,
    1388,  1388,  1406,  1419,  1424,  1444,  1444,  1445,  1445,  1446,
    1447,  1448,  1449,  1453,  1454,  1455,  1456,  1457,  1466,  1470,
    1471,  1475,  1479,  1484,  1485,  1522,  1523
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
  "init_declarator_list", "hack", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
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
  "compound_statement", "$@1", "block_item_list", "block_item",
  "expression_statement", "if", "else", "selection_statement", "$@2", "P",
  "iteration_statement", "$@3", "$@4", "jump_statement", "base",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF -414

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-414)))

#define YYTABLE_NINF -275

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1801,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,   -50,   -44,  -414,   -24,  -414,
    -414,   103,  1900,  1900,  -414,    18,  -414,  1900,  1900,  1900,
    -414,    77,  1801,  -414,   -26,   770,  1998,  1392,  -414,    56,
     -12,  -414,   -54,  -414,   354,   105,    55,  -414,  -414,     8,
     693,  -414,  -414,  -414,  -414,  -414,    25,  -414,  -414,  -414,
    -414,  -414,  1461,  -414,  1482,  1482,    71,    98,   770,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,   182,
    -414,  1392,  -414,   -10,   125,   222,   146,   237,    65,    88,
      94,   177,    62,  -414,   115,  1998,   121,  1998,   140,   150,
     168,   175,  -414,  -414,  -414,   -12,    56,  -414,    34,  -414,
     103,  1801,  1703,   791,   105,   693,  1458,  -414,   101,  -414,
    -414,  -414,   770,  -414,   770,  -414,  -414,  1998,  1392,   387,
    -414,  -414,   188,   184,   249,  -414,  -414,  1222,  1392,   254,
    -414,  1392,  1392,  1392,  1392,  1392,  1392,  1392,  1392,  1392,
    1392,  1392,  1392,  1392,  1392,  1392,  1392,  1392,  1392,  1392,
    -414,  -414,  1602,   860,   129,  -414,   130,  -414,  -414,  -414,
     269,  -414,  -414,  -414,  -414,   180,  -414,  -414,  -414,  -414,
    -414,  -414,   144,   210,   216,  -414,   190,  1067,  -414,   218,
     220,   883,  1651,  -414,  -414,  1392,  -414,    74,  -414,   242,
     458,   230,   246,   251,   219,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  1392,  -414,  1392,  1243,
    -414,  -414,   193,  -414,    67,  -414,  -414,  -414,  -414,   -10,
     -10,   125,   125,   222,   222,   222,   222,   146,   146,   237,
      65,    88,    94,   177,   202,  -414,   253,   255,  1067,  -414,
     245,   259,   952,   130,  1752,   975,   266,  1548,  -414,   165,
    -414,  -414,  1850,  -414,   339,   264,  1067,  -414,  -414,  1392,
    -414,   265,   270,  -414,  -414,   135,  -414,  1392,   268,  1392,
     271,  -414,   276,  -414,  -414,  -414,   350,   257,   258,   632,
    -414,    87,  -414,  -414,  -414,  -414,   274,  -414,  -414,   283,
    -414,  -414,  -414,   277,   277,  -414,  1949,  -414,  -414,  1136,
    -414,  -414,  1392,  -414,  1392,  -414,  -414,   281,  1067,  -414,
    -414,  1392,  -414,   282,  -414,   287,  1067,  -414,   285,   286,
    1044,   280,  -414,  -414,  -414,  -414,   288,   289,  -414,  -414,
    -414,  -414,   596,   296,   596,  1392,  -414,  -414,   300,   284,
    -414,  -414,  -414,   100,  -414,  -414,   458,  1392,   301,   205,
    -414,   302,  1392,   380,  1136,  -414,  -414,   -43,  1264,   162,
    -414,  -414,  -414,  -414,   340,   341,  -414,  -414,   345,  1067,
    -414,  -414,  1392,  -414,   349,  -414,  -414,  -414,  -414,   596,
    -414,   207,   355,   596,   545,  -414,  -414,  -414,   215,  1392,
    -414,  1949,  1392,   351,  -414,   -34,  1088,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,   352,   353,  -414,  -414,   596,  1392,
     374,   683,   683,  -414,  -414,  -414,  -414,  -414,  1113,  -414,
    -414,  -414,  1264,  -414,  -414,  -414,   228,   363,  1350,  1371,
     596,  -414,  -414,   596,  1392,   596,   232,   596,   235,   381,
    -414,   240,  -414,   596,  -414,   596,  -414,   343,  -414,  -414,
     383,  -414,  -414,  -414,   596,  -414
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   130,   110,   111,   112,   114,   115,   155,   151,   152,
     153,   125,   117,   118,   119,   120,   123,   124,   121,   122,
     116,   126,   127,   134,   135,     0,   154,   156,     0,   113,
     272,     0,    95,    97,   129,     0,   128,    99,   101,   103,
      93,     0,   268,   269,     0,     0,     0,     0,   161,     0,
     178,    91,     0,   104,   109,   160,     0,    94,    96,   133,
       0,    98,   100,   102,     1,   270,   240,   271,     4,    11,
       9,    10,     0,    12,     0,     0,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    18,     5,     6,     8,    30,
      43,     0,    45,    49,    52,    55,    60,    63,    65,    67,
      69,    71,    73,    90,     0,   142,   191,   144,     0,     0,
       0,     0,   154,   179,   177,   176,     0,    92,     0,   275,
       0,   273,     0,     0,   159,     0,     0,   136,     0,   140,
     239,   238,     0,    34,     0,    31,    32,     0,     0,    43,
      75,    88,     0,     0,     0,    24,    25,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     158,   141,     0,     0,   193,   190,   194,   143,   157,   150,
       0,   162,   180,   175,   105,   109,   106,   107,   108,   276,
     188,   173,   187,     0,   182,   183,     0,     0,   163,    38,
       0,     0,     0,   131,   137,     0,   138,     0,   145,   149,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    77,     0,     7,     0,     0,
      23,    20,     0,    28,     0,    22,    46,    47,    48,    50,
      51,    53,    54,    58,    59,    56,    57,    61,    62,    64,
      66,    68,    70,    72,     0,   212,     0,     0,     0,   196,
      38,     0,     0,   192,     0,     0,     0,     0,   185,   193,
     186,   172,     0,   174,     0,     0,     0,   164,   171,     0,
     170,    38,     0,   132,   147,     0,   139,     0,     4,     0,
       0,   248,     0,   255,   257,   254,     0,     0,     0,     0,
     246,     0,   244,   245,   229,   230,     3,   242,   231,     0,
     232,   233,   234,    35,     0,    36,     0,    76,    89,     0,
      44,    21,     0,    19,     0,   213,   195,     0,     0,   197,
     203,     0,   202,     0,   214,     0,     0,   204,    38,     0,
       0,     0,   181,   184,   189,   166,     0,     0,   167,   169,
     146,   148,     0,     0,     0,     0,   238,   238,     0,     0,
     264,   265,   266,     0,   247,   241,     0,     0,     0,     0,
      14,     0,     0,     0,     0,   218,   220,     0,     0,     0,
     224,    29,    74,   199,     0,     0,   201,   215,     0,     0,
     205,   211,     0,   210,     0,   228,   165,   168,   235,     0,
     237,     0,     0,     0,     0,   263,   267,   243,     0,     0,
      13,     0,     0,     0,   227,     0,     0,    26,   219,   223,
     225,   198,   200,   207,     0,     0,   208,   236,     0,     0,
       0,     0,     0,     3,    17,    15,    16,   226,     0,   216,
      27,   222,     0,   206,   209,   253,     0,     0,     0,     0,
       0,   217,   221,     0,     0,     0,     0,     0,     0,   252,
     256,     0,   261,     0,   259,     0,   250,     0,   262,   260,
       0,   258,   249,     3,     0,   251
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -414,  -414,  -413,  -414,   320,  -414,  -414,  -414,    31,  -414,
    -414,   -40,  -414,   -16,   158,   161,    72,   171,   279,   290,
     278,   291,   303,  -414,   -36,    44,  -414,   -78,   -41,   -52,
      29,  -414,  -414,   329,  -414,   -29,  -414,  -414,   321,  -116,
      27,  -414,   163,  -414,   -42,  -414,  -414,   -18,   -55,    -6,
    -109,  -110,  -414,   179,  -414,     7,   -91,  -136,  -236,    73,
    -393,  -414,    70,   -32,  -128,  -414,   -17,   408,  -414,  -414,
      91,  -385,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,   412,  -414,  -414
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   466,   366,    85,    86,    87,    88,   369,   370,    89,
     232,   139,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   140,   141,   226,   301,   104,    30,
     120,    52,   188,    53,    32,    33,    34,    35,   126,   127,
     106,   207,   208,    36,    37,    38,    39,   111,    55,    56,
     115,   256,   194,   195,   196,   371,   257,   176,   376,   377,
     378,   379,   380,    40,   303,   304,   210,   305,   131,   306,
     307,   308,   309,   473,   310,   470,   358,   311,   356,   357,
     312,    41,    42,    43,    44,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     142,   124,   119,   107,   107,    90,   110,    90,   113,   103,
     204,   103,   193,    54,   201,   175,   105,   105,   107,   432,
     450,    59,   116,   442,    45,     8,     9,    10,   129,    31,
      46,   105,   133,   416,   135,   136,   107,   186,   263,   417,
      70,    71,   438,   117,   114,   442,   448,   449,   439,   105,
      47,    90,   108,   109,   142,    66,   142,   112,    48,    48,
     474,    57,    58,   107,   262,   107,    61,    62,    63,   189,
     234,    31,    50,   182,   151,   150,   105,    64,   105,   152,
     153,   113,   168,   107,   107,   143,   204,   128,   276,   125,
     107,   254,   107,   129,   129,   107,   105,   105,   185,    60,
     174,   270,   185,   105,    48,   105,    48,   130,   105,   183,
     209,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    49,
      49,   113,   171,   263,   177,   236,   237,   238,    48,   211,
      50,   212,   418,   228,   213,   137,   323,    48,   164,   328,
     285,   192,   128,   128,   335,   113,   340,   169,   302,   182,
     107,   158,   159,   228,   284,    90,   174,   200,    48,   103,
     129,   286,   138,   105,   268,    49,   228,    49,   205,   122,
     441,   165,   214,   123,   364,    50,   269,    50,   166,    90,
     170,   233,   144,   145,   146,   172,   167,   406,   206,   173,
      51,   192,   441,   172,   264,    50,   452,   173,   265,    49,
     154,   155,   205,   320,   124,   178,   113,   261,   267,    50,
     182,   363,   173,   113,   398,   179,   400,   389,    50,   128,
     243,   244,   245,   246,   182,   156,   157,   160,   161,   267,
     372,   275,   373,   173,   180,   282,   351,    90,   353,    90,
     181,   103,   230,   103,   162,   163,   147,   235,   419,   229,
     148,   269,   149,   227,   228,   273,   274,   209,   321,   322,
     317,   427,   318,   266,   107,   430,   118,   401,   228,   324,
     410,   411,   428,   228,    90,   271,   182,   105,   382,   408,
     433,   228,   272,   192,   113,   316,   192,   277,   182,   278,
     445,   192,   327,   453,   228,   313,   333,   463,   228,   339,
     465,   228,   239,   240,   302,   467,   228,   241,   242,   287,
     346,   314,   459,   347,   329,   460,   315,   462,   325,   464,
     326,   413,    90,   247,   248,   468,   103,   469,   330,   402,
     403,   341,   344,   345,   348,   352,   475,   182,   354,   349,
     355,   446,   431,   359,   360,   361,   365,   367,   319,     1,
     383,   386,   387,   375,   390,   391,   381,   396,   397,   107,
     456,   458,   384,   399,   404,   385,   461,   395,   409,   412,
     388,   405,   105,   414,   394,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   375,   421,
     422,    25,   375,    26,   423,    27,    28,    29,   426,   429,
     437,   443,   444,   424,   447,  -274,   425,   454,   187,    -2,
     471,   472,   435,   249,   251,   184,   202,   415,   350,   420,
     118,   343,    67,   434,    65,   250,   436,   407,   252,     0,
     375,   288,    69,     1,    70,    71,    72,    73,     0,    74,
      75,   253,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   375,   225,     0,     0,   375,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,   289,   290,   291,     0,   292,   293,   294,
     295,   296,   297,   298,   299,    25,    76,    26,    77,    27,
      28,    29,    78,     0,     0,     0,     0,     0,     0,    66,
       0,    79,    80,    81,    82,    83,    84,     0,    68,    69,
       1,    70,    71,    72,    73,   300,    74,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   288,
      69,     0,    70,    71,    72,    73,     0,    74,    75,     0,
       0,     0,    25,    76,    26,    77,    27,    28,    29,    78,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,     0,    68,    69,     0,    70,    71,
      72,    73,   300,    74,    75,     0,     0,     0,     0,     0,
       0,   289,   290,   291,     0,   292,   293,   294,   295,   296,
     297,   298,   299,     0,    76,     0,    77,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,    66,     0,    79,
      80,    81,    82,    83,    84,     0,    68,    69,     0,    70,
      71,    72,    73,   300,    74,    75,     0,     0,     1,     0,
      76,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,   362,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,     0,     0,
       0,    76,     0,    77,     0,     0,     0,    78,     0,     0,
       0,     0,    26,     0,     0,    28,    79,    80,    81,    82,
      83,    84,     0,    68,    69,     1,    70,    71,    72,    73,
     300,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,     0,    74,    75,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   197,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,    76,    26,
      77,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    76,
     112,    77,     0,    68,    69,    78,    70,    71,    72,    73,
     198,    74,    75,     0,    79,   199,    81,    82,    83,    84,
       0,     0,     0,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,   258,    74,    75,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   279,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,    76,   112,
      77,     0,     0,     0,    78,     0,     0,     0,     0,   259,
       0,     0,     0,    79,   260,    81,    82,    83,    84,     0,
       0,    76,   112,    77,     0,    68,    69,    78,    70,    71,
      72,    73,   280,    74,    75,     0,    79,   281,    81,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    68,    69,
       0,    70,    71,    72,    73,   331,    74,    75,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   336,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
      76,   112,    77,     0,     0,     0,    78,     0,     0,     0,
       0,   332,     0,     0,     0,    79,    80,    81,    82,    83,
      84,     0,     0,    76,   112,    77,     0,    68,    69,    78,
      70,    71,    72,    73,   337,    74,    75,     0,    79,   338,
      81,    82,    83,    84,     0,     0,     0,     0,     0,     0,
      68,    69,     0,    70,    71,    72,    73,   392,    74,    75,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,     0,    74,
      75,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,    76,   112,    77,     0,    68,    69,    78,    70,
      71,    72,    73,   393,    74,    75,     0,    79,    80,    81,
      82,    83,    84,     0,     0,    76,   112,    77,     0,    68,
      69,    78,    70,    71,    72,    73,     0,    74,    75,     0,
      79,    80,    81,    82,    83,    84,    76,     0,    77,     0,
       0,     0,    78,     0,     0,     0,   372,     0,   373,   374,
     440,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,    76,     0,    77,     0,     0,     0,    78,     0,     0,
       0,   372,     0,   373,   374,   451,    79,    80,    81,    82,
      83,    84,     0,     0,    76,     0,    77,     0,     0,     0,
      78,     0,     0,     0,   372,     0,   373,   374,     0,    79,
      80,    81,    82,    83,    84,    68,    69,     0,    70,    71,
      72,    73,     0,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,     0,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,     0,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,    77,     0,     0,     0,    78,   231,     0,     0,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
      84,    76,     0,    77,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,   319,     0,    79,    80,    81,    82,
      83,    84,    76,     0,    77,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,   374,     0,    79,    80,    81,
      82,    83,    84,    68,    69,     0,    70,    71,    72,    73,
       0,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,     0,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,     0,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
      77,     0,     0,     0,    78,   455,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    76,
       0,    77,     0,     0,     0,    78,   457,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      76,     0,    77,     1,    68,    69,    78,    70,    71,    72,
      73,     0,    74,    75,     0,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,     0,    74,    75,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    76,
      28,    77,     0,     0,     0,   132,     0,     0,     0,     0,
     203,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      76,    48,    77,     1,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,    29,   267,   255,     0,     0,   173,     0,     0,     0,
       0,     0,    50,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,    29,   172,   255,     0,     0,
     173,     0,     0,     0,     0,     0,    50,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,   190,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   283,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    26,     0,    27,     0,    29,     0,   191,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,    29,     0,   334,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
      26,     0,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   342,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     1,     0,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26
};

static const yytype_int16 yycheck[] =
{
      78,    56,    54,    45,    46,    45,    47,    47,    50,    45,
     126,    47,   122,    31,   123,   106,    45,    46,    60,   404,
     433,     3,    76,   416,    74,    37,    38,    39,    60,     0,
      74,    60,    72,    76,    74,    75,    78,     3,   174,    82,
       6,     7,    76,    97,    50,   438,   431,   432,    82,    78,
      74,    91,    45,    46,   132,    81,   134,    69,     3,     3,
     473,    32,    33,   105,   173,   107,    37,    38,    39,   121,
     148,    42,    84,   115,    84,    91,   105,     0,   107,    89,
      90,   123,    20,   125,   126,    78,   202,    60,   197,    81,
     132,   169,   134,   125,   126,   137,   125,   126,   116,    81,
     106,   192,   120,   132,     3,   134,     3,    82,   137,   115,
     128,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,    74,
      74,   173,   105,   269,   107,   151,   152,   153,     3,   132,
      84,   134,   378,    76,   137,    74,    79,     3,    83,   258,
      76,   122,   125,   126,   264,   197,   265,    95,   210,   201,
     202,    15,    16,    76,   205,   205,   172,   123,     3,   205,
     202,    97,    74,   202,   192,    74,    76,    74,    77,    74,
     416,    93,   138,    78,    97,    84,   192,    84,    94,   229,
      75,   147,    10,    11,    12,    74,    19,    97,    97,    78,
      97,   172,   438,    74,    74,    84,   442,    78,    78,    74,
      85,    86,    77,   229,   269,    75,   258,   173,    74,    84,
     262,   299,    78,   265,   352,    75,   354,   336,    84,   202,
     158,   159,   160,   161,   276,    13,    14,    91,    92,    74,
      78,   197,    80,    78,    76,   201,   287,   287,   289,   289,
      75,   287,     3,   289,    17,    18,    74,     3,    96,    75,
      78,   267,    80,    75,    76,    75,    76,   285,    75,    76,
     226,   399,   228,     4,   316,   403,    96,   355,    76,    77,
      75,    76,    75,    76,   324,    75,   328,   316,   324,   367,
      75,    76,    76,   264,   336,    76,   267,    79,   340,    79,
     428,   272,   258,    75,    76,    75,   262,    75,    76,   265,
      75,    76,   154,   155,   366,    75,    76,   156,   157,    77,
     276,    75,   450,   279,    79,   453,    75,   455,    75,   457,
      75,   372,   372,   162,   163,   463,   372,   465,    79,   356,
     357,    75,     3,    79,    79,    77,   474,   389,    77,    79,
      74,   429,   404,     3,    97,    97,    82,    74,    81,     5,
      79,    79,    75,   319,    79,    79,   322,    79,    79,   411,
     448,   449,   328,    77,    74,   331,   454,    97,    77,    77,
     336,    97,   411,     3,   340,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   374,    79,
      79,    67,   378,    69,    79,    71,    72,    73,    79,    74,
      79,    79,    79,   389,    60,    81,   392,    74,   118,    58,
      97,    58,   411,   164,   166,   116,   125,   374,   285,   379,
      96,   272,    44,   409,    42,   165,   412,   366,   167,    -1,
     416,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   438,    96,    -1,    -1,   442,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    -1,     3,     4,
       5,     6,     7,     8,     9,    97,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     3,
       4,    -1,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    -1,     3,     4,    -1,     6,     7,
       8,     9,    97,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    -1,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    -1,     3,     4,    -1,     6,
       7,     8,     9,    97,    11,    12,    -1,    -1,     5,    -1,
      68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    83,    84,    85,    86,
      87,    88,    -1,     3,     4,     5,     6,     7,     8,     9,
      97,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    33,    -1,    -1,    -1,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    68,
      69,    70,    -1,     3,     4,    74,     6,     7,     8,     9,
      79,    11,    12,    -1,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    33,    11,    12,    -1,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    -1,
      -1,    68,    69,    70,    -1,     3,     4,    74,     6,     7,
       8,     9,    79,    11,    12,    -1,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    33,    11,    12,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    68,    69,    70,    -1,     3,     4,    74,
       6,     7,     8,     9,    79,    11,    12,    -1,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    33,    11,    12,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    -1,     3,     4,    74,     6,
       7,     8,     9,    79,    11,    12,    -1,    83,    84,    85,
      86,    87,    88,    -1,    -1,    68,    69,    70,    -1,     3,
       4,    74,     6,     7,     8,     9,    -1,    11,    12,    -1,
      83,    84,    85,    86,    87,    88,    68,    -1,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    68,    -1,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    -1,    80,    81,    -1,    83,
      84,    85,    86,    87,    88,     3,     4,    -1,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    -1,    -1,    -1,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,     3,     4,    -1,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    68,
      -1,    70,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      68,    -1,    70,     5,     3,     4,    74,     6,     7,     8,
       9,    -1,    11,    12,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    -1,    11,    12,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    68,
      72,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      68,     3,    70,     5,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    84,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    84,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,     3,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     5,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    67,    69,    71,    72,    73,
     127,   128,   132,   133,   134,   135,   141,   142,   143,   144,
     161,   179,   180,   181,   182,    74,    74,    74,     3,    74,
      84,    97,   129,   131,   145,   146,   147,   128,   128,     3,
      81,   128,   128,   128,     0,   181,    81,   165,     3,     4,
       6,     7,     8,     9,    11,    12,    68,    70,    74,    83,
      84,    85,    86,    87,    88,   101,   102,   103,   104,   107,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   126,   133,   138,   142,   153,   153,
     126,   145,    69,   142,   147,   148,    76,    97,    96,   127,
     128,   183,    74,    78,   146,    81,   136,   137,   138,   161,
      82,   166,    74,   109,    74,   109,   109,    74,    74,   109,
     122,   123,   125,   153,    10,    11,    12,    74,    78,    80,
     111,    84,    89,    90,    85,    86,    13,    14,    15,    16,
      91,    92,    17,    18,    83,    93,    94,    19,    20,    95,
      75,   138,    74,    78,   147,   154,   155,   138,    75,    75,
      76,    75,   142,   147,   131,   145,     3,   102,   130,   127,
       3,    75,   128,   149,   150,   151,   152,    33,    79,    84,
     123,   148,   136,    82,   137,    77,    97,   139,   140,   145,
     164,   153,   153,   153,   123,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    96,   124,    75,    76,    75,
       3,    75,   108,   123,   125,     3,   111,   111,   111,   112,
     112,   113,   113,   114,   114,   114,   114,   115,   115,   116,
     117,   118,   119,   120,   125,    75,   149,   154,    33,    79,
      84,   123,   148,   155,    74,    78,     4,    74,   145,   147,
     154,    75,    76,    75,    76,   123,   148,    79,    79,    33,
      79,    84,   123,    82,   126,    76,    97,    77,     3,    55,
      56,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      97,   125,   127,   162,   163,   165,   167,   168,   169,   170,
     172,   175,   178,    75,    75,    75,    76,   123,   123,    81,
     111,    75,    76,    79,    77,    75,    75,   123,   148,    79,
      79,    33,    79,   123,    75,   149,    33,    79,    84,   123,
     148,    75,    54,   151,     3,    79,   123,   123,    79,    79,
     140,   126,    77,   126,    77,    74,   176,   177,   174,     3,
      97,    97,    97,   125,    97,    82,   100,    74,    56,   105,
     106,   153,    78,    80,    81,   123,   156,   157,   158,   159,
     160,   123,   122,    79,   123,   123,    79,    75,   123,   148,
      79,    79,    33,    79,   123,    97,    79,    79,   162,    77,
     162,   125,   164,   164,    74,    97,    97,   168,   125,    77,
      75,    76,    77,   126,     3,   157,    76,    82,   156,    96,
     160,    79,    79,    79,   123,   123,    79,   162,    75,    74,
     162,   127,   169,    75,   123,   106,   123,    79,    76,    82,
      82,   156,   158,    79,    79,   162,   125,    60,   169,   169,
     100,    82,   156,    75,    74,    75,   125,    75,   125,   162,
     162,   125,   162,    75,   162,    75,    99,    75,   162,   162,
     173,    97,    58,   171,   100,   162
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
     132,   132,   132,   132,   132,   132,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   134,   134,   135,   135,   136,   136,   137,   137,
     137,   138,   138,   138,   138,   139,   139,   140,   140,   140,
     141,   142,   142,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   147,   147,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   154,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   156,   156,   156,   157,
     157,   157,   157,   158,   159,   159,   160,   160,   161,   162,
     162,   162,   162,   162,   162,   163,   163,   163,   164,   165,
     166,   165,   167,   167,   168,   168,   169,   169,   170,   171,
     173,   172,   172,   172,   174,   176,   175,   177,   175,   175,
     175,   175,   175,   178,   178,   178,   178,   178,   179,   180,
     180,   181,   181,   182,   182,   183,   183
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
       2,     1,     2,     1,     1,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     5,     2,     1,     1,     1,     2,     2,     3,
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
       0,    11,     6,     5,     0,     0,     7,     0,     9,     7,
       8,     7,     8,     3,     2,     2,     2,     3,     1,     1,
       2,     2,     1,     3,     2,     1,     2
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
#line 107 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->nextlist=makelist(Quad.nextinstr);
		Quad.emit("","","GOTO","");
	}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 115 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->instr=Quad.nextinstr;

	}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 124 "grammar.y" /* yacc.c:1646  */
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
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 141 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 145 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-1].exp_info);
	}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 152 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc= Quad.gentmp();
		(yyval.exp_info)->b_type = type_int;
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].intval),"");
	}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 158 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc= Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].doubleval),"");
		(yyval.exp_info)->b_type = type_double;
	}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 167 "grammar.y" /* yacc.c:1646  */
    {
		/*$$=new expression;
		$$->base_t=type_char;
		$$->pc=1;
		$$->b_type=type_pointer;
		$$->loc= Quad.gentmp();
		Quad.emit($$->loc, $1 ,"");
		*/
	}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 176 "grammar.y" /* yacc.c:1646  */
    {
		/*$$=new expression;
		$$->base_t=type_char;
		$$->pc=1;
		$$->b_type=type_pointer;
		$$->loc= Quad.gentmp();
		Quad.emit($$->loc, $1,"");
		*/
	}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 202 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 205 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-3].exp_info);
	}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 208 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 211 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-3].exp_info);
		string function_name=(yyvsp[-3].exp_info)->loc;
		symboltable *functionsymbol=globalst.lookup(function_name)->nested_symboltable;
		vector<parameter*> arglist=*((yyvsp[-1].parameter_list));
		vector<symboldata*> parameterlist=functionsymbol->order_symbol;
		For(i,0,arglist.size()){
			if(arglist[i]->type.b_type!=parameterlist[i]->type.b_type){
				if(arglist[i]->type.base_t!=parameterlist[i]->type.b_type)
					yyerror("wrong input arguement given");

				string temp=Quad.gentmp();
				arglist[i]->name=temp;
			}
			Quad.emit(arglist[i]->name,"","PARAM","");
		}
		Quad.emit(function_name,(int)arglist.size(),"CALL");


	}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 231 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 234 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 237 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-1].exp_info);
	}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 240 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-1].exp_info);
	}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 243 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type=(yyvsp[-4].symboltypei)->b_type;
		(yyval.exp_info)->pc=(yyvsp[-4].symboltypei)->pc;
		(yyval.exp_info)->base_t=(yyvsp[-4].symboltypei)->base_t;
	}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 249 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type=(yyvsp[-5].symboltypei)->b_type;
		(yyval.exp_info)->pc=(yyvsp[-5].symboltypei)->pc;
		(yyval.exp_info)->base_t=(yyvsp[-5].symboltypei)->base_t;
	}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 258 "grammar.y" /* yacc.c:1646  */
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
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 268 "grammar.y" /* yacc.c:1646  */
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
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 281 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 284 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->loc=Quad.gentmp();
		(yyval.exp_info)->b_type = (yyvsp[0].exp_info)->b_type; (yyval.exp_info)->base_t=(yyvsp[0].exp_info)->base_t; (yyval.exp_info)->pc=(yyvsp[0].exp_info)->pc;
		Quad.emit((yyval.exp_info)->loc,"","++",(yyvsp[0].exp_info)->loc);
	}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 290 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->loc=Quad.gentmp();
		(yyval.exp_info)->b_type = (yyvsp[0].exp_info)->b_type; (yyval.exp_info)->base_t=(yyvsp[0].exp_info)->base_t; (yyval.exp_info)->pc=(yyvsp[0].exp_info)->pc;
		Quad.emit((yyval.exp_info)->loc,"","--",(yyvsp[0].exp_info)->loc);
	}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 296 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->loc=Quad.gentmp();
		(yyval.exp_info)->b_type = (yyvsp[0].exp_info)->b_type; (yyval.exp_info)->base_t=(yyvsp[0].exp_info)->base_t; (yyval.exp_info)->pc=(yyvsp[0].exp_info)->pc;
		Quad.emit((yyval.exp_info)->loc,"",(yyvsp[-1].exp_info)->loc,(yyvsp[0].exp_info)->loc);
	}
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 302 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type= type_int;
		(yyval.exp_info)->loc=Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc,"","sizeof",(yyvsp[0].exp_info)->loc);
	}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 308 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type= type_int;
		
	}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 313 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 318 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="&";
	}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 322 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="*";
	}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 326 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="+";
	}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 330 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="-";
	}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 334 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="~";
	}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 338 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="!";
	}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 345 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 348 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type=(yyvsp[-2].symboltypei)->b_type;
		(yyval.exp_info)->pc=(yyvsp[-2].symboltypei)->pc;
		(yyval.exp_info)->base_t=(yyvsp[-2].symboltypei)->base_t;
	}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 357 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 360 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "*");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "*", (yyvsp[0].exp_info)->loc);

	}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 366 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "/");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "/", (yyvsp[0].exp_info)->loc);
	}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 371 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "%");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "%", (yyvsp[0].exp_info)->loc);
	}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 379 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 382 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "+");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "+", (yyvsp[0].exp_info)->loc);
	}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 387 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "-");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "-", (yyvsp[0].exp_info)->loc);
	}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 395 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 398 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "<<");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "<<", (yyvsp[0].exp_info)->loc);
	}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 403 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), ">>");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, ">>", (yyvsp[0].exp_info)->loc);
	}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 411 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 414 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "<");
		(yyval.exp_info)->loc = Quad.gentmp();
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
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 431 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), ">");
		(yyval.exp_info)->loc = Quad.gentmp();
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
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 448 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "<=");
		(yyval.exp_info)->loc = Quad.gentmp();
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
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 464 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), ">=");
		(yyval.exp_info)->loc = Quad.gentmp();
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
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 483 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 486 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "==");
		(yyval.exp_info)->loc = Quad.gentmp();
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
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 502 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "!=");
		(yyval.exp_info)->loc = Quad.gentmp();
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
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 521 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 524 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "&");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "&", (yyvsp[0].exp_info)->loc);
	}
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 532 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 535 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "^");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "^", (yyvsp[0].exp_info)->loc);
	}
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 543 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 546 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "|");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "!", (yyvsp[0].exp_info)->loc);
	}
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 554 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 557 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "&&");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "&&", (yyvsp[0].exp_info)->loc);
	}
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 565 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 568 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "||");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "||", (yyvsp[0].exp_info)->loc);
	}
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 576 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 583 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 586 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), *(yyvsp[-1].pstring));
		Quad.emit((yyvsp[-2].exp_info)->loc, (yyvsp[0].exp_info)->loc, "ASSIGN", *(yyvsp[-1].pstring));
	}
#line 2832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 593 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="=";
	}
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 596 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="*=";
	}
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 599 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="/=";
	}
#line 2856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 602 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="%=";
	}
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 605 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="+=";
	}
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 608 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="-=";
	}
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 611 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="<<=";
	}
#line 2888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 614 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)=">>=";
	}
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 617 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="&=";
	}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 620 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="^=";
	}
#line 2912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 623 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="|=";
	}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 629 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 632 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 638 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 646 "grammar.y" /* yacc.c:1646  */
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
            /*
            if(my_dec->b_type==type_function){
                GST=&(globalst);
            }            
            if(my_dec->b_type==type_function)
            {
            	//cout<<"wow there we have a function"<<endl;
                symboldata *var=GST->lookup(my_dec->name);
                symboldata *retval=var->nested_symboltable->lookup("retVal",type_now,my_dec->pc);
                var->offset=GST->offset;
                var->size= 0;
                var->initial_value=NULL;
                continue;
            }
            */
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
            	current_ST->insert(var);
            	continue;
            }
            else if(var->type.base_t == type_function){
            	var->name = my_dec->name;
            	var->type.pc = my_dec->pc;
            	var->type.b_type = type_current;
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
            	yyerror("already declared ");
            }
            
            
        }


	}
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 744 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type) = (yyvsp[0].b_type);
	}
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 757 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.decvec) = new vector<decc *>;
		(yyval.decvec)->pb((yyvsp[0].declarationi));
	}
#line 3056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 762 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.decvec)=(yyvsp[-2].decvec);
		(yyval.decvec)->pb((yyvsp[0].declarationi));
	}
#line 3065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 770 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring) = *(yyvsp[0].pstring);
	}
#line 3073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 774 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring) = "";
		
	}
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 782 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[-2].declarationi);

	}
#line 3091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 786 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
	}
#line 3099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 801 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_void;
	}
#line 3107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 804 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_char;
	}
#line 3115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 809 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_int;
	}
#line 3123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 813 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_long;
	}
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 817 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_float;
	}
#line 3139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 821 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_double;
	}
#line 3147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 897 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
		(yyval.declarationi)->pc = (yyvsp[-1].intval);
	}
#line 3156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 901 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
		(yyval.declarationi)->pc = 0;
	}
#line 3165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 915 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=new decc;
		(yyval.declarationi)->name=*((yyvsp[0].pstring));
	}
#line 3174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 930 "grammar.y" /* yacc.c:1646  */
    {
		
		(yyval.declarationi)=(yyvsp[-3].declarationi);
		(yyval.declarationi)->b_type = type_function;
		symboldata *funcdata=current_ST->lookup((yyval.declarationi)->name);
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
		cout<<"bbb"<<endl;
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
	            }
	            else {
	            	bhej = my_dec->name.c_str();
	            	yyerror("already declared ");
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


	}
#line 3352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1104 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=(yyvsp[-2].declarationi);
		(yyval.declarationi)->b_type = type_function;
		symboldata *funcdata=current_ST->lookup((yyval.declarationi)->name);
		if(funcdata==NULL){
			funcdata = new symboldata;
			funcdata->name = (yyvsp[-2].declarationi)->name;
			funcdata->type.base_t = type_function;
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
	}
#line 3392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1146 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.intval)=1 + (yyvsp[0].intval);
	}
#line 3400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1150 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.intval)=1;
	}
#line 3408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1164 "grammar.y" /* yacc.c:1646  */
    {

		(yyval.parameter_list) = (yyvsp[0].parameter_list);
	}
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1172 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.parameter_list)=new vector<parameter *>;
		(yyval.parameter_list)->pb((yyvsp[0].param));
	}
#line 3426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1176 "grammar.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].parameter_list)->pb((yyvsp[0].param));
		(yyval.parameter_list)=(yyvsp[-2].parameter_list);
	}
#line 3435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1184 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.param) = new parameter;
		(yyval.param)->name = (yyvsp[0].declarationi)->name;
		(yyval.param)->type.b_type = (yyvsp[-1].b_type); 
	}
#line 3445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1266 "grammar.y" /* yacc.c:1646  */
    {
		Quad.backpatch((yyvsp[0].exp_info)->nextlist, Quad.nextinstr);
	}
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1270 "grammar.y" /* yacc.c:1646  */
    {
		Quad.backpatch((yyvsp[0].exp_info)->nextlist, Quad.nextinstr);
	}
#line 3461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1284 "grammar.y" /* yacc.c:1646  */
    {	
		if(flag==0){
			(yyval.curls).temp = current_ST;
			(yyval.curls).created = new symboltable;
			stack_ST.pb((yyval.curls).created);
			symboldata *data = new symboldata;
			char a[100] ;
			strcpy(a,current_name.c_str());
			char b[100];
			sprintf(b,"%d",globe++); 
			data->name = strcat(a,b);
			data->offset = current_ST->offset;
			current_ST->insert(data);
			data->nested_symboltable = (yyval.curls).created;
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
#line 3490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1312 "grammar.y" /* yacc.c:1646  */
    {current_name = "cmpd";}
#line 3496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1313 "grammar.y" /* yacc.c:1646  */
    {
		current_ST=(yyvsp[-2].curls).temp;
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->nextlist = (yyvsp[-1].exp_info)->nextlist;
	}
#line 3506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1322 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		Quad.backpatch((yyvsp[-2].exp_info)->nextlist,(yyvsp[-1].exp_info)->instr);
		(yyval.exp_info)->nextlist=(yyvsp[0].exp_info)->nextlist;
	}
#line 3516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1330 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
	}
#line 3524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1333 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
	}
#line 3532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1340 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
	}
#line 3540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1347 "grammar.y" /* yacc.c:1646  */
    {
		flag=1;
		(yyval.curls).temp = current_ST;
		(yyval.curls).created = new symboltable;
		stack_ST.pb((yyval.curls).created);
		symboldata *data = new symboldata;
		char a[100] = "if_";
		char b[100];
		sprintf(b,"%d",globe++);
		data->offset = current_ST->offset; 
		data->name = strcat(a,b);
		current_ST->insert(data);
		data->nested_symboltable = (yyval.curls).created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = (yyval.curls).created;
	}
#line 3562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1368 "grammar.y" /* yacc.c:1646  */
    {
		flag=1;
		(yyval.curls).temp = current_ST;
		(yyval.curls).created = new symboltable;
		stack_ST.pb((yyval.curls).created);
		symboldata *data = new symboldata;
		char a[100] = "else_";
		char b[100];
		sprintf(b,"%d",globe++); 
		data->name = strcat(a,b);
		data->offset = current_ST->offset;
		current_ST->insert(data);
		data->nested_symboltable = (yyval.curls).created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = (yyval.curls).created;
	}
#line 3584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1388 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1388 "grammar.y" /* yacc.c:1646  */
    {
		 cout<<"hello"<<endl;
		current_ST = (yyvsp[-2].curls).temp;
		/*string tmp2;
		stringstream temp1,temp2;
		temp1<<$5->instr;
		temp2<<$10->instr;
		temp1>>tmp2;
		Quad.emit(tmp2, $3->loc , "IF_NEQ", "0");
		temp2>>tmp2;
		Quad.emit(tmp2,"","GOTO","");*/
		//Quad.backpatch($3->truelist, $5->instr);
		//Quad.backpatch($3->falselist, $10->instr);
		list<int> temp;
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->nextlist = merge((yyvsp[-5].exp_info)->nextlist, (yyvsp[-4].exp_info)->nextlist);
		(yyval.exp_info)->nextlist = merge((yyval.exp_info)->nextlist, (yyvsp[0].exp_info)->nextlist);
	}
#line 3613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1407 "grammar.y" /* yacc.c:1646  */
    {
	//
		(yyvsp[-1].exp_info)->falselist = makelist((yyvsp[-1].exp_info)->instr);
		//{Quad.emit("",$3->loc,"IF_NEQ","0");}
		cout<<"world"<<endl;
		current_ST = (yyvsp[-5].curls).temp;
		Quad.backpatch((yyvsp[-3].exp_info)->truelist, (yyvsp[-1].exp_info)->instr);
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->nextlist = merge((yyvsp[-3].exp_info)->falselist, (yyvsp[0].exp_info)->nextlist);
		//$$->nextlist = merge($5->falselist, $$->nextlist);

	}
#line 3630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1424 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.curls).temp = current_ST;
		(yyval.curls).created = new symboltable;
		stack_ST.pb((yyval.curls).created);
		symboldata *data = new symboldata;
		char a[100] = "for";
		char b[100];
		sprintf(b,"%d",globe++); 
		data->name = strcat(a,b);
		data->offset = current_ST->offset;
		current_ST->insert(data);
		data->nested_symboltable = (yyval.curls).created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = (yyval.curls).created;
		flag=1;
	}
#line 3652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1444 "grammar.y" /* yacc.c:1646  */
    {current_name="while"; }
#line 3658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1444 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-4].curls).temp;}
#line 3664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1445 "grammar.y" /* yacc.c:1646  */
    {current_name="do_while";}
#line 3670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1445 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 3676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1446 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-5].curls).temp;}
#line 3682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1447 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 3688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1448 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-5].curls).temp;}
#line 3694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1449 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 3700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1458 "grammar.y" /* yacc.c:1646  */
    {
		symboldata *funcdata = globalst.lookup(current_ST->name);
		cout<<"\n\n\n"<<current_ST->name<<"\n\n\n";
		Quad.emit((yyvsp[-1].exp_info)->loc,"", "RETURN","");
	}
#line 3710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1476 "grammar.y" /* yacc.c:1646  */
    {
		current_ST = hunny;
	}
#line 3718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1486 "grammar.y" /* yacc.c:1646  */
    {
		flag=1;
		hunny = current_ST;
		symboldata *funcdata=current_ST->lookup((yyvsp[0].declarationi)->name);

		//if not NULL do typecheck here
		if(funcdata==NULL){
			funcdata->nested_symboltable->defined = 1;
			current_ST->insert(funcdata);
		}
		else{
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

		current_ST = funcdata->nested_symboltable;
	}
#line 3756 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3760 "y.tab.c" /* yacc.c:1646  */
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
#line 1526 "grammar.y" /* yacc.c:1906  */

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
		cout<<"name,"<<"type"<<","<<"size"<<","<<"offset"<<","<<"base_t"<<endl;

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
		cout<<t->size<<","<<t->offset<<","<<t->type.base_t<<",";
		
		
		
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
			cout<<"type    "<<t1->b_type<<","<<t1->base_t<<"   "<<t2->b_type<<","<<t2->base_t<<endl;
			if(t1->b_type==t2->b_type && t1->base_t == t2->base_t &&  t1->pc== t2->pc ){
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
    error_exists = 0;
    current_ST=&(globalst);
    bool failure = yyparse();  
    //int sz = Quad.a1.size();
    //cout<<"number if statements--->>"<<sz<<endl;
    //For(i,0,sz){
    //    cout<<i<<": "; Quad.a1[i].print();
    //}
    /*cout<<"----------------SYMBOL_TABLE----------------"<<endl;

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
    */
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
}
