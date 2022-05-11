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
    IDENTIFIER = 258,
    TYPEDEF_NAME = 259,
    INTEGER_CONSTANT = 260,
    FLOATING_CONSTANT = 261,
    ENUMERATION_CONSTANT = 262,
    CHARACTER_CONSTANT = 263,
    STRING_LITERAL = 264,
    PTR_OP = 265,
    INC_OP = 266,
    DEC_OP = 267,
    UNARY_OP = 268,
    LEFT_SHIFT = 269,
    RIGHT_SHIFT = 270,
    LE = 271,
    GE = 272,
    GREATER_OP = 273,
    HEADER_NAME = 274,
    LOWER_OP = 275,
    EQ = 276,
    NOT_EQ = 277,
    LOGICAL_AND = 278,
    LOGICAL_OR = 279,
    ASSIGNMENT_OPERATOR = 280,
    ELLIPSIS = 281,
    SIZEOF = 282,
    TYPEDEF = 283,
    EXTERN = 284,
    STATIC = 285,
    AUTO = 286,
    REGISTER = 287,
    VOID = 288,
    CHAR = 289,
    SHORT = 290,
    INT = 291,
    LONG = 292,
    FLOAT = 293,
    DOUBLE = 294,
    DEFAULT = 295,
    IF = 296,
    SWITCH = 297,
    SIGNED = 298,
    UNSIGNED = 299,
    _BOOL = 300,
    _COMPLEX = 301,
    _IMAGINARY = 302,
    STRUCT = 303,
    UNION = 304,
    ENUM = 305,
    CONST = 306,
    RESTRICT = 307,
    VOLATILE = 308,
    INLINE = 309,
    CASE = 310,
    ELSE = 311,
    FOR = 312,
    DO = 313,
    WHILE = 314,
    GOTO = 315,
    CONTINUE = 316,
    BREAK = 317,
    RETURN = 318
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
#define YYLAST   1516

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  410

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
       2,     2,     2,     2,     2,     2,     2,    75,    78,     2,
      65,    66,    73,    76,    72,    77,    69,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    83,
       2,    84,     2,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    80,    71,     2,     2,     2,     2,
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
       0,    31,    31,    32,    33,    34,    38,    39,    40,    41,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      58,    59,    63,    64,    65,    66,    67,    68,    72,    73,
      77,    78,    79,    80,    84,    85,    86,    90,    91,    92,
      96,    97,    98,    99,   100,   104,   105,   106,   110,   111,
     115,   116,   120,   121,   125,   126,   130,   131,   135,   136,
     140,   141,   145,   146,   150,   154,   155,   159,   160,   161,
     162,   163,   164,   165,   166,   170,   171,   175,   176,   180,
     181,   182,   183,   184,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   206,
     207,   208,   212,   213,   217,   218,   222,   226,   227,   228,
     229,   233,   234,   238,   239,   240,   244,   245,   246,   247,
     248,   252,   253,   257,   258,   262,   263,   264,   268,   272,
     273,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   294,   295,   296,   297,   301,
     302,   306,   307,   311,   312,   316,   317,   318,   322,   323,
     327,   328,   332,   333,   334,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   353,   354,   355,   359,
     360,   361,   362,   366,   370,   371,   375,   376,   380,   381,
     382,   383,   384,   385,   389,   390,   391,   395,   396,   400,
     401,   405,   406,   410,   411,   415,   416,   417,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   436,
     437,   438,   439,   440,   444,   445,   449,   450,   454,   455,
     459,   460
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPEDEF_NAME",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "ENUMERATION_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "PTR_OP", "INC_OP", "DEC_OP",
  "UNARY_OP", "LEFT_SHIFT", "RIGHT_SHIFT", "LE", "GE", "GREATER_OP",
  "HEADER_NAME", "LOWER_OP", "EQ", "NOT_EQ", "LOGICAL_AND", "LOGICAL_OR",
  "ASSIGNMENT_OPERATOR", "ELLIPSIS", "SIZEOF", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "VOID", "CHAR", "SHORT", "INT", "LONG",
  "FLOAT", "DOUBLE", "DEFAULT", "IF", "SWITCH", "SIGNED", "UNSIGNED",
  "_BOOL", "_COMPLEX", "_IMAGINARY", "STRUCT", "UNION", "ENUM", "CONST",
  "RESTRICT", "VOLATILE", "INLINE", "CASE", "ELSE", "FOR", "DO", "WHILE",
  "GOTO", "CONTINUE", "BREAK", "RETURN", "\"then\"", "'('", "')'", "'['",
  "']'", "'.'", "'{'", "'}'", "','", "'*'", "'/'", "'%'", "'+'", "'-'",
  "'&'", "'^'", "'|'", "'?'", "':'", "';'", "'='", "$accept",
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
     315,   316,   317,   318,   319,    40,    41,    91,    93,    46,
     123,   125,    44,    42,    47,    37,    43,    45,    38,    94,
     124,    63,    58,    59,    61
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
    1441,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,     9,  -301,  -301,  -301,  -301,  -301,    16,  1441,  1441,
    -301,    21,  -301,  1441,  1441,  1368,  -301,  -301,   -38,    40,
    -301,    95,    14,  -301,   -30,  -301,   534,   -40,     7,  -301,
    -301,    -6,  1463,  -301,  -301,  -301,  -301,    40,    18,   164,
    -301,    39,  -301,  -301,    14,    95,  -301,   340,   707,  -301,
      16,  -301,  1047,  1100,   762,   -40,  1463,  1463,   838,  -301,
      45,  1463,   168,  1275,  -301,    22,  -301,  -301,  -301,  -301,
      47,    68,  -301,  -301,  -301,  -301,  -301,  1326,  1326,  1275,
    1343,   138,    -9,    75,  1275,   121,   586,   162,   243,   178,
     180,   491,  1224,  -301,  -301,  -301,  -301,   258,   240,  -301,
     217,   179,   268,   255,   266,   189,   195,   198,   257,    30,
    -301,  -301,    52,  -301,  -301,  -301,  -301,   409,  -301,  -301,
    -301,  -301,  -301,  -301,  1004,  -301,  -301,  -301,  -301,  -301,
    -301,    55,   234,   230,  -301,    82,  1314,  -301,   238,   247,
     773,   953,  -301,  -301,  -301,  1275,    61,  -301,   235,  -301,
    -301,    38,  -301,  -301,  -301,  -301,  -301,   586,  1224,  -301,
    -301,  -301,  1224,  -301,   586,  1275,  1275,   236,   478,   260,
    1275,   233,  -301,  -301,  -301,    64,   101,   -10,   254,   323,
    -301,  -301,  1113,  1275,   327,  1275,  1275,  1275,  1275,  1275,
    1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,
    1275,  1275,  1275,  1275,  1275,  1275,  -301,  -301,  -301,  1275,
     328,  -301,   223,   707,   -41,  -301,   693,   842,  -301,    41,
    -301,     6,  -301,  1405,  -301,   329,   265,  1314,  -301,  -301,
    1275,  -301,   269,   270,  -301,  -301,    45,  -301,  1275,  -301,
    -301,   273,   274,  -301,   104,   106,   586,   603,    66,   626,
     271,   108,  -301,  -301,  -301,   899,   183,  -301,  1037,  -301,
    -301,   109,  -301,    58,  -301,  -301,  -301,  -301,  -301,   217,
     217,   179,   179,   268,   268,   268,   268,   255,   255,   266,
     189,   195,   198,   257,   -32,  -301,   282,  -301,  -301,   889,
    -301,  -301,  -301,  -301,   275,   288,  -301,   287,   289,     6,
    1262,   853,  -301,  -301,  -301,  -301,   290,   292,  -301,  -301,
    -301,  -301,   264,   264,   586,   586,  -301,  1156,    73,   652,
    1179,    80,  1275,   586,  1004,  -301,  -301,  1275,  -301,  1275,
    -301,  -301,  -301,   707,  -301,  -301,  -301,  -301,  -301,   295,
    -301,   294,   296,  -301,  -301,   300,  -301,   586,   146,   299,
     330,    81,   586,   147,  1190,   151,  -301,   225,  -301,  -301,
    -301,  -301,  -301,  -301,   586,  -301,   586,   586,   586,  1275,
    -301,   586,   586,   156,   283,  -301,   968,  -301,  -301,  -301,
    -301,   158,  -301,  -301,   586,  -301,  -301,   586,  -301,  -301
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
    -301,  -301,  -301,  -301,  -301,   -14,   -94,    89,    99,   -25,
      96,   185,   186,   187,   197,   184,  -301,   -42,   -68,  -108,
     -44,   -33,     2,  -301,   344,  -301,   181,  -301,  -301,   348,
     -61,   -63,  -301,   169,  -301,   369,   -74,    65,  -301,   -19,
     -28,   -26,   -53,   -66,  -301,   188,  -301,   -20,  -129,  -224,
     -67,    83,  -300,  -301,   194,   -83,  -301,   -13,  -301,   293,
    -301,  -301,  -301,  -301,  -301,   394,  -301,  -301
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
      40,   176,    38,    69,   162,   319,    63,   164,   169,    40,
      75,   160,   240,   189,    51,    73,   229,    74,   230,    58,
      49,    50,    57,    71,   133,    53,    54,    27,    88,   147,
     225,   173,    65,   311,    40,    58,    90,    58,    40,   197,
     349,    90,   319,    66,   223,   275,   185,   237,    40,   148,
     187,   168,   173,    42,    76,    22,    23,    24,   277,   172,
     196,   320,    41,   321,   196,   151,   145,   264,   265,    39,
     268,    41,   271,   179,   180,   172,   183,    42,   246,    42,
     172,    52,   253,   175,   260,   283,   353,   176,    40,    43,
     164,   263,    83,   247,   133,    86,   236,    62,   237,   259,
      41,   224,   286,   287,   288,   197,   304,    81,    42,   197,
     236,   255,   237,   173,   225,   239,   348,   165,    42,    87,
     225,    68,   238,   256,   282,   226,   225,   285,   225,    62,
     186,    81,    81,    81,   257,   225,    81,   273,   244,   339,
     177,   172,   225,   225,   245,   269,   369,   305,   261,   338,
      41,   341,   262,   374,   389,   145,   310,   274,    42,   318,
     334,   276,   335,   225,   343,   346,   225,    81,   225,   326,
     225,   347,   327,   336,   345,   306,   188,   173,   293,   294,
     295,   296,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     239,    75,   386,   391,   331,   172,   173,   394,   225,   225,
     184,    62,   404,   225,   407,    87,    81,   190,   225,   368,
     225,   371,   373,    77,   375,    84,    85,   168,   151,   170,
     171,   145,   352,    81,   172,   151,   191,    81,   275,   276,
     237,   365,   366,   362,   359,   209,   210,    77,    77,    77,
     376,   192,    77,   193,   172,   205,   393,   219,   199,   200,
     201,   213,   214,   215,   220,   216,   145,   151,   221,   378,
     222,   401,   211,   212,   385,   145,   380,   217,   218,   390,
     206,   207,   208,    77,   308,   309,   395,   396,   289,   290,
     242,   397,   243,   398,   399,   400,   248,   379,   402,   403,
     291,   292,    87,   297,   298,   249,   272,   258,   266,   270,
     278,   408,   151,   202,   409,   203,   279,   204,   145,   352,
     284,   307,   324,   325,   344,   172,   342,   328,   329,   332,
     333,   354,    77,    91,     1,    92,    93,    94,    95,    96,
     350,    97,    98,    99,   355,   356,   384,   357,   363,    77,
     364,   381,   382,    77,   383,   387,   405,   100,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     101,   102,   103,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   104,   388,   105,   106,   107,
     108,   109,   110,   111,   299,   112,   300,   303,   301,    89,
      67,   113,    91,     1,    92,    93,    94,    95,    96,   302,
      97,    98,    99,   114,   161,   330,    82,   377,   312,    56,
     228,   323,     0,     0,     0,     0,   100,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   101,
     102,   103,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   104,     0,   105,   106,   107,   108,
     109,   110,   111,     0,   112,     0,     0,     0,     0,    67,
     227,   143,     1,    92,    93,    94,    95,    96,     0,    97,
      98,    99,   114,     0,   143,     0,    92,    93,    94,    95,
      96,     0,    97,    98,    99,   100,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   100,     0,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,   267,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   194,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    91,
       0,    92,    93,    94,    95,    96,     0,    97,    98,    99,
       0,     0,     0,     0,    67,     0,   143,     0,    92,    93,
      94,    95,    96,   100,    97,    98,    99,     0,    68,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,   143,
     100,    92,    93,    94,    95,    96,     0,    97,    98,    99,
       0,   104,     0,   105,   106,   107,   108,   109,   110,   111,
       0,   112,     0,   100,     0,   143,    67,    92,    93,    94,
      95,    96,     0,    97,    98,    99,     0,     0,   112,   114,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,   337,     0,     0,     0,
       0,   112,     0,     0,     0,     0,    40,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
     143,     0,    92,    93,    94,    95,    96,   112,    97,    98,
      99,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,   100,   370,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,   313,
     237,     0,     0,     0,     0,   143,    42,    92,    93,    94,
      95,    96,   112,    97,    98,    99,   143,   144,    92,    93,
      94,    95,    96,     0,    97,    98,    99,     0,     0,   100,
       0,     0,   156,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,   250,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,   112,     0,     0,
     157,     0,     0,     0,     0,   158,     0,     0,   112,     0,
       0,   251,     1,     0,     0,   143,   252,    92,    93,    94,
      95,    96,     0,    97,    98,    99,   143,     0,    92,    93,
      94,    95,    96,     0,    97,    98,    99,     0,     0,   100,
       0,     7,     8,     9,    10,    11,    12,    13,     0,     0,
     100,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   143,     0,    92,    93,    94,    95,    96,     0,
      97,    98,    99,     1,     0,     0,     0,   112,     0,   163,
     316,     0,     0,     0,     0,   317,   100,     0,   112,     0,
       0,   360,     0,     0,     0,     0,   361,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   112,     0,   229,     1,   230,   144,
     351,     0,     0,     0,   275,   313,   237,     0,     0,     0,
       0,   143,    42,    92,    93,    94,    95,    96,     0,    97,
      98,    99,     0,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    13,     0,     0,   100,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   143,     0,    92,
      93,    94,    95,    96,     0,    97,    98,    99,     0,     0,
       0,     0,     0,     0,   254,     0,     0,     0,     0,     0,
       0,   100,     0,   112,     0,   229,     0,   230,   144,   406,
     143,     0,    92,    93,    94,    95,    96,     0,    97,    98,
      99,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,   112,
       0,   229,     0,   230,   144,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   112,   149,     1,     0,     0,   344,     0,     0,
       0,     0,     0,     0,     0,     0,   143,    67,    92,    93,
      94,    95,    96,     0,    97,    98,    99,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     100,     0,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,   143,
       0,    92,    93,    94,    95,    96,   150,    97,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   280,
       0,     0,   143,   100,    92,    93,    94,    95,    96,     0,
      97,    98,    99,   143,     0,    92,    93,    94,    95,    96,
       0,    97,    98,    99,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,   112,   367,     0,     0,     0,     0,   143,     1,    92,
      93,    94,    95,    96,     0,    97,    98,    99,     0,     0,
       0,     0,     0,     0,   112,   372,     0,     0,     0,     0,
       0,   100,     0,     0,     0,   112,   392,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   143,     0,
      92,    93,    94,    95,    96,     0,    97,    98,    99,   112,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   100,     0,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   143,     0,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   358,   143,
       0,    92,    93,    94,    95,    96,     0,    97,    98,    99,
     112,   100,     0,     0,     0,     0,   143,     0,    92,    93,
      94,    95,    96,   100,    97,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    55,     0,
     100,     0,     1,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   178,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   182,     1,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,   322,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     1,     0,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
      68,    68,     0,   111,   112,    99,    74,    73,    27,   309,
       3,    85,     3,    46,    77,   239,    42,    78,    81,     3,
      48,    74,   151,   106,     3,    65,    67,    67,    69,     7,
      28,    29,    70,    46,    67,    33,    34,    35,    64,    72,
      72,    83,    72,    84,     3,     7,    65,     7,     3,   112,
      82,    70,   276,    83,    24,    65,    65,    67,     3,    72,
     104,    80,   104,    73,    70,    51,    52,    53,   197,    83,
     178,    65,    65,    67,   182,    73,   144,   185,   186,    70,
     188,    65,   190,    97,    98,    99,   100,    73,   156,    73,
     104,    70,   160,    71,   177,   203,   396,   171,     3,    83,
     161,   184,    84,   156,   137,    66,    65,    42,    67,    71,
      65,    81,   206,   207,   208,   178,   224,    52,    73,   182,
      65,   165,    67,   165,    72,   151,    68,    82,    73,    64,
      72,    84,   151,    72,   202,    83,    72,   205,    72,    74,
      65,    76,    77,    78,    83,    72,    81,    83,    66,    83,
      82,   165,    72,    72,    72,   188,    83,   225,   178,   267,
      65,   269,   182,    83,    83,   233,   233,    66,    73,   237,
      66,   197,    66,    72,    66,    66,    72,   112,    72,   247,
      72,    72,   250,   266,   278,   229,    65,   229,   213,   214,
     215,   216,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     236,   239,    66,    66,   258,   229,   258,    66,    72,    72,
      82,   156,    66,    72,    66,   160,   161,    65,    72,   337,
      72,   339,   340,    52,   342,    71,    72,   256,   236,    71,
      72,   309,   309,   178,   258,   243,     3,   182,    65,   275,
      67,   334,   335,   321,   320,    76,    77,    76,    77,    78,
     343,    83,    81,    83,   278,    25,   374,    78,    10,    11,
      12,    16,    17,    18,    79,    20,   344,   275,    80,   347,
      23,   389,    14,    15,   367,   353,   353,    21,    22,   372,
      73,    74,    75,   112,    71,    72,    71,    72,   209,   210,
      66,   384,    72,   386,   387,   388,    68,   349,   391,   392,
     211,   212,   247,   217,   218,    68,    83,    82,    82,    59,
      66,   404,   320,    65,   407,    67,     3,    69,   396,   396,
       3,     3,     3,    68,    70,   349,    65,    68,    68,    66,
      66,    66,   161,     3,     4,     5,     6,     7,     8,     9,
      68,    11,    12,    13,    66,    68,    56,    68,    68,   178,
      68,    66,    68,   182,    68,    66,    83,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    66,    57,    58,    59,
      60,    61,    62,    63,   219,    65,   220,   223,   221,    65,
      70,    71,     3,     4,     5,     6,     7,     8,     9,   222,
      11,    12,    13,    83,    76,   256,    57,   344,   234,    35,
     137,   243,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    -1,    -1,    -1,    -1,    70,
      71,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    83,    -1,     3,    -1,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    83,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    83,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    70,    -1,     3,    -1,     5,     6,
       7,     8,     9,    27,    11,    12,    13,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,     3,
      27,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    -1,    27,    -1,     3,    70,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    65,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
       3,    -1,     5,     6,     7,     8,     9,    65,    11,    12,
      13,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    27,    83,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,     3,    73,     5,     6,     7,
       8,     9,    65,    11,    12,    13,     3,    70,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    65,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    65,    -1,
      -1,    68,     4,    -1,    -1,     3,    73,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,     3,    -1,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    27,
      -1,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      27,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,     4,    -1,    -1,    -1,    65,    -1,    71,
      68,    -1,    -1,    -1,    -1,    73,    27,    -1,    65,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    65,    -1,    67,     4,    69,    70,
      71,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      -1,     3,    73,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    27,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    65,    -1,    67,    -1,    69,    70,    71,
       3,    -1,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    65,
      -1,    67,    -1,    69,    70,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    65,     3,     4,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    70,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,     3,
      -1,     5,     6,     7,     8,     9,    66,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,     3,    27,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,     3,    -1,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    65,    66,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,     4,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     3,    -1,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    65,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    66,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      65,    27,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,
       7,     8,     9,    27,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,     0,    -1,
      27,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    65,     4,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     4,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   106,   107,   110,   111,
     112,   113,   119,   122,   123,   149,   150,   151,     3,    70,
       3,    65,    73,    83,   108,   109,   124,   125,   126,   107,
     107,     3,    70,   107,   107,     0,   150,    70,     7,   120,
     121,   124,   122,   126,   127,    72,    83,    70,    84,   106,
     107,   142,   152,    65,    67,   125,    70,   111,   114,   115,
     116,   122,   120,    84,    71,    72,    66,   122,   126,   109,
     124,     3,     5,     6,     7,     8,     9,    11,    12,    13,
      27,    40,    41,    42,    55,    57,    58,    59,    60,    61,
      62,    63,    65,    71,    83,    86,    87,    88,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   106,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     3,    70,   103,   135,   106,   142,     3,
      66,   107,   128,   129,   130,   131,    30,    68,    73,   103,
     127,   114,   116,    71,   115,    82,   117,   118,   124,   116,
      71,    72,    90,   102,   105,    71,   121,    82,    65,    90,
      90,    91,    65,    90,    82,    65,    65,   105,    65,   140,
      65,     3,    83,    83,    83,   104,   104,   116,   132,    10,
      11,    12,    65,    67,    69,    25,    73,    74,    75,    76,
      77,    14,    15,    16,    17,    18,    20,    21,    22,    78,
      79,    80,    23,    24,    81,    72,    83,    71,   144,    67,
      69,   135,   136,   137,   138,   139,    65,    67,   124,   126,
     133,   134,    66,    72,    66,    72,   103,   127,    68,    68,
      30,    68,    73,   103,    71,   105,    72,    83,    82,    71,
     140,   132,   132,   140,   104,   104,    82,    83,   104,   106,
      59,   104,    83,    83,    66,    65,   126,   133,    66,     3,
      66,    89,   103,   104,     3,   103,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      97,    98,    99,   100,   104,   103,   105,     3,    71,    72,
     135,    84,   139,    66,   128,   133,    68,    73,   103,   134,
      65,    67,    26,   130,     3,    68,   103,   103,    68,    68,
     118,   105,    66,    66,    66,    66,   140,    83,   104,    83,
      83,   104,    65,    66,    70,    91,    66,    72,    68,    82,
      68,    71,   135,   137,    66,    66,    68,    68,    66,   128,
      68,    73,   103,    68,    68,   140,   140,    66,   104,    83,
      83,   104,    66,   104,    83,   104,   140,   136,   103,   102,
     135,    66,    68,    68,    56,   140,    66,    66,    66,    83,
     140,    66,    66,   104,    66,    71,    72,   140,   140,   140,
     140,   104,   140,   140,    66,    83,    71,    66,   140,   140
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      95,    95,    95,    95,    95,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   106,   106,   107,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   110,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   112,
     112,   112,   113,   113,   114,   114,   115,   116,   116,   116,
     116,   117,   117,   118,   118,   118,   119,   119,   119,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   123,   124,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   135,   135,   135,   136,
     136,   136,   136,   137,   138,   138,   139,   139,   140,   140,
     140,   140,   140,   140,   141,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   146,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   148,
     148,   148,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   152
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

#line 1905 "parserNuevecito.tab.c"

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
#line 462 "parserNuevecito.y"


int main(int argc, char **argv) {
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
