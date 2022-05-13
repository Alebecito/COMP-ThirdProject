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
#include "globals.h"
extern int yylex();
int yyerror();
extern int yylineno;
extern int column;
extern FILE* yyin;
extern char* lineptr;
#define YYERROR_VERBOSE 1

#line 84 "parserNuevecito.tab.c"

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
  YYSYMBOL_I_CONSTANT = 4,                 /* I_CONSTANT  */
  YYSYMBOL_F_CONSTANT = 5,                 /* F_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_FUNC_NAME = 7,                  /* FUNC_NAME  */
  YYSYMBOL_SIZEOF = 8,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 9,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 10,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 11,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 12,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 13,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 14,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 15,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 16,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 17,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 18,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 19,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 20,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 22,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 23,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 24,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 25,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 26,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 27,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 28,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 29,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF_NAME = 30,              /* TYPEDEF_NAME  */
  YYSYMBOL_ENUMERATION_CONSTANT = 31,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_TYPEDEF = 32,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 33,                    /* EXTERN  */
  YYSYMBOL_STATIC = 34,                    /* STATIC  */
  YYSYMBOL_AUTO = 35,                      /* AUTO  */
  YYSYMBOL_REGISTER = 36,                  /* REGISTER  */
  YYSYMBOL_INLINE = 37,                    /* INLINE  */
  YYSYMBOL_CONST = 38,                     /* CONST  */
  YYSYMBOL_RESTRICT = 39,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 40,                  /* VOLATILE  */
  YYSYMBOL_BOOL = 41,                      /* BOOL  */
  YYSYMBOL_CHAR = 42,                      /* CHAR  */
  YYSYMBOL_SHORT = 43,                     /* SHORT  */
  YYSYMBOL_INT = 44,                       /* INT  */
  YYSYMBOL_LONG = 45,                      /* LONG  */
  YYSYMBOL_SIGNED = 46,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 47,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 48,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 49,                    /* DOUBLE  */
  YYSYMBOL_VOID = 50,                      /* VOID  */
  YYSYMBOL_COMPLEX = 51,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 52,                 /* IMAGINARY  */
  YYSYMBOL_STRUCT = 53,                    /* STRUCT  */
  YYSYMBOL_UNION = 54,                     /* UNION  */
  YYSYMBOL_ENUM = 55,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 56,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 57,                      /* CASE  */
  YYSYMBOL_DEFAULT = 58,                   /* DEFAULT  */
  YYSYMBOL_IF = 59,                        /* IF  */
  YYSYMBOL_ELSE = 60,                      /* ELSE  */
  YYSYMBOL_SWITCH = 61,                    /* SWITCH  */
  YYSYMBOL_WHILE = 62,                     /* WHILE  */
  YYSYMBOL_DO = 63,                        /* DO  */
  YYSYMBOL_FOR = 64,                       /* FOR  */
  YYSYMBOL_GOTO = 65,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 66,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 67,                     /* BREAK  */
  YYSYMBOL_RETURN = 68,                    /* RETURN  */
  YYSYMBOL_ALIGNAS = 69,                   /* ALIGNAS  */
  YYSYMBOL_ALIGNOF = 70,                   /* ALIGNOF  */
  YYSYMBOL_ATOMIC = 71,                    /* ATOMIC  */
  YYSYMBOL_GENERIC = 72,                   /* GENERIC  */
  YYSYMBOL_NORETURN = 73,                  /* NORETURN  */
  YYSYMBOL_STATIC_ASSERT = 74,             /* STATIC_ASSERT  */
  YYSYMBOL_THREAD_LOCAL = 75,              /* THREAD_LOCAL  */
  YYSYMBOL_76_then_ = 76,                  /* "then"  */
  YYSYMBOL_77_ = 77,                       /* '('  */
  YYSYMBOL_78_ = 78,                       /* ')'  */
  YYSYMBOL_79_ = 79,                       /* ','  */
  YYSYMBOL_80_ = 80,                       /* ':'  */
  YYSYMBOL_81_ = 81,                       /* '['  */
  YYSYMBOL_82_ = 82,                       /* ']'  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_86_ = 86,                       /* '&'  */
  YYSYMBOL_87_ = 87,                       /* '*'  */
  YYSYMBOL_88_ = 88,                       /* '+'  */
  YYSYMBOL_89_ = 89,                       /* '-'  */
  YYSYMBOL_90_ = 90,                       /* '~'  */
  YYSYMBOL_91_ = 91,                       /* '!'  */
  YYSYMBOL_92_ = 92,                       /* '/'  */
  YYSYMBOL_93_ = 93,                       /* '%'  */
  YYSYMBOL_94_ = 94,                       /* '<'  */
  YYSYMBOL_95_ = 95,                       /* '>'  */
  YYSYMBOL_96_ = 96,                       /* '^'  */
  YYSYMBOL_97_ = 97,                       /* '|'  */
  YYSYMBOL_98_ = 98,                       /* '?'  */
  YYSYMBOL_99_ = 99,                       /* '='  */
  YYSYMBOL_100_ = 100,                     /* ';'  */
  YYSYMBOL_YYACCEPT = 101,                 /* $accept  */
  YYSYMBOL_primary_expression = 102,       /* primary_expression  */
  YYSYMBOL_constant = 103,                 /* constant  */
  YYSYMBOL_enumeration_constant = 104,     /* enumeration_constant  */
  YYSYMBOL_string = 105,                   /* string  */
  YYSYMBOL_generic_selection = 106,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 107,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 108,      /* generic_association  */
  YYSYMBOL_postfix_expression = 109,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 110, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 111,         /* unary_expression  */
  YYSYMBOL_unary_operator = 112,           /* unary_operator  */
  YYSYMBOL_cast_expression = 113,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 114, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 115,      /* additive_expression  */
  YYSYMBOL_shift_expression = 116,         /* shift_expression  */
  YYSYMBOL_relational_expression = 117,    /* relational_expression  */
  YYSYMBOL_equality_expression = 118,      /* equality_expression  */
  YYSYMBOL_and_expression = 119,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 120,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 121,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 122,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 123,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 124,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 125,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 126,      /* assignment_operator  */
  YYSYMBOL_expression = 127,               /* expression  */
  YYSYMBOL_constant_expression = 128,      /* constant_expression  */
  YYSYMBOL_declaration = 129,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 130,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 131,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 132,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 133,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 134,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 135, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 136,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 137,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 138,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 139, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 140,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 141,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 142,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 143,          /* enumerator_list  */
  YYSYMBOL_enumerator = 144,               /* enumerator  */
  YYSYMBOL_type_qualifier = 145,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 146,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 147,      /* alignment_specifier  */
  YYSYMBOL_declarator = 148,               /* declarator  */
  YYSYMBOL_direct_declarator = 149,        /* direct_declarator  */
  YYSYMBOL_pointer = 150,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 151,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 152,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 153,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 154,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 155,          /* identifier_list  */
  YYSYMBOL_type_name = 156,                /* type_name  */
  YYSYMBOL_abstract_declarator = 157,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 158, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 159,              /* initializer  */
  YYSYMBOL_initializer_list = 160,         /* initializer_list  */
  YYSYMBOL_designation = 161,              /* designation  */
  YYSYMBOL_designator_list = 162,          /* designator_list  */
  YYSYMBOL_designator = 163,               /* designator  */
  YYSYMBOL_static_assert_declaration = 164, /* static_assert_declaration  */
  YYSYMBOL_statement = 165,                /* statement  */
  YYSYMBOL_labeled_statement = 166,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 167,       /* compound_statement  */
  YYSYMBOL_block_item_list = 168,          /* block_item_list  */
  YYSYMBOL_block_item = 169,               /* block_item  */
  YYSYMBOL_expression_statement = 170,     /* expression_statement  */
  YYSYMBOL_selection_statement = 171,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 172,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 173,           /* jump_statement  */
  YYSYMBOL_translation_unit = 174,         /* translation_unit  */
  YYSYMBOL_external_declaration = 175,     /* external_declaration  */
  YYSYMBOL_function_definition = 176,      /* function_definition  */
  YYSYMBOL_declaration_list = 177          /* declaration_list  */
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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2477

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  273
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  475

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


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
       2,     2,     2,    91,     2,     2,     2,    93,    86,     2,
      77,    78,    87,    88,    79,    89,    83,    92,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,   100,
      94,    99,    95,    98,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    97,    85,    90,     2,     2,     2,
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
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    40,    40,    41,    42,    43,    44,    48,    49,    50,
      54,    58,    59,    63,    67,    68,    72,    73,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    90,    91,
      95,    96,    97,    98,    99,   100,   101,   105,   106,   107,
     108,   109,   110,   114,   115,   119,   120,   121,   122,   126,
     127,   128,   132,   133,   134,   138,   139,   140,   141,   142,
     146,   147,   148,   152,   153,   157,   158,   162,   163,   167,
     168,   172,   173,   177,   178,   182,   183,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   201,   202,
     206,   210,   211,   212,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   229,   230,   234,   235,   239,   240,
     241,   242,   243,   244,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   266,
     267,   268,   272,   273,   277,   278,   282,   283,   284,   288,
     289,   290,   291,   295,   296,   300,   301,   302,   306,   307,
     308,   309,   310,   314,   315,   319,   320,   324,   325,   326,
     327,   331,   332,   336,   337,   341,   342,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   363,   364,   365,   366,   370,   371,   376,   377,   381,
     382,   386,   387,   388,   392,   393,   397,   398,   402,   403,
     404,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   432,   433,   434,   438,   439,   440,   441,   445,
     449,   450,   454,   455,   459,   463,   464,   465,   466,   467,
     468,   472,   473,   474,   478,   479,   483,   484,   488,   489,
     493,   494,   498,   499,   500,   504,   505,   506,   507,   508,
     509,   513,   514,   515,   516,   517,   521,   522,   526,   527,
     531,   532,   536,   537
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
  "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL", "FUNC_NAME", "SIZEOF",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "\"then\"", "'('", "')'",
  "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'", "'+'",
  "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'",
  "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "alignment_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-374)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2244,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,    25,   -66,  -374,  -374,   -55,
    -374,  -374,   142,  2334,  2334,  -374,    70,  -374,  2334,  2334,
    2334,  -374,  1824,  -374,  -374,   -57,    39,   835,  1656,  -374,
      53,   165,  -374,   -41,  -374,  1924,   -13,    36,  -374,  -374,
     -27,   754,  -374,  -374,  -374,  -374,  -374,    39,  -374,   -62,
     -61,  -374,  -374,  -374,  -374,  -374,  -374,  1678,  1700,  1700,
    -374,   -33,   -28,   835,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,   274,  -374,  1656,  -374,   131,   182,
     260,    52,   262,   115,   -10,   110,   191,    34,  -374,   133,
    2406,   108,  2406,   136,   138,   156,  -374,  -374,   165,    53,
    -374,   418,  1412,  -374,   142,  -374,  2144,  1877,   924,   -13,
     754,  2042,  -374,   135,  -374,   -50,  1656,    17,  -374,   835,
    -374,   835,  -374,  -374,  2406,  1656,   502,  -374,  -374,   208,
     163,   245,  -374,  -374,  1434,  1656,   259,  -374,  1656,  1656,
    1656,  1656,  1656,  1656,  1656,  1656,  1656,  1656,  1656,  1656,
    1656,  1656,  1656,  1656,  1656,  1656,  1656,  -374,  -374,  1992,
     946,    60,  -374,   103,  -374,  -374,   244,  -374,  -374,  -374,
    -374,   157,   180,  1656,   184,   190,   198,   204,   653,   212,
     291,   196,   201,   691,  -374,  -374,   -38,  -374,  -374,  -374,
    -374,   509,  -374,  -374,  -374,  -374,  -374,  1390,  -374,  -374,
    -374,  -374,  -374,  -374,    31,   235,   236,  -374,   213,  1257,
    -374,   238,   241,  1035,  2090,  -374,  -374,  1656,  -374,   -24,
    -374,   237,    20,  -374,  -374,  -374,  -374,   249,   255,   263,
     268,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  1656,  -374,  1656,  1523,  -374,  -374,   220,  -374,
     118,  -374,  -374,  -374,  -374,   131,   131,   182,   182,   260,
     260,   260,   260,    52,    52,   262,   115,   -10,   110,   191,
     226,  -374,   276,   280,  1257,  -374,   270,   286,  1057,   103,
    2197,  1146,   294,   653,   289,   653,  1656,  1656,  1656,   311,
     600,   275,  -374,  -374,  -374,    56,  -374,  -374,  -374,  1656,
     373,  -374,    63,  1412,   150,  -374,  1768,  -374,   178,  -374,
    -374,  2290,  -374,   374,   296,  1257,  -374,  -374,  1656,  -374,
     297,   298,  -374,  -374,    23,  -374,  1656,  -374,   299,   299,
    -374,  2372,  -374,  -374,  1390,  -374,  -374,  1656,  -374,  1656,
    -374,  -374,   300,  1257,  -374,  -374,  1656,  -374,   302,  -374,
     303,  1257,  -374,   304,   305,  1168,   285,  -374,   653,  -374,
     229,   231,   247,   313,   744,   744,  -374,  -374,   306,  -374,
    1279,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,   309,
     310,  -374,  -374,  -374,  -374,   314,   253,  -374,   315,    72,
    -374,  -374,  -374,   316,   317,  -374,  -374,   319,  1257,  -374,
    -374,  1656,  -374,   320,  -374,  -374,   653,   653,   653,  1656,
    1545,  1567,  -374,  -374,  -374,  1412,  -374,  -374,  1656,  -374,
    2372,  1656,  1301,  -374,  -374,  -374,  -374,   321,   322,  -374,
     336,  -374,  -374,   257,   653,   261,   653,   266,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,   653,   307,  -374,   653,  -374,
     653,  -374,  -374,  -374,  -374
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   128,   108,   109,   110,   112,   113,   161,   157,   158,
     159,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   132,   133,     0,     0,   160,   162,     0,
     111,   269,     0,    95,    97,   126,     0,   127,    99,   101,
     103,    93,     0,   266,   268,   152,     0,     0,     0,   167,
       0,   184,    91,     0,   104,   107,   166,     0,    94,    96,
     131,     0,    98,   100,   102,     1,   267,     0,    10,   156,
       0,   153,     2,     7,     8,    11,    12,     0,     0,     0,
       9,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      18,     3,     4,     6,    30,    43,     0,    45,    49,    52,
      55,    60,    63,    65,    67,    69,    71,    73,    90,     0,
     140,   197,   142,     0,     0,     0,   185,   183,   182,     0,
      92,     0,     0,   272,     0,   271,     0,     0,     0,   165,
       0,     0,   134,     0,   138,     0,     0,     0,   148,     0,
      34,     0,    31,    32,     0,     0,    43,    75,    88,     0,
       0,     0,    24,    25,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   139,     0,
       0,   199,   196,   200,   141,   163,     0,   168,   186,   181,
     105,   107,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,   250,     0,   248,   249,   235,
     236,     0,   246,   237,   238,   239,   240,     0,   224,   106,
     273,   270,   194,   179,   193,     0,   188,   189,     0,     0,
     169,    38,     0,     0,     0,   129,   135,     0,   136,     0,
     143,   147,     0,   150,   155,   149,   154,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    77,     0,     5,     0,     0,    23,    20,     0,    28,
       0,    22,    46,    47,    48,    50,    51,    53,    54,    58,
      59,    56,    57,    61,    62,    64,    66,    68,    70,    72,
       0,   218,     0,     0,     0,   202,    38,     0,     0,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   262,   263,   264,     0,   251,   245,   247,     0,
       0,   226,     0,     0,     0,   230,     0,   191,   199,   192,
     178,     0,   180,     0,     0,     0,   170,   177,     0,   176,
      38,     0,   130,   145,     0,   137,     0,   151,    35,     0,
      36,     0,    76,    89,     0,    44,    21,     0,    19,     0,
     219,   201,     0,     0,   203,   209,     0,   208,     0,   220,
       0,     0,   210,    38,     0,     0,     0,   241,     0,   243,
       0,     0,     0,     0,     0,     0,   261,   265,     0,   233,
       0,   222,   225,   229,   231,   187,   190,   195,   172,     0,
       0,   173,   175,   144,   146,     0,     0,    14,     0,     0,
      29,    74,   205,     0,     0,   207,   221,     0,     0,   211,
     217,     0,   216,     0,   234,   242,     0,     0,     0,     0,
       0,     0,   232,   223,   228,     0,   171,   174,     0,    13,
       0,     0,     0,    26,   204,   206,   213,     0,     0,   214,
     253,   254,   255,     0,     0,     0,     0,     0,   227,    17,
      15,    16,    27,   212,   215,     0,     0,   259,     0,   257,
       0,   252,   256,   260,   258
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -374,  -374,  -374,  -374,  -374,  -374,  -374,   -43,  -374,  -374,
       0,  -374,   -35,   199,   200,    78,   197,   234,   239,   233,
     240,   243,  -374,   -17,    -1,  -374,   -81,   -16,   -15,    12,
    -374,   290,  -374,   -40,  -374,  -374,   278,  -106,    19,  -374,
      66,  -374,   345,  -128,   -47,  -374,  -374,   -26,   -54,   -36,
     -95,  -122,  -374,    82,  -374,    69,   -98,  -173,  -121,    61,
    -373,  -374,    92,   -42,  -188,  -374,   -39,  -374,   216,  -127,
    -374,  -374,  -374,  -374,   377,  -374,  -374
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    90,    91,    69,    92,    93,   406,   407,    94,   268,
     146,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   147,   148,   262,   206,   109,    31,   124,
      53,    54,    33,    34,    35,    36,   131,   132,   111,   239,
     240,    37,    70,    71,    38,    39,    40,   115,    56,    57,
     118,   292,   226,   227,   228,   408,   293,   183,   321,   322,
     323,   324,   325,    41,   208,   209,   210,   211,   212,   213,
     214,   215,   216,    42,    43,    44,   126
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     112,   219,   149,   129,   116,   225,    55,   110,   299,   246,
     309,    47,    32,   182,   112,   117,   125,   435,   137,   134,
      68,   110,    48,    68,   138,   236,    49,    67,    45,   242,
     108,   108,   114,   233,    49,   243,   112,   136,   119,    49,
     123,   264,    68,   110,   144,    58,    59,    95,    95,   145,
      62,    63,    64,   175,    32,   344,    49,   130,   149,   120,
     149,   157,   316,   112,   127,   112,   165,   166,   128,   435,
     110,   188,   110,    60,   270,   181,   345,   140,   142,   143,
     133,   116,   189,   112,   112,   298,   172,   221,   134,   134,
     110,   110,   112,   191,   112,   290,    95,   112,   191,   110,
      50,   110,   245,   237,   110,   347,   207,   241,   326,    46,
      51,   220,   180,    50,   246,   377,   113,   379,    51,   108,
     244,   218,   315,   272,   273,   274,   329,   232,   236,   178,
      50,   184,   176,   116,   335,   264,    95,   179,    49,   224,
      51,   180,   390,   181,   250,    49,   167,   168,   391,   133,
     133,   442,   150,   269,    61,   299,   387,   443,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,   108,   304,   370,   297,
     300,    49,   116,   385,   301,   179,   188,   112,   328,   180,
     425,   224,   134,    95,   110,    51,   207,   264,   327,   363,
     358,   171,   392,     8,     9,    10,   375,   173,   247,   174,
     248,   177,    50,   249,   185,   237,   218,   186,   158,    50,
     108,   343,    51,   159,   160,   380,   381,   382,   334,    51,
     355,   319,   341,   320,   187,   238,    27,    95,   450,   451,
     452,   265,    52,   279,   280,   281,   282,   116,   266,   393,
     302,   188,    51,   133,   116,   326,   122,   430,   431,   180,
     303,   352,   271,   353,   305,    95,   467,   306,   469,   434,
     161,   162,   163,   164,   129,   307,   418,   471,   169,   170,
     473,   308,   474,   151,   152,   153,   263,   264,   188,   310,
     328,   332,   333,   362,   311,   384,   312,   368,   356,   357,
     374,   313,   108,   388,   112,   264,   359,   426,   264,   427,
     264,   110,   224,   330,   458,   331,   188,   346,   241,    95,
     336,   434,   218,   337,   116,   428,   264,   348,   188,   108,
     404,   439,   440,   349,   399,   466,   264,   400,   224,   468,
     264,   350,   411,   224,   470,   264,    95,   351,   453,   455,
     457,   154,   364,   218,   360,   155,   410,   156,   361,    95,
     275,   276,   413,   277,   278,   414,   283,   284,   365,   378,
     417,   188,   376,   383,   423,   386,   389,   397,   398,   401,
     402,   416,   412,   354,   415,   424,   419,   420,   432,   218,
     429,   436,   437,   112,   438,   441,   465,   460,   444,   445,
     110,   446,   449,   463,   464,   285,   287,   472,   234,   190,
     403,   286,   135,   396,   288,   409,   394,   447,   289,    66,
     448,   192,    73,    74,    75,    76,    77,   318,    78,    79,
       0,     0,     0,     0,   218,     0,     0,   459,     0,     0,
     461,   218,     0,     0,     0,     0,     0,     0,     1,    80,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   193,   194,   195,     0,   196,
     197,   198,   199,   200,   201,   202,   203,    26,    81,    27,
      82,    28,    29,    30,     0,    83,     0,     0,     0,     0,
       0,     0,   121,   204,    84,    85,    86,    87,    88,    89,
       0,     0,   192,    73,    74,    75,    76,    77,   205,    78,
      79,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,     0,     0,     0,     0,     0,     0,     0,     1,
      80,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,   193,   194,   195,     0,
     196,   197,   198,   199,   200,   201,   202,   203,    26,    81,
      27,    82,    28,    29,    30,     0,    83,     0,     0,     0,
       0,     0,     0,   121,   317,    84,    85,    86,    87,    88,
      89,   261,     0,    72,    73,    74,    75,    76,    77,   205,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    80,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   192,    73,    74,    75,
      76,    77,     0,    78,    79,     0,     0,     0,     0,    26,
      81,    27,    82,    28,    29,    30,     0,    83,     0,     0,
       0,     0,     0,     0,    80,     0,    84,    85,    86,    87,
      88,    89,     0,     0,    72,    73,    74,    75,    76,    77,
     205,    78,    79,     0,     0,     0,     0,     0,     0,     0,
     193,   194,   195,     0,   196,   197,   198,   199,   200,   201,
     202,   203,    80,    81,     0,    82,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,   121,     0,    84,
      85,    86,    87,    88,    89,     0,     0,    72,    73,    74,
      75,    76,    77,   205,    78,    79,     0,     0,     0,     0,
       0,    81,     0,    82,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,    80,     0,    84,    85,    86,
      87,    88,    89,     0,     1,     0,     0,     0,     0,     0,
       0,   314,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,    81,     0,    82,     0,     0,     0,
       0,    83,     0,     0,     0,    27,     0,     0,    29,     0,
      84,    85,    86,    87,    88,    89,     0,     0,    72,    73,
      74,    75,    76,    77,   205,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    80,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    27,    82,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    80,    78,    79,   229,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
     294,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,    81,    27,    82,     0,     0,     0,
       0,    83,     0,     0,     0,     0,   230,     0,     0,     0,
      84,   231,    86,    87,    88,    89,    81,    27,    82,     0,
       0,     0,     0,    83,     0,     0,     0,     0,   295,     0,
       0,     0,    84,   296,    86,    87,    88,    89,    72,    73,
      74,    75,    76,    77,     0,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    80,    78,    79,   338,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,   366,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,    81,    27,    82,     0,     0,
       0,     0,    83,     0,     0,     0,     0,   339,     0,     0,
       0,    84,   340,    86,    87,    88,    89,    81,    27,    82,
       0,     0,     0,     0,    83,     0,     0,     0,     0,   367,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    80,    78,    79,
     371,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,   421,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,    81,    27,    82,     0,
       0,     0,     0,    83,     0,     0,     0,     0,   372,     0,
       0,     0,    84,   373,    86,    87,    88,    89,    81,    27,
      82,     0,     0,     0,     0,    83,     0,     0,     0,     0,
     422,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      72,    73,    74,    75,    76,    77,     0,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    80,    78,
      79,     0,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      80,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    27,    82,
       0,     0,    80,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    81,
       0,    82,     0,     0,     0,     0,    83,     0,     0,     0,
     319,     0,   320,   217,   433,    84,    85,    86,    87,    88,
      89,    81,     0,    82,     0,     0,     0,     0,    83,     0,
       0,     0,   319,     0,   320,   217,   462,    84,    85,    86,
      87,    88,    89,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    80,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    80,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,    82,     0,     0,    80,     0,    83,     0,     0,
       0,   319,     0,   320,   217,     0,    84,    85,    86,    87,
      88,    89,    81,     0,    82,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,   217,     0,    84,    85,
      86,    87,    88,    89,    81,     0,    82,     0,     0,     0,
       0,    83,   267,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    72,    73,    74,    75,
      76,    77,     0,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    80,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    80,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,    82,     0,     0,    80,     0,
      83,     0,     0,     0,     0,     0,     0,   354,     0,    84,
      85,    86,    87,    88,    89,    81,     0,    82,     0,     0,
       0,     0,    83,   454,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    81,     0,    82,
       0,     0,     0,     0,    83,   456,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    80,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    80,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    82,     0,
       0,    80,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    81,     0,
      82,     0,     0,     0,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      81,    49,    82,     0,     0,     0,     0,   141,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,     0,   326,   291,     0,     0,   180,
       0,     0,     0,     0,     1,    51,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     0,     1,   223,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   122,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,     0,   179,
     291,     0,     1,   180,     0,     0,     0,     0,     0,    51,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,    29,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,   235,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,   342,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     1,   121,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     0,     1,   369,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     1,    30,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,    26,     0,    27,     0,    28,     0,    30,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
     405,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,    27,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      47,   122,    83,    57,    51,   127,    32,    47,   181,   137,
     198,    77,     0,   111,    61,    51,    55,   390,    79,    61,
       3,    61,    77,     3,    85,   131,     3,    84,     3,    79,
      47,    48,    48,   128,     3,    85,    83,    99,    79,     3,
      55,    79,     3,    83,    77,    33,    34,    47,    48,    77,
      38,    39,    40,    19,    42,    79,     3,    84,   139,   100,
     141,    96,   100,   110,    77,   112,    14,    15,    81,   442,
     110,   118,   112,     3,   155,   111,   100,    77,    78,    79,
      61,   128,   118,   130,   131,   180,    96,   126,   130,   131,
     130,   131,   139,   119,   141,   176,    96,   144,   124,   139,
      77,   141,    85,    80,   144,    85,   121,   133,    77,    84,
      87,   126,    81,    77,   242,   303,    47,   305,    87,   136,
     136,   122,   203,   158,   159,   160,   224,   128,   234,   110,
      77,   112,    98,   180,   229,    79,   136,    77,     3,   127,
      87,    81,    79,   179,   145,     3,    94,    95,    85,   130,
     131,    79,    83,   154,    84,   328,   100,    85,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   193,   193,   300,   180,
      77,     3,   229,   310,    81,    77,   233,   234,   224,    81,
     378,   179,   234,   193,   234,    87,   211,    79,   224,   294,
      82,    86,   323,    38,    39,    40,   301,    97,   139,    18,
     141,    78,    77,   144,    78,    80,   217,    79,    87,    77,
     237,   237,    87,    92,    93,   306,   307,   308,   229,    87,
     265,    81,   233,    83,    78,   100,    71,   237,   426,   427,
     428,    78,   100,   165,   166,   167,   168,   294,     3,    99,
       6,   298,    87,   234,   301,    77,    99,   384,   385,    81,
      80,   262,     3,   264,    80,   265,   454,    77,   456,   390,
      88,    89,    12,    13,   328,    77,   371,   465,    16,    17,
     468,    77,   470,     9,    10,    11,    78,    79,   335,    77,
     326,    78,    79,   294,     3,   310,   100,   298,    78,    79,
     301,   100,   319,   319,   351,    79,    80,    78,    79,    78,
      79,   351,   300,    78,   435,    79,   363,    80,   344,   319,
      82,   442,   323,    82,   371,    78,    79,    78,   375,   346,
     346,    78,    79,    78,   335,    78,    79,   338,   326,    78,
      79,    78,   359,   331,    78,    79,   346,    79,   429,   430,
     431,    77,    82,   354,    78,    81,   357,    83,    78,   359,
     161,   162,   363,   163,   164,   366,   169,   170,    82,    80,
     371,   418,    78,    62,   375,   100,     3,     3,    82,    82,
      82,    78,    82,    84,    82,   100,    82,    82,    82,   390,
      77,    82,    82,   440,    80,    80,    60,   440,    82,    82,
     440,    82,    82,    82,    82,   171,   173,   100,   130,   119,
     344,   172,    67,   331,   174,   354,   324,   418,   175,    42,
     421,     3,     4,     5,     6,     7,     8,   211,    10,    11,
      -1,    -1,    -1,    -1,   435,    -1,    -1,   438,    -1,    -1,
     441,   442,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,     3,     4,     5,     6,     7,     8,   100,    10,
      11,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      91,    99,    -1,     3,     4,     5,     6,     7,     8,   100,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,     3,     4,     5,     6,     7,     8,
     100,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    31,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,     3,     4,     5,
       6,     7,     8,   100,    10,    11,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    86,    87,    88,
      89,    90,    91,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,     3,     4,
       5,     6,     7,     8,   100,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    71,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    31,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    31,    -1,    77,    -1,    -1,
      -1,    81,    -1,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,     3,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     0,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    30,    87,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    30,    78,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    99,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,
      78,    -1,    30,    81,    -1,    -1,    -1,    -1,    -1,    87,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    85,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    85,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    84,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    30,    78,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    30,    75,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    69,    -1,    71,    -1,    73,    -1,    75,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   129,   130,   133,   134,   135,   136,   142,   145,   146,
     147,   164,   174,   175,   176,     3,    84,    77,    77,     3,
      77,    87,   100,   131,   132,   148,   149,   150,   130,   130,
       3,    84,   130,   130,   130,     0,   175,    84,     3,   104,
     143,   144,     3,     4,     5,     6,     7,     8,    10,    11,
      31,    70,    72,    77,    86,    87,    88,    89,    90,    91,
     102,   103,   105,   106,   109,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   128,
     134,   139,   145,   156,   128,   148,   145,   150,   151,    79,
     100,    84,    99,   129,   130,   167,   177,    77,    81,   149,
      84,   137,   138,   139,   164,   143,    99,    79,    85,    77,
     111,    77,   111,   111,    77,    77,   111,   124,   125,   127,
     156,     9,    10,    11,    77,    81,    83,   113,    87,    92,
      93,    88,    89,    12,    13,    14,    15,    94,    95,    16,
      17,    86,    96,    97,    18,    19,    98,    78,   139,    77,
      81,   150,   157,   158,   139,    78,    79,    78,   145,   150,
     132,   148,     3,    57,    58,    59,    61,    62,    63,    64,
      65,    66,    67,    68,    85,   100,   127,   129,   165,   166,
     167,   168,   169,   170,   171,   172,   173,    84,   125,   159,
     129,   167,     3,    78,   130,   152,   153,   154,   155,    34,
      82,    87,   125,   151,   137,    85,   138,    80,   100,   140,
     141,   148,    79,    85,   128,    85,   144,   156,   156,   156,
     125,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    99,   126,    78,    79,    78,     3,    78,   110,   125,
     127,     3,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   117,   117,   118,   119,   120,   121,   122,
     127,    78,   152,   157,    34,    82,    87,   125,   151,   158,
      77,    81,     6,    80,   128,    80,    77,    77,    77,   165,
      77,     3,   100,   100,   100,   127,   100,    85,   169,    81,
      83,   159,   160,   161,   162,   163,    77,   148,   150,   157,
      78,    79,    78,    79,   125,   151,    82,    82,    34,    82,
      87,   125,    85,   128,    79,   100,    80,    85,    78,    78,
      78,    79,   125,   125,    84,   113,    78,    79,    82,    80,
      78,    78,   125,   151,    82,    82,    34,    82,   125,    78,
     152,    34,    82,    87,   125,   151,    78,   165,    80,   165,
     127,   127,   127,    62,   129,   170,   100,   100,   128,     3,
      79,    85,   159,    99,   163,    56,   154,     3,    82,   125,
     125,    82,    82,   141,   128,    58,   107,   108,   156,   160,
     125,   124,    82,   125,   125,    82,    78,   125,   151,    82,
      82,    34,    82,   125,   100,   165,    78,    78,    78,    77,
     170,   170,    82,    85,   159,   161,    82,    82,    80,    78,
      79,    80,    79,    85,    82,    82,    82,   125,   125,    82,
     165,   165,   165,   127,    78,   127,    78,   127,   159,   125,
     108,   125,    85,    82,    82,    60,    78,   165,    78,   165,
      78,   165,   100,   165,   165
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   102,   102,   102,   103,   103,   103,
     104,   105,   105,   106,   107,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   111,   112,   112,   112,
     112,   112,   112,   113,   113,   114,   114,   114,   114,   115,
     115,   115,   116,   116,   116,   117,   117,   117,   117,   117,
     118,   118,   118,   119,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     128,   129,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   135,
     135,   135,   136,   136,   137,   137,   138,   138,   138,   139,
     139,   139,   139,   140,   140,   141,   141,   141,   142,   142,
     142,   142,   142,   143,   143,   144,   144,   145,   145,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   150,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   155,   155,   156,   156,   157,   157,
     157,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   159,   159,   159,   160,   160,   160,   160,   161,
     162,   162,   163,   163,   164,   165,   165,   165,   165,   165,
     165,   166,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   171,   172,   172,   172,   172,   172,
     172,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   177
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     2,     1,     1,     1,     2,     2,     3,     1,     2,
       1,     2,     1,     1,     3,     2,     3,     1,     4,     5,
       5,     6,     2,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     2,     1,     1,     3,     3,
       4,     6,     5,     5,     6,     5,     4,     4,     4,     3,
       4,     3,     2,     2,     1,     1,     2,     3,     1,     1,
       3,     2,     2,     1,     1,     3,     2,     1,     2,     1,
       1,     3,     2,     3,     5,     4,     5,     4,     3,     3,
       3,     4,     6,     5,     5,     6,     4,     4,     2,     3,
       3,     4,     3,     4,     1,     2,     1,     4,     3,     2,
       1,     2,     3,     2,     7,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     1,     2,     1,     1,
       1,     2,     7,     5,     5,     5,     7,     6,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     2,     1,     1,
       4,     3,     1,     2
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
  case 108: /* storage_class_specifier: TYPEDEF  */
#line 239 "parserNuevecito.y"
                        {typedef_name_flag = 1;}
#line 2281 "parserNuevecito.tab.c"
    break;

  case 139: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 288 "parserNuevecito.y"
                                                  {typedef_name_flag = 2;}
#line 2287 "parserNuevecito.tab.c"
    break;

  case 140: /* specifier_qualifier_list: type_specifier  */
#line 289 "parserNuevecito.y"
                         {typedef_name_flag = 2;}
#line 2293 "parserNuevecito.tab.c"
    break;


#line 2297 "parserNuevecito.tab.c"

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

#line 540 "parserNuevecito.y"

#include <stdio.h>

int yyerror(const char *str) {
    fprintf(stderr, "error: %s, line %d, column %d\n", str, yylineno, column);
	//fprintf(stderr,"%s", lineptr);
	for(int i = 0; i < column - 1; i++)
		fprintf(stderr," ");
    fprintf(stderr,"^\n");
}
