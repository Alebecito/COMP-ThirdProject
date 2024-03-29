/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parserNuevecito.y"

#include <stdio.h>
#include <string.h>
#include "globals.h"
extern int yylex();
int yyerror();
extern int yylineno;
extern int column;
extern FILE* yyin;
extern char* lineptr;
#define YYERROR_VERBOSE 1

#line 83 "parserNuevecito.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSERNUEVECITO_TAB_H_INCLUDED
# define YY_YY_PARSERNUEVECITO_TAB_H_INCLUDED
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
    INTEGER_CONSTANT = 259,
    FLOATING_CONSTANT = 260,
    CHARACTER_CONSTANT = 261,
    STRING_LITERAL = 262,
    WHITESPACE = 263,
    TYPEDEF_NAME = 264,
    PTR_OP = 265,
    INC_OP = 266,
    DEC_OP = 267,
    LEFT_SHIFT = 268,
    RIGHT_SHIFT = 269,
    LE = 270,
    GE = 271,
    GREATER_OP = 272,
    HEADER_NAME = 273,
    LOWER_OP = 274,
    EQ = 275,
    NOT_EQ = 276,
    LOGICAL_AND = 277,
    LOGICAL_OR = 278,
    ASSIGNMENT_OPERATOR = 279,
    ELLIPSIS = 280,
    SIZEOF = 281,
    TYPEDEF = 282,
    EXTERN = 283,
    STATIC = 284,
    AUTO = 285,
    REGISTER = 286,
    VOID = 287,
    CHAR = 288,
    SHORT = 289,
    INT = 290,
    LONG = 291,
    FLOAT = 292,
    DOUBLE = 293,
    DEFAULT = 294,
    IF = 295,
    SWITCH = 296,
    SIGNED = 297,
    UNSIGNED = 298,
    _BOOL = 299,
    _COMPLEX = 300,
    _IMAGINARY = 301,
    STRUCT = 302,
    UNION = 303,
    ENUM = 304,
    CONST = 305,
    RESTRICT = 306,
    VOLATILE = 307,
    INLINE = 308,
    CASE = 309,
    ELSE = 310,
    FOR = 311,
    DO = 312,
    WHILE = 313,
    GOTO = 314,
    CONTINUE = 315,
    BREAK = 316,
    RETURN = 317,
    END_OF_FILE = 318
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSERNUEVECITO_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  76
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3126

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  290
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  556

#define YYUNDEFTOK  2
#define YYMAXUTOK   319


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    80,    73,     2,
      65,    66,    74,    75,    72,    76,    69,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    85,
       2,    86,     2,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    82,    71,    77,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    35,    35,    36,    37,    38,    39,    43,    44,    45,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      62,    63,    64,    68,    69,    70,    71,    72,    73,    77,
      78,    79,    80,    81,    82,    86,    87,    91,    92,    93,
      94,    95,    96,    97,   101,   102,   103,   104,   105,   109,
     110,   111,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   127,   128,   129,   130,   131,   135,   136,   140,   141,
     145,   146,   150,   151,   155,   156,   160,   161,   162,   163,
     164,   168,   169,   170,   174,   175,   179,   183,   184,   189,
     190,   191,   192,   193,   194,   195,   196,   200,   201,   202,
     206,   207,   208,   212,   213,   214,   215,   216,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   238,   239,   240,   241,   242,   246,   247,
     251,   252,   256,   257,   261,   262,   263,   264,   268,   269,
     270,   274,   275,   276,   277,   281,   282,   283,   284,   285,
     286,   287,   291,   292,   293,   297,   298,   299,   303,   304,
     305,   309,   313,   314,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   340,   341,   342,   343,   344,   348,   349,
     353,   354,   355,   359,   360,   361,   365,   366,   367,   371,
     372,   376,   377,   381,   382,   383,   384,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     405,   406,   407,   408,   412,   413,   414,   415,   416,   420,
     424,   425,   429,   430,   431,   435,   436,   437,   438,   439,
     440,   444,   445,   446,   450,   451,   452,   456,   457,   461,
     462,   466,   467,   468,   472,   473,   474,   475,   476,   477,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   498,   499,   500,   501,   502,   503,   507,
     508,   512,   513,   517,   518,   519,   520,   521,   522,   526,
     527
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "WHITESPACE", "TYPEDEF_NAME", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_SHIFT",
  "RIGHT_SHIFT", "LE", "GE", "GREATER_OP", "HEADER_NAME", "LOWER_OP", "EQ",
  "NOT_EQ", "LOGICAL_AND", "LOGICAL_OR", "ASSIGNMENT_OPERATOR", "ELLIPSIS",
  "SIZEOF", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "VOID",
  "CHAR", "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "DEFAULT", "IF",
  "SWITCH", "SIGNED", "UNSIGNED", "_BOOL", "_COMPLEX", "_IMAGINARY",
  "STRUCT", "UNION", "ENUM", "CONST", "RESTRICT", "VOLATILE", "INLINE",
  "CASE", "ELSE", "FOR", "DO", "WHILE", "GOTO", "CONTINUE", "BREAK",
  "RETURN", "END_OF_FILE", "\"then\"", "'('", "')'", "'['", "']'", "'.'",
  "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'^'", "'|'", "'?'", "':'", "';'", "'='", "$accept",
  "primary_expression", "constant", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_op",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    40,    41,    91,    93,    46,
     123,   125,    44,    38,    42,    43,    45,   126,    33,    47,
      37,    94,   124,    63,    58,    59,    61
};
# endif

#define YYPACT_NINF (-446)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-204)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2345,  2835,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,    29,  -446,  -446,  -446,  -446,    21,   221,
    -446,    99,  3044,  3044,  -446,    45,  -446,  3044,  3044,    19,
     112,   179,  2133,  -446,  -446,    49,    97,   549,  -446,   126,
    -446,  2880,    38,   402,   387,    69,    94,  -446,  -446,    14,
     165,  -446,   -47,  -446,  1171,  -446,  -446,   144,  2933,  -446,
    -446,   200,  2737,  1224,   390,   112,  -446,  -446,   255,   272,
    1063,   249,  -446,  -446,  -446,  -446,  2038,  2038,  2054,   275,
     337,   358,  1752,   369,   856,   385,   380,   353,   382,   980,
    1119,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,   257,   628,  2078,  -446,   -21,   178,   268,   432,   366,
     396,   377,   409,   475,   -12,  -446,  -446,   -23,  -446,  -446,
    -446,  -446,   718,  -446,  -446,  -446,  -446,  -446,   161,   422,
    -446,  -446,   458,    25,   453,   347,  -446,  -446,  -446,  -446,
    -446,  -446,    80,   661,  -446,    80,  -446,   661,  -446,  2880,
    2954,   -28,  3074,   467,  -446,   171,  3074,  -446,   208,  -446,
    -446,   192,   474,   469,  -446,   281,  2479,  -446,  1412,  -446,
     476,   477,  1255,  -446,  -446,  1768,  1768,  1768,  1768,  1784,
    1784,  -446,  2078,  1808,  1808,  2078,  2078,  1863,  -446,   897,
    1119,  -446,  -446,  1119,  -446,   897,  1887,  1903,  2679,  -446,
    -446,   459,   801,  2396,   484,  1752,   462,  -446,  -446,   410,
    -446,     0,  2517,   302,   139,   480,   548,  -446,  -446,  1468,
    1752,   554,  1752,  1752,  -446,  2078,  2078,  2078,  1808,  1808,
    1768,  1768,  1768,  1768,  1768,  1768,  1784,  1784,  1919,  1919,
    1919,  1919,  1919,  1943,  1752,  -446,  2408,  -446,  -446,   130,
     371,  -446,   461,  1752,  1752,  -446,    53,    81,  -446,  1428,
    -446,  -446,  -446,  -446,  -446,   138,  2398,  -446,  -446,  -446,
     478,  -446,  -446,   245,  1752,    51,  -446,   481,  -446,  -446,
    2984,   398,  2186,  1524,  -446,   218,  -446,   427,  -446,  3014,
    -446,   556,  -446,   494,  1412,  -446,  -446,  1752,  -446,   496,
     498,   320,   268,   268,   268,   268,   224,   432,   432,  -446,
     109,   -21,   -21,  -446,  -446,  2436,     7,  -446,   501,   502,
    -446,  2529,   304,  2548,   309,   897,  2559,   996,   114,  1012,
     505,   506,   313,  -446,  -446,  -446,  -446,  -446,   431,  2239,
     431,  -446,  2022,  -446,  2569,  -446,   318,  -446,   241,  -446,
    -446,  -446,  -446,  -446,  -446,   -21,   -21,   178,   178,   268,
     268,   268,   268,   432,   432,   868,   366,   396,   377,   409,
     475,  2447,    67,  -446,  -446,  -446,    60,   486,  -446,  -446,
    -446,  -446,  -446,  2129,  1998,   570,  -446,   411,   661,   160,
    -446,  -446,  -446,   191,  1752,  -446,   191,  -446,  1752,  -446,
    -446,  2292,  1548,   427,     3,  -446,   508,   538,  -446,   544,
     545,   427,  2790,  1564,  -446,  -446,  -446,  -446,   547,   550,
    -446,  -446,  1752,  1752,   546,   546,   897,   897,   897,   897,
    -446,   897,  1642,   204,  1036,  1658,   230,  1752,  1752,   897,
     269,  1444,  -446,  1752,  -446,  1752,  -446,  1752,  1752,  -446,
    -446,   661,  2600,   553,  -446,  -446,  1310,  -446,  -446,  -446,
     212,  -446,  -446,  -446,  -446,   265,  2638,  -446,  -446,  -446,
    -446,   335,  -446,   551,  2669,  -446,   560,   562,  -446,  -446,
    -446,  -446,   576,   577,  -446,  -446,  -446,   897,   340,   567,
     569,   242,   897,   344,  1674,   348,   349,  -446,  2650,   416,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,   661,
    -446,  -446,  -446,  -446,  -446,   897,   897,  -446,   897,   897,
     897,  1752,  -446,   897,   897,   356,   555,   561,  -446,  1334,
    -446,  -446,  -446,  -446,  -446,  -446,   373,  -446,  -446,   897,
    -446,  -446,  -446,   897,  -446,  -446
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   164,   122,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   128,   129,     0,   158,   159,   160,   161,     0,     0,
     282,     0,    89,    91,   120,     0,   121,    93,    95,     0,
     163,     0,     0,   279,   281,     0,     0,     0,   289,     0,
     288,     0,   149,     0,     0,     0,     0,   188,   185,   184,
       0,    87,     0,    97,   100,    90,    92,   125,     0,    94,
      96,     0,     0,     0,     0,   162,     1,   280,     0,     0,
       0,     2,     7,     8,     9,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,    29,    30,    31,    32,    33,    34,   251,    10,
       3,    23,     0,     0,    37,    44,    49,    52,    61,    66,
      68,    70,    72,    74,    76,    81,    84,     0,   249,   250,
     235,   236,     0,   247,   237,   238,   239,   240,     0,   100,
     290,   286,     0,     0,   155,     0,   152,   182,   165,   187,
     189,   186,     0,     0,   285,     0,    88,     0,   283,     0,
       0,     0,   134,     0,   130,     0,   136,   287,     0,   199,
     176,     0,     0,   190,   193,     0,     0,     2,     0,   166,
      30,     0,     0,   180,   181,     0,     0,     0,     0,     0,
       0,   246,     0,     0,     0,     0,     0,     0,   253,     0,
       0,    24,    25,     0,    27,     0,     0,     0,     0,    35,
      86,     0,     0,     0,     0,     0,     0,   274,   275,     0,
     276,     0,     0,     0,     0,     0,     0,    16,    17,     0,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,   245,   248,     0,
       0,   150,     0,     0,     0,   145,     0,     0,    99,     0,
     220,   102,    98,   101,   284,     0,     0,   127,   133,   135,
       0,   123,   131,     0,     0,     0,   138,   141,   137,   178,
       0,     0,     0,     0,   196,     0,   198,   204,   175,     0,
     177,     0,   179,     0,     0,   173,   168,     0,   167,    30,
       0,     0,    59,    60,    58,    57,     0,    64,    65,    41,
       0,    47,    48,    42,    43,     0,     0,   241,     0,     0,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   273,   278,   277,     6,     5,     0,     0,
     203,   202,     0,    15,     0,    12,     0,    20,     0,    14,
      83,    82,    38,    39,    40,    45,    46,    50,    51,    55,
      56,    54,    53,    62,    63,     0,    67,    69,    71,    73,
      75,     0,     0,    85,   151,   147,     0,     0,   154,   157,
     156,   146,   153,     0,     0,     0,   224,     0,     0,     0,
     230,   126,   124,     0,     0,   142,     0,   132,     0,   192,
     195,     0,     0,   206,     0,   214,     0,     0,   208,    30,
       0,   205,     0,     0,   191,   194,   200,   170,     0,     0,
     174,   169,     0,     0,     0,    28,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,    13,     0,    11,     0,     0,   148,
     223,     0,     0,     0,   233,   221,     0,   225,   229,   231,
       0,   140,   144,   139,   143,     0,     0,   215,   207,   212,
     209,     0,   216,     0,     0,   210,    30,     0,   171,   172,
      78,    80,   257,   254,   259,   256,   272,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,     0,     0,
      22,    21,    79,    77,   228,   234,   232,   222,   226,     0,
     218,   217,   219,   213,   211,     0,     0,   262,     0,     0,
       0,     0,   267,     0,     0,     0,     0,     0,    18,     0,
     227,   258,   255,   265,   264,   263,     0,   269,   268,     0,
     271,   261,    19,     0,   270,   266
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -446,  -446,  -446,  -446,  -446,   285,  -446,  -103,   -31,   266,
     120,    72,   388,   389,   403,   404,   405,  -446,   -66,   -73,
     -87,  -233,    26,     2,  -446,   168,  -446,   -59,  -446,  -446,
     479,  -155,   -48,  -446,  -191,  -446,   512,  -248,   -13,  -446,
       5,   -35,   -14,   -56,   -68,  -446,  -262,  -446,   149,  -142,
    -272,  -150,   205,  -445,  -446,   259,   -93,  -446,    66,  -446,
     527,  -446,  -446,  -446,  -446,  -446,   618,  -446,   597
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   109,   110,   111,   356,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   211,    30,    49,    62,    63,    32,    33,    34,    35,
     163,   164,   165,   285,   286,    36,   145,   146,    37,    38,
     139,    40,    41,    59,   416,   173,   174,   175,   225,   417,
     297,   396,   397,   398,   399,   400,   129,   130,   131,   132,
     133,   134,   135,   136,   137,    42,    43,    44,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     181,   214,    31,   271,   172,    39,    75,   273,   282,   162,
     234,   252,   221,   223,   388,    58,    57,   182,   392,   413,
      71,   519,    54,   421,     2,   155,   210,    48,   410,   296,
     389,   390,    52,    55,    65,    66,    64,   425,   156,    69,
      70,   162,   149,   277,    31,   151,   150,    39,    67,   254,
      78,   405,   224,   235,   387,   166,   144,   278,   236,   237,
      57,   387,   255,   144,    24,    25,    26,    50,   411,   147,
     412,   253,   254,   128,   171,   290,   413,   140,   421,   254,
     270,   267,   351,     2,   270,   345,    28,   166,    29,   319,
      48,   433,   323,   324,   519,    29,   261,   262,    79,    53,
      60,   162,     2,   162,   162,   303,   327,   162,   142,   310,
     326,   263,   330,   223,   279,    68,   223,   141,   288,   332,
     334,   282,   304,   406,   391,   338,   154,   138,   342,     2,
     158,   459,   362,   363,   364,   148,   407,   167,   392,   254,
     348,   162,   413,   358,   162,    28,    45,   166,    46,   166,
     166,   458,   224,   166,    29,   224,   357,   295,   128,   360,
     361,   463,   321,   322,    28,    57,   382,   153,    29,   150,
     287,   472,   283,    29,     2,   474,   294,    72,   413,    73,
      74,   383,     2,   192,    61,   140,   254,   166,   195,   196,
     166,    28,   470,   291,     2,     2,   270,   210,   210,   444,
      29,   384,   262,   413,   349,  -201,   293,   365,   366,   401,
     350,    61,   471,    29,   160,   473,   263,   162,   210,    74,
     420,     2,    56,   278,  -183,   274,    45,   394,    46,   395,
      45,   428,    46,   152,   429,    47,    28,   152,   339,   185,
     186,   187,   440,   188,    28,    29,   468,   153,   467,   452,
     443,   153,   446,   238,   239,   284,    28,   292,  -197,   293,
      75,   317,   318,   166,  -197,    29,    29,   226,   227,   228,
      47,    24,    25,    26,   289,   284,   254,    45,   295,    46,
     290,   240,   241,   292,  -203,   293,  -183,  -183,  -183,   499,
    -203,   150,   171,  -183,   171,    29,   404,    55,   192,   193,
     194,   171,   254,   195,   196,   312,   313,   314,   315,   456,
      45,   514,    46,   254,   254,   504,   518,   403,   373,   374,
     268,   183,   229,   272,   230,   270,   231,   531,   210,   404,
     349,   183,   293,   199,   349,   350,   293,   290,   210,   420,
     184,   290,   210,   492,   493,   494,   495,   300,   496,   328,
     487,   171,   329,   301,   483,   498,   507,   501,   503,   205,
     505,   506,   369,   370,   371,   372,   490,   491,   347,   540,
     437,   201,   202,   204,   254,   439,   254,   209,   270,   449,
     510,   254,   511,   216,   454,   254,   246,   247,   270,   518,
     455,   512,   513,   270,   192,   193,   194,   350,   209,   195,
     196,   520,   206,   143,   527,   144,   528,   290,   287,   532,
     533,   287,   254,   171,   536,   537,   254,   535,   265,   266,
     254,   254,   549,   207,   171,   185,   186,   187,   254,   188,
     189,   190,   541,   542,   212,   543,   544,   545,   217,   553,
     547,   548,   385,   386,   546,   254,   270,   242,   243,   244,
     215,   245,    45,   147,    46,    45,   554,    46,   249,   259,
     555,   144,   387,   411,   144,   412,   270,   218,   280,   248,
     209,   209,   209,   209,   209,   209,     3,   209,   209,   209,
     209,   209,   465,   466,   192,   193,   194,   538,   539,   195,
     196,   250,   422,   197,   423,   344,   349,   251,   293,     9,
      10,    11,    12,    13,    14,    15,   367,   368,   157,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   281,   264,
     298,   299,   341,   335,   305,   306,   352,   343,   209,   209,
      80,   353,    81,    82,    83,    84,    85,   359,     3,   426,
      86,    87,   427,   278,   430,   408,   431,   434,   435,   209,
     447,   448,   263,   464,   477,    88,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    89,    90,
      91,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    92,   478,    93,    94,    95,    96,    97,
      98,    99,   479,   480,   100,   488,   451,   521,   489,    47,
     101,   516,   102,   103,   104,   105,   106,   107,   523,   232,
     524,   525,   526,   529,   108,   530,   376,   209,   377,   276,
     550,   -35,   -35,   -35,   -35,   -35,   551,   -35,   -35,   -35,
     -35,   -35,   233,   378,   260,   379,   509,   380,   469,   258,
      77,   159,   208,     0,   177,    82,    83,    84,    85,     0,
       0,     0,    86,    87,     0,     0,     0,     0,     0,   209,
       0,     0,     0,     0,     0,     0,     0,    88,     0,   209,
       0,     0,     0,   209,   -35,     0,   -35,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,     0,   209,   209,   256,
       0,    81,    82,    83,    84,    85,   100,     3,     0,    86,
      87,   269,     0,     0,   102,   103,   104,   105,   106,   107,
       0,     0,   209,   209,    88,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    89,    90,    91,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    92,     0,    93,    94,    95,    96,    97,    98,
      99,     0,     0,   100,     0,     0,     0,     0,    47,   257,
       0,   102,   103,   104,   105,   106,   107,     0,     0,     0,
       0,     0,   336,   108,   177,    82,    83,    84,    85,     0,
       3,     0,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,   213,     0,    81,
      82,    83,    84,    85,     0,     0,   100,    86,    87,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
       0,     0,    88,   185,   186,   187,   337,   188,   189,   190,
       0,     0,     0,     0,     0,    89,    90,    91,   256,     0,
      81,    82,    83,    84,    85,     0,     0,     0,    86,    87,
      92,     0,    93,    94,    95,    96,    97,    98,    99,     0,
       0,   100,     0,    88,     0,     0,    47,     0,     0,   102,
     103,   104,   105,   106,   107,     0,    89,    90,    91,     0,
       0,   108,   192,   193,   194,     0,     0,   195,   196,     0,
       0,    92,     0,    93,    94,    95,    96,    97,    98,    99,
       0,     0,   100,     0,     0,     0,     0,    47,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,   219,   108,   177,    82,    83,    84,    85,     0,     0,
       0,    86,    87,     0,     0,     0,     0,   208,     0,   177,
      82,    83,    84,    85,     0,     0,    88,    86,    87,     0,
       0,     0,     0,   208,     0,   177,    82,    83,    84,    85,
       0,     0,    88,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   208,    88,   177,
      82,    83,    84,    85,     0,   100,     0,    86,    87,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     0,
       0,   100,    88,     0,     0,   220,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,     0,   100,   185,   186,
     187,   442,   188,   189,   190,   102,   103,   104,   105,   106,
     107,     0,     0,     0,     0,     0,     0,   445,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,     0,     0,     0,     0,
     222,   500,   177,    82,    83,    84,    85,     0,     3,     0,
      86,    87,     0,     0,   191,     0,     0,   192,   193,   194,
       0,     0,   195,   196,     0,    88,   197,     0,   198,     0,
       0,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   176,     0,   177,    82,    83,
      84,    85,     0,     0,     0,    86,    87,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,   178,     0,     0,   208,   157,   177,    82,
      83,    84,    85,     0,     0,     0,    86,    87,     0,     0,
       0,     0,     0,     0,    24,    25,    26,     0,     0,     0,
       0,    88,     0,     0,   307,     0,     0,     0,     0,   100,
       0,     0,   179,     0,     0,     0,     0,   102,   180,   104,
     105,   106,   107,     0,     0,    24,    25,    26,     0,     0,
       0,   208,     0,   177,    82,    83,    84,    85,     0,     0,
     100,    86,    87,   308,     0,     0,     0,     0,   102,   309,
     104,   105,   106,   107,     0,   208,    88,   177,    82,    83,
      84,    85,     0,     0,     0,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,   394,     0,   395,
     269,   517,     0,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,   394,     0,   395,   269,   552,     0,   102,   103,   104,
     105,   106,   107,   208,     0,   177,    82,    83,    84,    85,
       0,     0,     0,    86,    87,     0,     0,     0,     0,   393,
       0,   177,    82,    83,    84,    85,     0,     0,    88,    86,
      87,     0,     0,     0,     0,   508,     0,   177,    82,    83,
      84,    85,     0,     0,    88,    86,    87,     0,     0,     0,
       0,     0,    24,    25,    26,     0,     0,     0,     0,   354,
      88,   177,    82,    83,    84,    85,     0,   100,     0,    86,
      87,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,     0,   100,    88,   394,     0,   395,   269,     0,
       0,   102,   103,   104,   105,   106,   107,     0,     0,   100,
       0,   394,     0,   395,   269,     0,     0,   102,   103,   104,
     105,   106,   107,     0,     0,   208,     0,   177,    82,    83,
      84,    85,     0,   100,   355,    86,    87,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,     0,   476,
      88,   177,    82,    83,    84,    85,     0,     0,     0,    86,
      87,     0,     0,     0,     0,   484,     0,   177,    82,    83,
      84,    85,     0,     0,    88,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
      88,     0,   418,     0,     0,     0,     0,   102,   419,   104,
     105,   106,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,   418,     0,     0,     0,
       0,   102,   419,   104,   105,   106,   107,     0,     0,   100,
       0,     0,   485,     0,     0,     0,     0,   102,   486,   104,
     105,   106,   107,   208,     0,   177,    82,    83,    84,    85,
       0,     0,     0,    86,    87,     0,     0,     0,     0,   208,
       0,   177,    82,    83,    84,    85,     0,     0,    88,    86,
      87,     0,     0,     0,     0,   208,     0,   177,    82,    83,
      84,    85,     0,     0,    88,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,   100,   497,     0,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,     0,   100,   502,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,     0,   100,
     534,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   208,     0,   177,    82,    83,    84,    85,
       0,     0,     0,    86,    87,     0,     0,     0,     0,   311,
       0,   177,    82,    83,    84,    85,     0,     0,    88,    86,
      87,     0,     0,     0,     0,   316,     0,   177,    82,    83,
      84,    85,     0,     0,    88,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   320,
      88,   177,    82,    83,    84,    85,     0,   100,     0,    86,
      87,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,     0,   100,    88,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,     0,   325,     0,   177,    82,    83,    84,
      85,     0,     0,   100,    86,    87,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,   331,    88,
     177,    82,    83,    84,    85,     0,     0,     0,    86,    87,
       0,     0,     0,     0,   333,     0,   177,    82,    83,    84,
      85,     0,     0,    88,    86,    87,     0,     0,     0,     0,
     375,     0,   177,    82,    83,    84,    85,     0,   100,    88,
      86,    87,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107,     0,     0,   381,    88,   177,    82,    83,    84,
      85,     0,   100,     0,    86,    87,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,   100,    88,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,     0,   462,
       0,   177,    82,    83,    84,    85,     0,     0,   100,    86,
      87,     0,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107,     0,     0,    88,   177,    82,    83,    84,    85,
       0,     0,     0,    86,    87,     0,     0,     0,     0,     0,
       0,   177,    82,    83,    84,    85,     0,     0,    88,    86,
      87,     0,     0,     0,     0,     0,     0,   177,    82,    83,
      84,    85,     0,   100,    88,    86,    87,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,     0,     0,
      88,   177,    82,    83,    84,    85,     0,   100,     0,    86,
      87,     0,   451,     0,     0,   102,   103,   104,   105,   106,
     107,     0,     0,   200,    88,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,    76,     1,     0,     2,     0,     0,     0,
       0,     0,     3,   100,   185,   186,   187,     0,   188,   189,
     190,   102,   103,   104,   105,   106,   107,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   414,     0,     2,
       0,     0,     0,     0,     0,     3,     0,     0,    28,     0,
     460,   461,     0,   192,   193,   194,     0,    29,   195,   196,
       0,     0,   197,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     450,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,   292,   415,   293,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   475,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,   349,   415,   293,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     1,     0,     2,     0,
       0,     0,     0,     0,     3,     0,     0,   349,   415,   293,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   280,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
      28,   185,   186,   187,     0,   188,   189,   190,     0,    29,
       0,     0,     0,   185,   186,   187,     0,   188,   189,   190,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   185,   186,   187,   340,   188,   189,   190,     0,     0,
       0,     0,   185,   186,   187,     0,   188,   189,   190,   402,
     192,   193,   194,     0,     0,   195,   196,     0,     0,   197,
       0,   198,   192,   193,   194,     0,     0,   195,   196,     0,
       0,   197,     0,   198,   185,   186,   187,     0,   188,   189,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,   193,   194,     0,     0,   195,   196,     0,     0,   197,
     432,   192,   193,   194,     0,     0,   195,   196,     0,     0,
     197,   457,   185,   186,   187,     0,   188,   189,   190,     0,
       0,     0,     0,     0,   185,   186,   187,   302,   188,   189,
     190,     0,     0,   192,   193,   194,     0,     0,   195,   196,
       0,     0,   197,   185,   186,   187,     0,   188,   189,   190,
       0,     0,     0,     0,   185,   186,   187,     0,   188,   189,
     190,     0,     0,   346,   185,   186,   187,     0,   188,   189,
     190,   192,   193,   194,     0,   436,   195,   196,     0,     0,
     197,     0,     0,   192,   193,   194,     0,     0,   195,   196,
       0,     0,   197,     0,   438,   185,   186,   187,     0,   188,
     189,   190,   192,   193,   194,   441,     0,   195,   196,     0,
       0,   197,     0,   192,   193,   194,     0,     0,   195,   196,
       0,   453,   197,   192,   193,   194,     0,     0,   195,   196,
       0,     0,   197,   185,   186,   187,     0,   188,   189,   190,
       0,     0,     0,     0,     0,   185,   186,   187,   515,   188,
     189,   190,     0,     0,   192,   193,   194,     0,     0,   195,
     196,     0,     0,   197,   185,   186,   187,     0,   188,   189,
     190,     0,     0,     0,   185,   186,   187,     0,   188,   189,
     190,     0,     0,     0,     0,     0,   184,     0,     0,     0,
       0,     0,   192,   193,   194,     0,     0,   195,   196,     0,
       0,   197,   461,     0,   192,   193,   194,     0,     0,   195,
     196,     0,     0,   197,     0,     0,     0,   522,   168,     0,
     169,     0,     0,   192,   193,   194,     3,     0,   195,   196,
       0,     0,   197,   192,   193,   194,     0,     0,   195,   196,
       0,     0,   197,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   481,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   482,     0,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,    46,     0,     0,    47,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   161,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,   275,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     9,    10,    11,    12,
      13,    14,    15,     3,     0,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,   409,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     3,     0,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,   424,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     3,     0,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     3,     0,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26
};

static const yytype_int16 yycheck[] =
{
      73,    94,     0,   153,    72,     0,    41,   157,   163,    68,
     113,    23,    99,   100,   262,    29,    29,    73,   266,   291,
       1,   466,     1,   295,     3,    72,    92,     1,   290,   171,
     263,   264,     3,    28,    32,    33,    31,   299,    85,    37,
      38,   100,    56,    71,    42,    59,    59,    42,     3,    72,
       1,   284,   100,    74,     1,    68,     3,    85,    79,    80,
      73,     1,    85,     3,    50,    51,    52,     1,    65,    66,
      67,    83,    72,    47,    72,    72,   348,    51,   350,    72,
     153,     1,   224,     3,   157,    85,    65,   100,    74,   192,
      64,    84,   195,   196,   539,    74,    71,    72,     1,    70,
       1,   160,     3,   162,   163,   178,   199,   166,    70,   182,
     197,    86,   205,   200,   162,    70,   203,    51,   166,   206,
     207,   276,   178,    72,    71,   212,    60,     1,   215,     3,
      64,    71,   235,   236,   237,    66,    85,    71,   386,    72,
       1,   200,   414,   230,   203,    65,    65,   160,    67,   162,
     163,    84,   200,   166,    74,   203,   229,   171,   132,   232,
     233,   394,   193,   194,    65,   178,   253,    86,    74,   182,
     165,   404,     1,    74,     3,   408,   171,    65,   450,    67,
       1,   254,     3,    74,    85,   159,    72,   200,    79,    80,
     203,    65,     1,     1,     3,     3,   269,   263,   264,    85,
      74,    71,    72,   475,    65,    66,    67,   238,   239,    71,
     224,    85,   403,    74,    70,   406,    86,   276,   284,     1,
     293,     3,     1,    85,     3,   159,    65,    67,    67,    69,
      65,   304,    67,    72,   307,    70,    65,    72,   212,    15,
      16,    17,   335,    19,    65,    74,    86,    86,   398,   352,
     337,    86,   339,    75,    76,    84,    65,    65,    66,    67,
     295,   189,   190,   276,    72,    74,    74,    10,    11,    12,
      70,    50,    51,    52,    66,    84,    72,    65,   292,    67,
      72,    13,    14,    65,    66,    67,    65,    66,    67,    85,
      72,   304,   290,    72,   292,    74,    84,   292,    74,    75,
      76,   299,    72,    79,    80,   185,   186,   187,   188,    68,
      65,   461,    67,    72,    72,    85,   466,    72,   246,   247,
     152,    66,    65,   155,    67,   398,    69,    85,   394,    84,
      65,    66,    67,    84,    65,   349,    67,    72,   404,   412,
      68,    72,   408,   436,   437,   438,   439,    66,   441,   200,
     423,   349,   203,    72,   422,   442,   449,   444,   445,    84,
     447,   448,   242,   243,   244,   245,   432,   433,    66,   519,
      66,    86,    87,    88,    72,    66,    72,    92,   451,    66,
     453,    72,   455,     3,    66,    72,    20,    21,   461,   539,
      72,   457,   458,   466,    74,    75,    76,   411,   113,    79,
      80,    66,    65,     1,   497,     3,    66,    72,   403,   502,
      66,   406,    72,   411,    66,    66,    72,   504,    71,    72,
      72,    72,    66,    65,   422,    15,    16,    17,    72,    19,
      20,    21,   525,   526,    65,   528,   529,   530,    85,    66,
     533,   534,    71,    72,   531,    72,   519,    15,    16,    17,
      65,    19,    65,    66,    67,    65,   549,    67,    81,     1,
     553,     3,     1,    65,     3,    67,   539,    85,     1,    73,
     185,   186,   187,   188,   189,   190,     9,   192,   193,   194,
     195,   196,    71,    72,    74,    75,    76,    71,    72,    79,
      80,    82,    65,    83,    67,    85,    65,    22,    67,    32,
      33,    34,    35,    36,    37,    38,   240,   241,    86,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    71,    86,
      66,    72,    58,    84,    68,    68,    66,    85,   263,   264,
       1,     3,     3,     4,     5,     6,     7,     3,     9,     3,
      11,    12,    68,    85,    68,    84,    68,    66,    66,   284,
      65,    65,    86,     3,    66,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    66,    56,    57,    58,    59,    60,
      61,    62,    68,    68,    65,    68,    70,    66,    68,    70,
      71,    68,    73,    74,    75,    76,    77,    78,    68,     1,
      68,    55,    55,    66,    85,    66,   248,   352,   249,   160,
      85,    13,    14,    15,    16,    17,    85,    19,    20,    21,
      22,    23,    24,   250,   142,   251,   451,   252,   399,   132,
      42,    64,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,   394,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,   404,
      -1,    -1,    -1,   408,    66,    -1,    68,    -1,    -1,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,   432,   433,     1,
      -1,     3,     4,     5,     6,     7,    65,     9,    -1,    11,
      12,    70,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    -1,   457,   458,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    71,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,     1,    85,     3,     4,     5,     6,     7,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    65,    11,    12,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    -1,    26,    15,    16,    17,    85,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    -1,    26,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    39,    40,    41,    -1,
      -1,    85,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,     1,    85,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    26,    11,    12,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    26,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    26,     3,
       4,     5,     6,     7,    -1,    65,    -1,    11,    12,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    -1,
      -1,    65,    26,    -1,    -1,    85,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    65,    15,    16,
      17,    85,    19,    20,    21,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
       1,    85,     3,     4,     5,     6,     7,    -1,     9,    -1,
      11,    12,    -1,    -1,    71,    -1,    -1,    74,    75,    76,
      -1,    -1,    79,    80,    -1,    26,    83,    -1,    85,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    -1,     1,    86,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    50,    51,    52,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      65,    11,    12,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,     1,    26,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,
      70,    71,    -1,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    -1,    69,    70,    71,    -1,    73,    74,    75,
      76,    77,    78,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    26,    11,
      12,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    26,    11,    12,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,     1,
      26,     3,     4,     5,     6,     7,    -1,    65,    -1,    11,
      12,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    -1,    65,    26,    67,    -1,    69,    70,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    65,
      -1,    67,    -1,    69,    70,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,    65,    66,    11,    12,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,     1,
      26,     3,     4,     5,     6,     7,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    26,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      26,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    65,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    26,    11,
      12,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    26,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    26,    11,
      12,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    26,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      26,     3,     4,     5,     6,     7,    -1,    65,    -1,    11,
      12,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    -1,    65,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    65,    11,    12,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,     1,    26,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    26,    11,    12,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,    -1,    65,    26,
      11,    12,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,     1,    26,     3,     4,     5,     6,
       7,    -1,    65,    -1,    11,    12,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    65,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    65,    11,
      12,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,    26,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    26,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    65,    26,    11,    12,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      26,     3,     4,     5,     6,     7,    -1,    65,    -1,    11,
      12,    -1,    70,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    -1,    65,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,     0,     1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,     9,    65,    15,    16,    17,    -1,    19,    20,
      21,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    65,    -1,
      71,    72,    -1,    74,    75,    76,    -1,    74,    79,    80,
      -1,    -1,    83,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      65,    15,    16,    17,    -1,    19,    20,    21,    -1,    74,
      -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,    21,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    15,    16,    17,    58,    19,    20,    21,    -1,    -1,
      -1,    -1,    15,    16,    17,    -1,    19,    20,    21,    71,
      74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,    83,
      -1,    85,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      -1,    83,    -1,    85,    15,    16,    17,    -1,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,    83,
      84,    74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,
      83,    84,    15,    16,    17,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    68,    19,    20,
      21,    -1,    -1,    74,    75,    76,    -1,    -1,    79,    80,
      -1,    -1,    83,    15,    16,    17,    -1,    19,    20,    21,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    -1,    -1,    66,    15,    16,    17,    -1,    19,    20,
      21,    74,    75,    76,    -1,    66,    79,    80,    -1,    -1,
      83,    -1,    -1,    74,    75,    76,    -1,    -1,    79,    80,
      -1,    -1,    83,    -1,    66,    15,    16,    17,    -1,    19,
      20,    21,    74,    75,    76,    66,    -1,    79,    80,    -1,
      -1,    83,    -1,    74,    75,    76,    -1,    -1,    79,    80,
      -1,    72,    83,    74,    75,    76,    -1,    -1,    79,    80,
      -1,    -1,    83,    15,    16,    17,    -1,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    68,    19,
      20,    21,    -1,    -1,    74,    75,    76,    -1,    -1,    79,
      80,    -1,    -1,    83,    15,    16,    17,    -1,    19,    20,
      21,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      -1,    83,    72,    -1,    74,    75,    76,    -1,    -1,    79,
      80,    -1,    -1,    83,    -1,    -1,    -1,    68,     1,    -1,
       3,    -1,    -1,    74,    75,    76,     9,    -1,    79,    80,
      -1,    -1,    83,    74,    75,    76,    -1,    -1,    79,    80,
      -1,    -1,    83,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    67,    -1,    -1,    70,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    32,    33,    34,    35,
      36,    37,    38,     9,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,     9,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,     9,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,     9,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     9,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    65,    74,
     109,   110,   113,   114,   115,   116,   122,   125,   126,   127,
     128,   129,   152,   153,   154,    65,    67,    70,   109,   110,
     145,   155,     3,    70,     1,   127,     1,   125,   129,   130,
       1,    85,   111,   112,   127,   110,   110,     3,    70,   110,
     110,     1,    65,    67,     1,   128,     0,   153,     1,     1,
       1,     3,     4,     5,     6,     7,    11,    12,    26,    39,
      40,    41,    54,    56,    57,    58,    59,    60,    61,    62,
      65,    71,    73,    74,    75,    76,    77,    78,    85,    88,
      89,    90,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   109,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     1,   127,
     109,   145,    70,     1,     3,   123,   124,    66,    66,   129,
     125,   129,    72,    86,   145,    72,    85,    86,   145,   155,
      70,     1,   114,   117,   118,   119,   125,   145,     1,     3,
      66,   110,   131,   132,   133,   134,     1,     3,    29,    68,
      74,   106,   130,    66,    68,    15,    16,    17,    19,    20,
      21,    71,    74,    75,    76,    79,    80,    83,    85,    84,
      65,    92,    92,    65,    92,    84,    65,    65,     1,    92,
     105,   108,    65,     1,   143,    65,     3,    85,    85,     1,
      85,   107,     1,   107,   119,   135,    10,    11,    12,    65,
      67,    69,     1,    24,    94,    74,    79,    80,    75,    76,
      13,    14,    15,    16,    17,    19,    20,    21,    73,    81,
      82,    22,    23,    83,    72,    85,     1,    71,   147,     1,
     123,    71,    72,    86,    86,    71,    72,     1,   112,    70,
     106,   138,   112,   138,   145,     1,   117,    71,    85,   119,
       1,    71,   118,     1,    84,   120,   121,   127,   119,    66,
      72,     1,    65,    67,   127,   129,   136,   137,    66,    72,
      66,    72,    68,   106,   130,    68,    68,    29,    68,    74,
     106,     1,    97,    97,    97,    97,     1,    98,    98,    94,
       1,    95,    95,    94,    94,     1,   107,   143,   135,   135,
     143,     1,   107,     1,   107,    84,     1,    85,   107,   109,
      58,    58,   107,    85,    85,    85,    66,    66,     1,    65,
     129,   136,    66,     3,     1,    66,    91,   106,   107,     3,
     106,   106,    94,    94,    94,    95,    95,    96,    96,    97,
      97,    97,    97,    98,    98,     1,    99,   100,   101,   102,
     103,     1,   107,   106,    71,    71,    72,     1,   124,   108,
     108,    71,   124,     1,    67,    69,   138,   139,   140,   141,
     142,    71,    71,    72,    84,   108,    72,    85,    84,    25,
     133,    65,    67,   137,     1,    66,   131,   136,    68,    74,
     106,   137,    65,    67,    25,   133,     3,    68,   106,   106,
      68,    68,    84,    84,    66,    66,    66,    66,    66,    66,
     143,    66,    85,   107,    85,    85,   107,    65,    65,    66,
       1,    70,    94,    72,    66,    72,    68,    84,    84,    71,
      71,    72,     1,   108,     3,    71,    72,   138,    86,   142,
       1,   121,   108,   121,   108,     1,     1,    66,    66,    68,
      68,     1,    66,   131,     1,    68,    74,   106,    68,    68,
     105,   105,   143,   143,   143,   143,   143,    66,   107,    85,
      85,   107,    66,   107,    85,   107,   107,   143,     1,   139,
     106,   106,   105,   105,   138,    68,    68,    71,   138,   140,
      66,    66,    68,    68,    68,    55,    55,   143,    66,    66,
      66,    85,   143,    66,    66,   107,    66,    66,    71,    72,
     138,   143,   143,   143,   143,   143,   107,   143,   143,    66,
      85,    85,    71,    66,   143,   143
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     112,   112,   112,   113,   113,   113,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   115,   115,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   119,   119,   119,   120,   120,
     120,   121,   121,   121,   121,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   123,   124,   124,   124,   125,   125,
     125,   126,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   131,   132,   132,   132,   133,   133,   133,   134,
     134,   135,   135,   136,   136,   136,   136,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   138,   139,   139,   139,   139,   139,   140,
     141,   141,   142,   142,   142,   143,   143,   143,   143,   143,
     143,   144,   144,   144,   145,   145,   145,   146,   146,   147,
     147,   148,   148,   148,   149,   149,   149,   149,   149,   149,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   151,   151,   151,   151,   151,   151,   152,
     152,   153,   153,   154,   154,   154,   154,   154,   154,   155,
     155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     4,     3,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     5,     5,
       5,     1,     3,     3,     1,     3,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     2,     5,     4,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     2,     1,     3,
       3,     1,     2,     3,     3,     4,     5,     5,     6,     2,
       4,     5,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     3,     4,     4,     5,
       5,     6,     6,     4,     5,     4,     3,     4,     4,     4,
       4,     4,     3,     1,     2,     2,     3,     3,     1,     2,
       1,     3,     3,     1,     3,     3,     2,     1,     2,     1,
       3,     1,     2,     1,     1,     2,     2,     3,     2,     3,
       3,     4,     3,     4,     2,     3,     3,     4,     4,     4,
       1,     3,     4,     3,     1,     2,     3,     4,     3,     2,
       1,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     1,     2,     1,
       1,     1,     2,     2,     5,     7,     5,     5,     7,     5,
       5,     7,     6,     7,     7,     7,     9,     6,     7,     7,
       8,     7,     5,     3,     2,     2,     2,     3,     3,     1,
       2,     1,     1,     3,     4,     3,     3,     3,     2,     1,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 47:
#line 104 "parserNuevecito.y"
                                              {printf("HOLA");}
#line 2292 "parserNuevecito.tab.c"
    break;

  case 103:
#line 212 "parserNuevecito.y"
                  {typedef_name_flag = 1;}
#line 2298 "parserNuevecito.tab.c"
    break;

  case 123:
#line 238 "parserNuevecito.y"
                                                           {printf("STRUCT1\n");}
#line 2304 "parserNuevecito.tab.c"
    break;

  case 124:
#line 239 "parserNuevecito.y"
                                                                     {printf("STRUCT2\n");}
#line 2310 "parserNuevecito.tab.c"
    break;

  case 125:
#line 240 "parserNuevecito.y"
                                     {printf("STRUCT3\n");}
#line 2316 "parserNuevecito.tab.c"
    break;

  case 126:
#line 241 "parserNuevecito.y"
                                                   {printf("STRUCT4\n");}
#line 2322 "parserNuevecito.tab.c"
    break;

  case 127:
#line 242 "parserNuevecito.y"
                                        {printf("STRUCT5\n");}
#line 2328 "parserNuevecito.tab.c"
    break;

  case 134:
#line 261 "parserNuevecito.y"
                         {typedef_name_flag = 2;}
#line 2334 "parserNuevecito.tab.c"
    break;

  case 135:
#line 262 "parserNuevecito.y"
                                                  {typedef_name_flag = 2;}
#line 2340 "parserNuevecito.tab.c"
    break;


#line 2344 "parserNuevecito.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 529 "parserNuevecito.y"



int yyerror(const char *str) {
    fprintf(stderr, "error: %s, line %d, column %d\n", str, yylineno, column);
	fprintf(stderr,"%s", lineptr);
	for(int i = 0; i < column - 1; i++)
		fprintf(stderr," ");
    fprintf(stderr,"^\n");
}
