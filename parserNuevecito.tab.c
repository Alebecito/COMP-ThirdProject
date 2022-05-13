/* A Bison parser, made by GNU Bison 3.8.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30801

/* Bison version string.  */
#define YYBISON_VERSION "3.8.1"

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

#include "parserNuevecito.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 4,           /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOATING_CONSTANT = 5,          /* FLOATING_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 6,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_WHITESPACE = 8,                 /* WHITESPACE  */
  YYSYMBOL_TYPEDEF_NAME = 9,               /* TYPEDEF_NAME  */
  YYSYMBOL_PTR_OP = 10,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 11,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 12,                    /* DEC_OP  */
  YYSYMBOL_LEFT_SHIFT = 13,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 14,               /* RIGHT_SHIFT  */
  YYSYMBOL_LE = 15,                        /* LE  */
  YYSYMBOL_GE = 16,                        /* GE  */
  YYSYMBOL_GREATER_OP = 17,                /* GREATER_OP  */
  YYSYMBOL_HEADER_NAME = 18,               /* HEADER_NAME  */
  YYSYMBOL_LOWER_OP = 19,                  /* LOWER_OP  */
  YYSYMBOL_EQ = 20,                        /* EQ  */
  YYSYMBOL_NOT_EQ = 21,                    /* NOT_EQ  */
  YYSYMBOL_LOGICAL_AND = 22,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 23,                /* LOGICAL_OR  */
  YYSYMBOL_ASSIGNMENT_OPERATOR = 24,       /* ASSIGNMENT_OPERATOR  */
  YYSYMBOL_ELLIPSIS = 25,                  /* ELLIPSIS  */
  YYSYMBOL_SIZEOF = 26,                    /* SIZEOF  */
  YYSYMBOL_TYPEDEF = 27,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 28,                    /* EXTERN  */
  YYSYMBOL_STATIC = 29,                    /* STATIC  */
  YYSYMBOL_AUTO = 30,                      /* AUTO  */
  YYSYMBOL_REGISTER = 31,                  /* REGISTER  */
  YYSYMBOL_VOID = 32,                      /* VOID  */
  YYSYMBOL_CHAR = 33,                      /* CHAR  */
  YYSYMBOL_SHORT = 34,                     /* SHORT  */
  YYSYMBOL_INT = 35,                       /* INT  */
  YYSYMBOL_LONG = 36,                      /* LONG  */
  YYSYMBOL_FLOAT = 37,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 38,                    /* DOUBLE  */
  YYSYMBOL_DEFAULT = 39,                   /* DEFAULT  */
  YYSYMBOL_IF = 40,                        /* IF  */
  YYSYMBOL_SWITCH = 41,                    /* SWITCH  */
  YYSYMBOL_SIGNED = 42,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 43,                  /* UNSIGNED  */
  YYSYMBOL__BOOL = 44,                     /* _BOOL  */
  YYSYMBOL__COMPLEX = 45,                  /* _COMPLEX  */
  YYSYMBOL__IMAGINARY = 46,                /* _IMAGINARY  */
  YYSYMBOL_STRUCT = 47,                    /* STRUCT  */
  YYSYMBOL_UNION = 48,                     /* UNION  */
  YYSYMBOL_ENUM = 49,                      /* ENUM  */
  YYSYMBOL_CONST = 50,                     /* CONST  */
  YYSYMBOL_RESTRICT = 51,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 52,                  /* VOLATILE  */
  YYSYMBOL_INLINE = 53,                    /* INLINE  */
  YYSYMBOL_CASE = 54,                      /* CASE  */
  YYSYMBOL_ELSE = 55,                      /* ELSE  */
  YYSYMBOL_FOR = 56,                       /* FOR  */
  YYSYMBOL_DO = 57,                        /* DO  */
  YYSYMBOL_WHILE = 58,                     /* WHILE  */
  YYSYMBOL_GOTO = 59,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 60,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 61,                     /* BREAK  */
  YYSYMBOL_RETURN = 62,                    /* RETURN  */
  YYSYMBOL_63_then_ = 63,                  /* "then"  */
  YYSYMBOL_64_ = 64,                       /* '('  */
  YYSYMBOL_65_ = 65,                       /* ')'  */
  YYSYMBOL_66_ = 66,                       /* '['  */
  YYSYMBOL_67_ = 67,                       /* ']'  */
  YYSYMBOL_68_ = 68,                       /* '.'  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_71_ = 71,                       /* ','  */
  YYSYMBOL_72_ = 72,                       /* '&'  */
  YYSYMBOL_73_ = 73,                       /* '*'  */
  YYSYMBOL_74_ = 74,                       /* '+'  */
  YYSYMBOL_75_ = 75,                       /* '-'  */
  YYSYMBOL_76_ = 76,                       /* '~'  */
  YYSYMBOL_77_ = 77,                       /* '!'  */
  YYSYMBOL_78_ = 78,                       /* '/'  */
  YYSYMBOL_79_ = 79,                       /* '%'  */
  YYSYMBOL_80_ = 80,                       /* '^'  */
  YYSYMBOL_81_ = 81,                       /* '|'  */
  YYSYMBOL_82_ = 82,                       /* '?'  */
  YYSYMBOL_83_ = 83,                       /* ':'  */
  YYSYMBOL_84_ = 84,                       /* ';'  */
  YYSYMBOL_85_ = 85,                       /* '='  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_primary_expression = 87,        /* primary_expression  */
  YYSYMBOL_constant = 88,                  /* constant  */
  YYSYMBOL_postfix_expression = 89,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 90,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 91,          /* unary_expression  */
  YYSYMBOL_unary_op = 92,                  /* unary_op  */
  YYSYMBOL_cast_expression = 93,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 94, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 95,       /* additive_expression  */
  YYSYMBOL_shift_expression = 96,          /* shift_expression  */
  YYSYMBOL_relational_expression = 97,     /* relational_expression  */
  YYSYMBOL_equality_expression = 98,       /* equality_expression  */
  YYSYMBOL_and_expression = 99,            /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 100,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 101,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 102,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 103,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 104,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 105,    /* assignment_expression  */
  YYSYMBOL_expression = 106,               /* expression  */
  YYSYMBOL_constant_expression = 107,      /* constant_expression  */
  YYSYMBOL_declaration = 108,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 109,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 110,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 111,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 112,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 113,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 114, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 115,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 116,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 117,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 118, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 119,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 120,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 121,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 122,          /* enumerator_list  */
  YYSYMBOL_enumerator = 123,               /* enumerator  */
  YYSYMBOL_type_qualifier = 124,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 125,       /* function_specifier  */
  YYSYMBOL_declarator = 126,               /* declarator  */
  YYSYMBOL_direct_declarator = 127,        /* direct_declarator  */
  YYSYMBOL_pointer = 128,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 129,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 130,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 131,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 132,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 133,          /* identifier_list  */
  YYSYMBOL_type_name = 134,                /* type_name  */
  YYSYMBOL_abstract_declarator = 135,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 136, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 137,              /* initializer  */
  YYSYMBOL_initializer_list = 138,         /* initializer_list  */
  YYSYMBOL_designation = 139,              /* designation  */
  YYSYMBOL_designator_list = 140,          /* designator_list  */
  YYSYMBOL_designator = 141,               /* designator  */
  YYSYMBOL_statement = 142,                /* statement  */
  YYSYMBOL_labeled_statement = 143,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 144,       /* compound_statement  */
  YYSYMBOL_block_item_list = 145,          /* block_item_list  */
  YYSYMBOL_block_item = 146,               /* block_item  */
  YYSYMBOL_expression_statement = 147,     /* expression_statement  */
  YYSYMBOL_selection_statement = 148,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 149,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 150,           /* jump_statement  */
  YYSYMBOL_translation_unit = 151,         /* translation_unit  */
  YYSYMBOL_external_declaration = 152,     /* external_declaration  */
  YYSYMBOL_function_definition = 153,      /* function_definition  */
  YYSYMBOL_declaration_list = 154          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

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
#define YYLAST   3161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  290
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  556

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     2,     2,     2,    79,    72,     2,
      64,    65,    73,    74,    71,    75,    68,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    84,
       2,    85,     2,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    81,    70,    76,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    33,    34,    35,    36,    40,    41,    42,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      59,    60,    61,    65,    66,    67,    68,    69,    70,    74,
      75,    76,    77,    78,    79,    83,    84,    88,    89,    90,
      91,    92,    93,    94,    98,    99,   100,   101,   102,   106,
     107,   108,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   124,   125,   126,   127,   128,   132,   133,   137,   138,
     142,   143,   147,   148,   152,   153,   157,   158,   159,   160,
     161,   165,   166,   167,   171,   172,   176,   180,   181,   186,
     187,   188,   189,   190,   191,   192,   193,   197,   198,   199,
     203,   204,   205,   209,   210,   211,   212,   213,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   235,   236,   237,   238,   239,   243,   244,
     248,   249,   253,   254,   258,   259,   260,   261,   265,   266,
     267,   271,   272,   273,   274,   278,   279,   280,   281,   282,
     283,   284,   288,   289,   290,   294,   295,   296,   300,   301,
     302,   306,   310,   311,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   337,   338,   339,   340,   341,   345,   346,
     350,   351,   352,   356,   357,   358,   362,   363,   364,   368,
     369,   373,   374,   378,   379,   380,   381,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     402,   403,   404,   405,   409,   410,   411,   412,   413,   417,
     421,   422,   426,   427,   428,   432,   433,   434,   435,   436,
     437,   441,   442,   443,   447,   448,   449,   453,   454,   458,
     459,   463,   464,   465,   469,   470,   471,   472,   473,   474,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   495,   496,   497,   498,   499,   500,   504,
     505,   509,   510,   514,   515,   516,   517,   518,   519,   523,
     524
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "WHITESPACE", "TYPEDEF_NAME", "PTR_OP", "INC_OP",
  "DEC_OP", "LEFT_SHIFT", "RIGHT_SHIFT", "LE", "GE", "GREATER_OP",
  "HEADER_NAME", "LOWER_OP", "EQ", "NOT_EQ", "LOGICAL_AND", "LOGICAL_OR",
  "ASSIGNMENT_OPERATOR", "ELLIPSIS", "SIZEOF", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "VOID", "CHAR", "SHORT", "INT", "LONG",
  "FLOAT", "DOUBLE", "DEFAULT", "IF", "SWITCH", "SIGNED", "UNSIGNED",
  "_BOOL", "_COMPLEX", "_IMAGINARY", "STRUCT", "UNION", "ENUM", "CONST",
  "RESTRICT", "VOLATILE", "INLINE", "CASE", "ELSE", "FOR", "DO", "WHILE",
  "GOTO", "CONTINUE", "BREAK", "RETURN", "\"then\"", "'('", "')'", "'['",
  "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'^'", "'|'", "'?'", "':'", "';'", "'='", "$accept",
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

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

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
    2329,  2870,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,    17,  -446,  -446,  -446,  -446,   211,   206,
    -446,    67,  3079,  3079,  -446,    29,  -446,  3079,  3079,    10,
     310,    47,  2117,  -446,  -446,    78,   161,   549,  -446,    99,
    -446,  2915,   -44,    68,   453,   130,   138,  -446,  -446,   171,
     238,  -446,   -12,  -446,  1164,  -446,  -446,   150,  2968,  -446,
    -446,   167,  2772,  1217,   401,   310,  -446,  -446,   186,   179,
     432,   199,  -446,  -446,  -446,  -446,  2015,  2015,  2039,   205,
     198,   201,  1693,   239,   854,   249,   334,   257,   275,   936,
    1113,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,   217,   627,  2055,  -446,    95,   105,   308,   523,   312,
     277,   303,   305,   396,     6,  -446,  -446,    -9,  -446,  -446,
    -446,  -446,   718,  -446,  -446,  -446,  -446,  -446,   195,   338,
    -446,  -446,   404,   145,   353,   324,  -446,  -446,  -446,  -446,
    -446,  -446,   223,  1435,  -446,   223,  -446,  1435,  -446,  2915,
    2989,   -27,  3109,  2382,  -446,    63,  3109,  -446,    74,  -446,
    -446,   203,   385,   383,  -446,   182,  2490,  -446,   662,  -446,
     397,   402,  1247,  -446,  -446,  1747,  1747,  1747,  1747,  1771,
    1771,  -446,  2055,  1787,  1787,  2055,  2055,  1803,  -446,   895,
    1113,  -446,  -446,  1113,  -446,   895,  1827,  1881,  2716,  -446,
    -446,   393,   800,   410,   424,  1693,   406,  -446,  -446,  1163,
    -446,    24,  2501,   241,   128,   438,   501,  -446,  -446,  1451,
    1693,   505,  1693,  1693,  -446,  2055,  2055,  2055,  1787,  1787,
    1747,  1747,  1747,  1747,  1747,  1747,  1771,  1771,  1905,  1905,
    1905,  1905,  1905,  1921,  1693,  -446,  2420,  -446,  -446,   170,
     344,  -446,   490,  1693,  1693,  -446,    21,   229,  -446,  1342,
    -446,  -446,  -446,  -446,  -446,   -21,  2412,  -446,  -446,  -446,
     425,  -446,  -446,   244,  1693,    64,  -446,   429,  -446,  -446,
    3019,   449,  2170,  1528,  -446,   234,  -446,   477,  -446,  3049,
    -446,   542,  -446,   484,   662,  -446,  -446,  1693,  -446,   492,
     495,   422,   308,   308,   308,   308,   384,   523,   523,  -446,
     274,    95,    95,  -446,  -446,  2450,   -18,  -446,   482,   498,
    -446,  2533,   255,  2569,   269,   895,  2580,   977,    83,  1018,
     493,   500,   314,  -446,  -446,  -446,  -446,  -446,   480,  2223,
     480,  -446,  1961,  -446,  2601,  -446,   316,  -446,   172,  -446,
    -446,  -446,  -446,  -446,  -446,    95,    95,   105,   105,   308,
     308,   308,   308,   523,   523,  2331,   312,   277,   303,   305,
     396,  2464,    14,  -446,  -446,  -446,    53,   481,  -446,  -446,
    -446,  -446,  -446,  2167,  1937,   562,  -446,   372,  1435,   120,
    -446,  -446,  -446,   181,  1693,  -446,   181,  -446,  1693,  -446,
    -446,  2276,  1544,   477,   253,  -446,   502,   503,  -446,   504,
     506,   477,  2825,  1560,  -446,  -446,  -446,  -446,   507,   537,
    -446,  -446,  1693,  1693,   543,   543,   895,   895,   895,   895,
    -446,   895,  1637,    93,  1059,  1653,   129,  1693,  1693,   895,
     304,  1419,  -446,  1693,  -446,  1693,  -446,  1693,  1693,  -446,
    -446,  1435,  2611,   547,  -446,  -446,  1301,  -446,  -446,  -446,
     125,  -446,  -446,  -446,  -446,   265,  2648,  -446,  -446,  -446,
    -446,   319,  -446,   550,  2679,  -446,   553,   560,  -446,  -446,
    -446,  -446,   515,   517,  -446,  -446,  -446,   895,   331,   551,
     552,   202,   895,   341,  1669,   345,   363,  -446,  2689,   416,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  1435,
    -446,  -446,  -446,  -446,  -446,   895,   895,  -446,   895,   895,
     895,  1693,  -446,   895,   895,   374,   545,   546,  -446,  1325,
    -446,  -446,  -446,  -446,  -446,  -446,   390,  -446,  -446,   895,
    -446,  -446,  -446,   895,  -446,  -446
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
    -446,  -446,  -446,  -446,  -446,   285,  -446,  -103,  -156,   258,
     177,    43,   386,   382,   388,   381,   387,  -446,   -66,   -73,
     -87,  -233,    26,     2,  -446,   -94,  -446,   -59,  -446,  -446,
     475,  -155,   -48,  -446,  -307,  -446,   494,  -248,   -13,  -446,
       5,   -35,   -14,   -56,   -68,  -446,  -175,  -446,    -1,  -143,
    -272,  -150,   194,  -445,  -446,   254,   -93,  -446,    66,  -446,
     520,  -446,  -446,  -446,  -446,  -446,   612,  -446,   591
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   109,   110,   111,   356,   112,   113,   114,   115,   116,
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
     234,    71,   221,   223,   388,    58,    57,   182,   392,   413,
      52,   519,   387,   421,   144,   142,   210,    48,   296,   252,
     389,   390,    67,    55,    65,    66,    64,   321,   322,    69,
      70,   162,   149,   277,    31,   151,   150,    39,    74,   401,
       2,   405,   224,   254,   387,   166,   144,   278,   268,   155,
      57,   272,   254,   278,   283,   433,     2,    50,    60,   143,
       2,   144,   156,   128,   171,   255,   413,   140,   421,    78,
     270,   351,   365,   366,   270,   254,    53,   166,   253,   319,
      48,   391,   323,   324,   519,   254,   471,   458,    68,   473,
     138,   162,     2,   162,   162,   303,   327,   162,   345,   310,
     326,    28,   330,   223,   279,   410,   223,   141,   288,   332,
     334,   282,   304,   459,   425,   338,   154,    28,   342,   348,
     158,    28,   362,   363,   364,   406,    29,   167,   392,   289,
      29,   162,   413,   358,   162,   290,   284,   166,   407,   166,
     166,    61,   224,   166,   254,   224,   357,   295,   128,   360,
     361,   463,    79,    28,   254,    57,   382,   444,   235,   150,
     287,   472,    29,   236,   237,   474,   294,   499,   413,   238,
     239,   383,   470,    61,     2,   140,   394,   166,   395,    45,
     166,    46,   349,  -201,   293,   148,   270,   210,   210,   328,
     254,    29,   329,   413,   291,   468,     2,    56,   404,  -183,
     350,    29,    54,   504,     2,   261,   262,   162,   210,   160,
     420,    24,    25,    26,   267,   274,     2,   226,   227,   228,
     263,   428,   317,   318,   429,    74,    47,     2,   339,   456,
     384,   262,   440,   254,    29,    28,   184,   300,   467,   452,
     443,   183,   446,   301,    29,   263,    24,    25,    26,    45,
      75,    46,   206,   166,   284,   207,   152,   292,  -197,   293,
    -183,  -183,  -183,   254,  -197,    28,    29,  -183,   295,    29,
     153,   229,   199,   230,    29,   231,   531,    28,   205,   373,
     374,   150,   171,    45,   171,    46,    29,    55,   292,  -203,
     293,   171,    45,   212,    46,  -203,   347,    47,    45,   152,
      46,   514,   254,   215,   153,   403,   518,   411,   147,   412,
     437,   240,   241,   153,   290,   270,   254,   404,   210,   349,
     183,   293,   246,   247,   439,   350,   290,   216,   210,   420,
     254,   217,   210,   492,   493,   494,   495,   192,   496,   248,
     487,   171,   195,   196,   483,   498,   507,   501,   503,   218,
     505,   506,   312,   313,   314,   315,   490,   491,   349,   540,
     293,   201,   202,   204,    72,   290,    73,   209,   270,   449,
     510,   454,   511,   249,   520,   254,   250,   455,   270,   518,
     290,   512,   513,   270,   265,   266,   528,   350,   209,   185,
     186,   187,   254,   188,   527,   259,   533,   144,   287,   532,
     536,   287,   254,   171,   385,   386,   254,   535,   251,   369,
     370,   371,   372,   157,   171,   185,   186,   187,   537,   188,
     189,   190,   541,   542,   254,   543,   544,   545,   264,   549,
     547,   548,   465,   466,   546,   254,   270,   185,   186,   187,
     298,   188,   189,   190,   299,   553,   554,   192,   193,   194,
     555,   254,   195,   196,   305,    45,   270,    46,   340,   306,
     209,   209,   209,   209,   209,   209,   335,   209,   209,   209,
     209,   209,   341,   192,   193,   194,   538,   539,   195,   196,
     343,   387,   197,   144,   198,   192,   193,   194,   367,   368,
     195,   196,   191,   352,   353,   192,   193,   194,   359,   278,
     195,   196,   408,   411,   197,   412,   198,    45,   147,    46,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   242,   243,
     244,   422,   245,   423,   349,   426,   293,   434,   209,   209,
      80,   427,    81,    82,    83,    84,    85,   447,     3,   430,
      86,    87,   431,   435,   448,   464,   263,   477,   478,   209,
     525,   479,   526,   480,   488,    88,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    89,    90,
      91,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    92,   489,    93,    94,    95,    96,    97,
      98,    99,   451,   100,   516,   521,   529,   530,    47,   101,
     523,   102,   103,   104,   105,   106,   107,   524,   232,   550,
     551,   377,   379,   108,   376,   276,   260,   209,   378,   380,
     -35,   -35,   -35,   -35,   -35,   509,   -35,   -35,   -35,   -35,
     -35,   233,   258,   469,    77,   159,     0,     0,     0,     0,
       0,     0,     0,   208,     0,   177,    82,    83,    84,    85,
       0,     0,     0,    86,    87,     0,     0,     0,     0,   209,
       0,     0,     0,     0,     0,     0,     0,     0,    88,   209,
       0,     0,   -35,   209,   -35,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,    24,    25,    26,     0,     0,   209,   209,   256,
       0,    81,    82,    83,    84,    85,   100,     3,     0,    86,
      87,     0,     0,     0,   102,   103,   104,   105,   106,   107,
       0,     0,   209,   209,    88,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    89,    90,    91,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    92,     0,    93,    94,    95,    96,    97,    98,
      99,     0,   100,     0,     0,     0,     0,    47,   257,     0,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,   336,   108,   177,    82,    83,    84,    85,     0,     3,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   213,     0,    81,    82,    83,
      84,    85,     0,     0,   100,    86,    87,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,     0,     0,
      88,     0,     0,     0,   337,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    90,    91,   256,     0,    81,    82,
      83,    84,    85,     0,     0,     0,    86,    87,    92,     0,
      93,    94,    95,    96,    97,    98,    99,     0,   100,     0,
       0,    88,     0,    47,     0,     0,   102,   103,   104,   105,
     106,   107,     0,     0,    89,    90,    91,   219,   108,   177,
      82,    83,    84,    85,     0,     0,     0,    86,    87,    92,
       0,    93,    94,    95,    96,    97,    98,    99,     0,   100,
       0,     0,    88,     0,    47,     0,     0,   102,   103,   104,
     105,   106,   107,     0,     0,     0,     0,     0,   208,   108,
     177,    82,    83,    84,    85,     0,     0,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,    88,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,     0,     0,     0,     0,     0,   208,
     220,   177,    82,    83,    84,    85,     0,     0,     0,    86,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,    88,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,     0,     0,     0,     0,
     208,   442,   177,    82,    83,    84,    85,     0,     0,     0,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,    88,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,     0,   177,    82,    83,    84,
      85,     0,     3,   100,    86,    87,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,     0,    88,
       0,     0,     0,   500,     0,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,   100,   185,   186,
     187,     0,   188,   189,   190,   102,   103,   104,   105,   106,
     107,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   176,     0,
     177,    82,    83,    84,    85,     0,     0,     0,    86,    87,
       0,     0,     0,    47,     0,     0,   192,   193,   194,     0,
       0,   195,   196,    88,     0,   197,   178,   344,   208,   157,
     177,    82,    83,    84,    85,     0,     0,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
       0,     0,     0,    88,     0,     0,   307,     0,     0,     0,
       0,   100,     0,     0,   179,     0,     0,     0,     0,   102,
     180,   104,   105,   106,   107,     0,     0,    24,    25,    26,
       0,     0,   208,     0,   177,    82,    83,    84,    85,     0,
       0,   100,    86,    87,   308,     0,     0,     0,     0,   102,
     309,   104,   105,   106,   107,     0,   208,    88,   177,    82,
      83,    84,    85,     0,     0,     0,    86,    87,     0,     0,
       0,     0,     0,   393,     0,   177,    82,    83,    84,    85,
       0,    88,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,   394,    88,   395,
     269,   517,     0,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,   394,     0,   395,   269,   552,     0,   102,   103,   104,
     105,   106,   107,     0,     0,     0,   100,     0,   394,     0,
     395,   269,     0,     0,   102,   103,   104,   105,   106,   107,
     508,     0,   177,    82,    83,    84,    85,     0,     0,     0,
      86,    87,     0,     0,     0,     0,   208,     0,   177,    82,
      83,    84,    85,     0,     0,    88,    86,    87,     0,     0,
       0,     0,   354,     0,   177,    82,    83,    84,    85,     0,
       0,    88,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,   100,     0,   394,     0,   395,   269,     0,
       0,   102,   103,   104,   105,   106,   107,     0,     0,   100,
       0,     0,     0,     0,   269,     0,     0,   102,   103,   104,
     105,   106,   107,     0,     0,   100,   355,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,   208,
       0,   177,    82,    83,    84,    85,     0,     0,     0,    86,
      87,     0,     0,     0,     0,   476,     0,   177,    82,    83,
      84,    85,     0,     0,    88,    86,    87,     0,     0,     0,
       0,   484,     0,   177,    82,    83,    84,    85,     0,     0,
      88,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,   100,     0,     0,   418,     0,     0,     0,     0,
     102,   419,   104,   105,   106,   107,     0,     0,   100,     0,
       0,   418,     0,     0,     0,     0,   102,   419,   104,   105,
     106,   107,     0,     0,   100,     0,     0,   485,     0,     0,
       0,     0,   102,   486,   104,   105,   106,   107,   208,     0,
     177,    82,    83,    84,    85,     0,     0,     0,    86,    87,
       0,     0,     0,     0,   208,     0,   177,    82,    83,    84,
      85,     0,     0,    88,    86,    87,     0,     0,     0,     0,
     208,     0,   177,    82,    83,    84,    85,     0,     0,    88,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   208,    88,   177,    82,    83,    84,
      85,   100,   497,     0,    86,    87,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,     0,   100,   502,    88,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,     0,   100,   534,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,   311,     0,
     177,    82,    83,    84,    85,     0,     0,   100,    86,    87,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,   316,    88,   177,    82,    83,    84,    85,     0,
       0,     0,    86,    87,     0,     0,     0,     0,   320,     0,
     177,    82,    83,    84,    85,     0,     0,    88,    86,    87,
       0,     0,     0,     0,   325,     0,   177,    82,    83,    84,
      85,   100,     0,    88,    86,    87,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,     0,     0,   331,    88,
     177,    82,    83,    84,    85,   100,     0,     0,    86,    87,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     0,
       0,   100,     0,    88,     0,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,   333,     0,   177,    82,    83,    84,    85,     0,
       0,   100,    86,    87,     0,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,   375,    88,   177,    82,
      83,    84,    85,     0,     0,     0,    86,    87,     0,     0,
       0,     0,   381,     0,   177,    82,    83,    84,    85,     0,
       0,    88,    86,    87,     0,     0,     0,     0,   462,     0,
     177,    82,    83,    84,    85,   100,     0,    88,    86,    87,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,    88,   177,    82,    83,    84,    85,   100,
       0,     0,    86,    87,     0,     0,     0,   102,   103,   104,
     105,   106,   107,     0,     0,   100,     0,    88,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,     0,     0,   177,    82,
      83,    84,    85,     0,     0,   100,    86,    87,     0,     0,
     451,     0,     0,   102,   103,   104,   105,   106,   107,     0,
       0,    88,   177,    82,    83,    84,    85,     0,     0,     0,
      86,    87,     0,     0,     0,     0,     0,     0,   177,    82,
      83,    84,    85,     0,     0,    88,    86,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,    88,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,    76,     1,   100,
       2,     0,     0,     0,     0,     0,     3,   102,   103,   104,
     105,   106,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   414,     0,     2,     0,     0,     0,     0,     0,     3,
       0,    28,   185,   186,   187,     0,   188,   189,   190,     0,
      29,     0,     0,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   450,     0,     0,     0,     0,     0,
       0,     0,     3,     0,   292,   415,   293,   460,   461,     0,
     192,   193,   194,    29,     0,   195,   196,     0,     0,   197,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   475,     0,     0,
       0,     0,     0,     0,     0,     3,     0,   349,   415,   293,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       1,     0,     2,     0,     0,     0,     0,     0,     3,     0,
     349,   415,   293,     0,     0,     0,   185,   186,   187,    29,
     188,   189,   190,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   280,     0,     0,     0,     0,     0,     0,
       0,     3,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   192,   193,   194,     0,     0,   195,
     196,     0,     0,   280,     9,    10,    11,    12,    13,    14,
      15,     3,     0,     0,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   185,   186,   187,     0,   188,
     189,   190,     0,     0,     9,    10,    11,    12,    13,    14,
      15,     0,   281,     0,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   185,   186,   187,     0,   188,
     189,   190,     0,     0,     0,     0,     0,     0,     0,   185,
     186,   187,   402,   188,   189,   190,     0,     0,     0,     0,
       0,     0,     0,   192,   193,   194,     0,     0,   195,   196,
       0,     0,   197,     0,   198,   185,   186,   187,     0,   188,
     189,   190,     0,     0,     0,     0,   185,   186,   187,     0,
     188,   189,   190,   192,   193,   194,     0,     0,   195,   196,
       0,     0,   197,   432,     0,     0,     0,   192,   193,   194,
       0,     0,   195,   196,     0,     0,   197,   457,   185,   186,
     187,     0,   188,   189,   190,     0,     0,   302,     0,     0,
       0,     0,     0,   192,   193,   194,   346,     0,   195,   196,
       0,     0,   197,     0,   192,   193,   194,     0,     0,   195,
     196,     0,     0,   197,   185,   186,   187,     0,   188,   189,
     190,     0,     0,     0,     0,   185,   186,   187,   436,   188,
     189,   190,     0,     0,     0,     0,   192,   193,   194,     0,
       0,   195,   196,     0,     0,   197,   185,   186,   187,     0,
     188,   189,   190,     0,     0,     0,   185,   186,   187,     0,
     188,   189,   190,     0,   438,     0,     0,     0,     0,     0,
       0,     0,   192,   193,   194,   441,     0,   195,   196,     0,
       0,   197,     0,   192,   193,   194,     0,     0,   195,   196,
       0,     0,   197,   185,   186,   187,     0,   188,   189,   190,
       0,     0,   453,     0,   192,   193,   194,     0,   515,   195,
     196,     0,     0,   197,   192,   193,   194,     0,     0,   195,
     196,     0,     0,   197,   185,   186,   187,     0,   188,   189,
     190,     0,     0,     0,   185,   186,   187,     0,   188,   189,
     190,     0,     0,     0,     0,   184,     0,     0,     0,     0,
       0,   192,   193,   194,     0,     0,   195,   196,     0,     0,
     197,   185,   186,   187,     0,   188,   189,   190,     0,     0,
       0,     0,     0,     0,     0,     0,   522,     0,     0,     0,
       0,     0,   192,   193,   194,     0,     0,   195,   196,     0,
     461,   197,   192,   193,   194,     0,     0,   195,   196,     0,
       0,   197,     0,   168,     0,   169,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,   192,
     193,   194,     0,     0,   195,   196,     0,     0,   197,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   481,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     482,     0,     0,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,    46,     0,     0,    47,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   161,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
     275,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     9,    10,    11,    12,    13,    14,    15,     3,     0,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,   409,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     3,     0,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,   424,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     3,     0,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     3,     0,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26
};

static const yytype_int16 yycheck[] =
{
      73,    94,     0,   153,    72,     0,    41,   157,   163,    68,
     113,     1,    99,   100,   262,    29,    29,    73,   266,   291,
       3,   466,     1,   295,     3,    69,    92,     1,   171,    23,
     263,   264,     3,    28,    32,    33,    31,   193,   194,    37,
      38,   100,    56,    70,    42,    59,    59,    42,     1,    70,
       3,   284,   100,    71,     1,    68,     3,    84,   152,    71,
      73,   155,    71,    84,     1,    83,     3,     1,     1,     1,
       3,     3,    84,    47,    72,    84,   348,    51,   350,     1,
     153,   224,   238,   239,   157,    71,    69,   100,    82,   192,
      64,    70,   195,   196,   539,    71,   403,    83,    69,   406,
       1,   160,     3,   162,   163,   178,   199,   166,    84,   182,
     197,    64,   205,   200,   162,   290,   203,    51,   166,   206,
     207,   276,   178,    70,   299,   212,    60,    64,   215,     1,
      64,    64,   235,   236,   237,    71,    73,    71,   386,    65,
      73,   200,   414,   230,   203,    71,    83,   160,    84,   162,
     163,    84,   200,   166,    71,   203,   229,   171,   132,   232,
     233,   394,     1,    64,    71,   178,   253,    84,    73,   182,
     165,   404,    73,    78,    79,   408,   171,    84,   450,    74,
      75,   254,     1,    84,     3,   159,    66,   200,    68,    64,
     203,    66,    64,    65,    66,    65,   269,   263,   264,   200,
      71,    73,   203,   475,     1,    85,     3,     1,    83,     3,
     224,    73,     1,    84,     3,    70,    71,   276,   284,    69,
     293,    50,    51,    52,     1,   159,     3,    10,    11,    12,
      85,   304,   189,   190,   307,     1,    69,     3,   212,    67,
      70,    71,   335,    71,    73,    64,    67,    65,   398,   352,
     337,    65,   339,    71,    73,    85,    50,    51,    52,    64,
     295,    66,    64,   276,    83,    64,    71,    64,    65,    66,
      64,    65,    66,    71,    71,    64,    73,    71,   292,    73,
      85,    64,    83,    66,    73,    68,    84,    64,    83,   246,
     247,   304,   290,    64,   292,    66,    73,   292,    64,    65,
      66,   299,    64,    64,    66,    71,    65,    69,    64,    71,
      66,   461,    71,    64,    85,    71,   466,    64,    65,    66,
      65,    13,    14,    85,    71,   398,    71,    83,   394,    64,
      65,    66,    20,    21,    65,   349,    71,     3,   404,   412,
      71,    84,   408,   436,   437,   438,   439,    73,   441,    72,
     423,   349,    78,    79,   422,   442,   449,   444,   445,    84,
     447,   448,   185,   186,   187,   188,   432,   433,    64,   519,
      66,    86,    87,    88,    64,    71,    66,    92,   451,    65,
     453,    65,   455,    80,    65,    71,    81,    71,   461,   539,
      71,   457,   458,   466,    70,    71,    65,   411,   113,    15,
      16,    17,    71,    19,   497,     1,    65,     3,   403,   502,
      65,   406,    71,   411,    70,    71,    71,   504,    22,   242,
     243,   244,   245,    85,   422,    15,    16,    17,    65,    19,
      20,    21,   525,   526,    71,   528,   529,   530,    85,    65,
     533,   534,    70,    71,   531,    71,   519,    15,    16,    17,
      65,    19,    20,    21,    71,    65,   549,    73,    74,    75,
     553,    71,    78,    79,    67,    64,   539,    66,    58,    67,
     185,   186,   187,   188,   189,   190,    83,   192,   193,   194,
     195,   196,    58,    73,    74,    75,    70,    71,    78,    79,
      84,     1,    82,     3,    84,    73,    74,    75,   240,   241,
      78,    79,    70,    65,     3,    73,    74,    75,     3,    84,
      78,    79,    83,    64,    82,    66,    84,    64,    65,    66,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    15,    16,
      17,    64,    19,    66,    64,     3,    66,    65,   263,   264,
       1,    67,     3,     4,     5,     6,     7,    64,     9,    67,
      11,    12,    67,    65,    64,     3,    85,    65,    65,   284,
      55,    67,    55,    67,    67,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    67,    56,    57,    58,    59,    60,
      61,    62,    69,    64,    67,    65,    65,    65,    69,    70,
      67,    72,    73,    74,    75,    76,    77,    67,     1,    84,
      84,   249,   251,    84,   248,   160,   142,   352,   250,   252,
      13,    14,    15,    16,    17,   451,    19,    20,    21,    22,
      23,    24,   132,   399,    42,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,   394,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,   404,
      -1,    -1,    65,   408,    67,    -1,    -1,    70,    71,    72,
      73,    74,    75,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    50,    51,    52,    -1,    -1,   432,   433,     1,
      -1,     3,     4,     5,     6,     7,    64,     9,    -1,    11,
      12,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      -1,    -1,   457,   458,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    -1,    -1,    -1,    -1,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,     1,    84,     3,     4,     5,     6,     7,    -1,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    64,    11,    12,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    -1,    -1,
      26,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    -1,
      -1,    26,    -1,    69,    -1,    -1,    72,    73,    74,    75,
      76,    77,    -1,    -1,    39,    40,    41,     1,    84,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    12,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      -1,    -1,    26,    -1,    69,    -1,    -1,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,     1,    84,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    26,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,     1,
      84,     3,     4,     5,     6,     7,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    26,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
       1,    84,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    64,    11,    12,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    -1,    -1,    26,
      -1,    -1,    -1,    84,    -1,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    64,    15,    16,
      17,    -1,    19,    20,    21,    72,    73,    74,    75,    76,
      77,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    69,    -1,    -1,    73,    74,    75,    -1,
      -1,    78,    79,    26,    -1,    82,    29,    84,     1,    85,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,    -1,    50,    51,    52,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    64,    11,    12,    67,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,     1,    26,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
      -1,    26,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    26,    68,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    66,    -1,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    64,    -1,    66,    -1,
      68,    69,    -1,    -1,    72,    73,    74,    75,    76,    77,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    26,    11,    12,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    26,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    66,    -1,    68,    69,    -1,
      -1,    72,    73,    74,    75,    76,    77,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    74,
      75,    76,    77,    -1,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    26,    11,    12,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      26,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    -1,    -1,    64,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    26,    11,    12,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    26,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    26,     3,     4,     5,     6,
       7,    64,    65,    -1,    11,    12,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,    -1,    64,    65,    26,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    64,    11,    12,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    -1,     1,    26,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    26,    11,    12,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    64,    -1,    26,    11,    12,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,     1,    26,
       3,     4,     5,     6,     7,    64,    -1,    -1,    11,    12,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    -1,
      -1,    64,    -1,    26,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    64,    11,    12,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,     1,    26,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    26,    11,    12,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    64,    -1,    26,    11,    12,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    26,     3,     4,     5,     6,     7,    64,
      -1,    -1,    11,    12,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    -1,    -1,    64,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    64,    11,    12,    -1,    -1,
      69,    -1,    -1,    72,    73,    74,    75,    76,    77,    -1,
      -1,    26,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    26,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,     0,     1,    64,
       3,    -1,    -1,    -1,    -1,    -1,     9,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    64,    15,    16,    17,    -1,    19,    20,    21,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    64,    65,    66,    70,    71,    -1,
      73,    74,    75,    73,    -1,    78,    79,    -1,    -1,    82,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       1,    -1,     3,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      64,    65,    66,    -1,    -1,    -1,    15,    16,    17,    73,
      19,    20,    21,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    73,    74,    75,    -1,    -1,    78,
      79,    -1,    -1,     1,    32,    33,    34,    35,    36,    37,
      38,     9,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    15,    16,    17,    -1,    19,
      20,    21,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    -1,    70,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    15,    16,    17,    -1,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    70,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    82,    -1,    84,    15,    16,    17,    -1,    19,
      20,    21,    -1,    -1,    -1,    -1,    15,    16,    17,    -1,
      19,    20,    21,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    82,    83,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    78,    79,    -1,    -1,    82,    83,    15,    16,
      17,    -1,    19,    20,    21,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    65,    -1,    78,    79,
      -1,    -1,    82,    -1,    73,    74,    75,    -1,    -1,    78,
      79,    -1,    -1,    82,    15,    16,    17,    -1,    19,    20,
      21,    -1,    -1,    -1,    -1,    15,    16,    17,    65,    19,
      20,    21,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      -1,    78,    79,    -1,    -1,    82,    15,    16,    17,    -1,
      19,    20,    21,    -1,    -1,    -1,    15,    16,    17,    -1,
      19,    20,    21,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    65,    -1,    78,    79,    -1,
      -1,    82,    -1,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    82,    15,    16,    17,    -1,    19,    20,    21,
      -1,    -1,    71,    -1,    73,    74,    75,    -1,    67,    78,
      79,    -1,    -1,    82,    73,    74,    75,    -1,    -1,    78,
      79,    -1,    -1,    82,    15,    16,    17,    -1,    19,    20,
      21,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,
      82,    15,    16,    17,    -1,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,    -1,
      71,    82,    73,    74,    75,    -1,    -1,    78,    79,    -1,
      -1,    82,    -1,     1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    -1,    82,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    69,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    32,    33,    34,    35,    36,    37,    38,     9,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     9,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     9,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     9,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     9,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    64,    73,
     108,   109,   112,   113,   114,   115,   121,   124,   125,   126,
     127,   128,   151,   152,   153,    64,    66,    69,   108,   109,
     144,   154,     3,    69,     1,   126,     1,   124,   128,   129,
       1,    84,   110,   111,   126,   109,   109,     3,    69,   109,
     109,     1,    64,    66,     1,   127,     0,   152,     1,     1,
       1,     3,     4,     5,     6,     7,    11,    12,    26,    39,
      40,    41,    54,    56,    57,    58,    59,    60,    61,    62,
      64,    70,    72,    73,    74,    75,    76,    77,    84,    87,
      88,    89,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   108,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     1,   126,
     108,   144,    69,     1,     3,   122,   123,    65,    65,   128,
     124,   128,    71,    85,   144,    71,    84,    85,   144,   154,
      69,     1,   113,   116,   117,   118,   124,   144,     1,     3,
      65,   109,   130,   131,   132,   133,     1,     3,    29,    67,
      73,   105,   129,    65,    67,    15,    16,    17,    19,    20,
      21,    70,    73,    74,    75,    78,    79,    82,    84,    83,
      64,    91,    91,    64,    91,    83,    64,    64,     1,    91,
     104,   107,    64,     1,   142,    64,     3,    84,    84,     1,
      84,   106,     1,   106,   118,   134,    10,    11,    12,    64,
      66,    68,     1,    24,    93,    73,    78,    79,    74,    75,
      13,    14,    15,    16,    17,    19,    20,    21,    72,    80,
      81,    22,    23,    82,    71,    84,     1,    70,   146,     1,
     122,    70,    71,    85,    85,    70,    71,     1,   111,    69,
     105,   137,   111,   137,   144,     1,   116,    70,    84,   118,
       1,    70,   117,     1,    83,   119,   120,   126,   118,    65,
      71,     1,    64,    66,   126,   128,   135,   136,    65,    71,
      65,    71,    67,   105,   129,    67,    67,    29,    67,    73,
     105,     1,    96,    96,    96,    96,     1,    97,    97,    93,
       1,    94,    94,    93,    93,     1,   106,   142,   134,   134,
     142,     1,   106,     1,   106,    83,     1,    84,   106,   108,
      58,    58,   106,    84,    84,    84,    65,    65,     1,    64,
     128,   135,    65,     3,     1,    65,    90,   105,   106,     3,
     105,   105,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    96,    97,    97,     1,    98,    99,   100,   101,
     102,     1,   106,   105,    70,    70,    71,     1,   123,   107,
     107,    70,   123,     1,    66,    68,   137,   138,   139,   140,
     141,    70,    70,    71,    83,   107,    71,    84,    83,    25,
     132,    64,    66,   136,     1,    65,   130,   135,    67,    73,
     105,   136,    64,    66,    25,   132,     3,    67,   105,   105,
      67,    67,    83,    83,    65,    65,    65,    65,    65,    65,
     142,    65,    84,   106,    84,    84,   106,    64,    64,    65,
       1,    69,    93,    71,    65,    71,    67,    83,    83,    70,
      70,    71,     1,   107,     3,    70,    71,   137,    85,   141,
       1,   120,   107,   120,   107,     1,     1,    65,    65,    67,
      67,     1,    65,   130,     1,    67,    73,   105,    67,    67,
     104,   104,   142,   142,   142,   142,   142,    65,   106,    84,
      84,   106,    65,   106,    84,   106,   106,   142,     1,   138,
     105,   105,   104,   104,   137,    67,    67,    70,   137,   139,
      65,    65,    67,    67,    67,    55,    55,   142,    65,    65,
      65,    84,   142,    65,    65,   106,    65,    65,    70,    71,
     137,   142,   142,   142,   142,   142,   106,   142,   142,    65,
      84,    84,    70,    65,   142,   142
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    87,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    90,    91,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    95,    96,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     104,   105,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   110,
     111,   111,   111,   112,   112,   112,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   114,   114,   114,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   119,   119,
     119,   120,   120,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   122,   123,   123,   123,   124,   124,
     124,   125,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   128,   128,   128,   128,   128,   129,   129,
     130,   130,   130,   131,   131,   131,   132,   132,   132,   133,
     133,   134,   134,   135,   135,   135,   135,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   138,   138,   138,   138,   138,   139,
     140,   140,   141,   141,   141,   142,   142,   142,   142,   142,
     142,   143,   143,   143,   144,   144,   144,   145,   145,   146,
     146,   147,   147,   147,   148,   148,   148,   148,   148,   148,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   150,   150,   150,   150,   150,   151,
     151,   152,   152,   153,   153,   153,   153,   153,   153,   154,
     154
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 47: /* additive_expression: error '+' multiplicative_expression  */
#line 101 "parserNuevecito.y"
                                              {printf("HOLA");}
#line 2416 "parserNuevecito.tab.c"
    break;


#line 2420 "parserNuevecito.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 526 "parserNuevecito.y"


int main(int argc, char **argv) {
	#ifdef YYDEBUG
  		yydebug = 1;
	#endif

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
	fprintf(stderr,"%s", lineptr);
	for(int i = 0; i < column - 1; i++)
		fprintf(stderr," ");
    fprintf(stderr,"^\n");
}
