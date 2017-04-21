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
typedef union YYSTYPE YYSTYPE;
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
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 329 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   2214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  274
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  472

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
       0,   111,   111,   128,   131,   132,   135,   139,   145,   154,
     163,   175,   179,   180,   184,   185,   189,   192,   195,   198,
     218,   221,   224,   227,   230,   236,   245,   255,   268,   271,
     277,   283,   289,   295,   300,   305,   309,   313,   317,   321,
     325,   332,   335,   344,   347,   353,   358,   366,   369,   374,
     382,   385,   390,   398,   401,   416,   431,   445,   462,   465,
     479,   496,   499,   507,   510,   518,   521,   529,   532,   540,
     543,   551,   554,   558,   561,   568,   571,   574,   577,   580,
     583,   586,   589,   592,   595,   598,   604,   607,   613,   619,
     620,   711,   715,   716,   717,   718,   722,   723,   724,   725,
     726,   727,   731,   736,   744,   748,   756,   761,   766,   767,
     768,   769,   770,   771,   775,   779,   782,   783,   787,   791,
     795,   799,   800,   801,   802,   803,   804,   805,   806,   810,
     811,   812,   816,   817,   821,   822,   826,   827,   828,   832,
     833,   834,   835,   839,   840,   844,   845,   846,   850,   854,
     855,   856,   857,   861,   862,   866,   867,   871,   876,   889,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,  1078,  1114,  1118,  1119,  1120,  1124,  1131,  1132,  1137,
    1138,  1146,  1151,  1158,  1164,  1165,  1169,  1170,  1174,  1175,
    1179,  1180,  1181,  1185,  1186,  1187,  1188,  1189,  1190,  1191,
    1192,  1193,  1194,  1195,  1196,  1197,  1198,  1199,  1200,  1201,
    1202,  1203,  1204,  1205,  1209,  1210,  1211,  1215,  1216,  1217,
    1218,  1222,  1226,  1227,  1231,  1232,  1236,  1240,  1241,  1242,
    1243,  1244,  1245,  1249,  1250,  1251,  1255,  1282,  1283,  1283,
    1290,  1291,  1295,  1296,  1300,  1301,  1305,  1326,  1347,  1347,
    1348,  1352,  1357,  1377,  1377,  1378,  1378,  1379,  1380,  1381,
    1382,  1386,  1387,  1388,  1389,  1390,  1399,  1403,  1404,  1408,
    1412,  1417,  1418,  1455,  1456
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
  "$accept", "primary_expression", "constant", "string",
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

#define YYPACT_NINF -394

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-394)))

#define YYTABLE_NINF -273

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1899,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,  -394,   -31,   -10,  -394,    -7,  -394,
    -394,    56,  1998,  1998,  -394,    20,  -394,  1998,  1998,  1998,
    -394,    45,  1899,  -394,     7,   866,  2145,  1490,  -394,   126,
     -12,  -394,   -47,  -394,   795,   128,     8,  -394,  -394,    64,
    2047,  -394,  -394,  -394,  -394,  -394,    68,  -394,  -394,  -394,
    -394,  -394,  1559,  -394,  1580,  1580,    82,    88,   866,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,   227,
    -394,  1490,  -394,   107,   -48,   173,   169,   176,    86,    81,
      85,   185,    46,  -394,   136,  2145,     1,  2145,   144,   150,
     157,   165,  -394,  -394,  -394,   -12,   126,  -394,   192,  -394,
      56,  1899,  1801,   889,   128,  2047,  1556,  -394,    74,  -394,
    -394,  -394,   866,  -394,   866,  -394,  -394,  2145,  1490,   429,
    -394,  -394,   160,   170,   247,  -394,  -394,  1320,  1490,   249,
    -394,  1490,  1490,  1490,  1490,  1490,  1490,  1490,  1490,  1490,
    1490,  1490,  1490,  1490,  1490,  1490,  1490,  1490,  1490,  1490,
    -394,  -394,  1700,   958,   131,  -394,   139,  -394,  -394,  -394,
     255,  -394,  -394,  -394,  -394,   174,  -394,  -394,  -394,  -394,
    -394,  -394,   104,   198,   200,  -394,   167,  1165,  -394,   202,
     204,   981,  1749,  -394,  -394,  1490,  -394,   -37,  -394,   208,
     554,   213,   215,   222,   224,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  1490,  -394,  1490,  1341,
    -394,  -394,   182,  -394,   -46,  -394,  -394,  -394,  -394,   107,
     107,   -48,   -48,   173,   173,   173,   173,   169,   169,   176,
      86,    81,    85,   185,   189,  -394,   231,   240,  1165,  -394,
     243,   244,  1050,   139,  1850,  1073,   250,  1646,  -394,   140,
    -394,  -394,  1948,  -394,   324,   256,  1165,  -394,  -394,  1490,
    -394,   258,   263,  -394,  -394,   106,  -394,  1490,   252,  1490,
     266,  -394,   270,  -394,  -394,  -394,   342,   251,   268,   692,
    -394,   -36,  -394,  -394,  -394,  -394,   467,  -394,  -394,   272,
    -394,  -394,  -394,   271,   271,  -394,  2096,  -394,  -394,  1234,
    -394,  -394,  1490,  -394,  1490,  -394,  -394,   276,  1165,  -394,
    -394,  1490,  -394,   281,  -394,   274,  1165,  -394,   284,   287,
    1142,   277,  -394,  -394,  -394,  -394,   292,   298,  -394,  -394,
    -394,  -394,   350,   301,   350,  1490,  -394,  -394,   305,   283,
    -394,  -394,  -394,   -35,  -394,  -394,  -394,  1490,   306,   193,
    -394,   307,  1490,   383,  1234,  -394,  -394,   -34,  1362,   -25,
    -394,  -394,  -394,  -394,   308,   309,  -394,  -394,   310,  1165,
    -394,  -394,  1490,  -394,   312,  -394,  -394,  -394,  -394,   350,
    -394,   203,   318,   350,   641,  -394,  -394,   217,  1490,  -394,
    2096,  1490,   314,  -394,   -24,  1186,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,   316,   317,  -394,  -394,   350,  1490,   337,
     728,   728,   350,  -394,  -394,  -394,  -394,  1211,  -394,  -394,
    -394,  1362,  -394,  -394,  -394,   220,   325,  1448,  1469,   340,
    -394,  -394,   350,  1490,   350,   233,   350,   235,   343,  -394,
     238,  -394,   350,  -394,   350,  -394,   350,   303,  -394,  -394,
    -394,  -394
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   128,   108,   109,   110,   112,   113,   153,   149,   150,
     151,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   132,   133,     0,   152,   154,     0,   111,
     270,     0,    93,    95,   127,     0,   126,    97,    99,   101,
      91,     0,   266,   267,     0,     0,     0,     0,   159,     0,
     176,    89,     0,   102,   107,   158,     0,    92,    94,   131,
       0,    96,    98,   100,     1,   268,   238,   269,     2,     9,
       7,     8,     0,    10,     0,     0,     0,     0,     0,    35,
      36,    37,    38,    39,    40,    16,     3,     4,     6,    28,
      41,     0,    43,    47,    50,    53,    58,    61,    63,    65,
      67,    69,    71,    88,     0,   140,   189,   142,     0,     0,
       0,     0,   152,   177,   175,   174,     0,    90,     0,   273,
       0,   271,     0,     0,   157,     0,     0,   134,     0,   138,
     237,   236,     0,    32,     0,    29,    30,     0,     0,    41,
      73,    86,     0,     0,     0,    22,    23,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,   139,     0,     0,   191,   188,   192,   141,   155,   148,
       0,   160,   178,   173,   103,   107,   104,   105,   106,   274,
     186,   171,   185,     0,   180,   181,     0,     0,   161,    36,
       0,     0,     0,   129,   135,     0,   136,     0,   143,   147,
       0,     0,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    75,     0,     5,     0,     0,
      21,    18,     0,    26,     0,    20,    44,    45,    46,    48,
      49,    51,    52,    56,    57,    54,    55,    59,    60,    62,
      64,    66,    68,    70,     0,   210,     0,     0,     0,   194,
      36,     0,     0,   190,     0,     0,     0,     0,   183,   191,
     184,   170,     0,   172,     0,     0,     0,   162,   169,     0,
     168,    36,     0,   130,   145,     0,   137,     0,     2,     0,
       0,   246,     0,   253,   255,   252,     0,     0,     0,     0,
     244,     0,   242,   243,   227,   228,     0,   240,   229,     0,
     230,   231,   232,    33,     0,    34,     0,    74,    87,     0,
      42,    19,     0,    17,     0,   211,   193,     0,     0,   195,
     201,     0,   200,     0,   212,     0,     0,   202,    36,     0,
       0,     0,   179,   182,   187,   164,     0,     0,   165,   167,
     144,   146,     0,     0,     0,     0,   236,   236,     0,     0,
     262,   263,   264,     0,   245,   239,   241,     0,     0,     0,
      12,     0,     0,     0,     0,   216,   218,     0,     0,     0,
     222,    27,    72,   197,     0,     0,   199,   213,     0,     0,
     203,   209,     0,   208,     0,   226,   163,   166,   233,     0,
     235,     0,     0,     0,     0,   261,   265,     0,     0,    11,
       0,     0,     0,   225,     0,     0,    24,   217,   221,   223,
     196,   198,   205,     0,     0,   206,   234,     0,     0,     0,
       0,     0,     0,    15,    13,    14,   224,     0,   214,    25,
     220,     0,   204,   207,   251,     0,     0,     0,     0,   250,
     215,   219,     0,     0,     0,     0,     0,     0,     0,   254,
       0,   259,     0,   257,     0,   247,     0,     0,   260,   258,
     249,   256
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -394,  -394,   285,  -394,  -394,  -394,    -8,  -394,  -394,   -40,
    -394,   -17,   148,   161,    70,   158,   253,   239,   242,   254,
     257,  -394,   -33,    54,  -394,   -78,   -41,   -53,   100,  -394,
    -394,   311,  -394,   -29,  -394,  -394,   294,   -98,    42,  -394,
     137,  -394,   -42,  -394,  -394,   -22,   -54,   -26,  -104,  -112,
    -394,   151,  -394,   130,   -93,  -159,  -234,    52,  -393,  -394,
      50,   -39,  -128,  -394,   -16,   386,  -394,  -394,   133,  -384,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,   398,  -394,  -394
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    85,    86,    87,    88,   369,   370,    89,   232,   139,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   140,   141,   226,   301,   104,    30,   120,    52,
     188,    53,    32,    33,    34,    35,   126,   127,   106,   207,
     208,    36,    37,    38,    39,   111,    55,    56,   115,   256,
     194,   195,   196,   371,   257,   176,   376,   377,   378,   379,
     380,    40,   303,   304,   210,   305,   131,   306,   307,   308,
     309,   466,   310,   458,   358,   311,   356,   357,   312,    41,
      42,    43,    44,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     142,   119,   124,   107,   107,    90,   110,    90,   113,    54,
     193,    48,   103,   175,   103,   263,   105,   105,   107,   201,
     431,   129,   441,    59,   114,     8,     9,    10,   204,   116,
     228,   105,   133,   323,   135,   136,   107,   154,   155,   285,
     228,   228,   415,    45,   441,    64,   447,   448,   416,   105,
     117,    90,   437,   372,   142,   373,   142,   112,   438,    48,
     286,   364,   406,   107,    46,   107,   168,    47,   189,   262,
     234,   418,    50,   182,   150,   172,   105,    48,   105,   173,
     174,   113,    49,   107,   107,    50,   129,   129,    66,   183,
     107,   254,   107,   276,   185,   107,   105,   105,   185,   270,
      31,    60,   128,   105,   204,   105,   209,    48,   105,    48,
     263,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    48,
      49,   113,    57,    58,   236,   237,   238,    61,    62,    63,
      50,   169,    31,    48,   417,   125,   174,   171,    49,   177,
     130,   205,   335,    51,   328,   113,   137,   302,    50,   182,
     107,   340,   138,   129,   284,    90,   269,   128,   128,   164,
     268,   206,   103,   105,   165,   108,   109,   200,   267,   166,
      49,   440,   173,   205,   158,   159,   156,   157,    50,    90,
      50,   151,   214,   162,   163,   186,   152,   153,    70,    71,
      49,   233,   122,   440,   167,   172,   123,   451,   143,   173,
      50,   170,   320,   264,   267,   124,   113,   265,   173,   178,
     182,   363,   192,   113,   398,   179,   400,   261,   243,   244,
     245,   246,   389,   180,   182,   227,   228,   144,   145,   146,
     181,   269,   273,   274,   128,   229,   351,    90,   353,    90,
     230,   275,   235,   302,   103,   282,   103,   321,   322,   266,
     160,   161,   211,   209,   212,   228,   324,   213,   409,   410,
     118,   426,   192,   271,   107,   429,   272,   401,   427,   228,
     317,   277,   318,   278,    90,   287,   182,   105,   313,   407,
     314,   382,   432,   228,   113,   452,   228,   315,   182,   444,
     316,   147,   239,   240,   449,   148,   325,   149,   462,   228,
     464,   228,   327,   467,   228,   326,   333,   241,   242,   339,
     247,   248,   329,   330,   459,   341,   461,   344,   463,   352,
     346,   412,    90,   347,   468,   345,   469,   348,   470,   103,
     402,   403,   349,   354,   355,   359,   367,   182,   360,   387,
     445,   430,   319,   288,    69,   383,    70,    71,    72,    73,
     386,    74,    75,   390,   192,   361,   391,   192,   107,   455,
     457,   396,   192,   375,   395,   460,   381,   397,   399,   404,
     405,   105,   384,   408,   411,   385,   413,   420,   421,   422,
     388,   425,   428,   436,   394,   442,   443,   446,  -248,   453,
     471,   465,   434,   187,   250,   289,   290,   291,   251,   292,
     293,   294,   295,   296,   297,   298,   299,   249,    76,   202,
      77,   252,   350,   343,    78,   253,   414,   184,   375,   419,
      67,    66,   375,    79,    80,    81,    82,    83,    84,   366,
      65,     0,     0,   423,     0,     0,   424,   300,     0,     0,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,   433,     0,     0,   435,     0,     0,     0,   375,
     288,    69,     1,    70,    71,    72,    73,     0,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   375,     0,     0,     0,   375,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,   289,   290,   291,   225,   292,   293,   294,   295,
     296,   297,   298,   299,    25,    76,    26,    77,    27,    28,
      29,    78,     0,     0,     0,     0,     0,     0,    66,   365,
      79,    80,    81,    82,    83,    84,     0,   288,    69,     1,
      70,    71,    72,    73,   300,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,   289,
     290,   291,     0,   292,   293,   294,   295,   296,   297,   298,
     299,    25,    76,    26,    77,    27,    28,    29,    78,     0,
       0,     0,     0,     0,     0,    66,     0,    79,    80,    81,
      82,    83,    84,     0,    68,    69,     1,    70,    71,    72,
      73,   300,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    68,    69,     0,    70,    71,
      72,    73,     0,    74,    75,     0,     0,     0,    25,    76,
      26,    77,    27,    28,    29,    78,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
       0,    68,    69,     0,    70,    71,    72,    73,   300,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,   362,
       0,     0,     0,     0,     0,     0,    76,     0,    77,     0,
       1,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,   300,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,    26,     0,    27,    28,    29,    68,
      69,     1,    70,    71,    72,    73,  -272,    74,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,    68,    69,     0,    70,    71,    72,    73,     0,
      74,    75,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,   197,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,    76,    26,    77,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,     0,     0,    76,   112,    77,
       0,    68,    69,    78,    70,    71,    72,    73,   198,    74,
      75,     0,    79,   199,    81,    82,    83,    84,     0,     0,
       0,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,   258,    74,    75,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   279,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,    76,   112,    77,     0,
       0,     0,    78,     0,     0,     0,     0,   259,     0,     0,
       0,    79,   260,    81,    82,    83,    84,     0,     0,    76,
     112,    77,     0,    68,    69,    78,    70,    71,    72,    73,
     280,    74,    75,     0,    79,   281,    81,    82,    83,    84,
       0,     0,     0,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,   331,    74,    75,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   336,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,    76,   112,
      77,     0,     0,     0,    78,     0,     0,     0,     0,   332,
       0,     0,     0,    79,    80,    81,    82,    83,    84,     0,
       0,    76,   112,    77,     0,    68,    69,    78,    70,    71,
      72,    73,   337,    74,    75,     0,    79,   338,    81,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    68,    69,
       0,    70,    71,    72,    73,   392,    74,    75,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,     0,    74,    75,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
      76,   112,    77,     0,    68,    69,    78,    70,    71,    72,
      73,   393,    74,    75,     0,    79,    80,    81,    82,    83,
      84,     0,     0,    76,   112,    77,     0,    68,    69,    78,
      70,    71,    72,    73,     0,    74,    75,     0,    79,    80,
      81,    82,    83,    84,    76,     0,    77,     0,     0,     0,
      78,     0,     0,     0,   372,     0,   373,   374,   439,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,    76,
       0,    77,     0,     0,     0,    78,     0,     0,     0,   372,
       0,   373,   374,   450,    79,    80,    81,    82,    83,    84,
       0,     0,    76,     0,    77,     0,     0,     0,    78,     0,
       0,     0,   372,     0,   373,   374,     0,    79,    80,    81,
      82,    83,    84,    68,    69,     0,    70,    71,    72,    73,
       0,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,     0,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,     0,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
      77,     0,     0,     0,    78,   231,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    76,
       0,    77,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,   319,     0,    79,    80,    81,    82,    83,    84,
      76,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,   374,     0,    79,    80,    81,    82,    83,
      84,    68,    69,     0,    70,    71,    72,    73,     0,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,     0,    70,    71,    72,    73,     0,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
       0,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,    77,     0,
       0,     0,    78,   454,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    76,     0,    77,
       0,     0,     0,    78,   456,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    76,     0,
      77,     1,    68,    69,    78,    70,    71,    72,    73,     0,
      74,    75,     0,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
       0,    74,    75,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    76,    28,    77,
       0,     0,     0,   132,     0,     0,     0,     0,   203,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    76,    48,
      77,     1,     0,     0,   134,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,    29,
     267,   255,     0,     0,   173,     0,     0,     0,     0,     0,
      50,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,    29,   172,   255,     0,     0,   173,     0,
       0,     0,     0,     0,    50,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,   190,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   283,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
      26,     0,    27,     0,    29,     0,   191,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,    29,     0,   334,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,    26,     0,
      27,    28,    29,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   342,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       1,     0,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26
};

static const yytype_int16 yycheck[] =
{
      78,    54,    56,    45,    46,    45,    47,    47,    50,    31,
     122,     3,    45,   106,    47,   174,    45,    46,    60,   123,
     404,    60,   415,     3,    50,    37,    38,    39,   126,    76,
      76,    60,    72,    79,    74,    75,    78,    85,    86,    76,
      76,    76,    76,    74,   437,     0,   430,   431,    82,    78,
      97,    91,    76,    78,   132,    80,   134,    69,    82,     3,
      97,    97,    97,   105,    74,   107,    20,    74,   121,   173,
     148,    96,    84,   115,    91,    74,   105,     3,   107,    78,
     106,   123,    74,   125,   126,    84,   125,   126,    81,   115,
     132,   169,   134,   197,   116,   137,   125,   126,   120,   192,
       0,    81,    60,   132,   202,   134,   128,     3,   137,     3,
     269,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     3,
      74,   173,    32,    33,   151,   152,   153,    37,    38,    39,
      84,    95,    42,     3,   378,    81,   172,   105,    74,   107,
      82,    77,   264,    97,   258,   197,    74,   210,    84,   201,
     202,   265,    74,   202,   205,   205,   192,   125,   126,    83,
     192,    97,   205,   202,    93,    45,    46,   123,    74,    94,
      74,   415,    78,    77,    15,    16,    13,    14,    84,   229,
      84,    84,   138,    17,    18,     3,    89,    90,     6,     7,
      74,   147,    74,   437,    19,    74,    78,   441,    78,    78,
      84,    75,   229,    74,    74,   269,   258,    78,    78,    75,
     262,   299,   122,   265,   352,    75,   354,   173,   158,   159,
     160,   161,   336,    76,   276,    75,    76,    10,    11,    12,
      75,   267,    75,    76,   202,    75,   287,   287,   289,   289,
       3,   197,     3,   306,   287,   201,   289,    75,    76,     4,
      91,    92,   132,   285,   134,    76,    77,   137,    75,    76,
      96,   399,   172,    75,   316,   403,    76,   355,    75,    76,
     226,    79,   228,    79,   324,    77,   328,   316,    75,   367,
      75,   324,    75,    76,   336,    75,    76,    75,   340,   427,
      76,    74,   154,   155,   432,    78,    75,    80,    75,    76,
      75,    76,   258,    75,    76,    75,   262,   156,   157,   265,
     162,   163,    79,    79,   452,    75,   454,     3,   456,    77,
     276,   372,   372,   279,   462,    79,   464,    79,   466,   372,
     356,   357,    79,    77,    74,     3,    74,   389,    97,    75,
     428,   404,    81,     3,     4,    79,     6,     7,     8,     9,
      79,    11,    12,    79,   264,    97,    79,   267,   410,   447,
     448,    79,   272,   319,    97,   453,   322,    79,    77,    74,
      97,   410,   328,    77,    77,   331,     3,    79,    79,    79,
     336,    79,    74,    79,   340,    79,    79,    60,    58,    74,
      97,    58,   410,   118,   165,    55,    56,    57,   166,    59,
      60,    61,    62,    63,    64,    65,    66,   164,    68,   125,
      70,   167,   285,   272,    74,   168,   374,   116,   374,   379,
      44,    81,   378,    83,    84,    85,    86,    87,    88,   306,
      42,    -1,    -1,   389,    -1,    -1,   392,    97,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,   408,    -1,    -1,   411,    -1,    -1,    -1,   415,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   437,    -1,    -1,    -1,   441,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    96,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,     3,     4,     5,
       6,     7,     8,     9,    97,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    -1,     3,     4,     5,     6,     7,     8,
       9,    97,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     3,     4,    -1,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      -1,     3,     4,    -1,     6,     7,     8,     9,    97,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
       5,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    71,    72,    73,     3,
       4,     5,     6,     7,     8,     9,    81,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,     3,     4,    -1,     6,     7,     8,     9,    -1,
      11,    12,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    33,    -1,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    -1,    -1,    68,    69,    70,
      -1,     3,     4,    74,     6,     7,     8,     9,    79,    11,
      12,    -1,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    33,    11,    12,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    -1,    -1,    68,
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
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    -1,     3,     4,    74,     6,     7,     8,
       9,    79,    11,    12,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    68,    69,    70,    -1,     3,     4,    74,
       6,     7,     8,     9,    -1,    11,    12,    -1,    83,    84,
      85,    86,    87,    88,    68,    -1,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    68,
      -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    80,    81,    -1,    83,    84,    85,
      86,    87,    88,     3,     4,    -1,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    68,
      -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,     3,     4,    -1,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    68,    -1,    70,
      -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    68,    -1,
      70,     5,     3,     4,    74,     6,     7,     8,     9,    -1,
      11,    12,    -1,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      -1,    11,    12,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    68,    72,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    68,     3,
      70,     5,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      84,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,     3,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    71,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    71,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       5,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    67,    69,    71,    72,    73,
     125,   126,   130,   131,   132,   133,   139,   140,   141,   142,
     159,   177,   178,   179,   180,    74,    74,    74,     3,    74,
      84,    97,   127,   129,   143,   144,   145,   126,   126,     3,
      81,   126,   126,   126,     0,   179,    81,   163,     3,     4,
       6,     7,     8,     9,    11,    12,    68,    70,    74,    83,
      84,    85,    86,    87,    88,    99,   100,   101,   102,   105,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   124,   131,   136,   140,   151,   151,
     124,   143,    69,   140,   145,   146,    76,    97,    96,   125,
     126,   181,    74,    78,   144,    81,   134,   135,   136,   159,
      82,   164,    74,   107,    74,   107,   107,    74,    74,   107,
     120,   121,   123,   151,    10,    11,    12,    74,    78,    80,
     109,    84,    89,    90,    85,    86,    13,    14,    15,    16,
      91,    92,    17,    18,    83,    93,    94,    19,    20,    95,
      75,   136,    74,    78,   145,   152,   153,   136,    75,    75,
      76,    75,   140,   145,   129,   143,     3,   100,   128,   125,
       3,    75,   126,   147,   148,   149,   150,    33,    79,    84,
     121,   146,   134,    82,   135,    77,    97,   137,   138,   143,
     162,   151,   151,   151,   121,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    96,   122,    75,    76,    75,
       3,    75,   106,   121,   123,     3,   109,   109,   109,   110,
     110,   111,   111,   112,   112,   112,   112,   113,   113,   114,
     115,   116,   117,   118,   123,    75,   147,   152,    33,    79,
      84,   121,   146,   153,    74,    78,     4,    74,   143,   145,
     152,    75,    76,    75,    76,   121,   146,    79,    79,    33,
      79,    84,   121,    82,   124,    76,    97,    77,     3,    55,
      56,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      97,   123,   125,   160,   161,   163,   165,   166,   167,   168,
     170,   173,   176,    75,    75,    75,    76,   121,   121,    81,
     109,    75,    76,    79,    77,    75,    75,   121,   146,    79,
      79,    33,    79,   121,    75,   147,    33,    79,    84,   121,
     146,    75,    54,   149,     3,    79,   121,   121,    79,    79,
     138,   124,    77,   124,    77,    74,   174,   175,   172,     3,
      97,    97,    97,   123,    97,    82,   166,    74,    56,   103,
     104,   151,    78,    80,    81,   121,   154,   155,   156,   157,
     158,   121,   120,    79,   121,   121,    79,    75,   121,   146,
      79,    79,    33,    79,   121,    97,    79,    79,   160,    77,
     160,   123,   162,   162,    74,    97,    97,   123,    77,    75,
      76,    77,   124,     3,   155,    76,    82,   154,    96,   158,
      79,    79,    79,   121,   121,    79,   160,    75,    74,   160,
     125,   167,    75,   121,   104,   121,    79,    76,    82,    82,
     154,   156,    79,    79,   160,   123,    60,   167,   167,   160,
      82,   154,    75,    74,    75,   123,    75,   123,   171,   160,
     123,   160,    75,   160,    75,    58,   169,    75,   160,   160,
     160,    97
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,    99,    99,    99,   100,   100,   101,
     101,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   106,   106,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   109,   109,   110,   110,   110,   110,   111,   111,   111,
     112,   112,   112,   113,   113,   113,   113,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   123,   123,   124,   125,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   127,   127,   128,   128,   129,   129,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   135,   136,
     136,   136,   136,   137,   137,   138,   138,   138,   139,   140,
     140,   140,   140,   141,   141,   142,   142,   143,   143,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   149,   150,   150,   151,   151,
     152,   152,   152,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   154,   154,   154,   155,   155,   155,
     155,   156,   157,   157,   158,   158,   159,   160,   160,   160,
     160,   160,   160,   161,   161,   161,   162,   163,   164,   163,
     165,   165,   166,   166,   167,   167,   168,   169,   171,   170,
     170,   170,   172,   174,   173,   175,   173,   173,   173,   173,
     173,   176,   176,   176,   176,   176,   177,   178,   178,   179,
     179,   180,   180,   181,   181
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     6,     1,     3,     3,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       3,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     2,     1,     1,     1,     2,     2,     3,     1,     2,
       1,     2,     1,     1,     3,     2,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     0,     2,     0,     5,
       1,     2,     1,     1,     1,     2,     1,     1,     0,     8,
       5,     5,     0,     0,     7,     0,     9,     7,     8,     7,
       8,     3,     2,     2,     2,     3,     1,     1,     2,     2,
       1,     3,     2,     1,     2
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
#line 111 "grammar.y" /* yacc.c:1646  */
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
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 128 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 132 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-1].exp_info);
	}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 139 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc= Quad.gentmp();
		(yyval.exp_info)->b_type = type_int;
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].intval),"");
	}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 145 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc= Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc,(yyvsp[0].doubleval),"");
		(yyval.exp_info)->b_type = type_double;
	}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 154 "grammar.y" /* yacc.c:1646  */
    {
		/*$$=new expression;
		$$->base_t=type_char;
		$$->pc=1;
		$$->b_type=type_pointer;
		$$->loc= Quad.gentmp();
		Quad.emit($$->loc, $1 ,"");
		*/
	}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 163 "grammar.y" /* yacc.c:1646  */
    {
		/*$$=new expression;
		$$->base_t=type_char;
		$$->pc=1;
		$$->b_type=type_pointer;
		$$->loc= Quad.gentmp();
		Quad.emit($$->loc, $1,"");
		*/
	}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 189 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 192 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-3].exp_info);
	}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 195 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 198 "grammar.y" /* yacc.c:1646  */
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
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 218 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 221 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 224 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-1].exp_info);
	}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 227 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-1].exp_info);
	}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 230 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type=(yyvsp[-4].symboltypei)->b_type;
		(yyval.exp_info)->pc=(yyvsp[-4].symboltypei)->pc;
		(yyval.exp_info)->base_t=(yyvsp[-4].symboltypei)->base_t;
	}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 236 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type=(yyvsp[-5].symboltypei)->b_type;
		(yyval.exp_info)->pc=(yyvsp[-5].symboltypei)->pc;
		(yyval.exp_info)->base_t=(yyvsp[-5].symboltypei)->base_t;
	}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 245 "grammar.y" /* yacc.c:1646  */
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
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 255 "grammar.y" /* yacc.c:1646  */
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
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 268 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 271 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->loc=Quad.gentmp();
		(yyval.exp_info)->b_type = (yyvsp[0].exp_info)->b_type; (yyval.exp_info)->base_t=(yyvsp[0].exp_info)->base_t; (yyval.exp_info)->pc=(yyvsp[0].exp_info)->pc;
		Quad.emit((yyval.exp_info)->loc,"","++",(yyvsp[0].exp_info)->loc);
	}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 277 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->loc=Quad.gentmp();
		(yyval.exp_info)->b_type = (yyvsp[0].exp_info)->b_type; (yyval.exp_info)->base_t=(yyvsp[0].exp_info)->base_t; (yyval.exp_info)->pc=(yyvsp[0].exp_info)->pc;
		Quad.emit((yyval.exp_info)->loc,"","--",(yyvsp[0].exp_info)->loc);
	}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 283 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)= new expression;
		(yyval.exp_info)->loc=Quad.gentmp();
		(yyval.exp_info)->b_type = (yyvsp[0].exp_info)->b_type; (yyval.exp_info)->base_t=(yyvsp[0].exp_info)->base_t; (yyval.exp_info)->pc=(yyvsp[0].exp_info)->pc;
		Quad.emit((yyval.exp_info)->loc,"",(yyvsp[-1].exp_info)->loc,(yyvsp[0].exp_info)->loc);
	}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 289 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type= type_int;
		(yyval.exp_info)->loc=Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc,"","sizeof",(yyvsp[0].exp_info)->loc);
	}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 295 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type= type_int;
		
	}
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 300 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 305 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="&";
	}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 309 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="*";
	}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 313 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="+";
	}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 317 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="-";
	}
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 321 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="~";
	}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 325 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->loc="!";
	}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 332 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 335 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=new expression;
		(yyval.exp_info)->b_type=(yyvsp[-2].symboltypei)->b_type;
		(yyval.exp_info)->pc=(yyvsp[-2].symboltypei)->pc;
		(yyval.exp_info)->base_t=(yyvsp[-2].symboltypei)->base_t;
	}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 344 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 347 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "*");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "*", (yyvsp[0].exp_info)->loc);

	}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 353 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "/");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "/", (yyvsp[0].exp_info)->loc);
	}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 358 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "%");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "%", (yyvsp[0].exp_info)->loc);
	}
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 366 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 369 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "+");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "+", (yyvsp[0].exp_info)->loc);
	}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 374 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "-");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "-", (yyvsp[0].exp_info)->loc);
	}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 382 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 385 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "<<");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "<<", (yyvsp[0].exp_info)->loc);
	}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 390 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), ">>");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, ">>", (yyvsp[0].exp_info)->loc);
	}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 398 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 401 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "<");
		(yyval.exp_info)->loc = Quad.gentmp();
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "GOTO_L", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");

	}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 416 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), ">");
		(yyval.exp_info)->loc = Quad.gentmp();
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "GOTO_G", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");

	}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 431 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "<=");
		(yyval.exp_info)->loc = Quad.gentmp();
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "GOTO_LE", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");
	}
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 445 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), ">=");
		(yyval.exp_info)->loc = Quad.gentmp();
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "GOTO_GE", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");
	}
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 462 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 465 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "==");
		(yyval.exp_info)->loc = Quad.gentmp();
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "EQ", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");
	}
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 479 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "!=");
		(yyval.exp_info)->loc = Quad.gentmp();
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		Quad.emit(res, (yyvsp[-2].exp_info)->loc, "NE", (yyvsp[0].exp_info)->loc);
		Quad.emit((yyval.exp_info)->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit((yyval.exp_info)->loc, "1", "ASSIGN", "=");
	}
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 496 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 499 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "&");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "&", (yyvsp[0].exp_info)->loc);
	}
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 507 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 510 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "^");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "^", (yyvsp[0].exp_info)->loc);
	}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 518 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 521 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "|");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "!", (yyvsp[0].exp_info)->loc);
	}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 529 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 532 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "&&");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "&&", (yyvsp[0].exp_info)->loc);
	}
#line 2785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 540 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 543 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), "||");
		(yyval.exp_info)->loc = Quad.gentmp();
		Quad.emit((yyval.exp_info)->loc, (yyvsp[-2].exp_info)->loc, "||", (yyvsp[0].exp_info)->loc);
	}
#line 2803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 551 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 558 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 561 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=type_check((yyvsp[-2].exp_info), (yyvsp[0].exp_info), *(yyvsp[-1].pstring));
		Quad.emit((yyvsp[-2].exp_info)->loc, (yyvsp[0].exp_info)->loc, "ASSIGN", *(yyvsp[-1].pstring));
	}
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 568 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="=";
	}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 571 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="*=";
	}
#line 2844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 574 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="/=";
	}
#line 2852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 577 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="%=";
	}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 580 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="+=";
	}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 583 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="-=";
	}
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 586 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="<<=";
	}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 589 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)=">>=";
	}
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 592 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="&=";
	}
#line 2900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 595 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="^=";
	}
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 598 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring)="|=";
	}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 604 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 607 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[-2].exp_info);
	}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 613 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.exp_info)=(yyvsp[0].exp_info);
	}
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 621 "grammar.y" /* yacc.c:1646  */
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
#line 3035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 719 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type) = (yyvsp[0].b_type);
	}
#line 3043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 732 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.decvec) = new vector<decc *>;
		(yyval.decvec)->pb((yyvsp[0].declarationi));
	}
#line 3052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 737 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.decvec)=(yyvsp[-2].decvec);
		(yyval.decvec)->pb((yyvsp[0].declarationi));
	}
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 745 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring) = *(yyvsp[0].pstring);
	}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 749 "grammar.y" /* yacc.c:1646  */
    {
		*(yyval.pstring) = "";
		
	}
#line 3078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 757 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[-2].declarationi);

	}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 761 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
	}
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 776 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_void;
	}
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 779 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_char;
	}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 784 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_int;
	}
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 788 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_long;
	}
#line 3127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 792 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_float;
	}
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 796 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_double;
	}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 872 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
		(yyval.declarationi)->pc = (yyvsp[-1].intval);
	}
#line 3152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 876 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
		(yyval.declarationi)->pc = 0;
	}
#line 3161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 890 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=new decc;
		(yyval.declarationi)->name=*((yyvsp[0].pstring));
	}
#line 3170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 905 "grammar.y" /* yacc.c:1646  */
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
#line 3348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1079 "grammar.y" /* yacc.c:1646  */
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
#line 3388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1121 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.intval)=1 + (yyvsp[0].intval);
	}
#line 3396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1125 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.intval)=1;
	}
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1139 "grammar.y" /* yacc.c:1646  */
    {

		(yyval.parameter_list) = (yyvsp[0].parameter_list);
	}
#line 3413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1147 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.parameter_list)=new vector<parameter *>;
		(yyval.parameter_list)->pb((yyvsp[0].param));
	}
#line 3422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1151 "grammar.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].parameter_list)->pb((yyvsp[0].param));
		(yyval.parameter_list)=(yyvsp[-2].parameter_list);
	}
#line 3431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1159 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.param) = new parameter;
		(yyval.param)->name = (yyvsp[0].declarationi)->name;
		(yyval.param)->type.b_type = (yyvsp[-1].b_type); 
	}
#line 3441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1255 "grammar.y" /* yacc.c:1646  */
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
#line 3470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1283 "grammar.y" /* yacc.c:1646  */
    {current_name = "cmpd";}
#line 3476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1284 "grammar.y" /* yacc.c:1646  */
    {
		current_ST=(yyvsp[-2].curls).temp;
	}
#line 3484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1306 "grammar.y" /* yacc.c:1646  */
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
#line 3506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1327 "grammar.y" /* yacc.c:1646  */
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
#line 3528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1347 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-4].curls).temp;}
#line 3534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1347 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-1].curls).temp;}
#line 3540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1348 "grammar.y" /* yacc.c:1646  */
    {
		current_ST = (yyvsp[-4].curls).temp;

	}
#line 3549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1357 "grammar.y" /* yacc.c:1646  */
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
#line 3571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1377 "grammar.y" /* yacc.c:1646  */
    {current_name="while"; }
#line 3577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1377 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-4].curls).temp;}
#line 3583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1378 "grammar.y" /* yacc.c:1646  */
    {current_name="do_while";}
#line 3589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1378 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 3595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1379 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-5].curls).temp;}
#line 3601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1380 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 3607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1381 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-5].curls).temp;}
#line 3613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1382 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 3619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1391 "grammar.y" /* yacc.c:1646  */
    {
		symboldata *funcdata = globalst.lookup(current_ST->name);
		cout<<"\n\n\n"<<current_ST->name<<"\n\n\n";
		Quad.emit((yyvsp[-1].exp_info)->loc,"", "RETURN","");
	}
#line 3629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1409 "grammar.y" /* yacc.c:1646  */
    {
		current_ST = hunny;
	}
#line 3637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1419 "grammar.y" /* yacc.c:1646  */
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
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3679 "y.tab.c" /* yacc.c:1646  */
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
#line 1459 "grammar.y" /* yacc.c:1906  */

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
