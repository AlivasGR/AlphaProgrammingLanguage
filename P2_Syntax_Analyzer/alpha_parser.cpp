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
#line 1 "alpha_parser.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <string>
	#include <fstream>
	#include <assert.h>
	#include "function_actions.h"
	#include "symtable.h"
	#include "defines_header.h"
	#include "error_handler.h"
	#define yylex() lexer->alpha_yylex()
	#define BON "\e[1m"
	#define BOFF "\e[0m"
	#define P2_PRINTS
	int yyerror (char * yaccProvidedMessage);
	unsigned int getCurrentScope();
	void incrementScope();
	void decrementScope();
	unsigned int scope = 0;
	Scope_Type nextScope = Scope_Type::invalid_scope;
	SymTable symbol_table = SymTable();
	void init();	

#line 89 "alpha_parser.cpp" /* yacc.c:339  */

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
   by #include "alpha_parser.hpp".  */
#ifndef YY_YY_ALPHA_PARSER_HPP_INCLUDED
# define YY_YY_ALPHA_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTCONST = 258,
    REALCONST = 259,
    STRINGCONST = 260,
    ID = 261,
    IF = 262,
    ELSE = 263,
    WHILE = 264,
    FOR = 265,
    FUNCTION = 266,
    RETURN = 267,
    BREAK = 268,
    CONTINUE = 269,
    AND = 270,
    NOT = 271,
    OR = 272,
    LOCAL = 273,
    TRUE = 274,
    FALSE = 275,
    NIL = 276,
    ASSIGNMENT = 277,
    PLUS = 278,
    MINUS = 279,
    MULTIPLICATION = 280,
    DIVISION = 281,
    MODULO = 282,
    EQUAL = 283,
    NOT_EQUAL = 284,
    PLUS_PLUS = 285,
    MINUS_MINUS = 286,
    GREATER_THAN = 287,
    LESS_THAN = 288,
    GREATER_OR_EQUAL = 289,
    LESS_OR_EQUAL = 290,
    LEFT_BRACE = 291,
    RIGHT_BRACE = 292,
    LEFT_BRACKET = 293,
    RIGHT_BRACKET = 294,
    LEFT_PAREN = 295,
    RIGHT_PAREN = 296,
    SEMICOLON = 297,
    COMMA = 298,
    COLON = 299,
    DOUBLE_COLON = 300,
    DOT = 301,
    DOT_DOT = 302,
    COMMENT_TOKEN = 303,
    BAD_TOKEN = 304,
    UMINUS = 305
  };
#endif
/* Tokens.  */
#define INTCONST 258
#define REALCONST 259
#define STRINGCONST 260
#define ID 261
#define IF 262
#define ELSE 263
#define WHILE 264
#define FOR 265
#define FUNCTION 266
#define RETURN 267
#define BREAK 268
#define CONTINUE 269
#define AND 270
#define NOT 271
#define OR 272
#define LOCAL 273
#define TRUE 274
#define FALSE 275
#define NIL 276
#define ASSIGNMENT 277
#define PLUS 278
#define MINUS 279
#define MULTIPLICATION 280
#define DIVISION 281
#define MODULO 282
#define EQUAL 283
#define NOT_EQUAL 284
#define PLUS_PLUS 285
#define MINUS_MINUS 286
#define GREATER_THAN 287
#define LESS_THAN 288
#define GREATER_OR_EQUAL 289
#define LESS_OR_EQUAL 290
#define LEFT_BRACE 291
#define RIGHT_BRACE 292
#define LEFT_BRACKET 293
#define RIGHT_BRACKET 294
#define LEFT_PAREN 295
#define RIGHT_PAREN 296
#define SEMICOLON 297
#define COMMA 298
#define COLON 299
#define DOUBLE_COLON 300
#define DOT 301
#define DOT_DOT 302
#define COMMENT_TOKEN 303
#define BAD_TOKEN 304
#define UMINUS 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "alpha_parser.y" /* yacc.c:355  */

	int    intValue;
	double doubleValue;
	char*  stringValue;
	int    sym_type;

#line 236 "alpha_parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ALPHA_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 253 "alpha_parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   581

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    72,    80,    87,    94,   100,   106,   112,
     118,   124,   124,   130,   130,   136,   142,   148,   154,   158,
     164,   170,   176,   182,   188,   194,   200,   206,   212,   218,
     224,   230,   236,   242,   251,   257,   263,   269,   276,   283,
     290,   297,   305,   314,   320,   326,   332,   338,   346,   354,
     362,   370,   379,   386,   392,   399,   407,   413,   419,   427,
     433,   441,   449,   459,   466,   474,   483,   490,   498,   507,
     513,   520,   528,   536,   543,   550,   558,   558,   568,   576,
     583,   593,   599,   605,   612,   618,   624,   633,   642,   649,
     658,   665,   673,   680,   687,   687,   695,   695,   703,   703,
     710,   717
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTCONST", "REALCONST", "STRINGCONST",
  "ID", "IF", "ELSE", "WHILE", "FOR", "FUNCTION", "RETURN", "BREAK",
  "CONTINUE", "AND", "NOT", "OR", "LOCAL", "TRUE", "FALSE", "NIL",
  "ASSIGNMENT", "PLUS", "MINUS", "MULTIPLICATION", "DIVISION", "MODULO",
  "EQUAL", "NOT_EQUAL", "PLUS_PLUS", "MINUS_MINUS", "GREATER_THAN",
  "LESS_THAN", "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "LEFT_BRACE",
  "RIGHT_BRACE", "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_PAREN",
  "RIGHT_PAREN", "SEMICOLON", "COMMA", "COLON", "DOUBLE_COLON", "DOT",
  "DOT_DOT", "COMMENT_TOKEN", "BAD_TOKEN", "UMINUS", "$accept", "program",
  "$@1", "stmts", "stmt", "$@2", "$@3", "expr", "term", "assignexpr",
  "primary", "lvalue", "member", "call", "callsuffix", "normcall",
  "methodcall", "elist", "elistnotempty", "commalist", "objectdef",
  "objectdinner", "indexed", "commaindexed", "indexedelem", "block", "$@4",
  "funcdef", "funcstart", "const", "idlist", "commaidlist", "ifstmt",
  "else", "whilestmt", "$@5", "forstmt", "$@6", "returnstmt", "$@7",
  "retex", YY_NULLPTR
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
     305
};
# endif

#define YYPACT_NINF -128

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-128)))

#define YYTABLE_NINF -4

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-4)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -128,     2,  -128,  -128,    90,   -26,  -128,  -128,  -128,  -128,
     -16,   -14,   -11,    32,  -128,  -128,  -128,   257,    34,  -128,
    -128,  -128,   257,     9,     9,  -128,     1,   234,  -128,    37,
    -128,   324,  -128,  -128,  -128,   416,  -128,   -10,  -128,  -128,
    -128,    -5,  -128,  -128,  -128,  -128,  -128,  -128,   257,   257,
     257,  -128,   257,     5,    15,  -128,  -128,  -128,    54,    20,
     -10,    20,  -128,   257,   303,  -128,    42,  -128,    41,   366,
      47,  -128,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,  -128,   257,  -128,  -128,   257,
     257,    83,    92,  -128,  -128,  -128,   257,   257,   106,   107,
     387,   408,    73,  -128,   505,    74,  -128,  -128,    76,   148,
     281,   257,  -128,  -128,    82,  -128,  -128,    79,   533,   520,
     -15,    25,    29,    95,  -128,   546,   546,   259,   259,   259,
     259,   505,   442,    84,  -128,    87,   463,    88,  -128,    80,
      93,   191,  -128,   257,  -128,    79,  -128,   257,   303,    41,
     257,  -128,  -128,   257,  -128,  -128,   118,  -128,    97,   123,
     191,   345,   484,  -128,  -128,    99,   100,    80,  -128,   191,
    -128,  -128,   257,  -128,  -128,  -128,  -128,  -128,   101,  -128,
     191,  -128
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     5,     1,     0,     0,    81,    82,    83,    48,
       0,     0,     0,    79,    98,    11,    13,     0,     0,    85,
      86,    84,     0,     0,     0,    76,    71,     0,    17,     0,
       4,     0,    33,    19,    41,    43,    51,    44,    45,    15,
      16,     0,    47,     7,     8,     9,    10,    18,     0,     0,
      64,    80,   101,     0,     0,    36,    49,    35,     0,    37,
       0,    39,     5,     0,    67,    69,     0,    70,    74,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     0,    38,    40,     0,
      64,     0,     0,    57,    59,    60,     0,    64,     0,    88,
       0,     0,     0,    63,   100,     0,    12,    14,     0,     0,
       0,     0,    65,    68,     0,    72,    34,    46,    31,    32,
      20,    21,    22,    23,    24,    29,    30,    25,    27,    26,
      28,    42,     0,     0,    52,     0,     0,     0,    54,    90,
       0,     0,    94,     0,    99,     0,    77,     0,    67,    74,
      64,    53,    61,    64,    55,    56,     0,    87,     0,    93,
       0,     0,     0,    66,    73,     0,     0,    90,    78,     0,
      91,    95,    64,    75,    58,    62,    89,    92,     0,    96,
       0,    97
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -128,  -128,  -128,    85,  -127,  -128,  -128,    -4,  -128,  -128,
    -128,    39,  -128,    63,  -128,  -128,  -128,   -89,   110,    -3,
    -128,  -128,  -128,    -1,    24,   -12,  -128,   -24,  -128,  -128,
    -128,   -23,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    30,    53,    54,    64,    32,    33,
      34,    35,    36,    37,    93,    94,    95,   102,   103,   112,
      38,    66,    67,   115,    68,    39,    62,    40,    41,    42,
     140,   157,    43,   170,    44,   160,    45,   180,    46,    52,
     105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,   133,     3,    70,     6,     7,     8,     9,   137,    75,
      76,    77,    78,    55,   159,     9,    47,    17,    57,    18,
      19,    20,    21,    69,    48,    22,    49,    18,    96,    50,
      97,    23,    24,   171,   108,    99,    98,    63,    51,    26,
      56,    27,   177,    71,   100,   101,    29,   106,   104,    58,
      76,    77,    78,   181,    29,    77,    78,   107,    89,   110,
      90,   165,    59,    61,   166,    13,    91,    92,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   113,   131,   178,   114,   132,    60,    60,   117,   134,
      -3,     5,   136,     6,     7,     8,     9,    10,   135,    11,
      12,    13,    14,    15,    16,    31,    17,   148,    18,    19,
      20,    21,   138,   139,    22,   143,   144,   145,    63,   150,
      23,    24,    78,   156,   167,   152,    25,   153,    26,   155,
      27,   169,    28,    25,   158,    29,    65,    31,   149,   161,
     174,   175,   179,   162,   176,   163,   168,   109,   164,     5,
       0,     6,     7,     8,     9,    10,    31,    11,    12,    13,
      14,    15,    16,     0,    17,    31,    18,    19,    20,    21,
       0,     0,    22,     0,     0,     0,    31,     0,    23,    24,
       0,     0,     0,     0,    25,   146,    26,     0,    27,     0,
      28,     0,     5,    29,     6,     7,     8,     9,    10,     0,
      11,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,     0,     0,    22,     0,     0,     0,     0,
       0,    23,    24,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,    28,     0,     0,    29,     6,     7,     8,
       9,     0,     0,     0,     0,    13,     0,     0,     0,     0,
      17,     0,    18,    19,    20,    21,     0,     0,    22,     0,
       6,     7,     8,     9,    23,    24,     0,     0,     0,     0,
       0,     0,    26,    17,    27,    18,    19,    20,    21,    29,
       0,    22,    74,    75,    76,    77,    78,    23,    24,     0,
       0,    -4,    -4,    -4,    -4,    26,    72,    27,    73,     0,
       0,     0,    29,     0,    74,    75,    76,    77,    78,    79,
      80,     0,     0,    81,    82,    83,    84,     0,    72,     0,
      73,     0,     0,     0,     0,   147,    74,    75,    76,    77,
      78,    79,    80,     0,     0,    81,    82,    83,    84,    72,
       0,    73,     0,     0,     0,     0,   111,    74,    75,    76,
      77,    78,    79,    80,     0,     0,    81,    82,    83,    84,
      72,     0,    73,     0,     0,     0,    85,     0,    74,    75,
      76,    77,    78,    79,    80,     0,     0,    81,    82,    83,
      84,    72,     0,    73,     0,     0,     0,   172,     0,    74,
      75,    76,    77,    78,    79,    80,     0,     0,    81,    82,
      83,    84,    72,     0,    73,     0,     0,   116,     0,     0,
      74,    75,    76,    77,    78,    79,    80,     0,     0,    81,
      82,    83,    84,    72,     0,    73,     0,     0,   141,     0,
       0,    74,    75,    76,    77,    78,    79,    80,    86,     0,
      81,    82,    83,    84,     0,     0,    87,    88,     0,   142,
       0,     0,     0,     0,    89,     0,    90,    72,     0,    73,
       0,     0,    91,    92,     0,    74,    75,    76,    77,    78,
      79,    80,     0,     0,    81,    82,    83,    84,    72,     0,
      73,   151,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    80,     0,     0,    81,    82,    83,    84,    72,
       0,    73,   154,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,     0,    81,    82,    83,    84,
      72,   173,    73,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    80,    72,     0,    81,    82,    83,
      84,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,     0,    81,    82,    83,    84,    74,    75,    76,    77,
      78,    79,    80,     0,     0,    81,    82,    83,    84,    74,
      75,    76,    77,    78,    -4,    -4,     0,     0,    81,    82,
      83,    84
};

static const yytype_int16 yycheck[] =
{
       4,    90,     0,    27,     3,     4,     5,     6,    97,    24,
      25,    26,    27,    17,   141,     6,    42,    16,    22,    18,
      19,    20,    21,    27,    40,    24,    40,    18,    38,    40,
      40,    30,    31,   160,    58,    40,    46,    36,     6,    38,
       6,    40,   169,     6,    48,    49,    45,    42,    52,    40,
      25,    26,    27,   180,    45,    26,    27,    42,    38,    63,
      40,   150,    23,    24,   153,    11,    46,    47,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    39,    86,   172,    43,    89,    23,    24,    41,     6,
       0,     1,    96,     3,     4,     5,     6,     7,     6,     9,
      10,    11,    12,    13,    14,   109,    16,   111,    18,    19,
      20,    21,     6,     6,    24,    42,    42,    41,    36,    40,
      30,    31,    27,    43,     6,    41,    36,    40,    38,    41,
      40,     8,    42,    36,    41,    45,    26,   141,   114,   143,
      41,    41,    41,   147,   167,   148,   158,    62,   149,     1,
      -1,     3,     4,     5,     6,     7,   160,     9,    10,    11,
      12,    13,    14,    -1,    16,   169,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,   180,    -1,    30,    31,
      -1,    -1,    -1,    -1,    36,    37,    38,    -1,    40,    -1,
      42,    -1,     1,    45,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,    38,
      -1,    40,    -1,    42,    -1,    -1,    45,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    24,    -1,
       3,     4,     5,     6,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    16,    40,    18,    19,    20,    21,    45,
      -1,    24,    23,    24,    25,    26,    27,    30,    31,    -1,
      -1,    32,    33,    34,    35,    38,    15,    40,    17,    -1,
      -1,    -1,    45,    -1,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    33,    34,    35,    -1,    15,    -1,
      17,    -1,    -1,    -1,    -1,    44,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    15,
      -1,    17,    -1,    -1,    -1,    -1,    43,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    33,    34,    35,
      15,    -1,    17,    -1,    -1,    -1,    42,    -1,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    33,    34,
      35,    15,    -1,    17,    -1,    -1,    -1,    42,    -1,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      34,    35,    15,    -1,    17,    -1,    -1,    41,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      33,    34,    35,    15,    -1,    17,    -1,    -1,    41,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    22,    -1,
      32,    33,    34,    35,    -1,    -1,    30,    31,    -1,    41,
      -1,    -1,    -1,    -1,    38,    -1,    40,    15,    -1,    17,
      -1,    -1,    46,    47,    -1,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    15,    -1,
      17,    39,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    15,
      -1,    17,    39,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    33,    34,    35,
      15,    37,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    15,    -1,    32,    33,    34,
      35,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,     0,    54,     1,     3,     4,     5,     6,
       7,     9,    10,    11,    12,    13,    14,    16,    18,    19,
      20,    21,    24,    30,    31,    36,    38,    40,    42,    45,
      55,    58,    59,    60,    61,    62,    63,    64,    71,    76,
      78,    79,    80,    83,    85,    87,    89,    42,    40,    40,
      40,     6,    90,    56,    57,    58,     6,    58,    40,    62,
      64,    62,    77,    36,    58,    69,    72,    73,    75,    58,
      78,     6,    15,    17,    23,    24,    25,    26,    27,    28,
      29,    32,    33,    34,    35,    42,    22,    30,    31,    38,
      40,    46,    47,    65,    66,    67,    38,    40,    46,    40,
      58,    58,    68,    69,    58,    91,    42,    42,    78,    54,
      58,    43,    70,    39,    43,    74,    41,    41,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    68,     6,     6,    58,    68,     6,     6,
      81,    41,    41,    42,    42,    41,    37,    44,    58,    75,
      40,    39,    41,    40,    39,    41,    43,    82,    41,    55,
      86,    58,    58,    70,    74,    68,    68,     6,    76,     8,
      84,    55,    42,    37,    41,    41,    82,    55,    68,    41,
      88,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    53,    52,    54,    54,    55,    55,    55,    55,
      55,    56,    55,    57,    55,    55,    55,    55,    55,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    61,    61,    61,    61,    61,    62,    62,
      62,    62,    63,    63,    63,    63,    64,    64,    64,    65,
      65,    66,    67,    68,    68,    69,    70,    70,    71,    72,
      72,    72,    73,    74,    74,    75,    77,    76,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    81,    81,    82,
      82,    83,    84,    84,    86,    85,    88,    87,    90,    89,
      91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     2,     1,     1,     1,
       1,     0,     3,     0,     3,     1,     1,     1,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     1,     1,     3,     1,     1,     2,
       2,     1,     3,     4,     3,     4,     4,     2,     6,     1,
       1,     3,     5,     1,     0,     2,     3,     0,     3,     1,
       1,     0,     2,     3,     0,     5,     0,     4,     5,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       0,     6,     2,     0,     0,     6,     0,    10,     0,     4,
       1,     0
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
  switch (yytype)
    {
          case 5: /* STRINGCONST  */
#line 48 "alpha_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).stringValue)); }
#line 1297 "alpha_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* ID  */
#line 49 "alpha_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).stringValue)); }
#line 1303 "alpha_parser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
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
#line 72 "alpha_parser.y" /* yacc.c:1646  */
    {init();}
#line 1567 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 73 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"program -> stmt\" at line %d\n", yylineno); 
				#endif
				}
#line 1577 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 81 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmts -> stmts stmt\" at line %d\n", yylineno); 
				#endif
				}
#line 1587 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 87 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmts -> \" at line %d\n", yylineno); 
				#endif
				}
#line 1597 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 95 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmt -> expr SEMICOLON\" at line %d\n", yylineno); 
				#endif
				}
#line 1607 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 101 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmt -> ifstmt\" at line %d\n", yylineno); 
				#endif
				}
#line 1617 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmt -> whilestmt\" at line %d\n", yylineno); 
				#endif
				}
#line 1627 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 113 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmt -> forstmt\" at line %d\n", yylineno); 
				#endif
				}
#line 1637 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 119 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmt -> returnstmt\" at line %d\n", yylineno); 
				#endif
				}
#line 1647 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 124 "alpha_parser.y" /* yacc.c:1646  */
    {Manage_stmt_BREAK();}
#line 1653 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 125 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmt -> BREAK SEMICOLON\" at line %d\n", yylineno); 
				#endif
				}
#line 1663 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 130 "alpha_parser.y" /* yacc.c:1646  */
    {Manage_stmt_CONTINUE();}
#line 1669 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 131 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmt -> CONTINUE SEMICOLON\" at line %d\n", yylineno); 
				#endif
				}
#line 1679 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 137 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmt -> block\" at line %d\n", yylineno); 
				#endif
				}
#line 1689 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 143 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmt -> funcdef\" at line %d\n", yylineno); 
				#endif
				}
#line 1699 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 149 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"stmt -> SEMICOLON\" at line %d\n", yylineno); 
				#endif
				}
#line 1709 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 154 "alpha_parser.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1715 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 159 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> assignexpr\" at line %d\n", yylineno); 
				#endif
				}
#line 1725 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 165 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr PLUS expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1735 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 171 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr MINUS expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1745 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 177 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr MULTIPLICATION expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1755 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 183 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr DIVISION expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1765 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 189 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr MODULO expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1775 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 195 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr GREATER_THAN\" at line %d\n", yylineno); 
				#endif
				}
#line 1785 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 201 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr GREATER_OR_EQUAL\" at line %d\n", yylineno); 
				#endif
				}
#line 1795 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 207 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr LESS_THAN expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1805 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 213 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr LESS_OR_EQUAL\" at line %d\n", yylineno); 
				#endif
				}
#line 1815 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 219 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr EQUAL expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1825 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 225 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr NOT_EQUAL expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1835 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 231 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr AND expr\" at line %d\n", yylineno);
				#endif
				}
#line 1845 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 237 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> expr OR expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1855 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 243 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"expr -> term\" at line %d\n", yylineno); 
				#endif
				}
#line 1865 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 252 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"term -> LEFT_PAREN expr RIGHT_PAREN\" at line %d\n", yylineno); 
				#endif
				}
#line 1875 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 258 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"term -> MINUS expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1885 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 264 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"term -> NOT expr\" at line %d\n", yylineno); 
				#endif
				}
#line 1895 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 270 "alpha_parser.y" /* yacc.c:1646  */
    {
				Manage_term_PLUS_PLUS_lvalue((yyvsp[0].sym_type));
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"term -> PLUS_PLUS lvalue\" at line %d\n", yylineno); 
				#endif
				}
#line 1906 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 277 "alpha_parser.y" /* yacc.c:1646  */
    {
				Manage_term_lvalue_PLUS_PLUS((yyvsp[-1].sym_type));
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"term -> lvalue PLUS_PLUS\" at line %d\n", yylineno); 
				#endif
				}
#line 1917 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 284 "alpha_parser.y" /* yacc.c:1646  */
    {
				Manage_term_MINUS_MINUS_lvalue((yyvsp[0].sym_type));
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"term -> MINUS_MINUS lvalue\" at line %d\n", yylineno); 
				#endif
				}
#line 1928 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 291 "alpha_parser.y" /* yacc.c:1646  */
    {
				Manage_term_lvalue_MINUS_MINUS((yyvsp[-1].sym_type));
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"term -> lvalue MINUS_MINUS\" at line %d\n", yylineno); 
				#endif
				}
#line 1939 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 298 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized Rule: \"term -> primary\" at line %d\n", yylineno); 
				#endif
				}
#line 1949 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 306 "alpha_parser.y" /* yacc.c:1646  */
    {
				Manage_assignexpr_lvalue_ASSIGNMENT_expr((yyvsp[-2].sym_type));
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"assignexpr -> lvalue ASSIGNMENT expr\" on line %d\n", yylineno);
				#endif
				}
#line 1960 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 315 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"primary -> lvalue\" on line %d\n", yylineno); 
				#endif
				}
#line 1970 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 321 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"primary -> call\" on line %d\n", yylineno); 
				#endif
				}
#line 1980 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 327 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"primary -> objectdef\" on line %d\n", yylineno);
				#endif
				}
#line 1990 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 333 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"primary -> LEFT_PAREN funcdef RIGHT_PAREN\" on line %d\n", yylineno); 
				#endif
				}
#line 2000 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 339 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"primary -> const\" on line %d\n", yylineno); 
				#endif
				}
#line 2010 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 347 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"lvalue -> ID\" on line %d\n", yylineno); 
				#endif
				(yyval.sym_type) = Manage_lvalue_ID((yyvsp[0].stringValue));
				free((yyvsp[0].stringValue));
				}
#line 2022 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 355 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"lvalue -> LOCAL ID\" on line %d\n", yylineno);
				#endif
				(yyval.sym_type) = Manage_lvalue_LOCAL_ID((yyvsp[0].stringValue));
				free((yyvsp[0].stringValue));
				}
#line 2034 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 363 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"lvalue -> DOUBLE_COLON ID\" on line %d\n", yylineno); 
				#endif
				(yyval.sym_type) = Manage_lvalue_DOUBLE_COLON_ID((yyvsp[0].stringValue));
				free((yyvsp[0].stringValue));
				}
#line 2046 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 371 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
				fprintf(stderr, "Recognized rule \"lvalue ->  member\" on line %d\n", yylineno); 
				#endif
				return SymTable_Entry_Type::member_variable;
				}
#line 2057 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 380 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"member -> lvalue DOT ID\" on line %d\n", yylineno); 
				#endif
				free((yyvsp[0].stringValue));
				}
#line 2068 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 387 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"member -> lvalue LEFT_BRACKET expr RIGHT_BRACKET\" on line %d\n", yylineno); 
				#endif
				}
#line 2078 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 393 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"member -> call DOT ID\" on line %d\n", yylineno); 
				#endif
				free((yyvsp[0].stringValue));
				}
#line 2089 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 400 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"member -> call LEFT_BRACKET expr RIGHT_BRACKET\" on line %d\n", yylineno); 
				#endif
				}
#line 2099 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 408 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"call -> call LEFT_PAREN elist RIGHT_PAREN\" on line %d\n", yylineno); 
				#endif
				}
#line 2109 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 414 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"call -> lvalue callsuffix\" on line %d\n", yylineno); 
				#endif
				}
#line 2119 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 420 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"call -> LEFT_PAREN funcdef RIGHT_PAREN LEFT_PAREN elist RIGHT_PAREN\" on line %d\n", yylineno); 
				#endif
				}
#line 2129 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 428 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"callsuffix -> normcall\" on line %d\n", yylineno); 
				#endif
				}
#line 2139 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 434 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"callsuffix -> methodcall\" on line %d\n", yylineno); 
				#endif
				}
#line 2149 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 442 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"normcall -> LEFT_PAREN elist RIGHT_PAREN\" on line %d\n", yylineno); 
				#endif
				}
#line 2159 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 450 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr, "Recognized rule \"methodcall -> DOT_DOT ID LEFT_PAREN elist RIGHT_PAREN\" on line %d\n", yylineno); 
				#endif
				free((yyvsp[-3].stringValue));
				}
#line 2170 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 460 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"elist -> elistnotempty\" at line %d\n",yylineno); 
				#endif
				}
#line 2180 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 466 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"elist -> \" at line %d\n",yylineno); 
				#endif
				}
#line 2190 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 475 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"elistnotempty -> expr commalist\" at line %d\n",yylineno); 
				#endif
				}
#line 2200 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 484 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"commalist ->  COMMA expr commalist \" at line %d\n",yylineno); 
				#endif
				}
#line 2210 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 490 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"commalist ->  \" at line %d\n",yylineno); 
				#endif
				}
#line 2220 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 499 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"objectdef -> LEFT_BRACKET objectdinner RIGHT_BRACKET\" at line %d\n",yylineno); 
				#endif
				}
#line 2230 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 508 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"objectdinner -> elistnotempty\" at line %d\n",yylineno); 
				#endif
				}
#line 2240 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 514 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"objectdinner -> indexed\" at line %d\n",yylineno); 
				#endif
				}
#line 2250 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 520 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"objectdinner -> \" at line %d\n",yylineno); 
				#endif
				}
#line 2260 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 529 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"indexed -> indexedelem commaindexed\" at line %d\n",yylineno); 
				#endif
				}
#line 2270 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 537 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"commaindexed -> COMMA indexedelem commaindexed\" at line %d\n",yylineno); 
				#endif
				}
#line 2280 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 543 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"commaindexed -> \" at line %d\n",yylineno); 
				#endif
				}
#line 2290 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 551 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"indexedelem -> LEFT_BRACE expr COLON expr RIGHT_BRACE\" at line %d\n",yylineno); 
				#endif
				}
#line 2300 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 558 "alpha_parser.y" /* yacc.c:1646  */
    { Manage_block_LEFT_BRACE();}
#line 2306 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 559 "alpha_parser.y" /* yacc.c:1646  */
    {
				Manage_stmts_RIGHT_BRACE(); 
				#ifdef P2_PRINTS  
					fprintf(stderr,"Recognized rule \"block -> LEFT_BRACE stmts RIGHT_BRACE\" at line %d\n",yylineno); 
				#endif
				}
#line 2317 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 569 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"funcdef -> funcstart LEFT_PAREN idlist RIGHT_PAREN block\" at line %d\n",yylineno); 
				#endif
				}
#line 2327 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 577 "alpha_parser.y" /* yacc.c:1646  */
    {
				Manage_funcstart_FUNCTION(); 
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"funcstart -> FUNCTION\" at line %d\n",yylineno); 
				#endif
				}
#line 2338 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 584 "alpha_parser.y" /* yacc.c:1646  */
    {
				Manage_funcstart_FUNCTION_ID((yyvsp[0].stringValue)); 
				#ifdef P2_PRINTS  
					fprintf(stderr,"Recognized rule \"funcstart -> FUNCTION ID\" at line %d\n",yylineno); 
				#endif
				free((yyvsp[0].stringValue));
				}
#line 2350 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 594 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"const -> INTCONST\" at line %d\n",yylineno); 
				#endif
				}
#line 2360 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 600 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"const -> REALCONST\" at line %d\n",yylineno); 
				#endif
				}
#line 2370 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 606 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"const -> STRINGCONST\" at line %d\n",yylineno); 
				#endif
				free((yyvsp[0].stringValue));
				}
#line 2381 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 613 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"const -> NIL\" at line %d\n",yylineno); 
				#endif
				}
#line 2391 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 619 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"const -> TRUE\" at line %d\n",yylineno); 
				#endif
				}
#line 2401 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 625 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"const -> FALSE\" at line %d\n",yylineno); 
				#endif
				}
#line 2411 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 634 "alpha_parser.y" /* yacc.c:1646  */
    {
				Manage_idlist((yyvsp[-1].stringValue)); 
				#ifdef P2_PRINTS  
					fprintf(stderr,"Recognized rule \"idlist -> ID commaidlistat\" at line %d\n",yylineno); 
				#endif
				free((yyvsp[-1].stringValue));
				}
#line 2423 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 642 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"idlist -> \" at line %d\n",yylineno); 
				#endif
				}
#line 2433 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 650 "alpha_parser.y" /* yacc.c:1646  */
    {
				Manage_idlist((yyvsp[-1].stringValue)); 
				#ifdef P2_PRINTS  
					fprintf(stderr,"Recognized rule \"commaidlist -> COMMA ID commaidlist\" at line %d\n",yylineno); 
				#endif
				free((yyvsp[-1].stringValue));
				}
#line 2445 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 658 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"commaidlist -> \" at line %d\n",yylineno); 
				#endif
				}
#line 2455 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 666 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"ifstmt ->  IF LEFT_PAREN expr RIGHT_PAREN stmt else\" at line %d\n",yylineno); 
				#endif
				}
#line 2465 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 674 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"else -> ELSE stmt\" at line %d\n",yylineno); 
				#endif
				}
#line 2475 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 680 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"else -> \" at line %d\n",yylineno); 
				#endif
				}
#line 2485 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 687 "alpha_parser.y" /* yacc.c:1646  */
    {Manage_whilestmt_WHILE_LEFT_PAREN_expr_RIGHT_PAREN_stmt();}
#line 2491 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 688 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"whilestmt -> WHILE LEFT_PAREN expr RIGHT_PAREN\" at line %d\n",yylineno); 
				#endif
				}
#line 2501 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 695 "alpha_parser.y" /* yacc.c:1646  */
    {Manage_forstmt_FOR_LEF_PAREN_elist_SEMICOLON_expr_SEMICOLON_elist_RIGHT_PAREN_stmt();}
#line 2507 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 696 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"forstmt -> FOR LEFT_PAREN elist SEMICOLON expr SEMICOLON elist RIGHT_PAREN\" at line %d\n",yylineno); 
				#endif
				}
#line 2517 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 703 "alpha_parser.y" /* yacc.c:1646  */
    {Manage_returnstmt_RETURN();}
#line 2523 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 704 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"returnstmt -> RETURN\" at line %d\n",yylineno); 
				#endif
				}
#line 2533 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 711 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"retex -> expr\" at line %d\n",yylineno); 
				#endif
				}
#line 2543 "alpha_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 717 "alpha_parser.y" /* yacc.c:1646  */
    {
				#ifdef P2_PRINTS 
					fprintf(stderr,"Recognized rule \"retex -> \" at line %d\n",yylineno); 
				#endif
				}
#line 2553 "alpha_parser.cpp" /* yacc.c:1646  */
    break;


#line 2557 "alpha_parser.cpp" /* yacc.c:1646  */
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
#line 723 "alpha_parser.y" /* yacc.c:1906  */



int yyerror(char * yaccProvidedMessage) {
 	error(ErrorType::Error, yylineno, "%s before token " BON "\'%s\'" BOFF "\n", yaccProvidedMessage, yytext);
	return 0;
}

unsigned int getCurrentScope() {
	return scope;
}

void incrementScope() {
	scope++;
}

void decrementScope() {
	assert(scope);
	scope--;
}

void init() {
	symbol_table.addScopeType(Scope_Type::global_scope);
	std::ifstream ifs;
	ifs.open("stdalpha.lib");
	if (!ifs.is_open()) {
		error(ErrorType::Warning, 0, "stdalpha.lib not found! Library functions won't be loaded\n");
	} else {
		std::string temp;
		while (!ifs.eof()) {
			ifs >> temp;
			symbol_table.Insert(temp, SymTable_Entry_Type::library_function, 0, 0);
		}
	}
}
