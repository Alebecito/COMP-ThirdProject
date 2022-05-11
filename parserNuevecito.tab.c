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
extern int yylex();
extern int yyerror();
extern int yylineno;
extern int column;
extern FILE* yyin;
extern char* yytext;
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
# define YYERROR_VERBOSE 0
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
    TYPEDEF_NAME = 259,
    INTEGER_CONSTANT = 260,
    FLOATING_CONSTANT = 261,
    ENUMERATION_CONSTANT = 262,
    CHARACTER_CONSTANT = 263,
    STRING_LITERAL = 264,
    WHITESPACE = 265,
    PTR_OP = 266,
    INC_OP = 267,
    DEC_OP = 268,
    UNARY_OP = 269,
    LEFT_SHIFT = 270,
    RIGHT_SHIFT = 271,
    LE = 272,
    GE = 273,
    GREATER_OP = 274,
    HEADER_NAME = 275,
    LOWER_OP = 276,
    EQ = 277,
    NOT_EQ = 278,
    LOGICAL_AND = 279,
    LOGICAL_OR = 280,
    ASSIGNMENT_OPERATOR = 281,
    ELLIPSIS = 282,
    SIZEOF = 283,
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    VOID = 289,
    CHAR = 290,
    SHORT = 291,
    INT = 292,
    LONG = 293,
    FLOAT = 294,
    DOUBLE = 295,
    DEFAULT = 296,
    IF = 297,
    SWITCH = 298,
    SIGNED = 299,
    UNSIGNED = 300,
    _BOOL = 301,
    _COMPLEX = 302,
    _IMAGINARY = 303,
    STRUCT = 304,
    UNION = 305,
    ENUM = 306,
    CONST = 307,
    RESTRICT = 308,
    VOLATILE = 309,
    INLINE = 310,
    CASE = 311,
    ELSE = 312,
    FOR = 313,
    DO = 314,
    WHILE = 315,
    GOTO = 316,
    CONTINUE = 317,
    BREAK = 318,
    RETURN = 319
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
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1602

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  410

#define YYUNDEFTOK  2
#define YYMAXUTOK   320


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
       2,     2,     2,     2,     2,     2,     2,    76,    79,     2,
      66,    67,    74,    77,    73,    78,    70,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    84,
       2,    85,     2,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,    81,    72,     2,     2,     2,     2,
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
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    33,    34,    35,    39,    40,    41,    42,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      59,    60,    64,    65,    66,    67,    68,    69,    73,    74,
      78,    79,    80,    81,    85,    86,    87,    91,    92,    93,
      97,    98,    99,   100,   101,   105,   106,   107,   111,   112,
     116,   117,   121,   122,   126,   127,   131,   132,   136,   137,
     141,   142,   146,   147,   151,   155,   156,   160,   161,   162,
     163,   164,   165,   166,   167,   171,   172,   176,   177,   181,
     182,   183,   184,   185,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   207,
     208,   209,   213,   214,   218,   219,   223,   227,   228,   229,
     230,   234,   235,   239,   240,   241,   245,   246,   247,   248,
     249,   253,   254,   258,   259,   263,   264,   265,   269,   273,
     274,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   295,   296,   297,   298,   302,
     303,   307,   308,   312,   313,   317,   318,   319,   323,   324,
     328,   329,   333,   334,   335,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   354,   355,   356,   360,
     361,   362,   363,   367,   371,   372,   376,   377,   381,   382,
     383,   384,   385,   386,   390,   391,   392,   396,   397,   401,
     402,   406,   407,   411,   412,   416,   417,   418,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   437,
     438,   439,   440,   441,   445,   446,   450,   451,   455,   456,
     460,   461
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPEDEF_NAME",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "ENUMERATION_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "WHITESPACE", "PTR_OP", "INC_OP",
  "DEC_OP", "UNARY_OP", "LEFT_SHIFT", "RIGHT_SHIFT", "LE", "GE",
  "GREATER_OP", "HEADER_NAME", "LOWER_OP", "EQ", "NOT_EQ", "LOGICAL_AND",
  "LOGICAL_OR", "ASSIGNMENT_OPERATOR", "ELLIPSIS", "SIZEOF", "TYPEDEF",
  "EXTERN", "STATIC", "AUTO", "REGISTER", "VOID", "CHAR", "SHORT", "INT",
  "LONG", "FLOAT", "DOUBLE", "DEFAULT", "IF", "SWITCH", "SIGNED",
  "UNSIGNED", "_BOOL", "_COMPLEX", "_IMAGINARY", "STRUCT", "UNION", "ENUM",
  "CONST", "RESTRICT", "VOLATILE", "INLINE", "CASE", "ELSE", "FOR", "DO",
  "WHILE", "GOTO", "CONTINUE", "BREAK", "RETURN", "\"then\"", "'('", "')'",
  "'['", "']'", "'.'", "'{'", "'}'", "','", "'*'", "'/'", "'%'", "'+'",
  "'-'", "'&'", "'^'", "'|'", "'?'", "':'", "';'", "'='", "$accept",
  "primary_expression", "constant", "postfix_expression",
  "argument_expression_list", "unary_expression", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
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
     315,   316,   317,   318,   319,   320,    40,    41,    91,    93,
      46,   123,   125,    44,    42,    47,    37,    43,    45,    38,
      94,   124,    63,    58,    59,    61
};
# endif

#define YYPACT_NINF (-301)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1547,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,    16,  -301,  -301,  -301,  -301,  -301,     7,  1547,  1547,
    -301,    22,  -301,  1547,  1547,  1472,  -301,  -301,   -31,    38,
    -301,    64,    96,  -301,   -18,  -301,   542,    43,    39,  -301,
    -301,   -23,  1244,  -301,  -301,  -301,  -301,    38,   -21,   163,
    -301,    32,  -301,  -301,    96,    64,  -301,   340,  1068,  -301,
       7,  -301,  1124,  1177,   773,    43,  1244,  1244,   868,  -301,
      44,  1244,   167,  1404,  -301,    17,  -301,  -301,  -301,  -301,
      41,    19,  -301,  -301,  -301,  -301,  -301,  1421,  1421,  1404,
    1447,    48,    74,   110,  1404,   122,   595,   154,   159,   143,
     166,   499,  1298,  -301,  -301,  -301,  -301,   257,   235,  -301,
     216,   -24,   240,   254,   260,   184,   185,   186,   250,   -10,
    -301,  -301,    -5,  -301,  -301,  -301,  -301,   413,  -301,  -301,
    -301,  -301,  -301,  -301,  1037,  -301,  -301,  -301,  -301,  -301,
    -301,    54,   211,   207,  -301,   -17,  1392,  -301,   231,   233,
     800,   984,  -301,  -301,  -301,  1404,    51,  -301,   223,  -301,
    -301,    26,  -301,  -301,  -301,  -301,  -301,   595,  1298,  -301,
    -301,  -301,  1298,  -301,   595,  1404,  1404,   234,   486,   258,
    1404,   236,  -301,  -301,  -301,    60,    87,    -3,   252,   323,
    -301,  -301,  1117,  1404,   327,  1404,  1404,  1404,  1404,  1404,
    1404,  1404,  1404,  1404,  1404,  1404,  1404,  1404,  1404,  1404,
    1404,  1404,  1404,  1404,  1404,  1404,  -301,  -301,  -301,  1404,
     328,  -301,   215,  1068,   -41,  -301,   703,   870,  -301,    40,
    -301,   123,  -301,  1510,  -301,   329,   264,  1392,  -301,  -301,
    1404,  -301,   265,   267,  -301,  -301,    44,  -301,  1404,  -301,
    -301,   270,   271,  -301,   100,   105,   595,   612,    63,   636,
     273,   107,  -301,  -301,  -301,   928,   180,  -301,  1081,  -301,
    -301,   108,  -301,   117,  -301,  -301,  -301,  -301,  -301,   216,
     216,   -24,   -24,   240,   240,   240,   240,   254,   254,   260,
     184,   185,   186,   250,    85,  -301,   272,  -301,  -301,   921,
    -301,  -301,  -301,  -301,   283,   284,  -301,   286,   287,   123,
    1336,   882,  -301,  -301,  -301,  -301,   288,   289,  -301,  -301,
    -301,  -301,   269,   269,   595,   595,  -301,  1191,    72,   662,
    1233,    79,  1404,   595,  1037,  -301,  -301,  1404,  -301,  1404,
    -301,  -301,  -301,  1068,  -301,  -301,  -301,  -301,  -301,   293,
    -301,   292,   295,  -301,  -301,   305,  -301,   595,   145,   298,
     299,    80,   595,   146,  1257,   150,  -301,   226,  -301,  -301,
    -301,  -301,  -301,  -301,   595,  -301,   595,   595,   595,  1404,
    -301,   595,   595,   155,   313,  -301,   998,  -301,  -301,  -301,
    -301,   157,  -301,  -301,   595,  -301,  -301,   595,  -301,  -301
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,   102,
     103,     0,   125,   126,   127,   128,   227,     0,    67,    69,
      96,     0,    97,    71,    73,     0,   224,   226,   120,     0,
     131,     0,   145,    65,     0,    75,    77,   130,     0,    68,
      70,   101,     0,    72,    74,     1,   225,     0,   123,     0,
     121,     0,   149,   147,   146,     0,    66,     0,     0,   230,
       0,   228,     0,     0,     0,   129,     0,   107,     0,   104,
       0,   109,     0,     0,   116,     0,   132,   150,   148,    76,
      77,     2,     6,     7,     8,     9,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   197,   203,    10,     3,    22,    28,    30,
      34,    37,    40,    45,    48,    50,    52,    54,    56,    58,
      60,    62,     0,   201,   202,   188,   189,     0,   199,   190,
     191,   192,   193,     2,     0,   176,    78,   231,   229,   158,
     143,   156,     0,   151,   153,     0,     0,   133,     0,     0,
       0,     0,   108,    99,   105,     0,     0,   111,   113,   110,
     118,     0,    28,    64,   124,   117,   122,     0,     0,    23,
      24,    25,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,   220,   221,   222,     0,     0,   160,     0,     0,
      16,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   204,   198,   200,     0,
       0,   179,     0,     0,     0,   184,     0,     0,   155,   162,
     157,   163,   142,     0,   144,     0,     0,     0,   140,   135,
       0,   134,     0,     0,   100,   114,     0,   106,     0,   119,
     194,     0,     0,   196,     0,     0,     0,     0,     0,     0,
       0,     0,   219,   223,     5,     0,   162,   161,     0,    15,
      12,     0,    20,     0,    14,    61,    31,    32,    33,    35,
      36,    38,    39,    43,    44,    42,    41,    46,    47,    49,
      51,    53,    55,    57,     0,    63,     0,   187,   177,     0,
     180,   183,   185,   172,     0,     0,   166,     0,     0,   164,
       0,     0,   152,   154,   159,   137,     0,     0,   141,   136,
     112,   115,     0,    27,     0,     0,   195,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    13,     0,    11,     0,
     186,   178,   181,     0,   173,   165,   170,   167,   174,     0,
     168,     0,     0,   138,   139,   205,   207,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   208,     0,    21,    59,
     182,   175,   171,   169,     0,   210,     0,     0,     0,     0,
     215,     0,     0,     0,     0,    18,     0,   206,   213,   212,
     211,     0,   217,   216,     0,   209,    19,     0,   218,   214
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -301,  -301,  -301,  -301,  -301,   -14,   -94,   101,   102,    81,
      98,   148,   187,   188,   183,   190,  -301,   -42,   -68,  -108,
     -44,   -33,     2,  -301,   343,  -301,   181,  -301,  -301,   334,
     -61,   -63,  -301,   158,  -301,   358,   -74,    65,  -301,   -19,
     -28,   -26,   -53,   -66,  -301,   189,  -301,  -150,  -139,  -217,
     -67,    84,  -300,  -301,   195,   -83,  -301,   -20,  -301,   294,
    -301,  -301,  -301,  -301,  -301,   388,  -301,  -301
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   115,   116,   117,   281,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     174,    26,    70,    44,    45,    28,    29,    30,    31,    78,
      79,    80,   166,   167,    32,    59,    60,    33,    34,    61,
      47,    48,    64,   314,   153,   154,   155,   198,   315,   241,
     231,   232,   233,   234,   235,   134,   135,   136,   137,   138,
     139,   140,   141,   142,    35,    36,    37,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     145,   146,    27,   195,   196,   181,   159,   152,    46,   353,
      40,   176,   240,    69,   162,   223,    63,   164,   169,    38,
      75,   160,   319,   189,    58,    51,    71,   229,   261,   230,
      49,    50,   262,    58,   133,    53,    54,    27,    88,   147,
      57,   173,    40,    40,   311,    58,    90,    40,    76,   197,
     244,    90,   148,   209,   210,    65,   245,    40,   277,   319,
     187,   168,   173,   275,    83,   237,    66,    40,   225,   172,
     196,    42,   224,    41,   196,   151,   145,   264,   265,   226,
     268,    42,   271,   179,   180,   172,   183,    39,   246,   175,
     172,    43,   253,    52,   260,   283,   353,   176,   259,    86,
     164,   263,   177,   247,   133,    41,   236,    62,   237,    73,
      41,    74,   286,   287,   288,   197,   304,    81,    42,   197,
     236,   255,   237,   173,   256,   239,    68,   165,    42,    87,
      41,   184,   238,   225,   282,   257,   225,   285,    42,    62,
     185,    81,    81,    81,   273,   225,    81,   339,    22,    23,
      24,   172,   225,   225,   274,   269,   369,   305,   225,   338,
     225,   341,   191,   374,   389,   145,   310,   334,   349,   318,
      42,   276,   335,   225,   343,   346,   186,    81,   225,   326,
     225,   347,   327,   336,   345,   306,   348,   173,   188,   320,
     225,   321,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     239,    75,   386,   391,   331,   172,   173,   394,   225,   225,
     190,    62,   404,   225,   407,    87,    81,   192,   225,   368,
     225,   371,   373,    77,   375,    84,    85,   168,   151,   170,
     171,   145,   352,    81,   172,   151,   275,    81,   237,   276,
     193,   365,   366,   362,   359,   211,   212,    77,    77,    77,
     376,   205,    77,   219,   172,   220,   393,   221,   199,   200,
     201,   213,   214,   215,   222,   216,   145,   151,   242,   378,
     243,   401,   217,   218,   385,   145,   380,   308,   309,   390,
     206,   207,   208,    77,   293,   294,   295,   296,   395,   396,
     248,   397,   249,   398,   399,   400,   258,   379,   402,   403,
     289,   290,    87,   291,   292,   297,   298,   266,   270,   278,
     272,   408,   151,   202,   409,   203,   279,   204,   145,   352,
     284,   307,   324,   325,   328,   172,   329,   332,   333,   342,
     344,   350,    77,    91,     1,    92,    93,    94,    95,    96,
     354,   355,    97,    98,    99,   356,   357,   363,   364,    77,
     381,   382,   384,    77,   383,   387,   388,   299,   100,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   101,   102,   103,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   104,   405,   105,   106,
     107,   108,   109,   110,   111,   302,   112,   300,    89,   301,
     161,    67,   113,   303,   330,    82,    91,     1,    92,    93,
      94,    95,    96,    56,   114,    97,    98,    99,   377,   312,
       0,   228,   323,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   101,   102,   103,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   104,
       0,   105,   106,   107,   108,   109,   110,   111,     0,   112,
       0,     0,     0,     0,    67,   227,     0,     0,     0,   143,
       1,    92,    93,    94,    95,    96,     0,   114,    97,    98,
      99,     0,   143,     0,    92,    93,    94,    95,    96,     0,
       0,    97,    98,    99,   100,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   100,     0,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
     267,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   194,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    91,     0,
      92,    93,    94,    95,    96,     0,     0,    97,    98,    99,
       0,     0,     0,    67,     0,   143,     0,    92,    93,    94,
      95,    96,     0,   100,    97,    98,    99,    68,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,   143,
     100,    92,    93,    94,    95,    96,     0,     0,    97,    98,
      99,   104,     0,   105,   106,   107,   108,   109,   110,   111,
       0,   112,     0,     0,   100,   143,    67,    92,    93,    94,
      95,    96,     0,     0,    97,    98,    99,     0,   112,   114,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,   337,     0,     0,     0,
       0,     0,   112,     0,     0,     0,    40,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,   370,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
     313,   237,     0,     0,     0,     0,   143,    42,    92,    93,
      94,    95,    96,     0,     0,    97,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,   143,   156,    92,    93,    94,    95,    96,
       0,     0,    97,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,   100,     0,
       0,   250,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,   157,     0,     0,     0,     0,   158,     0,     0,
       0,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,   251,
       0,     0,     1,   143,   252,    92,    93,    94,    95,    96,
       0,     0,    97,    98,    99,   143,     0,    92,    93,    94,
      95,    96,     0,     0,    97,    98,    99,     0,   100,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    13,     0,
     100,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,   143,     0,    92,    93,    94,    95,
      96,     0,     1,    97,    98,    99,   112,     0,     0,   316,
     163,     0,     0,     0,   317,     0,     0,     0,   112,   100,
       0,   360,     0,     0,     0,     0,   361,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,   112,     1,   229,
       0,   230,   144,   351,   275,   313,   237,     0,     0,     0,
       0,   143,    42,    92,    93,    94,    95,    96,     0,     0,
      97,    98,    99,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,     0,   100,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
     143,     0,    92,    93,    94,    95,    96,     0,     0,    97,
      98,    99,     0,     0,     0,     0,   254,     0,     0,     0,
       0,     0,     0,     0,   112,   100,   229,     0,   230,   144,
     406,   143,     0,    92,    93,    94,    95,    96,     0,     0,
      97,    98,    99,     0,   143,     0,    92,    93,    94,    95,
      96,     0,     0,    97,    98,    99,   100,     0,     0,     0,
       0,     0,     0,   112,     0,   229,     0,   230,   144,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,    92,    93,    94,    95,    96,     0,     1,    97,
      98,    99,     0,     0,   112,     0,     0,     0,     0,   144,
       0,     0,     0,     0,     0,   100,     0,   112,     0,     0,
       0,     0,   344,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     149,     1,     0,   112,   280,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,    67,    92,    93,    94,    95,
      96,     0,     0,    97,    98,    99,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,   100,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,   143,     0,    92,    93,
      94,    95,    96,     0,   150,    97,    98,    99,     1,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   367,     0,
     143,   100,    92,    93,    94,    95,    96,     0,     0,    97,
      98,    99,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,   100,     0,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   112,
     372,   143,     1,    92,    93,    94,    95,    96,     0,     0,
      97,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   392,     0,   100,     0,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    13,     0,
       1,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,   143,     0,    92,    93,    94,
      95,    96,     0,   358,    97,    98,    99,   143,     0,    92,
      93,    94,    95,    96,     0,     0,    97,    98,    99,     0,
     100,     0,     0,     0,   143,     0,    92,    93,    94,    95,
      96,     0,   100,    97,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,     0,     0,   100,
     143,     0,    92,    93,    94,    95,    96,     0,   112,    97,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,    55,     0,     0,   100,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   182,     1,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   322,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     1,     0,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      68,    68,     0,   111,   112,    99,    74,    73,    27,   309,
       3,    85,   151,    46,    77,    25,    42,    78,    81,     3,
      48,    74,   239,   106,     7,     3,    46,    68,   178,    70,
      28,    29,   182,     7,    67,    33,    34,    35,    64,    72,
      71,    83,     3,     3,    85,     7,    65,     3,    71,   112,
      67,    70,    72,    77,    78,    73,    73,     3,   197,   276,
     104,    80,   104,    66,    85,    68,    84,     3,    73,    83,
     178,    74,    82,    66,   182,    73,   144,   185,   186,    84,
     188,    74,   190,    97,    98,    99,   100,    71,   156,    72,
     104,    84,   160,    71,   177,   203,   396,   171,    72,    67,
     161,   184,    83,   156,   137,    66,    66,    42,    68,    66,
      66,    68,   206,   207,   208,   178,   224,    52,    74,   182,
      66,   165,    68,   165,    73,   151,    85,    83,    74,    64,
      66,    83,   151,    73,   202,    84,    73,   205,    74,    74,
      66,    76,    77,    78,    84,    73,    81,    84,    52,    53,
      54,   165,    73,    73,    67,   188,    84,   225,    73,   267,
      73,   269,     3,    84,    84,   233,   233,    67,    83,   237,
      74,   197,    67,    73,    67,    67,    66,   112,    73,   247,
      73,    73,   250,   266,   278,   229,    69,   229,    66,    66,
      73,    68,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     236,   239,    67,    67,   258,   229,   258,    67,    73,    73,
      66,   156,    67,    73,    67,   160,   161,    84,    73,   337,
      73,   339,   340,    52,   342,    72,    73,   256,   236,    72,
      73,   309,   309,   178,   258,   243,    66,   182,    68,   275,
      84,   334,   335,   321,   320,    15,    16,    76,    77,    78,
     343,    26,    81,    79,   278,    80,   374,    81,    11,    12,
      13,    17,    18,    19,    24,    21,   344,   275,    67,   347,
      73,   389,    22,    23,   367,   353,   353,    72,    73,   372,
      74,    75,    76,   112,   213,   214,   215,   216,    72,    73,
      69,   384,    69,   386,   387,   388,    83,   349,   391,   392,
     209,   210,   247,   211,   212,   217,   218,    83,    60,    67,
      84,   404,   320,    66,   407,    68,     3,    70,   396,   396,
       3,     3,     3,    69,    69,   349,    69,    67,    67,    66,
      71,    69,   161,     3,     4,     5,     6,     7,     8,     9,
      67,    67,    12,    13,    14,    69,    69,    69,    69,   178,
      67,    69,    57,   182,    69,    67,    67,   219,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    84,    58,    59,
      60,    61,    62,    63,    64,   222,    66,   220,    65,   221,
      76,    71,    72,   223,   256,    57,     3,     4,     5,     6,
       7,     8,     9,    35,    84,    12,    13,    14,   344,   234,
      -1,   137,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    84,    12,    13,
      14,    -1,     3,    -1,     5,     6,     7,     8,     9,    -1,
      -1,    12,    13,    14,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    28,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      84,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    84,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     3,    -1,
       5,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      -1,    -1,    -1,    71,    -1,     3,    -1,     5,     6,     7,
       8,     9,    -1,    28,    12,    13,    14,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,     3,
      28,     5,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      -1,    66,    -1,    -1,    28,     3,    71,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    -1,    66,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    84,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    -1,    -1,    -1,    -1,     3,    74,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,     3,    31,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,
      -1,    -1,     4,     3,    74,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,     3,    -1,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    -1,    28,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      28,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,     3,    -1,     5,     6,     7,     8,
       9,    -1,     4,    12,    13,    14,    66,    -1,    -1,    69,
      72,    -1,    -1,    -1,    74,    -1,    -1,    -1,    66,    28,
      -1,    69,    -1,    -1,    -1,    -1,    74,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    66,     4,    68,
      -1,    70,    71,    72,    66,    67,    68,    -1,    -1,    -1,
      -1,     3,    74,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    28,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
       3,    -1,     5,     6,     7,     8,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    28,    68,    -1,    70,    71,
      72,     3,    -1,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,     3,    -1,     5,     6,     7,     8,
       9,    -1,    -1,    12,    13,    14,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    -1,    70,    71,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    -1,     4,    12,
      13,    14,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    66,    -1,    -1,
      -1,    -1,    71,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       3,     4,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    71,     5,     6,     7,     8,
       9,    -1,    -1,    12,    13,    14,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    28,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,     3,    -1,     5,     6,
       7,     8,     9,    -1,    67,    12,    13,    14,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
       3,    28,     5,     6,     7,     8,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    28,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    66,
      67,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
       4,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    -1,    67,    12,    13,    14,     3,    -1,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      28,    -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    -1,    28,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    -1,    -1,    28,
       3,    -1,     5,     6,     7,     8,     9,    -1,    66,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,     0,    -1,    -1,    28,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    66,     4,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     4,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   107,   108,   111,   112,
     113,   114,   120,   123,   124,   150,   151,   152,     3,    71,
       3,    66,    74,    84,   109,   110,   125,   126,   127,   108,
     108,     3,    71,   108,   108,     0,   151,    71,     7,   121,
     122,   125,   123,   127,   128,    73,    84,    71,    85,   107,
     108,   143,   153,    66,    68,   126,    71,   112,   115,   116,
     117,   123,   121,    85,    72,    73,    67,   123,   127,   110,
     125,     3,     5,     6,     7,     8,     9,    12,    13,    14,
      28,    41,    42,    43,    56,    58,    59,    60,    61,    62,
      63,    64,    66,    72,    84,    87,    88,    89,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   107,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     3,    71,   104,   136,   107,   143,     3,
      67,   108,   129,   130,   131,   132,    31,    69,    74,   104,
     128,   115,   117,    72,   116,    83,   118,   119,   125,   117,
      72,    73,    91,   103,   106,    72,   122,    83,    66,    91,
      91,    92,    66,    91,    83,    66,    66,   106,    66,   141,
      66,     3,    84,    84,    84,   105,   105,   117,   133,    11,
      12,    13,    66,    68,    70,    26,    74,    75,    76,    77,
      78,    15,    16,    17,    18,    19,    21,    22,    23,    79,
      80,    81,    24,    25,    82,    73,    84,    72,   145,    68,
      70,   136,   137,   138,   139,   140,    66,    68,   125,   127,
     134,   135,    67,    73,    67,    73,   104,   128,    69,    69,
      31,    69,    74,   104,    72,   106,    73,    84,    83,    72,
     141,   133,   133,   141,   105,   105,    83,    84,   105,   107,
      60,   105,    84,    84,    67,    66,   127,   134,    67,     3,
      67,    90,   104,   105,     3,   104,    92,    92,    92,    93,
      93,    94,    94,    95,    95,    95,    95,    96,    96,    97,
      98,    99,   100,   101,   105,   104,   106,     3,    72,    73,
     136,    85,   140,    67,   129,   134,    69,    74,   104,   135,
      66,    68,    27,   131,     3,    69,   104,   104,    69,    69,
     119,   106,    67,    67,    67,    67,   141,    84,   105,    84,
      84,   105,    66,    67,    71,    92,    67,    73,    69,    83,
      69,    72,   136,   138,    67,    67,    69,    69,    67,   129,
      69,    74,   104,    69,    69,   141,   141,    67,   105,    84,
      84,   105,    67,   105,    84,   105,   141,   137,   104,   103,
     136,    67,    69,    69,    57,   141,    67,    67,    67,    84,
     141,    67,    67,   105,    67,    72,    73,   141,   141,   141,
     141,   105,   141,   141,    67,    84,    72,    67,   141,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    91,    91,    91,    91,    91,    92,    92,
      93,    93,    93,    93,    94,    94,    94,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   114,   114,   115,   115,   116,   117,   117,   117,
     117,   118,   118,   119,   119,   119,   120,   120,   120,   120,
     120,   121,   121,   122,   122,   123,   123,   123,   124,   125,
     125,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   132,   132,
     133,   133,   134,   134,   134,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   136,   136,   136,   137,
     137,   137,   137,   138,   139,   139,   140,   140,   141,   141,
     141,   141,   141,   141,   142,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   149,
     149,   149,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   153
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     3,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     3,     1,     2,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     2,     1,     1,     1,     2,     3,     1,     2,     1,
       2,     1,     3,     1,     2,     3,     4,     5,     5,     6,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     3,     3,     4,     4,     5,     5,     6,     6,
       4,     5,     4,     3,     4,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     2,     1,     3,
       1,     2,     1,     1,     2,     3,     2,     3,     3,     4,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       2,     3,     4,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     1,
       2,     1,     1,     1,     2,     5,     7,     5,     5,     7,
       6,     7,     7,     7,     9,     6,     7,     7,     8,     3,
       2,     2,     2,     3,     1,     2,     1,     1,     3,     4,
       1,     2
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

#line 1925 "parserNuevecito.tab.c"

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
#line 463 "parserNuevecito.y"


int main(int argc, char **argv) {

	// #ifdef YYDEBUG
  	// 	yydebug = 1;
	// #endif

    FILE* source_file = fopen("prueba.c", "r");
    // source_file = new_file;
    yyin = source_file;
	
  	yyparse();
	/* printf("yysymbol_kind_t: %d", yysymbol_kind_t); */
	/* printf("yytext: %s\n",yytext); */
	return 0;
}

int yyerror(const char *str) {
    fprintf(stderr, "error: %s, line %d, column %d\n", str, yylineno, column);
}
