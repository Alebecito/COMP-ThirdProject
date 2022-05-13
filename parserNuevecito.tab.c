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
    INTEGER_CONSTANT = 259,
    FLOATING_CONSTANT = 260,
    CHARACTER_CONSTANT = 261,
    STRING_LITERAL = 262,
    WHITESPACE = 263,
    TYPEDEF_NAME = 264,
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
union YYSTYPE
{
#line 27 "parserNuevecito.y"

#line 201 "parserNuevecito.tab.c"

};
typedef union YYSTYPE YYSTYPE;
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
#define YYLAST   1570

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  230
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  409

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
       0,    36,    36,    37,    38,    39,    43,    44,    45,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    62,
      63,    67,    68,    69,    70,    71,    72,    76,    77,    81,
      82,    83,    84,    88,    89,    90,    94,    95,    96,   100,
     101,   102,   103,   104,   108,   109,   110,   114,   115,   119,
     120,   124,   125,   129,   130,   134,   135,   139,   140,   144,
     145,   149,   150,   154,   158,   159,   163,   164,   165,   166,
     167,   168,   169,   170,   174,   175,   179,   180,   184,   185,
     186,   187,   188,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   210,   211,
     212,   216,   217,   221,   222,   226,   230,   231,   232,   233,
     237,   238,   242,   243,   244,   248,   249,   250,   251,   252,
     256,   257,   261,   262,   266,   267,   268,   272,   276,   277,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   298,   299,   300,   301,   305,   306,
     310,   311,   315,   316,   320,   321,   322,   326,   327,   331,
     332,   336,   337,   338,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   357,   358,   359,   363,   364,
     365,   366,   370,   374,   375,   379,   380,   384,   385,   386,
     387,   388,   389,   393,   394,   395,   399,   400,   404,   405,
     409,   410,   414,   415,   419,   420,   421,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   440,   441,
     442,   443,   444,   448,   449,   453,   454,   458,   459,   463,
     464
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "WHITESPACE", "TYPEDEF_NAME", "PTR_OP", "INC_OP", "DEC_OP", "UNARY_OP",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LE", "GE", "GREATER_OP", "HEADER_NAME",
  "LOWER_OP", "EQ", "NOT_EQ", "LOGICAL_AND", "LOGICAL_OR",
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

#define YYPACT_NINF (-292)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1486,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,    10,  -292,  -292,  -292,  -292,  -292,    49,  1486,  1486,
    -292,    37,  -292,  1486,  1486,  1424,  -292,  -292,   -52,    40,
    -292,    51,   102,  -292,   -53,  -292,   628,   201,    63,  -292,
    -292,   -22,  1517,  -292,  -292,  -292,  -292,    40,   -10,   -43,
    -292,    28,  -292,  -292,   102,    51,  -292,   326,   921,  -292,
      49,  -292,  1323,  1027,   742,   201,  1517,  1517,  1163,  -292,
      52,  1517,   223,  1256,  -292,     8,  -292,  -292,  -292,  -292,
      59,    69,  -292,  -292,  -292,  -292,  1273,  1273,  1256,  1300,
      95,    83,   137,  1256,   158,   519,   164,   190,   161,   174,
     530,  1130,  -292,  -292,  -292,  -292,   134,   222,  -292,   198,
     210,   284,   273,   288,   176,   213,   189,   251,    -9,  -292,
    -292,   -30,  -292,  -292,  -292,  -292,   395,  -292,  -292,  -292,
    -292,  -292,  -292,   886,  -292,  -292,  -292,  -292,  -292,  -292,
      64,   230,   229,  -292,   114,  1245,  -292,   243,   249,   770,
    1194,  -292,  -292,  -292,  1256,   -25,  -292,   239,  -292,  -292,
      21,  -292,  -292,  -292,  -292,  -292,   519,  1130,  -292,  -292,
    -292,  1130,  -292,   519,  1256,  1256,   252,   464,   265,  1256,
     253,  -292,  -292,  -292,    66,   123,   157,   274,   338,  -292,
    -292,   966,  1256,   339,  1256,  1256,  1256,  1256,  1256,  1256,
    1256,  1256,  1256,  1256,  1256,  1256,  1256,  1256,  1256,  1256,
    1256,  1256,  1256,  1256,  1256,  -292,  -292,  -292,  1256,   340,
    -292,   234,   921,    90,  -292,   685,   698,  -292,    75,  -292,
     214,  -292,  1455,  -292,   341,   277,  1245,  -292,  -292,  1256,
    -292,   278,   280,  -292,  -292,    52,  -292,  1256,  -292,  -292,
     283,   285,  -292,   128,   159,   519,   559,    88,   587,   287,
     160,  -292,  -292,  -292,   975,   215,  -292,   932,  -292,  -292,
     162,  -292,    67,  -292,  -292,  -292,  -292,  -292,   198,   198,
     210,   210,   284,   284,   284,   284,   273,   273,   288,   176,
     213,   189,   251,    17,  -292,   282,  -292,  -292,   841,  -292,
    -292,  -292,  -292,   316,   324,  -292,   325,   327,   214,  1369,
     813,  -292,  -292,  -292,  -292,   335,   337,  -292,  -292,  -292,
    -292,   322,   322,   519,   519,  -292,  1040,   100,   604,  1083,
     104,  1256,   519,   886,  -292,  -292,  1256,  -292,  1256,  -292,
    -292,  -292,   921,  -292,  -292,  -292,  -292,  -292,   328,  -292,
     342,   343,  -292,  -292,   356,  -292,   519,   167,   347,   348,
     113,   519,   171,  1096,   183,  -292,   242,  -292,  -292,  -292,
    -292,  -292,  -292,   519,  -292,   519,   519,   519,  1256,  -292,
     519,   519,   192,   332,  -292,   852,  -292,  -292,  -292,  -292,
     195,  -292,  -292,   519,  -292,  -292,   519,  -292,  -292
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,   101,
     102,     0,   124,   125,   126,   127,   226,     0,    66,    68,
      95,     0,    96,    70,    72,     0,   223,   225,   119,     0,
     130,     0,   144,    64,     0,    74,    76,   129,     0,    67,
      69,   100,     0,    71,    73,     1,   224,     0,   122,     0,
     120,     0,   148,   146,   145,     0,    65,     0,     0,   229,
       0,   227,     0,     0,     0,   128,     0,   106,     0,   103,
       0,   108,     0,     0,   115,     0,   131,   149,   147,    75,
      76,     2,     6,     7,     8,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   196,   202,     9,     3,    21,    27,    29,    33,
      36,    39,    44,    47,    49,    51,    53,    55,    57,    59,
      61,     0,   200,   201,   187,   188,     0,   198,   189,   190,
     191,   192,     2,     0,   175,    77,   230,   228,   157,   142,
     155,     0,   150,   152,     0,     0,   132,     0,     0,     0,
       0,   107,    98,   104,     0,     0,   110,   112,   109,   117,
       0,    27,    63,   123,   116,   121,     0,     0,    22,    23,
      24,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   220,   221,     0,     0,   159,     0,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,   197,   199,     0,     0,
     178,     0,     0,     0,   183,     0,     0,   154,   161,   156,
     162,   141,     0,   143,     0,     0,     0,   139,   134,     0,
     133,     0,     0,    99,   113,     0,   105,     0,   118,   193,
       0,     0,   195,     0,     0,     0,     0,     0,     0,     0,
       0,   218,   222,     5,     0,   161,   160,     0,    14,    11,
       0,    19,     0,    13,    60,    30,    31,    32,    34,    35,
      37,    38,    42,    43,    41,    40,    45,    46,    48,    50,
      52,    54,    56,     0,    62,     0,   186,   176,     0,   179,
     182,   184,   171,     0,     0,   165,     0,     0,   163,     0,
       0,   151,   153,   158,   136,     0,     0,   140,   135,   111,
     114,     0,    26,     0,     0,   194,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    12,     0,    10,     0,   185,
     177,   180,     0,   172,   164,   169,   166,   173,     0,   167,
       0,     0,   137,   138,   204,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   207,     0,    20,    58,   181,
     174,   170,   168,     0,   209,     0,     0,     0,     0,   214,
       0,     0,     0,     0,    17,     0,   205,   212,   211,   210,
       0,   216,   215,     0,   208,    18,     0,   217,   213
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -292,  -292,  -292,  -292,  -292,    -1,   -86,   107,   108,  -151,
     109,   199,   197,   200,   238,   196,  -292,   -78,   -68,   -76,
     -87,   -26,     3,  -292,   354,  -292,    -8,  -292,  -292,   345,
     -45,   -54,  -292,   206,  -292,   394,   -64,     7,  -292,   -20,
     -40,   -38,   -65,   -71,  -292,   220,  -292,    65,  -140,  -224,
     -67,   120,  -291,  -292,   231,   -83,  -292,    -7,  -292,   336,
    -292,  -292,  -292,  -292,  -292,   439,  -292,  -292
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   114,   115,   116,   280,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     173,    26,    70,    44,    45,    28,    29,    30,    31,    78,
      79,    80,   165,   166,    32,    59,    60,    33,    34,    61,
      47,    48,    64,   313,   152,   153,   154,   197,   314,   240,
     230,   231,   232,   233,   234,   133,   134,   135,   136,   137,
     138,   139,   140,   141,    35,    36,    37,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     144,   145,   151,    27,    63,   172,   158,    46,    75,   159,
     239,    58,   180,    38,   318,   222,   186,   352,    57,    65,
      69,   175,   188,   161,    58,   172,    88,   168,    84,    85,
      66,    49,    50,   163,   194,   195,    53,    54,    27,    71,
      51,   132,   224,    58,    77,    90,   146,   255,    76,    62,
      90,   318,    40,   225,    40,    40,   276,   196,   256,    81,
     167,   292,   293,   294,   295,   147,    40,    40,    77,    77,
      77,    87,   223,    77,    83,   144,   150,   254,    40,   174,
      39,    62,   171,    81,    81,    81,   172,   245,    81,   224,
     246,   252,   258,   259,    86,   178,   179,   171,   182,   348,
     262,   195,   171,    77,   352,   195,   175,    52,   263,   264,
     132,   267,   238,   270,    41,   163,    41,    41,    81,   285,
     286,   287,    42,   196,    42,    42,   282,   196,    41,   235,
     237,   236,    43,   281,   164,   347,   284,    42,   224,   224,
     235,   305,   236,    68,   198,   199,   200,   303,   184,   272,
     172,   176,    77,    22,    23,    24,   304,   228,   275,   229,
     224,   268,    62,   171,   144,   309,    87,    81,   317,    77,
     330,   338,   224,    77,   310,    42,   224,   183,   325,   172,
     243,   326,   335,   368,    81,   224,   244,   373,    81,   273,
     337,   344,   340,   190,   333,   224,   388,   238,    75,   201,
     224,   202,   185,   203,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   274,   187,   236,   334,   342,   171,   345,   189,
      42,   224,   224,   385,   346,   167,   275,   390,   150,   224,
     144,   351,   260,   224,   191,   150,   261,   204,   358,   393,
     364,   365,   361,    87,   218,   224,   171,   192,   403,   375,
     367,   406,   370,   372,   224,   374,    73,   224,    74,   220,
     378,   205,   206,   207,   221,   144,   171,   150,   377,   319,
     274,   320,   236,   384,   144,   379,   208,   209,   389,   212,
     213,   214,   219,   215,   169,   170,   241,   392,   210,   211,
     396,   242,   397,   398,   399,   307,   308,   401,   402,   216,
     217,   247,   400,   394,   395,   288,   289,   248,   290,   291,
     407,   257,   150,   408,   269,   296,   297,   144,   351,    91,
      92,    93,    94,    95,   265,     1,   271,    96,    97,    98,
     277,   278,   283,   306,   323,   324,   327,   171,   328,   331,
     349,   332,   341,    99,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   100,   101,   102,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   103,   353,   104,   105,   106,   107,   108,   109,   110,
     354,   111,   343,   355,   380,   356,    67,   112,    91,    92,
      93,    94,    95,   362,     1,   363,    96,    97,    98,   113,
     381,   382,   383,   386,   387,   404,   299,   298,   302,    89,
     300,   160,    99,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   100,   101,   102,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     103,    82,   104,   105,   106,   107,   108,   109,   110,   301,
     111,   329,   322,   376,   311,    67,   226,   142,    92,    93,
      94,    95,   227,     1,    56,    96,    97,    98,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,    91,    92,    93,    94,    95,     0,     0,   111,
      96,    97,    98,   142,    92,    93,    94,    95,     0,     0,
       0,    96,    97,    98,     0,     0,    99,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,   100,
     101,   102,   142,    92,    93,    94,    95,     0,     0,     0,
      96,    97,    98,     0,   103,     0,   104,   105,   106,   107,
     108,   109,   110,     0,   111,     0,    99,     0,     0,    67,
     142,    92,    93,    94,    95,   111,     0,     0,    96,    97,
      98,     0,   113,     0,     0,     0,     0,   142,    92,    93,
      94,    95,     0,   193,    99,    96,    97,    98,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,   336,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,   111,
     339,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,   369,    40,     0,
       0,     0,     0,     0,     1,     0,     0,     0,    67,     0,
       0,   142,    92,    93,    94,    95,     0,     0,     0,    96,
      97,    98,    68,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    99,     0,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,   142,    92,    93,    94,    95,
     235,   312,   236,    96,    97,    98,     0,     0,    42,     0,
       0,     0,     0,   111,     0,     0,   315,     0,     0,    99,
       0,   316,   155,   142,    92,    93,    94,    95,     0,     0,
       0,    96,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,     0,    99,     0,     0,
     249,     0,     0,     0,     0,     0,     0,   111,     0,     0,
     156,     0,     0,     0,     0,   157,   142,    92,    93,    94,
      95,    22,    23,    24,    96,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,     0,   250,     0,
      99,     0,     0,   251,   142,    92,    93,    94,    95,     0,
       0,     0,    96,    97,    98,   142,    92,    93,    94,    95,
       0,     0,     0,    96,    97,    98,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,    99,
       0,   359,     0,     0,     0,     0,   360,     0,     0,   142,
      92,    93,    94,    95,     0,     0,     0,    96,    97,    98,
       0,     0,     0,     0,     0,     0,   111,     0,   228,     0,
     229,   143,   350,    99,     0,     0,     0,   111,     0,   228,
       0,   229,   143,   405,   142,    92,    93,    94,    95,     0,
       0,     0,    96,    97,    98,   142,    92,    93,    94,    95,
       0,     0,     0,    96,    97,    98,     0,     0,    99,     0,
       0,   111,     0,   228,     0,   229,   143,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
      92,    93,    94,    95,     0,     0,     0,    96,    97,    98,
       0,     0,     0,     0,     1,     0,   111,     0,     0,     0,
       0,   143,     0,    99,     0,     0,     0,   111,     0,     0,
       0,     0,   343,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     148,   111,   279,     0,     0,     0,     1,     0,     0,     0,
     274,   312,   236,   142,    92,    93,    94,    95,    42,     0,
       0,    96,    97,    98,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    99,     0,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,   142,    92,    93,    94,
      95,     0,     0,   149,    96,    97,    98,     0,     0,   142,
      92,    93,    94,    95,     0,   111,   366,    96,    97,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   142,    92,    93,    94,    95,     0,     1,
       0,    96,    97,    98,     0,     0,     0,     0,   111,   371,
       0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,   111,   391,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     7,     8,     9,    10,
      11,    12,    13,     1,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,   162,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   142,    92,
      93,    94,    95,     0,     0,     0,    96,    97,    98,   142,
      92,    93,    94,    95,     0,   253,     0,    96,    97,    98,
       0,     0,    99,     0,     0,     0,   142,    92,    93,    94,
      95,     0,     0,    99,    96,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,     0,
      99,     0,     0,   142,    92,    93,    94,    95,     0,     0,
     111,    96,    97,    98,     0,     0,     0,     0,     0,     0,
       0,   111,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,   181,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,   357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     1,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,   321,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     1,     0,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     1,     0,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24
};

static const yytype_int16 yycheck[] =
{
      68,    68,    73,     0,    42,    83,    74,    27,    48,    74,
     150,     3,    98,     3,   238,    24,   103,   308,    70,    72,
      46,    85,   105,    77,     3,   103,    64,    81,    71,    72,
      83,    28,    29,    78,   110,   111,    33,    34,    35,    46,
       3,    67,    72,     3,    52,    65,    72,    72,    70,    42,
      70,   275,     3,    83,     3,     3,   196,   111,    83,    52,
      80,   212,   213,   214,   215,    72,     3,     3,    76,    77,
      78,    64,    81,    81,    84,   143,    73,   164,     3,    71,
      70,    74,    83,    76,    77,    78,   164,   155,    81,    72,
     155,   159,    71,   176,    66,    96,    97,    98,    99,    82,
     183,   177,   103,   111,   395,   181,   170,    70,   184,   185,
     136,   187,   150,   189,    65,   160,    65,    65,   111,   205,
     206,   207,    73,   177,    73,    73,   202,   181,    65,    65,
     150,    67,    83,   201,    82,    68,   204,    73,    72,    72,
      65,   228,    67,    84,    10,    11,    12,   223,    65,    83,
     228,    82,   160,    51,    52,    53,   224,    67,   196,    69,
      72,   187,   155,   164,   232,   232,   159,   160,   236,   177,
     257,    83,    72,   181,    84,    73,    72,    82,   246,   257,
      66,   249,   265,    83,   177,    72,    72,    83,   181,    66,
     266,   277,   268,     3,    66,    72,    83,   235,   238,    65,
      72,    67,    65,    69,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,    65,    65,    67,    66,    66,   228,    66,    65,
      73,    72,    72,    66,    72,   255,   274,    66,   235,    72,
     308,   308,   177,    72,    83,   242,   181,    25,   319,    66,
     333,   334,   320,   246,    78,    72,   257,    83,    66,   342,
     336,    66,   338,   339,    72,   341,    65,    72,    67,    80,
     348,    73,    74,    75,    23,   343,   277,   274,   346,    65,
      65,    67,    67,   366,   352,   352,    76,    77,   371,    16,
      17,    18,    79,    20,    71,    72,    66,   373,    14,    15,
     383,    72,   385,   386,   387,    71,    72,   390,   391,    21,
      22,    68,   388,    71,    72,   208,   209,    68,   210,   211,
     403,    82,   319,   406,    59,   216,   217,   395,   395,     3,
       4,     5,     6,     7,    82,     9,    83,    11,    12,    13,
      66,     3,     3,     3,     3,    68,    68,   348,    68,    66,
      68,    66,    65,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    66,    57,    58,    59,    60,    61,    62,    63,
      66,    65,    70,    68,    66,    68,    70,    71,     3,     4,
       5,     6,     7,    68,     9,    68,    11,    12,    13,    83,
      68,    68,    56,    66,    66,    83,   219,   218,   222,    65,
     220,    76,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    57,    57,    58,    59,    60,    61,    62,    63,   221,
      65,   255,   242,   343,   233,    70,    71,     3,     4,     5,
       6,     7,   136,     9,    35,    11,    12,    13,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    65,
      11,    12,    13,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    27,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    40,
      41,    42,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      11,    12,    13,    -1,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    -1,    27,    -1,    -1,    70,
       3,     4,     5,     6,     7,    65,    -1,    -1,    11,    12,
      13,    -1,    83,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    83,    27,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    65,
      83,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    83,     3,    -1,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    70,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    11,
      12,    13,    84,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      65,    66,    67,    11,    12,    13,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    68,    -1,    -1,    27,
      -1,    73,    30,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,     3,     4,     5,     6,
       7,    51,    52,    53,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    68,    -1,
      27,    -1,    -1,    73,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,    13,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    27,
      -1,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,
      69,    70,    71,    27,    -1,    -1,    -1,    65,    -1,    67,
      -1,    69,    70,    71,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,    13,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    27,    -1,
      -1,    65,    -1,    67,    -1,    69,    70,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,     9,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    27,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    70,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       3,    65,    66,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      65,    66,    67,     3,     4,     5,     6,     7,    73,    -1,
      -1,    11,    12,    13,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    66,    11,    12,    13,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    65,    66,    11,    12,    13,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    65,    66,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,     9,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    33,    34,    35,    36,
      37,    38,    39,     9,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    71,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    13,     3,
       4,     5,     6,     7,    -1,    71,    -1,    11,    12,    13,
      -1,    -1,    27,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    27,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      27,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      65,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    65,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     9,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     9,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     9,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   106,   107,   110,   111,
     112,   113,   119,   122,   123,   149,   150,   151,     3,    70,
       3,    65,    73,    83,   108,   109,   124,   125,   126,   107,
     107,     3,    70,   107,   107,     0,   150,    70,     3,   120,
     121,   124,   122,   126,   127,    72,    83,    70,    84,   106,
     107,   142,   152,    65,    67,   125,    70,   111,   114,   115,
     116,   122,   120,    84,    71,    72,    66,   122,   126,   109,
     124,     3,     4,     5,     6,     7,    11,    12,    13,    27,
      40,    41,    42,    55,    57,    58,    59,    60,    61,    62,
      63,    65,    71,    83,    86,    87,    88,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   106,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     3,    70,   103,   135,   106,   142,     3,    66,
     107,   128,   129,   130,   131,    30,    68,    73,   103,   127,
     114,   116,    71,   115,    82,   117,   118,   124,   116,    71,
      72,    90,   102,   105,    71,   121,    82,    65,    90,    90,
      91,    65,    90,    82,    65,    65,   105,    65,   140,    65,
       3,    83,    83,    83,   104,   104,   116,   132,    10,    11,
      12,    65,    67,    69,    25,    73,    74,    75,    76,    77,
      14,    15,    16,    17,    18,    20,    21,    22,    78,    79,
      80,    23,    24,    81,    72,    83,    71,   144,    67,    69,
     135,   136,   137,   138,   139,    65,    67,   124,   126,   133,
     134,    66,    72,    66,    72,   103,   127,    68,    68,    30,
      68,    73,   103,    71,   105,    72,    83,    82,    71,   140,
     132,   132,   140,   104,   104,    82,    83,   104,   106,    59,
     104,    83,    83,    66,    65,   126,   133,    66,     3,    66,
      89,   103,   104,     3,   103,    91,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    95,    95,    96,    97,
      98,    99,   100,   104,   103,   105,     3,    71,    72,   135,
      84,   139,    66,   128,   133,    68,    73,   103,   134,    65,
      67,    26,   130,     3,    68,   103,   103,    68,    68,   118,
     105,    66,    66,    66,    66,   140,    83,   104,    83,    83,
     104,    65,    66,    70,    91,    66,    72,    68,    82,    68,
      71,   135,   137,    66,    66,    68,    68,    66,   128,    68,
      73,   103,    68,    68,   140,   140,    66,   104,    83,    83,
     104,    66,   104,    83,   104,   140,   136,   103,   102,   135,
      66,    68,    68,    56,   140,    66,    66,    66,    83,   140,
      66,    66,   104,    66,    71,    72,   140,   140,   140,   140,
     104,   140,   140,    66,    83,    71,    66,   140,   140
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    91,    91,    92,
      92,    92,    92,    93,    93,    93,    94,    94,    94,    95,
      95,    95,    95,    95,    96,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   106,   106,   107,   107,   107,   107,
     107,   107,   107,   107,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   112,   112,
     112,   113,   113,   114,   114,   115,   116,   116,   116,   116,
     117,   117,   118,   118,   118,   119,   119,   119,   119,   119,
     120,   120,   121,   121,   122,   122,   122,   123,   124,   124,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   126,   126,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   130,   131,   131,   132,
     132,   133,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   135,   136,   136,
     136,   136,   137,   138,   138,   139,   139,   140,   140,   140,
     140,   140,   140,   141,   141,   141,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   146,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   148,   148,
     148,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     152
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     3,     1,     2,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       2,     1,     1,     1,     2,     3,     1,     2,     1,     2,
       1,     3,     1,     2,     3,     4,     5,     5,     6,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     1,
       1,     3,     3,     4,     4,     5,     5,     6,     6,     4,
       5,     4,     3,     4,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     2,     1,     3,     1,
       2,     1,     1,     2,     3,     2,     3,     3,     4,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     2,
       3,     4,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     1,     2,
       1,     1,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     7,     7,     9,     6,     7,     7,     8,     3,     2,
       2,     2,     3,     1,     2,     1,     1,     3,     4,     1,
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
  case 68:
#line 165 "parserNuevecito.y"
                          {printf("type_specifier1\n");}
#line 1926 "parserNuevecito.tab.c"
    break;

  case 69:
#line 166 "parserNuevecito.y"
                                                 {printf("type_specifier2\n");}
#line 1932 "parserNuevecito.tab.c"
    break;

  case 78:
#line 184 "parserNuevecito.y"
                  {typedef_name_flag = 1;}
#line 1938 "parserNuevecito.tab.c"
    break;

  case 106:
#line 230 "parserNuevecito.y"
                           {printf("type_specifier3\n");}
#line 1944 "parserNuevecito.tab.c"
    break;

  case 107:
#line 231 "parserNuevecito.y"
                                                    {printf("type_specifier4\n");}
#line 1950 "parserNuevecito.tab.c"
    break;


#line 1954 "parserNuevecito.tab.c"

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
#line 466 "parserNuevecito.y"


int main(int argc, char **argv) {
	typedef_name_flag = 0;
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

const char* token_name(int t) {
  return yytname[YYTRANSLATE(t)];
}
