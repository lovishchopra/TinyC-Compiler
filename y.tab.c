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
#line 1 "ass5_16CS10058.y" /* yacc.c:339  */


//Header Files Needed

#include <iostream>               
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <sstream>

//Translator file
#include "ass5_translator_16CS10058.h"

//yylex for lexer, yyerror for error recovery, typevar for last encountered type
extern int yylex();
void yyerror(string s);
extern string typevar;
vector <string> strings;

using namespace std;

#line 88 "y.tab.c" /* yacc.c:339  */

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
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    ID = 295,
    INTEGER_CONST = 296,
    FLOAT_CONST = 297,
    ENUMERATION_CONST = 298,
    CHAR_CONST = 299,
    STRING_LITERAL = 300,
    LBRACKET = 301,
    RBRACKET = 302,
    LBRACE = 303,
    RBRACE = 304,
    LPARENTHESIS = 305,
    RPARENTHESIS = 306,
    DOT = 307,
    ARROW = 308,
    INCREMENT = 309,
    DECREMENT = 310,
    AMPERSAND = 311,
    BITWISE_OR = 312,
    BITWISE_XOR = 313,
    PLUS = 314,
    MINUS = 315,
    STAR = 316,
    DIV = 317,
    MOD = 318,
    BITWISE_NOT = 319,
    LOGICAL_NOT = 320,
    LOGICAL_AND = 321,
    LOGICAL_OR = 322,
    RIGHT_SHIFT = 323,
    LEFT_SHIFT = 324,
    LESSER_THAN = 325,
    GREATER_THAN = 326,
    LESSER_EQUAL = 327,
    GREATER_EQUAL = 328,
    EQUALS = 329,
    NOT_EQUAL = 330,
    QUESTION_MARK = 331,
    COLON = 332,
    SEMICOLON = 333,
    ELLIPSIS = 334,
    ASSIGNMENT = 335,
    MULT_ASSIGN = 336,
    DIV_ASSIGN = 337,
    PLUS_ASSIGN = 338,
    SUB_ASSIGN = 339,
    MOD_ASSIGN = 340,
    LEFT_SHIFT_ASSIGN = 341,
    RIGHT_SHIFT_ASSIGN = 342,
    AND_ASSIGN = 343,
    XOR_ASSIGN = 344,
    OR_ASSIGN = 345,
    COMMA = 346,
    HASH = 347
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define BOOL 292
#define COMPLEX 293
#define IMAGINARY 294
#define ID 295
#define INTEGER_CONST 296
#define FLOAT_CONST 297
#define ENUMERATION_CONST 298
#define CHAR_CONST 299
#define STRING_LITERAL 300
#define LBRACKET 301
#define RBRACKET 302
#define LBRACE 303
#define RBRACE 304
#define LPARENTHESIS 305
#define RPARENTHESIS 306
#define DOT 307
#define ARROW 308
#define INCREMENT 309
#define DECREMENT 310
#define AMPERSAND 311
#define BITWISE_OR 312
#define BITWISE_XOR 313
#define PLUS 314
#define MINUS 315
#define STAR 316
#define DIV 317
#define MOD 318
#define BITWISE_NOT 319
#define LOGICAL_NOT 320
#define LOGICAL_AND 321
#define LOGICAL_OR 322
#define RIGHT_SHIFT 323
#define LEFT_SHIFT 324
#define LESSER_THAN 325
#define GREATER_THAN 326
#define LESSER_EQUAL 327
#define GREATER_EQUAL 328
#define EQUALS 329
#define NOT_EQUAL 330
#define QUESTION_MARK 331
#define COLON 332
#define SEMICOLON 333
#define ELLIPSIS 334
#define ASSIGNMENT 335
#define MULT_ASSIGN 336
#define DIV_ASSIGN 337
#define PLUS_ASSIGN 338
#define SUB_ASSIGN 339
#define MOD_ASSIGN 340
#define LEFT_SHIFT_ASSIGN 341
#define RIGHT_SHIFT_ASSIGN 342
#define AND_ASSIGN 343
#define XOR_ASSIGN 344
#define OR_ASSIGN 345
#define COMMA 346
#define HASH 347

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "ass5_16CS10058.y" /* yacc.c:355  */
            //yylval is a union of all these types
  int intval;		//integer value 
  char* charval;	//char value
  int instr;		//instruction number: for backpatching
  sym* symp;		//symbol
  symboltype* symtp;	//symbol type
  Expression* expr;		//expression
  Statement* st;		//statement
  array* A;				//array type
  char unaryOperator;	//unaryoperator
  int numpar;			//number of parameters

#line 325 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 342 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   997

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  358

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   188,   188,   195,   203,   209,   215,   220,   225,   233,
     239,   245,   267,   275,   276,   277,   284,   291,   292,   295,
     296,   298,   303,   310,   311,   316,   321,   354,   355,   358,
     359,   360,   361,   362,   363,   366,   367,   374,   389,   399,
     409,   421,   422,   432,   444,   445,   455,   467,   468,   480,
     492,   504,   518,   519,   537,   556,   557,   571,   572,   590,
     591,   609,   610,   626,   627,   643,   644,   667,   668,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     702,   703,   706,   709,   710,   714,   715,   716,   717,   718,
     719,   720,   721,   724,   725,   728,   729,   736,   737,   738,
     739,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   757,   758,   761,   762,   765,   766,
     767,   770,   771,   774,   775,   777,   778,   781,   782,   783,
     786,   789,   796,   801,   806,   807,   808,   809,   826,   842,
     843,   844,   845,   846,   859,   860,   876,   885,   886,   889,
     890,   893,   894,   897,   898,   901,   902,   905,   906,   909,
     910,   913,   916,   917,   918,   921,   922,   925,   926,   929,
     932,   933,   936,   937,   942,   943,   944,   948,   949,   950,
     953,   954,   955,   958,   961,   962,   965,   966,   972,   973,
     976,   977,   980,   989,   999,  1002,  1013,  1021,  1031,  1044,
    1045,  1046,  1047,  1052,  1061,  1062,  1065,  1066,  1069,  1077,
    1078,  1081,  1082
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL",
  "COMPLEX", "IMAGINARY", "ID", "INTEGER_CONST", "FLOAT_CONST",
  "ENUMERATION_CONST", "CHAR_CONST", "STRING_LITERAL", "LBRACKET",
  "RBRACKET", "LBRACE", "RBRACE", "LPARENTHESIS", "RPARENTHESIS", "DOT",
  "ARROW", "INCREMENT", "DECREMENT", "AMPERSAND", "BITWISE_OR",
  "BITWISE_XOR", "PLUS", "MINUS", "STAR", "DIV", "MOD", "BITWISE_NOT",
  "LOGICAL_NOT", "LOGICAL_AND", "LOGICAL_OR", "RIGHT_SHIFT", "LEFT_SHIFT",
  "LESSER_THAN", "GREATER_THAN", "LESSER_EQUAL", "GREATER_EQUAL", "EQUALS",
  "NOT_EQUAL", "QUESTION_MARK", "COLON", "SEMICOLON", "ELLIPSIS",
  "ASSIGNMENT", "MULT_ASSIGN", "DIV_ASSIGN", "PLUS_ASSIGN", "SUB_ASSIGN",
  "MOD_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "COMMA", "HASH", "\"then\"", "$accept", "M",
  "N", "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "changetable",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", "declaration_list_opt", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348
};
# endif

#define YYPACT_NINF -256

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-256)))

#define YYTABLE_NINF -212

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     913,  -256,  -256,  -256,  -256,     1,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,    72,   913,   913,  -256,   913,   913,   747,
    -256,  -256,    29,    70,  -256,    75,    14,  -256,    -8,  -256,
     278,    -7,    35,  -256,  -256,  -256,  -256,  -256,  -256,     6,
      81,  -256,    62,    14,  -256,    75,   749,  -256,    72,   913,
    -256,   516,   123,    -7,    90,   -32,  -256,  -256,  -256,  -256,
    -256,    91,   801,  -256,  -256,  -256,  -256,  -256,    32,   477,
     827,   827,  -256,  -256,  -256,  -256,  -256,  -256,  -256,    88,
     907,   853,  -256,   134,    48,    76,   109,    73,   112,   116,
     119,   118,    43,  -256,  -256,  -256,  -256,   137,   594,  -256,
     140,   141,   555,  -256,   706,   -35,   853,  -256,    -5,   477,
    -256,   853,   150,   -27,   749,  -256,     2,  -256,  -256,   -20,
     947,  -256,   947,   148,   477,  -256,  -256,   853,   853,   160,
     162,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,   853,  -256,  -256,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   853,   853,   145,    44,   363,  -256,   156,   594,  -256,
    -256,  -256,   159,   165,  -256,    75,   164,   128,  -256,  -256,
     167,  -256,  -256,  -256,  -256,   169,   175,  -256,  -256,   100,
    -256,  -256,  -256,  -256,   853,  -256,  -256,  -256,   775,   172,
     -29,   173,   135,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
     134,   134,    48,    48,    76,    76,    76,    76,   109,   109,
      73,   112,   116,  -256,  -256,  -256,   149,   853,   151,   153,
    -256,   178,   191,   184,   620,   185,  -256,   161,  -256,    25,
    -256,  -256,  -256,  -256,   187,   188,  -256,  -256,  -256,  -256,
    -256,  -256,   193,  -256,  -256,  -256,  -256,   316,  -256,   194,
    -256,  -256,   749,  -256,    32,  -256,   194,  -256,  -256,   853,
     853,   853,   853,  -256,   166,  -256,   421,   421,   646,   163,
     853,  -256,    26,   853,   197,   421,  -256,  -256,   363,  -256,
    -256,  -256,  -256,   -23,  -256,   119,   118,   157,   421,  -256,
    -256,  -256,  -256,   157,  -256,   -19,   853,  -256,  -256,  -256,
     108,   174,  -256,   208,   646,   198,   421,   -17,  -256,  -256,
     200,   201,  -256,  -256,  -256,   853,   853,  -256,   853,   421,
     421,  -256,   -15,   421,   157,  -256,  -256,   177,  -256,   205,
     245,  -256,  -256,  -256,   421,   421,  -256,  -256
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   102,   127,   107,   121,    97,   106,   130,   104,
     105,   100,   128,   103,   108,    98,   109,   101,   129,   110,
     111,   112,   207,     0,    86,    88,   113,    90,    92,     0,
     204,   206,   120,     0,   133,     0,   147,    84,     0,    93,
      95,   132,     0,    85,    87,    89,    91,     1,   205,     0,
       0,   151,   149,   148,    83,     0,     0,   209,     0,   212,
     146,     0,   146,   131,   125,     0,   123,   134,   150,   152,
      94,    95,     0,     4,     5,     6,     7,     8,   167,     0,
       0,     0,    29,    31,    32,    30,    33,    34,    10,    23,
      35,     0,    37,    41,    44,    47,    52,    55,    57,    59,
      61,    63,    65,    67,   162,    96,   210,     0,     0,   138,
      30,     0,     0,   159,     0,     0,     0,   118,     0,     0,
      27,     0,     0,     0,     0,   168,     0,   170,    80,     0,
     116,   161,   116,     0,     0,    24,    25,     0,    19,     0,
       0,    15,    16,    69,    70,    71,    73,    74,    72,    75,
      76,    77,    78,    79,     0,    35,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   184,   208,     0,     0,   142,
     137,   136,    30,     0,   145,   158,     0,   153,   155,   144,
       0,    82,   126,   119,   124,     0,     0,   173,   163,   167,
     165,   169,   171,     9,     0,   117,   114,   115,     0,     0,
       0,     0,    20,    21,    13,    14,    68,    38,    39,    40,
      42,    43,    46,    45,    48,    49,    50,    51,    53,    54,
      56,    58,    60,     2,     2,     2,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     2,     4,   191,     0,
     188,   189,   174,   175,     0,     2,   186,   176,   177,   178,
     179,   140,     0,   141,   135,   157,   143,     0,   160,    28,
     172,   164,     0,    81,   167,    36,     0,    11,    12,     0,
       0,     0,     0,   201,     0,   200,     0,     0,     0,     0,
       0,   203,     0,     0,     0,     0,   190,   183,     0,   139,
     154,   156,   166,     0,    22,    62,    64,     3,     0,   182,
       2,     2,   199,     3,   202,     0,     0,   180,   187,    17,
     167,     0,   181,     0,     0,     0,     0,     0,    18,     2,
       0,     2,     2,   194,     2,     0,     0,     2,     0,     0,
       0,    66,     0,     0,     3,     3,   195,     0,   197,     0,
     192,   196,     2,     2,     0,     0,   198,   193
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -256,   -57,   -99,  -256,  -256,  -256,  -256,   -71,  -256,   -78,
      -2,    -1,    27,   -13,    93,    87,    94,   -12,   -21,  -256,
    -110,    -3,  -256,   -77,  -106,   -36,     0,  -256,   210,  -256,
     -67,   -92,   138,  -256,  -256,  -256,   155,    -6,  -256,   -16,
     229,   216,  -256,   227,   -47,  -256,  -256,    15,  -256,   -68,
    -119,     9,  -191,  -256,  -256,   168,  -122,  -256,   179,  -256,
    -256,   -11,  -255,  -256,  -256,  -256,  -256,   259,  -256,  -256,
    -256
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   280,   173,    88,    89,   211,   212,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   128,   154,   249,   192,    22,    58,    38,    39,    24,
      25,   131,   206,    26,    33,    65,    66,    27,    28,    71,
      41,   107,    52,    42,    53,   186,   187,   188,   115,   133,
     105,   123,   124,   125,   126,   127,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,    29,    30,    31,    59,
      60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   120,   129,   174,    57,   200,   191,    40,   272,   135,
     136,   191,   130,   156,   112,   196,   189,   117,   277,    50,
     155,     3,   198,   106,    43,    44,   319,    45,    46,    23,
      51,   203,   326,   311,   334,    64,   347,    12,   205,    61,
     205,    32,   129,    62,   193,   155,    64,    69,   121,    18,
     155,   195,   130,   104,   122,    51,   190,   129,   111,   118,
     210,   178,   204,   130,   199,   130,   209,   130,   320,   331,
      54,   204,   204,   132,   204,    34,   204,  -122,   121,   217,
     218,   219,   201,    55,   122,    35,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,    51,   296,   314,   177,    69,   160,   161,   183,
      -3,   234,    34,   132,   185,    34,   204,   204,    49,    -3,
     235,   104,    35,    36,   132,    35,   132,   191,   132,   272,
     275,   284,    67,    36,   137,   213,    36,   155,   138,   250,
     139,   140,   141,   142,   162,   163,   121,   168,   169,   271,
      37,   216,   122,   302,   121,   228,   229,   328,   220,   221,
     122,   222,   223,   113,   309,   310,   155,   292,   170,   265,
     116,    56,    69,   317,   171,   262,   172,   281,   282,   164,
     165,   166,   167,   287,    -3,   175,   322,   179,   180,   294,
     197,   224,   225,   226,   227,   157,   158,   159,   298,   208,
     214,   273,   215,   261,   333,   307,   263,   268,   321,   155,
     155,   233,   264,   313,   325,   266,   315,   345,   346,   267,
     269,   348,   270,   276,   278,   341,   279,   283,   288,   285,
     286,   289,   356,   357,   290,   293,   297,  -185,   295,   327,
     299,   312,   274,   308,   330,   349,   350,   316,   204,   332,
     336,   329,   337,   323,   324,   351,   352,   353,   231,   342,
     306,   344,   250,   230,   155,    70,   232,   185,   305,   104,
     207,    63,   335,   194,   338,   339,   304,   340,   114,    68,
     343,     1,   301,   303,     2,     3,   176,   318,    48,     4,
       0,     5,     6,     7,   202,   354,   355,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     1,
       0,     0,     2,     3,     0,     0,  -211,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     1,   236,   237,     2,
       3,   238,   239,   240,     4,     0,     5,     6,     7,   241,
     242,   243,     8,     9,    10,    11,    12,   244,    13,    14,
      72,    15,     0,   245,     0,   300,    16,    17,    18,   246,
      19,    20,    21,   247,    74,    75,     0,    76,    77,     0,
       0,   175,     0,    79,     0,     0,     0,    80,    81,    82,
       0,     0,    83,    84,    85,   236,   237,    86,    87,   238,
     239,   240,     0,     0,     0,     0,     0,   241,   242,   243,
       0,   248,     0,     0,     0,   244,     0,     0,    72,     0,
       0,   245,     0,     0,     0,     0,     0,   246,     0,     0,
       0,   247,    74,    75,     0,    76,    77,     0,     0,   175,
       0,    79,     0,     0,     0,    80,    81,    82,     0,     0,
      83,    84,    85,     2,     3,    86,    87,     0,     4,     0,
       5,     0,     7,     0,     0,     0,     0,     9,    10,   248,
      12,     0,    13,    14,    72,     0,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,    73,    74,    75,
       0,    76,    77,     3,     0,     0,     0,    79,     0,     0,
       0,    80,    81,    82,     0,     0,    83,    84,    85,    12,
       0,    86,    87,    72,   108,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,     0,    73,    74,    75,     0,
      76,    77,     3,   109,     0,     0,    79,     0,     0,     0,
      80,    81,    82,     0,     0,    83,    84,   110,    12,     0,
      86,    87,    72,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,    73,    74,    75,     0,    76,
      77,     3,   181,     0,     0,    79,     0,     0,     0,    80,
      81,    82,     0,     0,    83,    84,   182,    12,     0,    86,
      87,    72,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,    73,    74,    75,     0,    76,    77,
       0,     0,     0,     0,    79,     0,     0,    72,    80,    81,
      82,     0,     0,    83,    84,    85,     0,     0,    86,    87,
      73,    74,    75,     0,    76,    77,     0,     0,     0,     0,
      79,     0,     0,    72,    80,    81,    82,     0,     0,    83,
      84,    85,     0,     0,    86,    87,    73,    74,    75,     0,
      76,    77,     0,     0,     0,     0,    79,     0,   291,     0,
      80,    81,    82,     0,     0,    83,    84,    85,     0,     1,
      86,    87,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,   248,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     0,    47,     0,     0,
       1,     0,     0,     2,     3,     0,     0,   184,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,    72,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     0,     0,    73,
      74,    75,     0,    76,    77,     0,     0,    78,     0,    79,
       0,     0,    72,    80,    81,    82,     0,     0,    83,    84,
      85,     0,     0,    86,    87,    73,    74,    75,     0,    76,
      77,     0,     0,   274,     0,    79,     0,     0,    72,    80,
      81,    82,     0,     0,    83,    84,    85,     0,     0,    86,
      87,    73,    74,    75,     0,    76,    77,     0,     0,     0,
       0,   119,     0,     0,    72,    80,    81,    82,     0,     0,
      83,    84,    85,     0,     0,    86,    87,    73,    74,    75,
       0,    76,    77,     0,     0,     0,     0,   134,     0,     0,
      72,    80,    81,    82,     0,     0,    83,    84,    85,     0,
       0,    86,    87,    73,    74,    75,     0,    76,    77,     0,
       0,     0,     0,    79,     0,     0,     0,    80,    81,    82,
       0,     0,    83,    84,    85,     0,     1,    86,    87,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,     0,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21,     2,     3,     0,     0,     0,     4,     0,
       5,     0,     7,     0,     0,     0,     0,     9,    10,     0,
      12,     0,    13,    14,     0,     0,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153
};

static const yytype_int16 yycheck[] =
{
       0,    72,    79,   102,    40,   124,   116,    23,   199,    80,
      81,   121,    79,    91,    61,   121,    51,    49,    47,    35,
      91,     7,    49,    59,    24,    25,    49,    27,    28,    29,
      36,    51,    51,   288,    51,    40,    51,    23,   130,    46,
     132,    40,   119,    50,    49,   116,    40,    53,    46,    35,
     121,   119,   119,    56,    52,    61,    91,   134,    61,    91,
     137,   108,    91,   130,    91,   132,   134,   134,    91,   324,
      78,    91,    91,    79,    91,    40,    91,    48,    46,   157,
     158,   159,    80,    91,    52,    50,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   108,    78,    78,   108,   112,    59,    60,   112,
      67,    67,    40,   119,   114,    40,    91,    91,    48,    76,
      76,   124,    50,    61,   130,    50,   132,   237,   134,   320,
     208,   237,    51,    61,    46,   138,    61,   208,    50,   175,
      52,    53,    54,    55,    68,    69,    46,    74,    75,    49,
      78,   154,    52,   272,    46,   168,   169,    49,   160,   161,
      52,   162,   163,    40,   286,   287,   237,   244,    56,   185,
      80,    80,   178,   295,    58,   178,    57,   234,   235,    70,
      71,    72,    73,   240,    66,    48,   308,    47,    47,   246,
      40,   164,   165,   166,   167,    61,    62,    63,   255,    51,
      40,   204,    40,    47,   326,   282,    47,    40,   307,   280,
     281,    66,    47,   290,   313,    51,   293,   339,   340,    91,
      51,   343,    47,    51,    51,   335,    91,    78,    50,    78,
      77,    40,   354,   355,    50,    50,    49,    49,    77,   316,
      47,    78,    48,    77,    36,   344,   345,    50,    91,    51,
      50,    77,    51,   310,   311,    78,    51,    12,   171,   336,
     281,   338,   298,   170,   335,    55,   172,   267,   280,   272,
     132,    42,   329,   118,   331,   332,   279,   334,    62,    52,
     337,     3,   267,   274,     6,     7,   107,   298,    29,    11,
      -1,    13,    14,    15,   126,   352,   353,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,     3,
      -1,    -1,     6,     7,    -1,    -1,    48,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    -1,    79,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    45,    -1,
      -1,    48,    -1,    50,    -1,    -1,    -1,    54,    55,    56,
      -1,    -1,    59,    60,    61,     4,     5,    64,    65,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,    78,    -1,    -1,    -1,    24,    -1,    -1,    27,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    41,    42,    -1,    44,    45,    -1,    -1,    48,
      -1,    50,    -1,    -1,    -1,    54,    55,    56,    -1,    -1,
      59,    60,    61,     6,     7,    64,    65,    -1,    11,    -1,
      13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,    78,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,     7,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    55,    56,    -1,    -1,    59,    60,    61,    23,
      -1,    64,    65,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,
      44,    45,     7,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    55,    56,    -1,    -1,    59,    60,    61,    23,    -1,
      64,    65,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,
      45,     7,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,
      55,    56,    -1,    -1,    59,    60,    61,    23,    -1,    64,
      65,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    27,    54,    55,
      56,    -1,    -1,    59,    60,    61,    -1,    -1,    64,    65,
      40,    41,    42,    -1,    44,    45,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    27,    54,    55,    56,    -1,    -1,    59,
      60,    61,    -1,    -1,    64,    65,    40,    41,    42,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    78,    -1,
      54,    55,    56,    -1,    -1,    59,    60,    61,    -1,     3,
      64,    65,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    78,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    -1,     0,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    51,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    27,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    -1,    -1,    40,
      41,    42,    -1,    44,    45,    -1,    -1,    48,    -1,    50,
      -1,    -1,    27,    54,    55,    56,    -1,    -1,    59,    60,
      61,    -1,    -1,    64,    65,    40,    41,    42,    -1,    44,
      45,    -1,    -1,    48,    -1,    50,    -1,    -1,    27,    54,
      55,    56,    -1,    -1,    59,    60,    61,    -1,    -1,    64,
      65,    40,    41,    42,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    27,    54,    55,    56,    -1,    -1,
      59,    60,    61,    -1,    -1,    64,    65,    40,    41,    42,
      -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      27,    54,    55,    56,    -1,    -1,    59,    60,    61,    -1,
      -1,    64,    65,    40,    41,    42,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,    56,
      -1,    -1,    59,    60,    61,    -1,     3,    64,    65,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    39,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   119,   120,   123,   124,   127,   131,   132,   160,
     161,   162,    40,   128,    40,    50,    61,    78,   121,   122,
     133,   134,   137,   120,   120,   120,   120,     0,   161,    48,
     133,   131,   136,   138,    78,    91,    80,   119,   120,   163,
     164,    46,    50,   134,    40,   129,   130,    51,   137,   131,
     122,   133,    27,    40,    41,    42,    44,    45,    48,    50,
      54,    55,    56,    59,    60,    61,    64,    65,    97,    98,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   144,   119,   135,    28,    47,
      61,   115,   138,    40,   135,   142,    80,    49,    91,    50,
     101,    46,    52,   145,   146,   147,   148,   149,   115,   117,
     124,   125,   131,   143,    50,   101,   101,    46,    50,    52,
      53,    54,    55,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   116,   101,   103,    61,    62,    63,
      59,    60,    68,    69,    70,    71,    72,    73,    74,    75,
      56,    58,    57,    96,    96,    48,   152,   115,   138,    47,
      47,    47,    61,   115,    51,   120,   139,   140,   141,    51,
      91,   114,   118,    49,   130,   143,   118,    40,    49,    91,
     144,    80,   149,    51,    91,   125,   126,   126,    51,   143,
     117,    99,   100,   115,    40,    40,   115,   103,   103,   103,
     104,   104,   105,   105,   106,   106,   106,   106,   107,   107,
     108,   109,   110,    66,    67,    76,     4,     5,     8,     9,
      10,    16,    17,    18,    24,    30,    36,    40,    78,   117,
     119,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    47,   115,    47,    47,   133,    51,    91,    40,    51,
      47,    49,   146,   115,    48,   103,    51,    47,    51,    91,
      95,    95,    95,    78,   118,    78,    77,    95,    50,    40,
      50,    78,   117,    50,    95,    77,    78,    49,    95,    47,
      79,   141,   144,   145,   115,   111,   112,   117,    77,   150,
     150,   156,    78,   117,    78,   117,    50,   150,   155,    49,
      91,    96,   150,    95,    95,    96,    51,   117,    49,    77,
      36,   156,    51,   150,    51,    95,    50,    51,    95,    95,
      95,   114,   117,    95,   117,   150,   150,    51,   150,    96,
      96,    78,    51,    12,    95,    95,   150,   150
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    97,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   102,   102,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   105,   106,   106,   106,   107,   107,   107,
     107,   107,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   125,   126,   126,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   131,
     132,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   144,   144,   144,   145,   145,   146,   146,   147,
     148,   148,   149,   149,   150,   150,   150,   150,   150,   150,
     151,   151,   151,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   157,   158,   158,   158,   158,   159,
     159,   159,   159,   159,   160,   160,   161,   161,   162,   163,
     163,   164,   164
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     4,     4,     3,     3,     2,     2,     6,     7,     0,
       1,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     5,     1,     9,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     1,     5,     6,
       2,     0,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     3,     5,     4,     4,     3,     6,
       5,     5,     4,     5,     4,     4,     0,     0,     1,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     2,     4,     0,     1,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     3,     0,     1,     1,     3,     1,     1,
       2,     1,     8,    11,     5,     7,     9,     8,    11,     3,
       2,     2,     3,     2,     1,     2,     1,     1,     5,     1,
       2,     0,     1
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
#line 188 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
          		// backpatching,stores the index of the next quad to be generated
          		// Used in various control statements
          		(yyval.instr)=nextinstr();
       			}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 195 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
          	// backpatching,inserts a goto and stores the index of the next goto statement to guard against fallthrough
          	(yyval.st) =new Statement();            //N->nextlist=makelist(nextinstr) we have defined nextlist for Statements
			(yyval.st)->nextlist=makelist(nextinstr());
			emit("goto","");
      		}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 204 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
					  (yyval.expr)=new Expression();                      //create new expression and store pointer to ST entry in the location
					  (yyval.expr)->type="nonbool";
					  (yyval.expr)->loc=(yyvsp[0].symp);  
					}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 210 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=new Expression();
				   	 string p=generateString((yyvsp[0].intval));
				   	 (yyval.expr)->loc=gentemp(new symboltype("int"),p);
				   	 emit("=",(yyval.expr)->loc->name,p); 
				   }
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 216 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=new Expression();
				   	 (yyval.expr)->loc=gentemp(new symboltype("float"),(yyvsp[0].charval));
				   	 emit("=",(yyval.expr)->loc->name,string((yyvsp[0].charval))); 
				   }
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 221 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=new Expression();
				   	  (yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].charval));
				   	  emit("=char",(yyval.expr)->loc->name,string((yyvsp[0].charval))); 
				   	}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 226 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=new Expression();
					 (yyval.expr)->loc=gentemp(new symboltype("ptr"),(yyvsp[0].charval));
					 (yyval.expr)->loc->type->arrtype=new symboltype("char");
					 strings.push_back((yyvsp[0].charval));
					 string p=generateString(strings.size()-1);
					 emit("=str",(yyval.expr)->loc->name,p);
				   }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 234 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[-1].expr);
				   }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 240 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.A)=new array();
					  (yyval.A)->array=(yyvsp[0].expr)->loc;
					  (yyval.A)->type=(yyvsp[0].expr)->loc->type; 					
					  (yyval.A)->loc=(yyval.A)->array;
					}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 246 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 	
				    	(yyval.A)=new array();
						(yyval.A)->type=(yyvsp[-3].A)->type->arrtype;				// type=type of element
						(yyval.A)->array=(yyvsp[-3].A)->loc;						// copy the base
						(yyval.A)->loc=gentemp(new symboltype("int"));		// store computed address
						(yyval.A)->atype="arr";						//atype is arr.

						if((yyvsp[-3].A)->atype=="arr") {			// if already arr, multiply the size of the sub-type of array with the expression value and add
							sym* t=gentemp(new symboltype("int"));
							int p=calculateSize((yyval.A)->type);
							string str=generateString(p);			
				 			emit("*",t->name,(yyvsp[-1].expr)->loc->name,str);
							emit("+",(yyval.A)->loc->name,(yyvsp[-3].A)->loc->name,t->name);
						}

				 		else {                        //if a 1D array, simply calculate size
				 			int p=calculateSize((yyval.A)->type);
							string str=generateString(p);	
					 		emit("*",(yyval.A)->loc->name,(yyvsp[-1].expr)->loc->name,str);
				 		}
					}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 269 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
				  	(yyval.A)=new array();
					(yyval.A)->array=gentemp((yyvsp[-3].A)->type);
					string str=generateString((yyvsp[-1].numpar));	
					emit("call",(yyval.A)->array->name,(yyvsp[-3].A)->array->name,str);
				  	}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 275 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 276 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 278 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
				  	(yyval.A)=new array();
					(yyval.A)->array=gentemp((yyvsp[-1].A)->array->type);
					emit("=",(yyval.A)->array->name,(yyvsp[-1].A)->array->name);
					emit("+",(yyvsp[-1].A)->array->name,(yyvsp[-1].A)->array->name,"1");
					}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 285 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
				  	(yyval.A)=new array();
					(yyval.A)->array=gentemp((yyvsp[-1].A)->array->type);
					emit("=",(yyval.A)->array->name,(yyvsp[-1].A)->array->name);
					emit("-",(yyvsp[-1].A)->array->name,(yyvsp[-1].A)->array->name,"1");
					}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 291 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 292 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 295 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.numpar)=0; }
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 296 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.numpar)=(yyvsp[0].numpar); }
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 299 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
						(yyval.numpar)=1;                                      //one argument and emit param
						emit("param",(yyvsp[0].expr)->loc->name);
						}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 304 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
						 (yyval.numpar)=(yyvsp[-2].numpar)+1;                                  //one more argument and emit param
						 emit("param",(yyvsp[0].expr)->loc->name);
 						}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 310 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.A)=(yyvsp[0].A); }
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 312 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
				  emit("+",(yyvsp[0].A)->array->name,(yyvsp[0].A)->array->name,"1");
				  (yyval.A)=(yyvsp[0].A);
			    }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 317 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
				  emit("-",(yyvsp[0].A)->array->name,(yyvsp[0].A)->array->name,"1");
				  (yyval.A)=(yyvsp[0].A);
			    }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 322 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
				  	(yyval.A)=new array();
					if((yyvsp[-1].unaryOperator)=='&')                                       //address of something, then generate a pointer temporary and emit the quad
						{
						(yyval.A)->array=gentemp((new symboltype("ptr")));
						(yyval.A)->array->type->arrtype=(yyvsp[0].A)->array->type; 
						emit("=&",(yyval.A)->array->name,(yyvsp[0].A)->array->name);
						}
					else if((yyvsp[-1].unaryOperator)=='*')                          //value of something, then generate a temporary of the corresponding type and emit the quad
						{
						(yyval.A)->atype="ptr";
						(yyval.A)->loc=gentemp((yyvsp[0].A)->array->type->arrtype);
						(yyval.A)->array=(yyvsp[0].A)->array;
						emit("=*",(yyval.A)->loc->name,(yyvsp[0].A)->array->name);
						}
					else if((yyvsp[-1].unaryOperator)=='+')  (yyval.A)=(yyvsp[0].A);                    //unary plus, do nothing
					else if((yyvsp[-1].unaryOperator)=='-')				   //unary minus, generate new temporary of the same base type and make it negative of current one
						{
						(yyval.A)->array=gentemp(new symboltype((yyvsp[0].A)->array->type->type));
						emit("uminus",(yyval.A)->array->name,(yyvsp[0].A)->array->name);
						}
					else if((yyvsp[-1].unaryOperator)=='~')                   //bitwise not, generate new temporary of the same base type and make it negative of current one
						{
						(yyval.A)->array=gentemp(new symboltype((yyvsp[0].A)->array->type->type));
						emit("~",(yyval.A)->array->name,(yyvsp[0].A)->array->name);
						}
					else if((yyvsp[-1].unaryOperator)=='!')				//logical not, generate new temporary of the same base type and make it negative of current one
						{
						(yyval.A)->array=gentemp(new symboltype((yyvsp[0].A)->array->type->type));
						emit("!",(yyval.A)->array->name,(yyvsp[0].A)->array->name);
						}
				  }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 354 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 355 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 358 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.unaryOperator)='&'; }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 359 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.unaryOperator)='*'; }
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 360 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.unaryOperator)='+'; }
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 361 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.unaryOperator)='-'; }
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 362 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.unaryOperator)='~'; }
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 363 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.unaryOperator)='!'; }
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 366 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.A)=(yyvsp[0].A); }
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 368 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
			   			(yyval.A)=new array();
			   			(yyval.A)->array=convertType((yyvsp[0].A)->array,typevar);             //generate a new symbol of the given type
			   		}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 375 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new Expression();             //generate new expression
						    if((yyvsp[0].A)->atype=="arr") 			   //if it is of type arr
						    	{
									(yyval.expr)->loc = gentemp((yyvsp[0].A)->loc->type);
									emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].A)->array->name, (yyvsp[0].A)->loc->name);     //emit with array right
								}
							else if((yyvsp[0].A)->atype=="ptr")         //if it is of type ptr
								{ 
									(yyval.expr)->loc = (yyvsp[0].A)->loc;        //equate the locs
								}
							else
									(yyval.expr)->loc = (yyvsp[0].A)->array;
						 }
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 390 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
						  	if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->array))          //if types are compatible, generate new temporary and equate to the product
						  		{
									(yyval.expr) = new Expression();
									(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
									emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->array->name);
						  		}
							else cout<<"Type Error in Program"<< endl;	//Else error
						  }
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 400 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
						 	if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->array)) //if types are compatible, generate new temporary and equate to the quotient
						  		{
									(yyval.expr) = new Expression();
									(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
									emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->array->name);
						  		}
							else cout << "Type Error in Program"<< endl;
						 }
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 410 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
						 	if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->array)) //if types are compatible, generate new temporary and equate to the quotient
						  		{
									(yyval.expr) = new Expression();
									(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
									emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->array->name);
						  		}
							else cout << "Type Error in Program"<< endl;
						 }
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 421 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 423 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
				   		if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 	//if types are compatible, generate new temporary and equate to the sum
						 		{
								(yyval.expr) = new Expression();
								(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
								emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
						 		}
						else cout << "Type Error in Program"<< endl;
					}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 433 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
				   		if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))     //if types are compatible, generate new temporary and equate to the difference
						 		{
								(yyval.expr) = new Expression();
								(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
								emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
						 		}
						else cout << "Type Error in Program"<< endl;
					}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 444 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 446 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
				  if((yyvsp[0].expr)->loc->type->type == "int")           //if base type is int, generate new temporary and equate to the shifted value
					{
				  	(yyval.expr) = new Expression();
				  	(yyval.expr)->loc = gentemp(new symboltype("int"));
			      	emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
					}
				  else cout << "Type Error in Program"<< endl; 
				}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 456 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
				  if((yyvsp[0].expr)->loc->type->type == "int") 		//if base type is int, generate new temporary and equate to the shifted value
					{
				  	(yyval.expr) = new Expression();
				  	(yyval.expr)->loc = gentemp(new symboltype("int"));
			      	emit(">>", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
					}
				  else cout << "Type Error in Program"<< endl; 
				}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 467 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 469 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
						if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {      //check compatible types
							(yyval.expr) = new Expression();
							(yyval.expr)->type = "bool";                         //new type is boolean
							(yyval.expr)->truelist = makelist(nextinstr());     //makelist for truelist and falselist
							(yyval.expr)->falselist = makelist(nextinstr()+1);
							emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     //emit statement if a<b goto .. 
							emit("goto", "");	//emit statement goto ..
						}
						else cout << "Type Error in Program"<< endl;
					 }
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 481 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
						if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
							(yyval.expr) = new Expression();
							(yyval.expr)->type = "bool";
							(yyval.expr)->truelist = makelist(nextinstr());
							(yyval.expr)->falselist = makelist(nextinstr()+1);
							emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
							emit("goto", "");
						}
						else cout << "Type Error in Program"<< endl;
					 }
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 493 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
						if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
							(yyval.expr) = new Expression();
							(yyval.expr)->type = "bool";
							(yyval.expr)->truelist = makelist(nextinstr());
							(yyval.expr)->falselist = makelist(nextinstr()+1);
							emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
							emit("goto", "");
						}
						else cout << "Type Error in Program"<< endl;
					 }
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 505 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
						if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
							(yyval.expr) = new Expression();
							(yyval.expr)->type = "bool";
							(yyval.expr)->truelist = makelist(nextinstr());
							(yyval.expr)->falselist = makelist(nextinstr()+1);
							emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
							emit("goto", "");
						}
						else cout << "Type Error in Program"<< endl;
					 }
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 518 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 520 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
					if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))                //check compatible types
						{
						convertbool2Int((yyvsp[-2].expr));                  //convert bool to int
						convertbool2Int((yyvsp[0].expr));

						(yyval.expr) = new Expression();
						(yyval.expr)->type = "bool";

						(yyval.expr)->truelist = makelist(nextinstr());            //make lists for new expression
						(yyval.expr)->falselist = makelist(nextinstr()+1); 
						emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);      //emit if a==b goto ..
						emit("goto", "");				//emit goto ..
						}
					else cout << "Type Error in Program"<< endl;
					}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 538 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
					if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
						{
						convertbool2Int((yyvsp[-2].expr));
						convertbool2Int((yyvsp[0].expr));

						(yyval.expr) = new Expression();                 //result is boolean
						(yyval.expr)->type = "bool";

						(yyval.expr)->truelist = makelist(nextinstr());
						(yyval.expr)->falselist = makelist(nextinstr()+1);
						emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
						emit("goto", "");
						}
					else cout << "Type Error in Program"<< endl;
					}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 556 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 558 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
					if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {              //check compatible types
						convertbool2Int((yyvsp[-2].expr));                             //convert bool to int   
						convertbool2Int((yyvsp[0].expr));
						(yyval.expr) = new Expression();
						(yyval.expr)->type = "nonbool";                   //result is not boolean
						(yyval.expr)->loc = gentemp(new symboltype("int"));
						emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);               //emit the quad
					}
					else cout << "Type Error in Program"<< endl;
			   }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 571 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 573 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
					  	if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))     
					  	//same as AND_expression: check compatible types, make non-boolean expression and convert bool to int and emit
					  		{
								convertbool2Int((yyvsp[-2].expr));
								convertbool2Int((yyvsp[0].expr));
								
								(yyval.expr) = new Expression();
								(yyval.expr)->type = "nonbool";

								(yyval.expr)->loc = gentemp(new symboltype("int"));
								emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
							}
						else cout << "Type Error in Program"<< endl;
					  }
#line 2456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 590 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 592 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
					  	if(checkSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))   
					  	//same as AND_expression: check compatible types, make non-boolean expression and convert bool to int and emit
					  		{
								convertbool2Int((yyvsp[-2].expr));
								convertbool2Int((yyvsp[0].expr));
								
								(yyval.expr) = new Expression();
								(yyval.expr)->type = "nonbool";

								(yyval.expr)->loc = gentemp(new symboltype("int"));
								emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
							}
						else cout << "Type Error in Program"<< endl; 
					  }
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 609 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 611 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
					  	convertInt2bool((yyvsp[0].expr));         //convert inclusive_or_expression int to bool

						backpatch((yyvsp[-3].st)->nextlist, nextinstr());        //$2->nextlist goes to next instruction
						convertInt2bool((yyvsp[-4].expr));                  //convert logical_AND_expression to bool

						(yyval.expr) = new Expression();     //make new boolean expression 
						(yyval.expr)->type = "bool";

						backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-1].instr));        //if $1 is true, we move to $5
						(yyval.expr)->truelist = (yyvsp[0].expr)->truelist;        //if $5 is also true, we get truelist for $$
						(yyval.expr)->falselist = merge((yyvsp[-4].expr)->falselist, (yyvsp[0].expr)->falselist);    //merge their falselists
					  }
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 626 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 628 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
					  	convertInt2bool((yyvsp[0].expr));			 //convert logical_AND_expression int to bool

						backpatch((yyvsp[-3].st)->nextlist, nextinstr());	//$2->nextlist goes to next instruction
						convertInt2bool((yyvsp[-4].expr));			//convert logical_OR_expression to bool

						(yyval.expr) = new Expression();			//make new boolean expression
						(yyval.expr)->type = "bool";

						backpatch((yyvsp[-4].expr)->falselist, (yyvsp[-1].instr));		//if $1 is true, we move to $5
						(yyval.expr)->truelist = merge((yyvsp[-4].expr)->truelist, (yyvsp[0].expr)->truelist);		//merge their truelists						
						(yyval.expr)->falselist = (yyvsp[0].expr)->falselist;		 	//if $5 is also false, we get falselist for $$
					}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 643 "ass5_16CS10058.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 645 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
							//normal conversion method to get conditional expressions
							(yyval.expr)->loc = gentemp((yyvsp[-4].expr)->loc->type);       //generate temporary for expression
							(yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
							emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);      //make it equal to sconditional_expression
							list<int> l = makelist(nextinstr());        //makelist next instruction
							emit("goto", "");              //prevent fallthrough

							backpatch((yyvsp[-3].st)->nextlist, nextinstr());        //after N, go to next instruction
							emit("=", (yyval.expr)->loc->name, (yyvsp[-4].expr)->loc->name);        
							list<int> m = makelist(nextinstr());         //makelist next instruction
							l = merge(l, m);						//merge the two lists	
							emit("goto", "");						//prevent fallthrough

							backpatch((yyvsp[-7].st)->nextlist, nextinstr());   //backpatching
							convertInt2bool((yyvsp[-8].expr));                   //convert expression to boolean
							backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));           //$1 true goes to expression
							backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));          //$1 false goes to conditional_expression
							backpatch(l, nextinstr());
						}
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 667 "ass5_16CS10058.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 669 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
						if((yyvsp[-2].A)->atype=="arr")       //if type is arr, simply check if we need to convert and emit
							{
							(yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->type->type);
							emit("[]=", (yyvsp[-2].A)->array->name, (yyvsp[-2].A)->array->name, (yyvsp[0].expr)->loc->name);	
							}
						else if((yyvsp[-2].A)->atype=="ptr")     //if type is ptr, simply emit
							{
							emit("*=", (yyvsp[-2].A)->array->name, (yyvsp[0].expr)->loc->name);	
							}
						else                              //otherwise assignment
							{
							(yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->array->type->type);
							emit("=", (yyvsp[-2].A)->array->name, (yyvsp[0].expr)->loc->name);
							}
						(yyval.expr) = (yyvsp[0].expr);
					 }
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 689 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 690 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 691 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 692 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 693 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 694 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 695 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 696 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 697 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 698 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 699 "ass5_16CS10058.y" /* yacc.c:1646  */
    { }
#line 2655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 702 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  (yyval.expr)=(yyvsp[0].expr);  }
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 703 "ass5_16CS10058.y" /* yacc.c:1646  */
    {   }
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 706 "ass5_16CS10058.y" /* yacc.c:1646  */
    {   }
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 709 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 710 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  	}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 714 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 715 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 716 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 717 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 718 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 719 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 720 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 721 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 724 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 725 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 728 "ass5_16CS10058.y" /* yacc.c:1646  */
    {(yyval.symp)=(yyvsp[0].symp);}
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 730 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
			   if((yyvsp[0].symp)->val!="") (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;        //get the initial value and  emit it
			   emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
			   }
#line 2760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 736 "ass5_16CS10058.y" /* yacc.c:1646  */
    { }
#line 2766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 737 "ass5_16CS10058.y" /* yacc.c:1646  */
    { }
#line 2772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 738 "ass5_16CS10058.y" /* yacc.c:1646  */
    { }
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 739 "ass5_16CS10058.y" /* yacc.c:1646  */
    { }
#line 2784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 742 "ass5_16CS10058.y" /* yacc.c:1646  */
    { typevar="void"; }
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 743 "ass5_16CS10058.y" /* yacc.c:1646  */
    { typevar="char"; }
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 744 "ass5_16CS10058.y" /* yacc.c:1646  */
    { }
#line 2802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 745 "ass5_16CS10058.y" /* yacc.c:1646  */
    { typevar="int"; }
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 746 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 747 "ass5_16CS10058.y" /* yacc.c:1646  */
    { typevar="float"; }
#line 2820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 748 "ass5_16CS10058.y" /* yacc.c:1646  */
    { }
#line 2826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 749 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 750 "ass5_16CS10058.y" /* yacc.c:1646  */
    { }
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 751 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 752 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 753 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 754 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 757 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 758 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 761 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 762 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 765 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 766 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 767 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 770 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 771 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 774 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 775 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 777 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 778 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 781 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 782 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 783 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 786 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 790 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
			symboltype *t = (yyvsp[-1].symtp);
			while(t->arrtype!=NULL) t = t->arrtype;           //for multidimensional arrays, move in depth till you get the base type
			t->arrtype = (yyvsp[0].symp)->type;                //add the base type 
			(yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].symtp));                  //update
	   	  }
#line 2975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 796 "ass5_16CS10058.y" /* yacc.c:1646  */
    {   }
#line 2981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 802 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
					(yyval.symp) = (yyvsp[0].symp)->update(new symboltype(typevar));
					currSymbol = (yyval.symp);
				}
#line 2990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 806 "ass5_16CS10058.y" /* yacc.c:1646  */
    {(yyval.symp)=(yyvsp[-1].symp);}
#line 2996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 807 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 808 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 809 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
					symboltype *t = (yyvsp[-3].symp) -> type;
					symboltype *prev = NULL;
					while(t->type == "arr") {
						prev = t;
						t = t->arrtype;      //keep moving recursively to get basetype
					}
					if(prev==NULL) {
						int temp = atoi((yyvsp[-1].expr)->loc->val.c_str());      //get initial value
						symboltype* s = new symboltype("arr", (yyvsp[-3].symp)->type, temp);        //create new symbol with that initial value
						(yyval.symp) = (yyvsp[-3].symp)->update(s);   //update the symbol table
					}
					else {
						prev->arrtype =  new symboltype("arr", t, atoi((yyvsp[-1].expr)->loc->val.c_str()));     //similar arguments as above
						(yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);
					}
				}
#line 3030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 826 "ass5_16CS10058.y" /* yacc.c:1646  */
    {       
					symboltype *t = (yyvsp[-2].symp) -> type;
					symboltype *prev = NULL;
					while(t->type == "arr") {
						prev = t;
						t = t->arrtype;         //keep moving recursively to base type
					}
					if(prev==NULL) {
						symboltype* s = new symboltype("arr", (yyvsp[-2].symp)->type, 0);    //no initial values, simply keep 0
						(yyval.symp) = (yyvsp[-2].symp)->update(s);
					}
					else {
						prev->arrtype =  new symboltype("arr", t, 0);
						(yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
					}
				}
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 842 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 843 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 844 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 845 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 846 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
					ST->name = (yyvsp[-4].symp)->name;

					if((yyvsp[-4].symp)->type->type !="void") {
						sym *s = ST->lookup("return");         //lookup for return value
						s->update((yyvsp[-4].symp)->type);		
					}
					(yyvsp[-4].symp)->nested=ST;       

					ST->parent = globalST;
					changeTable(globalST);				// Come back to globalsymbol table
					currSymbol = (yyval.symp);
				}
#line 3093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 859 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 3099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 860 "ass5_16CS10058.y" /* yacc.c:1646  */
    {        //similar as above
					ST->name = (yyvsp[-3].symp)->name;

					if((yyvsp[-3].symp)->type->type !="void") {
						sym *s = ST->lookup("return");
						s->update((yyvsp[-3].symp)->type);		
					}
					(yyvsp[-3].symp)->nested=ST;
					(yyvsp[-3].symp)->category="func";
					ST->parent = globalST;
					changeTable(globalST);				// Come back to globalsymbol table
					currSymbol = (yyval.symp);
				}
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 876 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 														// Used for changing to symbol table for a function
		if(currSymbol->nested==NULL) changeTable(new symtable(""));	// Function symbol table doesn't already exist
		else {
			changeTable(currSymbol ->nested);						// Function symbol table already exists
			emit("label", ST->name);
		}
	}
#line 3129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 885 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 886 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 889 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.symtp) = new symboltype("ptr");  }
#line 3147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 890 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.symtp) = new symboltype("ptr",(yyvsp[0].symtp)); }
#line 3153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 893 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 894 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 897 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 898 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 901 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 902 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 905 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  (yyvsp[0].symp)->category="param"; }
#line 3195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 906 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 909 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 910 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 913 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 916 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.symp)=(yyvsp[0].expr)->loc; }
#line 3225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 917 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 918 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 921 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 922 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 925 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 926 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 929 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 932 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 933 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 936 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 937 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 942 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 943 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=(yyvsp[0].st); }
#line 3303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 945 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=new Statement();              //create new statement with same nextlist
		   (yyval.st)->nextlist=(yyvsp[0].expr)->nextlist; 
		 }
#line 3311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 948 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=(yyvsp[0].st); }
#line 3317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 949 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=(yyvsp[0].st); }
#line 3323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 950 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=(yyvsp[0].st); }
#line 3329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 953 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 954 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 955 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 958 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=(yyvsp[-1].st); }
#line 3353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 961 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=new Statement(); }
#line 3359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 962 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=(yyvsp[0].st); }
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 965 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=(yyvsp[0].st); }
#line 3371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 967 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=(yyvsp[0].st);
				  backpatch((yyvsp[-2].st)->nextlist,(yyvsp[-1].instr));     //after $1, move to block_item via $2
				}
#line 3379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 972 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=new Statement(); }
#line 3385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 973 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st)=(yyvsp[0].st); }
#line 3391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 976 "ass5_16CS10058.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[-1].expr);}
#line 3397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 977 "ass5_16CS10058.y" /* yacc.c:1646  */
    {(yyval.expr) = new Expression();}
#line 3403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 981 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
					backpatch((yyvsp[-4].st)->nextlist, nextinstr());        //nextlist of N goes to nextinstr
					convertInt2bool((yyvsp[-5].expr));         //convert expression to bool
					(yyval.st) = new Statement();        //make new statement
					backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));        //is expression is true, go to M i.e just before statement body
					list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].st)->nextlist);   //merge falselist of expression, nextlist of statement and second N        
					(yyval.st)->nextlist = merge((yyvsp[0].st)->nextlist, temp);      
					}
#line 3416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 990 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
					backpatch((yyvsp[-7].st)->nextlist, nextinstr());		//nextlist of N goes to nextinstr
					convertInt2bool((yyvsp[-8].expr));        //convert expression to bool
					(yyval.st) = new Statement();       //make new statement
					backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));    //when expression is true, go to M1 else go to M2
					backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));
					list<int> temp = merge((yyvsp[-4].st)->nextlist, (yyvsp[-3].st)->nextlist);       //merge the nextlists of the statements and second N
					(yyval.st)->nextlist = merge((yyvsp[0].st)->nextlist,temp);
					}
#line 3430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 999 "ass5_16CS10058.y" /* yacc.c:1646  */
    {	}
#line 3436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1003 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
						(yyval.st) = new Statement();    //create statement
						convertInt2bool((yyvsp[-3].expr));     //convert expression to bool
						backpatch((yyvsp[0].st)->nextlist, (yyvsp[-5].instr));	// M1 to go back to expression again
						backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));	// M2 to go to statement if the expression is true
						(yyval.st)->nextlist = (yyvsp[-3].expr)->falselist;   //when expression is false, move out of loop
						// Emit to prevent fallthrough
						string str=generateString((yyvsp[-5].instr));
						emit("goto", str);
					}
#line 3451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1014 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
						(yyval.st) = new Statement();     //create statement
						convertInt2bool((yyvsp[-2].expr));      //convert to bool
						backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr));						// M1 to go back to statement if expression is true
						backpatch((yyvsp[-6].st)->nextlist, (yyvsp[-5].instr));						// M2 to go to check expression if statement is complete
						(yyval.st)->nextlist = (yyvsp[-2].expr)->falselist;                       //move out if statement is false
					}
#line 3463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1022 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
						(yyval.st) = new Statement();   //create new statement
						convertInt2bool((yyvsp[-3].expr));    //convert check expression to boolean
						backpatch((yyvsp[-3].expr)->truelist,(yyvsp[-1].instr));        //if expression is true, go to M2        
						backpatch((yyvsp[0].st)->nextlist,(yyvsp[-4].instr));        //after statement, go back to M1
						string str=generateString((yyvsp[-4].instr)); 
						emit("goto", str);                 //prevent fallthrough
						(yyval.st)->nextlist = (yyvsp[-3].expr)->falselist;      //move out if statement is false
					}
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1032 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
						(yyval.st) = new Statement();		 //create new statement
						convertInt2bool((yyvsp[-6].expr));  //convert check expression to boolean
						backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr));	//if expression is true, go to M2 
						backpatch((yyvsp[-3].st)->nextlist, (yyvsp[-7].instr));	//after N, go back to M1
						backpatch((yyvsp[0].st)->nextlist, (yyvsp[-5].instr));	//statement go back to expression
						string str=generateString((yyvsp[-5].instr));   
						emit("goto", str);				//prevent fallthrough
						(yyval.st)->nextlist = (yyvsp[-6].expr)->falselist;	//move out if statement is false
					}
#line 3492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1044 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st) = new Statement(); }
#line 3498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1045 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st) = new Statement(); }
#line 3504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1046 "ass5_16CS10058.y" /* yacc.c:1646  */
    { (yyval.st) = new Statement(); }
#line 3510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1048 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
				(yyval.st) = new Statement();
				emit("return",(yyvsp[-1].expr)->loc->name);               //emit return with the name of the return value
			  }
#line 3519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1053 "ass5_16CS10058.y" /* yacc.c:1646  */
    {
				(yyval.st) = new Statement();
				emit("return","");                         //simply emit return
			  }
#line 3528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1061 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1062 "ass5_16CS10058.y" /* yacc.c:1646  */
    { }
#line 3540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1065 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1066 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1070 "ass5_16CS10058.y" /* yacc.c:1646  */
    { 
					 emit("funcend",ST->name);
					 ST->parent=globalST;
					 changeTable(globalST);                     //once we come back to this at the end, change the table to global Symbol table
					 }
#line 3562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1077 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1078 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1081 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1082 "ass5_16CS10058.y" /* yacc.c:1646  */
    {  }
#line 3586 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3590 "y.tab.c" /* yacc.c:1646  */
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
#line 1085 "ass5_16CS10058.y" /* yacc.c:1906  */


void yyerror(string s) {        //print syntax error
    cout<<s<<endl;
}
