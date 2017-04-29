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

quad_array Quad;
symboltable globalst;
symboltable *current_ST,*hunny;
vector<symboltable *> stack_ST;
string current_name;
string bing;
int globe;
int flag;

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif



#line 105 "y.tab.c" /* yacc.c:339  */

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
#line 40 "grammar.y" /* yacc.c:355  */

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

#line 310 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 325 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   2218

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  473

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
       0,   106,   106,   107,   108,   109,   110,   114,   115,   119,
     120,   124,   128,   129,   133,   134,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   151,   152,   156,   157,
     158,   159,   160,   161,   162,   166,   167,   168,   169,   170,
     171,   175,   176,   180,   181,   182,   183,   187,   188,   189,
     193,   194,   195,   199,   200,   201,   202,   203,   207,   208,
     209,   213,   214,   218,   219,   223,   224,   228,   229,   233,
     234,   238,   239,   243,   244,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   262,   263,   267,   271,
     272,   353,   357,   358,   359,   360,   364,   365,   366,   367,
     368,   369,   373,   378,   386,   387,   391,   395,   401,   402,
     403,   404,   405,   406,   410,   414,   417,   418,   422,   426,
     430,   434,   435,   436,   437,   438,   439,   440,   441,   445,
     446,   447,   451,   452,   456,   457,   461,   462,   463,   467,
     468,   469,   470,   474,   475,   479,   480,   481,   485,   489,
     490,   491,   492,   496,   497,   501,   502,   506,   511,   518,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   688,   689,   693,   694,   695,   699,   706,   707,   712,
     713,   720,   725,   732,   738,   739,   743,   744,   748,   749,
     753,   754,   755,   759,   760,   761,   762,   763,   764,   765,
     766,   767,   768,   769,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   783,   784,   785,   789,   790,   791,
     792,   796,   800,   801,   805,   806,   810,   814,   815,   816,
     817,   818,   819,   823,   824,   825,   829,   856,   857,   857,
     864,   865,   869,   870,   874,   875,   879,   899,   919,   919,
     920,   920,   923,   928,   948,   948,   949,   949,   950,   951,
     952,   953,   957,   958,   959,   960,   961,   965,   969,   970,
     974,   978,   983,   984,  1015,  1016
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
  "expression_statement", "if", "else", "selection_statement", "$@2",
  "$@3", "P", "iteration_statement", "$@4", "$@5", "jump_statement",
  "base", "translation_unit", "external_declaration",
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

#define YYPACT_NINF -394

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-394)))

#define YYTABLE_NINF -274

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1903,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,  -394,   -31,   -10,  -394,    -7,  -394,
    -394,    56,  2002,  2002,  -394,    20,  -394,  2002,  2002,  2002,
    -394,    45,  1903,  -394,     7,   917,  2149,  1541,  -394,   126,
     -12,  -394,   -47,  -394,   846,   150,     8,  -394,  -394,    75,
    2051,  -394,  -394,  -394,  -394,  -394,    80,  -394,  -394,  -394,
    -394,  -394,  1610,  -394,  1631,  1631,    95,   105,   917,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,   195,
    -394,  1541,  -394,   107,   -48,   131,   169,   176,    91,    88,
      92,   185,    46,  -394,   136,  2149,     1,  2149,   142,   144,
     157,   156,  -394,  -394,  -394,   -12,   126,  -394,   192,  -394,
      56,  1903,  1805,   940,   150,  2051,   789,  -394,    74,  -394,
    -394,  -394,   917,  -394,   917,  -394,  -394,  2149,  1541,   299,
    -394,  -394,   127,   170,   247,  -394,  -394,  1371,  1541,   249,
    -394,  1541,  1541,  1541,  1541,  1541,  1541,  1541,  1541,  1541,
    1541,  1541,  1541,  1541,  1541,  1541,  1541,  1541,  1541,  1541,
    -394,  -394,  1751,  1009,   151,  -394,   152,  -394,  -394,  -394,
     255,  -394,  -394,  -394,  -394,   172,  -394,  -394,  -394,  -394,
    -394,  -394,   104,   201,   205,  -394,   164,  1216,  -394,   204,
     206,  1032,  1607,  -394,  -394,  1541,  -394,   -37,  -394,   211,
     554,   215,   222,   232,   233,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  1541,  -394,  1541,  1392,
    -394,  -394,   167,  -394,   -46,  -394,  -394,  -394,  -394,   107,
     107,   -48,   -48,   131,   131,   131,   131,   169,   169,   176,
      91,    88,    92,   185,   181,  -394,   236,   240,  1216,  -394,
     256,   257,  1101,   152,  1854,  1124,   259,  1697,  -394,   140,
    -394,  -394,  1952,  -394,   334,   261,  1216,  -394,  -394,  1541,
    -394,   262,   263,  -394,  -394,   106,  -394,  1541,   266,  1541,
     267,  -394,   264,  -394,  -394,  -394,   342,   251,   252,   728,
    -394,   -36,  -394,  -394,  -394,  -394,   467,  -394,  -394,   272,
    -394,  -394,  -394,   271,   271,  -394,  2100,  -394,  -394,  1285,
    -394,  -394,  1541,  -394,  1541,  -394,  -394,   274,  1216,  -394,
    -394,  1541,  -394,   275,  -394,   281,  1216,  -394,   278,   279,
    1193,   265,  -394,  -394,  -394,  -394,   282,   284,  -394,  -394,
    -394,  -394,   692,   283,   692,  1541,  -394,  -394,   291,   269,
    -394,  -394,  -394,   -35,  -394,  -394,  -394,  1541,   294,   190,
    -394,   297,  1541,   374,  1285,  -394,  -394,   -34,  1413,   -25,
    -394,  -394,  -394,  -394,   300,   301,  -394,  -394,   305,  1216,
    -394,  -394,  1541,  -394,   307,  -394,  -394,  -394,  -394,   692,
    -394,   203,   304,   692,   641,  -394,  -394,   217,  1541,  -394,
    2100,  1541,   308,  -394,   -24,  1237,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,   310,   312,  -394,  -394,   692,  1541,   332,
     779,   779,   692,  -394,  -394,  -394,  -394,  1262,  -394,  -394,
    -394,  1413,  -394,  -394,  -394,   220,   319,  1499,  1520,   338,
    -394,  -394,   692,  1541,   692,   224,   692,   226,   339,  -394,
    -394,   228,  -394,   692,  -394,   692,  -394,   692,   302,  -394,
    -394,  -394,  -394
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   128,   108,   109,   110,   112,   113,   153,   149,   150,
     151,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   132,   133,     0,   152,   154,     0,   111,
     271,     0,    93,    95,   127,     0,   126,    97,    99,   101,
      91,     0,   267,   268,     0,     0,     0,     0,   159,     0,
     176,    89,     0,   102,   107,   158,     0,    92,    94,   131,
       0,    96,    98,   100,     1,   269,   238,   270,     2,     9,
       7,     8,     0,    10,     0,     0,     0,     0,     0,    35,
      36,    37,    38,    39,    40,    16,     3,     4,     6,    28,
      41,     0,    43,    47,    50,    53,    58,    61,    63,    65,
      67,    69,    71,    88,     0,   140,   189,   142,     0,     0,
       0,     0,   152,   177,   175,   174,     0,    90,     0,   274,
       0,   272,     0,     0,   157,     0,     0,   134,     0,   138,
     237,   236,     0,    32,     0,    29,    30,     0,     0,    41,
      73,    86,     0,     0,     0,    22,    23,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,   139,     0,     0,   191,   188,   192,   141,   155,   148,
       0,   160,   178,   173,   103,   107,   104,   105,   106,   275,
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
       0,   246,     0,   254,   256,   253,     0,     0,     0,     0,
     244,     0,   242,   243,   227,   228,     0,   240,   229,     0,
     230,   231,   232,    33,     0,    34,     0,    74,    87,     0,
      42,    19,     0,    17,     0,   211,   193,     0,     0,   195,
     201,     0,   200,     0,   212,     0,     0,   202,    36,     0,
       0,     0,   179,   182,   187,   164,     0,     0,   165,   167,
     144,   146,     0,     0,     0,     0,   236,   236,     0,     0,
     263,   264,   265,     0,   245,   239,   241,     0,     0,     0,
      12,     0,     0,     0,     0,   216,   218,     0,     0,     0,
     222,    27,    72,   197,     0,     0,   199,   213,     0,     0,
     203,   209,     0,   208,     0,   226,   163,   166,   233,     0,
     235,     0,     0,     0,     0,   262,   266,     0,     0,    11,
       0,     0,     0,   225,     0,     0,    24,   217,   221,   223,
     196,   198,   205,     0,     0,   206,   234,     0,     0,     0,
       0,     0,     0,    15,    13,    14,   224,     0,   214,    25,
     220,     0,   204,   207,   252,     0,     0,     0,     0,   250,
     215,   219,     0,     0,     0,     0,     0,     0,     0,   251,
     255,     0,   260,     0,   258,     0,   247,     0,     0,   261,
     259,   249,   257
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -394,  -394,   280,  -394,  -394,  -394,    -9,  -394,  -394,   -40,
    -394,   -17,   116,   149,    77,   155,   238,   235,   237,   239,
     241,  -394,   -33,    54,  -394,   -78,   -41,   -53,   100,  -394,
    -394,   288,  -394,   -29,  -394,  -394,   286,   -98,    42,  -394,
     120,  -394,   -42,  -394,  -394,   -22,   -54,   -26,  -104,  -112,
    -394,   135,  -394,   130,   -93,  -159,  -228,    39,  -393,  -394,
      35,   -39,   -44,  -394,   -43,   371,  -394,  -394,   110,  -384,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,   375,  -394,  -394
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
     309,   467,   310,   458,   459,   358,   311,   356,   357,   312,
      41,    42,    43,    44,   121
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
      50,   169,    31,    48,   156,   157,   174,   171,    49,   177,
     417,   205,   335,    51,   328,   113,   125,   302,    50,   182,
     107,   340,   130,   129,   284,    90,   269,   128,   128,   137,
     268,   206,   103,   105,   164,   108,   109,   200,   267,   138,
      49,   165,   173,   205,   158,   159,   166,   440,    50,    90,
      50,   151,   214,   162,   163,   186,   152,   153,    70,    71,
      49,   233,   227,   228,   167,   144,   145,   146,   143,   440,
      50,   170,   320,   451,   267,   124,   113,   178,   173,   179,
     182,   363,   192,   113,   122,   172,   264,   261,   123,   173,
     265,   181,   389,   180,   182,   243,   244,   245,   246,   273,
     274,   269,   321,   322,   128,   229,   351,    90,   353,    90,
     230,   275,   235,   302,   103,   282,   103,   228,   324,   266,
     160,   161,   211,   209,   212,   409,   410,   213,   118,   147,
     239,   240,   192,   148,   107,   149,   271,   401,   427,   228,
     317,   272,   318,   277,    90,   278,   182,   105,   287,   407,
     313,   382,   432,   228,   113,   452,   228,   314,   182,   463,
     228,   465,   228,   468,   228,   241,   242,   315,   398,   316,
     400,   325,   327,   402,   403,   326,   333,   247,   248,   339,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     346,   412,    90,   347,   341,   329,   330,   344,   355,   103,
     345,   348,   349,   352,   354,   359,   367,   182,   360,   361,
     445,   430,   319,   383,   386,   426,   387,   390,   391,   429,
     399,   396,   395,   397,   192,   404,   405,   192,   107,   455,
     457,   408,   192,   375,   411,   461,   381,   413,   428,   420,
     421,   105,   384,   444,   422,   385,   425,   436,   449,   442,
     388,   443,   446,   453,   394,   225,  -248,   466,   187,   472,
     250,   434,   249,   251,   184,   350,   252,   343,   460,   253,
     462,   202,   464,   414,   419,    67,   366,    65,     0,   469,
       0,   470,     0,   471,     0,     0,     0,     0,   375,     0,
       0,     0,   375,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   423,     0,     0,   424,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   433,     0,     0,   435,     0,     0,     0,   375,
     288,    69,     1,    70,    71,    72,    73,     0,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   375,     0,     0,     0,   375,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,   289,   290,   291,     0,   292,   293,   294,   295,
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
      20,    21,    22,    23,    24,   288,    69,     0,    70,    71,
      72,    73,     0,    74,    75,     0,     0,     0,    25,    76,
      26,    77,    27,    28,    29,    78,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
       0,    68,    69,     0,    70,    71,    72,    73,   300,    74,
      75,     0,     0,     0,     0,     0,     0,   289,   290,   291,
       0,   292,   293,   294,   295,   296,   297,   298,   299,     0,
      76,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,    66,     0,    79,    80,    81,    82,    83,
      84,     0,    68,    69,     0,    70,    71,    72,    73,   300,
      74,    75,     0,     0,     1,     0,    76,     0,    77,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,   362,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,     0,    76,     0,    77,
       0,     1,     0,    78,     0,     0,     0,     0,    26,     0,
       0,    28,    79,    80,    81,    82,    83,    84,     0,     0,
       0,   203,     0,     0,     0,     0,   300,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,    28,    29,
      68,    69,     1,    70,    71,    72,    73,  -273,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,    68,    69,     0,    70,    71,    72,    73,
       0,    74,    75,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,   197,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,    76,    26,    77,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     0,     0,    76,   112,
      77,     0,    68,    69,    78,    70,    71,    72,    73,   198,
      74,    75,     0,    79,   199,    81,    82,    83,    84,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,   258,    74,    75,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   279,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,    76,   112,    77,
       0,     0,     0,    78,     0,     0,     0,     0,   259,     0,
       0,     0,    79,   260,    81,    82,    83,    84,     0,     0,
      76,   112,    77,     0,    68,    69,    78,    70,    71,    72,
      73,   280,    74,    75,     0,    79,   281,    81,    82,    83,
      84,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,   331,    74,    75,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   336,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,    76,
     112,    77,     0,     0,     0,    78,     0,     0,     0,     0,
     332,     0,     0,     0,    79,    80,    81,    82,    83,    84,
       0,     0,    76,   112,    77,     0,    68,    69,    78,    70,
      71,    72,    73,   337,    74,    75,     0,    79,   338,    81,
      82,    83,    84,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,   392,    74,    75,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
      68,    69,     0,    70,    71,    72,    73,     0,    74,    75,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,    76,   112,    77,     0,    68,    69,    78,    70,    71,
      72,    73,   393,    74,    75,     0,    79,    80,    81,    82,
      83,    84,     0,     0,    76,   112,    77,     0,    68,    69,
      78,    70,    71,    72,    73,     0,    74,    75,     0,    79,
      80,    81,    82,    83,    84,    76,     0,    77,     0,     0,
       0,    78,     0,     0,     0,   372,     0,   373,   374,   439,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
      76,     0,    77,     0,     0,     0,    78,     0,     0,     0,
     372,     0,   373,   374,   450,    79,    80,    81,    82,    83,
      84,     0,     0,    76,     0,    77,     0,     0,     0,    78,
       0,     0,     0,   372,     0,   373,   374,     0,    79,    80,
      81,    82,    83,    84,    68,    69,     0,    70,    71,    72,
      73,     0,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,     0,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,     0,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,    77,     0,     0,     0,    78,   231,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      76,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,   319,     0,    79,    80,    81,    82,    83,
      84,    76,     0,    77,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,   374,     0,    79,    80,    81,    82,
      83,    84,    68,    69,     0,    70,    71,    72,    73,     0,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
       0,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,     0,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,    77,
       0,     0,     0,    78,   454,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    76,     0,
      77,     0,     0,     0,    78,   456,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    76,
       0,    77,     1,    68,    69,    78,    70,    71,    72,    73,
       0,    74,    75,     0,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,     0,    74,    75,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    76,    28,
      77,     0,     0,     0,   132,     0,     0,     0,     0,   283,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    76,
      48,    77,     1,     0,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,    25,     0,    26,     0,    27,     0,
      29,   267,   255,     0,     0,   173,     0,     0,     0,     0,
       0,    50,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,     0,   190,     0,
       1,     0,     0,     0,     0,     0,     0,     0,    25,     0,
      26,     0,    27,     0,    29,   172,   255,     0,     0,   173,
       0,     0,     0,     0,     0,    50,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,    26,     0,    27,     0,    29,     0,
     191,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,    29,     0,   334,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    26,     0,    27,    28,    29,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   342,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     1,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26
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
      84,    95,    42,     3,    13,    14,   172,   105,    74,   107,
     378,    77,   264,    97,   258,   197,    81,   210,    84,   201,
     202,   265,    82,   202,   205,   205,   192,   125,   126,    74,
     192,    97,   205,   202,    83,    45,    46,   123,    74,    74,
      74,    93,    78,    77,    15,    16,    94,   415,    84,   229,
      84,    84,   138,    17,    18,     3,    89,    90,     6,     7,
      74,   147,    75,    76,    19,    10,    11,    12,    78,   437,
      84,    75,   229,   441,    74,   269,   258,    75,    78,    75,
     262,   299,   122,   265,    74,    74,    74,   173,    78,    78,
      78,    75,   336,    76,   276,   158,   159,   160,   161,    75,
      76,   267,    75,    76,   202,    75,   287,   287,   289,   289,
       3,   197,     3,   306,   287,   201,   289,    76,    77,     4,
      91,    92,   132,   285,   134,    75,    76,   137,    96,    74,
     154,   155,   172,    78,   316,    80,    75,   355,    75,    76,
     226,    76,   228,    79,   324,    79,   328,   316,    77,   367,
      75,   324,    75,    76,   336,    75,    76,    75,   340,    75,
      76,    75,    76,    75,    76,   156,   157,    75,   352,    76,
     354,    75,   258,   356,   357,    75,   262,   162,   163,   265,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     276,   372,   372,   279,    75,    79,    79,     3,    74,   372,
      79,    79,    79,    77,    77,     3,    74,   389,    97,    97,
     428,   404,    81,    79,    79,   399,    75,    79,    79,   403,
      77,    79,    97,    79,   264,    74,    97,   267,   410,   447,
     448,    77,   272,   319,    77,   453,   322,     3,    74,    79,
      79,   410,   328,   427,    79,   331,    79,    79,   432,    79,
     336,    79,    60,    74,   340,    96,    58,    58,   118,    97,
     165,   410,   164,   166,   116,   285,   167,   272,   452,   168,
     454,   125,   456,   374,   379,    44,   306,    42,    -1,   463,
      -1,   465,    -1,   467,    -1,    -1,    -1,    -1,   374,    -1,
      -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   389,    -1,    -1,   392,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   408,    -1,    -1,   411,    -1,    -1,    -1,   415,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   437,    -1,    -1,    -1,   441,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    -1,    59,    60,    61,    62,
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
      12,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    -1,     3,     4,    -1,     6,     7,     8,     9,    97,
      11,    12,    -1,    -1,     5,    -1,    68,    -1,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    68,    -1,    70,
      -1,     5,    -1,    74,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    97,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    71,    72,    73,
       3,     4,     5,     6,     7,     8,     9,    81,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,     3,     4,    -1,     6,     7,     8,     9,
      -1,    11,    12,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    -1,    -1,    68,    69,
      70,    -1,     3,     4,    74,     6,     7,     8,     9,    79,
      11,    12,    -1,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    33,    11,    12,    -1,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    -1,    -1,
      68,    69,    70,    -1,     3,     4,    74,     6,     7,     8,
       9,    79,    11,    12,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    33,    11,    12,    -1,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      -1,    -1,    68,    69,    70,    -1,     3,     4,    74,     6,
       7,     8,     9,    79,    11,    12,    -1,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    33,    11,    12,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    -1,     3,     4,    74,     6,     7,
       8,     9,    79,    11,    12,    -1,    83,    84,    85,    86,
      87,    88,    -1,    -1,    68,    69,    70,    -1,     3,     4,
      74,     6,     7,     8,     9,    -1,    11,    12,    -1,    83,
      84,    85,    86,    87,    88,    68,    -1,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    78,    -1,    80,    81,    -1,    83,    84,
      85,    86,    87,    88,     3,     4,    -1,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    70,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,     3,     4,    -1,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,
      -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    68,    -1,
      70,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    68,
      -1,    70,     5,     3,     4,    74,     6,     7,     8,     9,
      -1,    11,    12,    -1,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    -1,    11,    12,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    68,    72,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    68,
       3,    70,     5,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    84,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    84,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    -1,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     5,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    67,    69,    71,    72,    73,
     125,   126,   130,   131,   132,   133,   139,   140,   141,   142,
     159,   178,   179,   180,   181,    74,    74,    74,     3,    74,
      84,    97,   127,   129,   143,   144,   145,   126,   126,     3,
      81,   126,   126,   126,     0,   180,    81,   163,     3,     4,
       6,     7,     8,     9,    11,    12,    68,    70,    74,    83,
      84,    85,    86,    87,    88,    99,   100,   101,   102,   105,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   124,   131,   136,   140,   151,   151,
     124,   143,    69,   140,   145,   146,    76,    97,    96,   125,
     126,   182,    74,    78,   144,    81,   134,   135,   136,   159,
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
     170,   174,   177,    75,    75,    75,    76,   121,   121,    81,
     109,    75,    76,    79,    77,    75,    75,   121,   146,    79,
      79,    33,    79,   121,    75,   147,    33,    79,    84,   121,
     146,    75,    54,   149,     3,    79,   121,   121,    79,    79,
     138,   124,    77,   124,    77,    74,   175,   176,   173,     3,
      97,    97,    97,   123,    97,    82,   166,    74,    56,   103,
     104,   151,    78,    80,    81,   121,   154,   155,   156,   157,
     158,   121,   120,    79,   121,   121,    79,    75,   121,   146,
      79,    79,    33,    79,   121,    97,    79,    79,   160,    77,
     160,   123,   162,   162,    74,    97,    97,   123,    77,    75,
      76,    77,   124,     3,   155,    76,    82,   154,    96,   158,
      79,    79,    79,   121,   121,    79,   160,    75,    74,   160,
     125,   167,    75,   121,   104,   121,    79,    76,    82,    82,
     154,   156,    79,    79,   160,   123,    60,   167,   167,   160,
      82,   154,    75,    74,    75,   123,    75,   123,   171,   172,
     160,   123,   160,    75,   160,    75,    58,   169,    75,   160,
     160,   160,    97
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
     172,   170,   170,   173,   175,   174,   176,   174,   174,   174,
     174,   174,   177,   177,   177,   177,   177,   178,   179,   179,
     180,   180,   181,   181,   182,   182
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
       0,     6,     5,     0,     0,     7,     0,     9,     7,     8,
       7,     8,     3,     2,     2,     2,     3,     1,     1,     2,
       2,     1,     3,     2,     1,     2
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
        case 90:
#line 273 "grammar.y" /* yacc.c:1646  */
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
            }
            else if(var->type.base_t == type_function){
            	cout<<"\n\n\n\n\n\n\n yaha aa gaya \n\n\n\n\n\n";
            	var->name = my_dec->name;
            	var->type.pc = my_dec->pc;
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
            	current_ST->offset-=var->size;
            }
            
            
        }


	}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 361 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type) = (yyvsp[0].b_type);
	}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 374 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.decvec) = new vector<decc *>;
		(yyval.decvec)->pb((yyvsp[0].declarationi));
	}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 379 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.decvec)=(yyvsp[-2].decvec);
		(yyval.decvec)->pb((yyvsp[0].declarationi));
	}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 392 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[-2].declarationi);
	}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 395 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
	}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 411 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_void;
	}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 414 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_char;
	}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 419 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_int;
	}
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 423 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_long;
	}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 427 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_float;
	}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 431 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.b_type)=type_double;
	}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 507 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
		(yyval.declarationi)->pc = (yyvsp[-1].intval);
	}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 511 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi) = (yyvsp[0].declarationi);
		(yyval.declarationi)->pc = 0;
	}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 519 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=new decc;
		(yyval.declarationi)->name=*((yyvsp[0].pstring));
	}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 534 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.declarationi)=(yyvsp[-3].declarationi);
		(yyval.declarationi)->b_type = type_function;
		symboldata *funcdata=current_ST->lookup((yyval.declarationi)->name);
		if(funcdata!=NULL){
			if(funcdata->nested_symboltable==NULL){
				funcdata->nested_symboltable = new symboltable;
			}
			if(funcdata->nested_symboltable!=NULL&&funcdata->nested_symboltable->declared==1){
			}
			else if(funcdata->nested_symboltable!=NULL && funcdata->nested_symboltable->defined==1){
				funcdata->nested_symboltable->declared=1;
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
			//if(flag==1)
				//current_ST = funcdata->nested_symboltable;

			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<funcdata->nested_symboltable->order_symbol.size()<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
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
					if(param[i].b_type!=symb[i].b_type && param[i].alist!=symb[i].alist && param[i].pc!=symb[i].pc && param[i].base_t!=symb[i].base_t)
						yes=0;
						
				}
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
					printf("\n\n\n\n\n\n\ndeclarations and definition are not same\n\n\n\n\n\n\n\n");
				}		
			}
			else {
				printf("\n\n\n\n\n\n\ndeclarations and definition are not same\n\n\n\n\n\n\n\n");
			}
		}


	}
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 696 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.intval)=1 + (yyvsp[0].intval);
	}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 700 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.intval)=1;
	}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 714 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.parameter_list) = (yyvsp[0].parameter_list);
	}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 721 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.parameter_list)=new vector<parameter *>;
		(yyval.parameter_list)->pb((yyvsp[0].param));
	}
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 725 "grammar.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].parameter_list)->pb((yyvsp[0].param));
		(yyval.parameter_list)=(yyvsp[-2].parameter_list);
	}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 733 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.param) = new parameter;
		(yyval.param)->name = (yyvsp[0].declarationi)->name;
		(yyval.param)->type.b_type = (yyvsp[-1].b_type); 
	}
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 829 "grammar.y" /* yacc.c:1646  */
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
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 857 "grammar.y" /* yacc.c:1646  */
    {current_name = "cmpd";}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 858 "grammar.y" /* yacc.c:1646  */
    {
		current_ST=(yyvsp[-2].curls).temp;
	}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 880 "grammar.y" /* yacc.c:1646  */
    {
		flag=1;
		(yyval.curls).temp = current_ST;
		(yyval.curls).created = new symboltable;
		stack_ST.pb((yyval.curls).created);
		symboldata *data = new symboldata;
		char a[100] = "if";
		char b[100];
		sprintf(b,"%d",globe++); 
		data->name = strcat(a,b);
		current_ST->insert(data);
		data->nested_symboltable = (yyval.curls).created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = (yyval.curls).created;
	}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 900 "grammar.y" /* yacc.c:1646  */
    {
		flag=1;
		(yyval.curls).temp = current_ST;
		(yyval.curls).created = new symboltable;
		stack_ST.pb((yyval.curls).created);
		symboldata *data = new symboldata;
		char a[100] = "else";
		char b[100];
		sprintf(b,"%d",globe++); 
		data->name = strcat(a,b);
		current_ST->insert(data);
		data->nested_symboltable = (yyval.curls).created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = (yyval.curls).created;
	}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 919 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-4].curls).temp;}
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 919 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-1].curls).temp;}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 920 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-4].curls).temp;}
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 921 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 928 "grammar.y" /* yacc.c:1646  */
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
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 948 "grammar.y" /* yacc.c:1646  */
    {current_name="while"; }
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 948 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-4].curls).temp;}
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 949 "grammar.y" /* yacc.c:1646  */
    {current_name="do_while";}
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 949 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 2688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 950 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-5].curls).temp;}
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 951 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 952 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-5].curls).temp;}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 953 "grammar.y" /* yacc.c:1646  */
    {current_ST = (yyvsp[-6].curls).temp;}
#line 2712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 975 "grammar.y" /* yacc.c:1646  */
    {
		current_ST = hunny;
	}
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 985 "grammar.y" /* yacc.c:1646  */
    {
		flag=1;
		hunny = current_ST;
		symboldata *funcdata=current_ST->lookup((yyvsp[0].declarationi)->name);

		//if not NULL do typecheck here
		if(funcdata==NULL)
			current_ST->insert(funcdata);
		else{
			if(funcdata->nested_symboltable->defined == 1)
				printf("\n\n\n\n\n\n\n\n\n\nerror here already defined \n\n\n\n\n\n\n");
			else{
				funcdata->nested_symboltable->defined=1;
			}	
		}

		decc *my_dec = (yyvsp[0].declarationi);
		funcdata->name = my_dec->name;
		funcdata->type.pc = my_dec->pc;
		funcdata->type.b_type = my_dec->b_type;
		if(my_dec->pc)
			funcdata->type.base_t = type_pointer;
		funcdata->size=0;
		funcdata->offset=current_ST->offset;

		current_ST = funcdata->nested_symboltable;
	}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2756 "y.tab.c" /* yacc.c:1646  */
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
#line 1019 "grammar.y" /* yacc.c:1906  */

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

void print(symboltable *table){
	cout<<"----------------"<<table->name<<"------------"<<endl;
	cout<<"name"<<"\t"<<"\t"<<"type"<<"\t"<<"\t"<<"size"<<"\t"<<"\t"<<"offset"<<"\t"<<"\t"<<endl;
	for(auto t:table->order_symbol){
				
		cout<<t->name<<"\t"<<"\t";
		if(t->type.b_type==type_char){
			cout<<"char\t"<<"\t";
		}
		else if(t->type.b_type==type_int){
			cout<<"int\t"<<"\t";
		}
		else if(t->type.b_type==type_double){
			cout<<"double\t"<<"\t";
		}
		else if(t->type.b_type==type_float){
			cout<<"float\t"<<"\t";
		}
		else if(t->type.b_type==type_function){
			cout<<"function"<<"\t";
		}
		else{
			cout<<"\t\t";
			if(t->type.b_type==type_char){
				cout<<"char "<<"\t";
			}
			else if(t->type.b_type==type_int){
				cout<<"int "<<"\t";
			}
			else if(t->type.b_type==type_double){
				cout<<"double "<<"\t";
			}
		}

		if(t->type.base_t==type_pointer){
			For(i,0,t->type.pc){
				cout<<"*";
			}
			cout<<"\t"<<"\t";
		}
		cout<<t->size<<"\t"<<"\t"<<t->offset<<"\t";
		
		cout<<"\t";
		
		cout<<endl;
	}
}
int main()
{
    yydebug = 0;
    flag=0;
    globe=0;
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

    cout<<stack_ST.size(); 
    print(current_ST);
    cout<<endl;   
    for(auto t:stack_ST){
    	print(t);
    	cout<<endl;
    }
}
