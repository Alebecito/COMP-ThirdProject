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
extern void eat_to_newline();
extern char* line;
extern char* filename;
#define YYERROR_VERBOSE 1

#line 87 "parserNuevecito.tab.c"

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
  YYSYMBOL__BOOL = 41,                     /* _BOOL  */
  YYSYMBOL_CHAR = 42,                      /* CHAR  */
  YYSYMBOL_SHORT = 43,                     /* SHORT  */
  YYSYMBOL_INT = 44,                       /* INT  */
  YYSYMBOL_LONG = 45,                      /* LONG  */
  YYSYMBOL_SIGNED = 46,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 47,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 48,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 49,                    /* DOUBLE  */
  YYSYMBOL_VOID = 50,                      /* VOID  */
  YYSYMBOL__COMPLEX = 51,                  /* _COMPLEX  */
  YYSYMBOL__IMAGINARY = 52,                /* _IMAGINARY  */
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
  YYSYMBOL__ALIGNAS = 69,                  /* _ALIGNAS  */
  YYSYMBOL__ALIGNOF = 70,                  /* _ALIGNOF  */
  YYSYMBOL__ATOMIC = 71,                   /* _ATOMIC  */
  YYSYMBOL__GENERIC = 72,                  /* _GENERIC  */
  YYSYMBOL__NORETURN = 73,                 /* _NORETURN  */
  YYSYMBOL__STATIC_ASSERT = 74,            /* _STATIC_ASSERT  */
  YYSYMBOL__THREAD_LOCAL = 75,             /* _THREAD_LOCAL  */
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
  YYSYMBOL__GENERIC_selection = 106,       /* _GENERIC_selection  */
  YYSYMBOL__GENERIC_assoc_list = 107,      /* _GENERIC_assoc_list  */
  YYSYMBOL__GENERIC_association = 108,     /* _GENERIC_association  */
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
  YYSYMBOL__STATIC_ASSERT_declaration = 164, /* _STATIC_ASSERT_declaration  */
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
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3675

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  322
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  599

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
       0,    43,    43,    44,    45,    46,    47,    48,    52,    53,
      54,    58,    62,    63,    67,    71,    72,    76,    77,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    94,
      95,    96,   100,   101,   102,   103,   104,   105,   106,   110,
     111,   112,   113,   114,   115,   119,   120,   124,   125,   126,
     127,   128,   129,   130,   134,   135,   136,   137,   138,   142,
     143,   144,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   160,   161,   162,   163,   164,   168,   169,   173,   174,
     178,   179,   183,   184,   188,   189,   193,   194,   195,   196,
     197,   201,   202,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   220,   221,   225,   229,   230,   231,
     232,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   249,   250,   251,   255,   256,   257,   261,   262,   263,
     264,   265,   266,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   288,   289,
     290,   291,   292,   296,   297,   301,   302,   306,   307,   308,
     309,   313,   314,   315,   316,   320,   321,   322,   326,   327,
     328,   329,   333,   334,   335,   336,   337,   338,   339,   343,
     344,   345,   349,   350,   351,   355,   356,   357,   358,   362,
     363,   367,   368,   372,   373,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   397,   398,   399,   400,   405,   406,   411,   412,
     413,   417,   418,   419,   423,   424,   425,   429,   430,   434,
     435,   439,   440,   441,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   472,   473,
     474,   475,   479,   480,   481,   482,   483,   487,   491,   492,
     496,   497,   501,   505,   506,   507,   508,   509,   510,   514,
     515,   516,   520,   521,   522,   526,   527,   531,   532,   536,
     537,   538,   542,   543,   544,   545,   546,   551,   552,   553,
     554,   555,   556,   557,   558,   562,   563,   564,   565,   566,
     567,   571,   572,   576,   577,   581,   582,   584,   585,   586,
     587,   591,   592
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
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "STRING_LITERAL", "FUNC_NAME",
  "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "_BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "_COMPLEX", "_IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "_ALIGNAS", "_ALIGNOF", "_ATOMIC",
  "_GENERIC", "_NORETURN", "_STATIC_ASSERT", "_THREAD_LOCAL", "\"then\"",
  "'('", "')'", "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'",
  "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "_GENERIC_selection",
  "_GENERIC_assoc_list", "_GENERIC_association", "postfix_expression",
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
  "_STATIC_ASSERT_declaration", "statement", "labeled_statement",
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

#define YYPACT_NINF (-489)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-233)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2768,  3338,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,     6,   -28,  -489,
    -489,   -14,  -489,    26,   271,  -489,   115,  3532,  3532,  -489,
      17,  -489,  3532,  3532,  3532,   101,    23,    65,  -489,  2656,
    -489,  -489,   111,   619,  -489,   152,  -489,  3391,    52,    94,
    1210,  2136,   209,    83,  -489,  -489,   271,   133,  -489,   -56,
    -489,  3270,  -489,  -489,   105,  3172,  -489,  -489,  -489,   124,
    3062,  1392,   139,    23,  -489,  -489,   175,   206,   144,  -489,
    -489,  -489,  -489,  2539,  2561,  2561,  -489,  2136,   190,   188,
     231,   235,   966,   239,   329,   268,   280,  1097,   262,   272,
    1301,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,   374,   869,  2583,  -489,     1,   -50,   308,
      20,   361,   275,   290,   274,   380,    24,  -489,  -489,    88,
    -489,  -489,  -489,  -489,   784,  -489,  -489,  -489,  -489,  -489,
     149,   301,  -489,  -489,   352,   -21,  -489,   307,    50,  -489,
    1974,  -489,  -489,  -489,   330,  3604,   153,  3604,   332,   333,
    -489,  -489,  -489,  -489,    71,  1910,  -489,  -489,    71,  -489,
    1910,  -489,  3391,  3227,    11,  2823,  -489,    86,  -489,  -489,
     310,  -489,  -489,   256,   339,   341,  -489,   324,  1731,  -489,
     342,   348,  1414,  -489,  2158,  2158,  2180,  2180,  -489,  2583,
    2271,  2271,  2583,  2583,  2158,  2158,  2293,  -489,  1006,  1301,
    -489,  1301,  -489,  -489,   357,  1006,  2315,  2406,  2136,   230,
     378,   875,   343,  -489,  -489,   628,  -489,    96,  3604,  2136,
    2589,   326,   367,   453,  -489,  -489,  2001,  2136,   462,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    2136,  -489,  2583,  2583,  2583,  2271,  2271,  2158,  2158,  2158,
    2158,  2158,  2158,  2180,  2180,  2428,  2428,  2428,  2428,  2428,
    2450,  2136,  -489,  1044,  -489,  -489,   228,   121,   366,  -489,
    2136,  2136,    56,  -489,  -489,  -489,   699,  1505,    66,  -489,
     132,  -489,  -489,   463,     0,  -489,  1866,  -489,  -489,  -489,
    -489,  -489,    74,  2879,  -489,  -489,   376,  -489,  -489,   158,
    2136,  -489,   114,  -489,   398,  -489,  3444,  2712,  -489,   204,
    -489,  -489,  3488,  -489,   487,   418,  1731,  -489,  -489,  2136,
    -489,   424,   425,   185,   308,   308,   452,    20,    20,  -489,
     259,     1,     1,  -489,  -489,   308,   308,  1230,   347,  -489,
     432,   435,  1006,  -489,  2812,   350,  2867,   355,   375,   437,
     438,  1065,  1119,  1119,  -489,  -489,  -489,   439,   441,  -489,
    -489,   488,  -489,  2897,  -489,   381,  -489,   179,  -489,  -489,
    -489,  -489,  -489,     1,     1,   -50,   -50,   308,   308,   308,
     308,    20,    20,   848,   361,   275,   290,   274,   380,  2921,
     382,  -489,  -489,    72,  -489,   417,  -489,  -489,  -489,  -489,
    -489,   442,  -489,   445,   446,  2952,  1731,  -489,   447,   455,
    1527,   132,  3117,  1618,   460,  1348,  2136,   539,  -489,   146,
    1910,   120,  -489,  -489,  -489,   261,  2136,  -489,   261,  -489,
    2136,  -489,  -489,   287,  -489,  -489,  -489,  -489,   466,   467,
    -489,  -489,  2136,  2136,   468,   468,  -489,  1006,  1006,  1006,
    1006,  1006,  2136,  2136,  1006,  2023,  2045,  -489,  3570,  1888,
    -489,  2136,  -489,  2136,  -489,  2136,  2136,  -489,  -489,  -489,
    -489,   469,  1731,  -489,  -489,  2136,  -489,   471,   385,  -489,
     472,  2966,  1731,  -489,   473,   474,  1640,   454,  1910,  -489,
     475,  -489,  1753,  -489,  -489,  -489,  -489,   249,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,   499,  -489,  -489,
    -489,   396,   402,  -489,  1006,   404,  1006,   406,   481,   409,
    -489,   482,  2983,   211,  -489,  -489,  -489,  -489,  -489,   489,
     491,  -489,  -489,  -489,  -489,   498,  1731,  -489,  -489,  2136,
    -489,   500,  -489,  -489,  -489,  -489,  -489,  1910,  1006,   464,
     470,  -489,  1006,  -489,  1006,  2136,  -489,  3570,  2136,  1775,
    -489,  -489,  -489,  -489,   519,   520,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   195,   147,   127,   128,   129,   131,   132,   189,
     185,   186,   187,   142,   134,   135,   136,   137,   140,   141,
     138,   139,   133,   143,   144,   153,   154,     0,     0,   188,
     190,     0,   130,     0,   215,   314,     0,   112,   114,   145,
       0,   146,   116,   118,   120,     0,   194,     0,   109,     0,
     311,   313,     0,     0,   321,     0,   320,     0,   176,     0,
       0,     0,     0,     0,   216,   214,   213,     0,   107,     0,
     121,   125,   111,   113,   150,     0,   115,   117,   119,     0,
       0,     0,     0,   193,     1,   312,     0,     0,     2,     8,
       9,    12,    13,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282,    39,    40,    41,    42,    43,    44,   289,    19,
       3,     4,     7,    32,    45,     0,    47,    54,    59,    62,
      71,    76,    78,    80,    82,    84,    86,    91,   104,     0,
     287,   288,   273,   274,     0,   285,   275,   276,   277,   278,
       0,   125,   322,   318,     0,     0,    11,   183,     0,   179,
       0,     2,    45,   106,     0,   162,   230,   164,     0,     0,
     211,   196,   217,   212,     0,     0,   110,   317,     0,   108,
       0,   316,     0,     0,     0,     0,   155,     0,   159,   319,
       0,   227,   207,     0,     0,   219,   221,     0,     0,   197,
      40,     0,     0,   210,     0,     0,     0,     0,   284,     0,
       0,     0,     0,     0,     0,     0,     0,   291,     0,     0,
      36,     0,    33,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   306,   307,     0,   308,     0,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    93,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   290,     0,   283,   286,     0,     0,     0,   177,
       0,     0,     0,   172,   192,   161,     0,     0,   232,   229,
     233,   163,   191,     0,     0,   123,     0,   261,   126,   122,
     124,   315,     0,     0,   152,   160,     0,   148,   156,     0,
       0,   157,     0,   165,   170,   209,     0,     0,   224,     0,
     225,   206,     0,   208,     0,     0,     0,   198,   205,     0,
     204,    40,     0,     0,    69,    70,     0,    74,    75,    51,
       0,    57,    58,    52,    53,    67,    68,     0,     0,   279,
       0,     0,     0,   281,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   305,   310,   309,     0,     0,     6,
       5,     0,    24,     0,    21,     0,    29,     0,    23,    92,
      48,    49,    50,    55,    56,    60,    61,    65,    66,    63,
      64,    72,    73,     0,    77,    79,    81,    83,    85,     0,
       0,   105,   178,     0,   174,     0,   181,   184,   182,   173,
     180,     0,   251,     0,     0,     0,     0,   235,    40,     0,
       0,   231,     0,     0,     0,     0,     0,     0,   263,     0,
       0,     0,   268,   151,   149,     0,     0,   168,     0,   158,
       0,   220,   223,     0,   218,   222,   228,   200,     0,     0,
     201,   203,     0,     0,    37,     0,   280,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
      46,     0,    22,     0,    20,     0,     0,   175,   252,   234,
     255,     0,     0,   236,   242,     0,   241,     0,     0,   253,
       0,     0,     0,   243,    40,     0,     0,     0,     0,   260,
       0,   271,     0,   258,   262,   267,   269,     0,   167,   171,
     166,   169,   199,   202,    88,    90,   295,   293,   296,   294,
     297,     0,     0,   304,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,    31,    30,    89,    87,   238,     0,
       0,   240,   256,   254,   257,     0,     0,   244,   250,     0,
     249,     0,   272,   266,   270,   259,   265,     0,     0,     0,
       0,   301,     0,   299,     0,     0,    14,     0,     0,     0,
      27,   237,   239,   246,     0,     0,   247,   264,   292,   303,
     298,   302,   300,    18,    16,    17,    28,   245,   248
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -489,  -489,  -489,  -489,  -489,  -489,  -489,    27,  -489,  -489,
     321,  -489,   -92,  -180,   236,   297,   -23,   288,   305,   328,
     325,   327,  -489,   -15,   -70,  -489,   -82,   -49,    12,    18,
    -489,    82,  -489,   -59,  -489,  -489,   426,  -175,   -58,  -489,
     -86,  -489,   456,  -273,   -34,  -489,  -489,     4,   -41,   -12,
     -79,   -75,  -489,   -29,  -489,   -39,  -114,  -248,  -172,   128,
    -488,  -489,   167,   -33,   -95,  -489,    13,  -489,   477,  -195,
    -489,  -489,  -489,  -489,   564,  -489,   543
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   119,   120,   157,   121,   122,   539,   540,   123,   385,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   260,   139,   164,    35,    55,
      69,    70,    37,    38,    39,    40,   185,   186,   166,   322,
     323,    41,   158,   159,    42,    43,    44,   151,    46,    47,
      66,   423,   195,   196,   197,   541,   424,   300,   438,   439,
     440,   441,   442,    48,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    49,    50,    51,    57
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   165,   202,   308,    45,   194,    83,   230,   310,    58,
     318,   201,   169,    54,    56,   416,   165,   187,    36,   420,
      74,   168,    65,   178,   567,   237,   167,    62,   241,     2,
     351,   352,   172,   261,   269,   270,   373,    63,   265,   266,
      71,   167,   188,   279,   179,   163,   163,    64,   224,    60,
     431,   165,   299,    45,   173,    72,    73,   415,   288,   156,
      76,    77,    78,    61,   289,   140,    82,    36,     2,   152,
     153,   242,   304,   415,     2,   156,   167,    52,   290,   330,
     177,   431,   163,    54,   181,   393,   394,   319,   262,     2,
      59,   567,   189,   263,   264,   155,   314,   156,   193,   175,
      80,    75,    79,    33,    81,   307,   165,   295,   165,   301,
     307,   315,    86,    34,   271,   272,    67,   349,     2,   336,
     353,   354,   280,   359,   165,   187,   165,   187,   335,   292,
     363,   167,   342,   167,   358,   293,   154,   241,   318,   241,
     420,   419,    33,   296,   365,   367,   368,   297,    33,   167,
     188,   167,   188,   150,   298,     2,   140,   487,    34,   443,
     165,   171,   165,    33,    64,   387,   320,   281,   172,   378,
     390,   391,   392,    34,   315,   281,   386,   475,   476,   165,
     360,   329,   361,   347,   348,   167,   321,   167,   282,   183,
     389,   324,    33,   448,   152,   311,   376,   328,   410,   377,
     413,   436,    34,   437,   167,    82,   414,     2,    53,   432,
      52,   411,   174,   433,   449,    68,    52,    53,   430,   515,
     204,   205,   206,   207,   218,   512,    52,   429,   174,    33,
     296,   513,   175,   176,   297,    52,   307,   445,   446,    34,
      34,   417,   418,   372,   204,   205,   206,   207,   175,   176,
     401,   402,    68,   203,   165,   187,   305,    82,   281,     2,
     309,   484,   517,    64,     2,   226,   458,   466,   514,   459,
     225,   447,   209,   210,   211,   163,   163,   212,   213,   167,
     188,   327,  -232,  -232,   298,   297,    52,   170,    83,   480,
     579,   208,   369,   209,   210,   211,   580,   452,   212,   213,
     214,   215,   172,   455,   216,   163,   217,   288,   227,    10,
      11,    12,   228,   412,   193,   329,   231,   209,   210,   211,
     267,   268,   212,   213,   214,   215,    52,   290,   216,   446,
     217,    63,   232,   327,  -226,  -226,   563,   297,    33,   238,
     566,   320,    29,    34,   193,   193,   209,   492,    34,   239,
     193,   212,   213,   286,   506,   156,   491,   500,    34,   518,
     497,   275,   520,   505,    52,   170,   326,   415,   233,   156,
     307,   277,   526,   527,   528,   529,   530,   273,   274,   533,
     234,   162,   162,   243,   244,   245,   276,   510,   325,   326,
     531,   532,    64,   535,   537,   587,   172,   519,   278,    64,
     180,   521,   333,   334,   380,   281,   291,   566,   294,   307,
     302,   544,   303,   545,   220,   222,   223,   331,   162,   165,
     332,   163,   549,   556,   337,   550,   281,   463,   468,   281,
     338,   163,   555,   470,   281,   163,   561,   362,   307,   571,
     370,   573,   307,   374,   167,   381,   162,   524,   525,   324,
     193,   246,   324,   471,   281,   247,   382,   248,   172,   482,
     483,   281,   486,   552,   326,   388,   204,   205,    64,   434,
     546,   547,   172,   588,   569,   281,   315,   591,   450,   592,
     570,   281,   572,   281,   574,   281,   584,   576,   577,   585,
     456,   161,    89,    90,    91,    92,    93,   307,    94,    95,
     457,   344,   345,   395,   396,   593,   460,   461,   595,   307,
     464,   355,   356,   465,   472,   473,   290,   477,   165,    96,
     478,   326,   172,   488,   489,   162,   162,   162,   162,   493,
     162,   162,   162,   162,   162,   162,   162,   494,   507,   209,
     210,   211,   511,   167,   212,   213,   214,   215,   522,   523,
     553,   548,   479,   551,   562,   557,   558,   564,   108,   568,
     109,   575,   578,   404,   589,   110,   397,   398,   399,   400,
     590,   581,   479,   582,   112,   113,   114,   115,   116,   117,
     583,   405,   586,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   597,   598,   407,   594,   406,   408,   543,   516,   313,
     287,   162,   162,    85,   182,     0,     0,     0,     0,     0,
      87,   285,    88,    89,    90,    91,    92,    93,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   162,   204,   205,   206,   207,     0,     0,     0,     3,
      96,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,   107,    28,   108,
      29,   109,    30,    31,    32,     0,   110,     0,     0,     0,
     421,     0,   162,    53,   111,   112,   113,   114,   115,   116,
     117,     0,     0,     0,     0,   209,   210,   211,     0,   118,
     212,   213,   214,   215,     0,     0,   216,     0,   375,     3,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   162,    28,     0,
      29,   162,    30,     0,    32,     0,   296,   422,     0,     0,
     297,     0,     0,   162,   162,   283,    34,    88,    89,    90,
      91,    92,    93,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   162,   162,     0,     0,
       0,     0,     0,     0,     3,    96,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    97,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,    28,   108,    29,   109,    30,    31,    32,
       0,   110,   204,   205,   206,   207,     0,     0,    53,   284,
     112,   113,   114,   115,   116,   117,   371,     0,   161,    89,
      90,    91,    92,    93,   118,    94,    95,     0,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,     0,     0,     0,     0,     3,    96,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,   209,   210,   211,     0,     0,
     212,   213,   214,   215,    28,   108,    29,   109,    30,    31,
      32,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,   112,   113,   114,   115,   116,   117,   229,   259,    88,
      89,    90,    91,    92,    93,   118,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   283,     0,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,    97,    98,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,    96,   109,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
      53,     0,   112,   113,   114,   115,   116,   117,   204,   205,
     206,   207,     0,    97,    98,    99,   118,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,     0,   109,   204,
     205,   206,   207,   110,     0,     0,     0,     0,     0,     0,
      53,     0,   112,   113,   114,   115,   116,   117,   235,     0,
     161,    89,    90,    91,    92,    93,   118,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     283,     0,   161,    89,    90,    91,    92,    93,    96,    94,
      95,   209,   210,   211,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   474,   217,     0,     0,     0,     0,     0,
      96,     0,   209,   210,   211,     0,     0,   212,   213,   214,
     215,     0,     0,   216,     0,   217,     0,   108,     0,   109,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   113,   114,   115,   116,   117,   108,
       0,   109,     0,     0,     0,     0,   110,   236,     0,     0,
       0,     0,     0,     0,     0,   112,   113,   114,   115,   116,
     117,   160,     0,   161,    89,    90,    91,    92,    93,   118,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,    96,     0,     0,   204,   205,   206,   207,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,    29,   109,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   114,   115,
     116,   117,   240,     0,   161,    89,    90,    91,    92,    93,
     462,    94,    95,     0,     0,     0,     0,   209,   210,   211,
       0,     0,   212,   213,   214,   215,     0,     0,   216,     0,
       0,     3,    96,     0,     0,     0,     0,     0,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,   204,   205,   206,   207,     0,     0,     0,     0,
       0,   108,    29,   109,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,   114,
     115,   116,   117,   160,     0,   161,    89,    90,    91,    92,
      93,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   160,     0,   161,    89,    90,
      91,    92,    93,    96,    94,    95,   198,   508,     0,     0,
      10,    11,    12,   509,     0,   209,   210,   211,     0,     0,
     212,   213,   214,   215,     0,    96,   216,     0,   339,     0,
       0,     0,    10,    11,    12,     0,     0,     0,     0,     0,
       0,     0,   108,    29,   109,     0,     0,     0,     0,   110,
       0,     0,     0,     0,   199,     0,     0,     0,   112,   200,
     114,   115,   116,   117,   108,    29,   109,     0,     0,     0,
       0,   110,     0,     0,     0,     0,   340,     0,     0,     0,
     112,   341,   114,   115,   116,   117,   425,     0,   161,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   160,     0,
     161,    89,    90,    91,    92,    93,    96,    94,    95,   426,
       0,     0,     0,    10,    11,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,   495,     0,     0,     0,    10,    11,    12,     0,     0,
       0,     0,     0,     0,     0,   108,    29,   109,     0,     0,
       0,     0,   110,     0,     0,     0,     0,   427,     0,     0,
       0,   112,   428,   114,   115,   116,   117,   108,    29,   109,
       0,     0,     0,     0,   110,     0,     0,     0,     0,   496,
       0,     0,     0,   112,   113,   114,   115,   116,   117,   501,
       0,   161,    89,    90,    91,    92,    93,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   160,     0,   161,    89,    90,    91,    92,    93,    96,
      94,    95,   502,     0,     0,     0,    10,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,     0,   559,     0,     0,     0,    10,    11,
      12,     0,     0,     0,     0,     0,     0,     0,   108,    29,
     109,     0,     0,     0,     0,   110,     0,     0,     0,     0,
     503,     0,     0,     0,   112,   504,   114,   115,   116,   117,
     108,    29,   109,     0,     0,     0,     0,   110,     0,     0,
       0,     0,   560,     0,     0,     0,   112,   113,   114,   115,
     116,   117,   160,     0,   161,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,     0,   161,    89,    90,    91,
      92,    93,    96,    94,    95,     0,     0,     0,     0,    10,
      11,    12,     0,     0,     0,     0,   160,     0,   161,    89,
      90,    91,    92,    93,    96,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,    29,   109,     0,     0,    96,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,   114,
     115,   116,   117,   108,     0,   109,     0,     0,     0,     0,
     110,     0,     0,     0,   436,     0,   437,   306,   565,   112,
     113,   114,   115,   116,   117,   108,     0,   109,     0,     0,
       0,     0,   110,     0,     0,     0,   436,     0,   437,   306,
     596,   112,   113,   114,   115,   116,   117,   435,     0,   161,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   542,
       0,   161,    89,    90,    91,    92,    93,    96,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   160,     0,   161,    89,    90,    91,    92,    93,    96,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,   109,     0,
       0,    96,     0,   110,     0,     0,     0,   436,     0,   437,
     306,     0,   112,   113,   114,   115,   116,   117,   108,     0,
     109,     0,     0,     0,     0,   110,     0,     0,     0,   436,
       0,   437,   306,     0,   112,   113,   114,   115,   116,   117,
     108,     0,   109,     0,     0,     0,     0,   110,   204,   205,
     206,   207,     0,     0,   306,     0,   112,   113,   114,   115,
     116,   117,   383,     0,   161,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,     0,   161,    89,    90,    91,
      92,    93,    96,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,     0,   161,    89,
      90,    91,    92,    93,    96,    94,    95,     0,     0,     0,
       0,   209,   210,   211,     0,     0,   212,   213,   214,   215,
       0,   108,   216,   109,     0,     0,    96,     0,   110,   384,
       0,     0,     0,     0,     0,     0,     0,   112,   113,   114,
     115,   116,   117,   108,     0,   109,     0,     0,     0,     0,
     110,   534,     0,     0,     0,     0,     0,     0,     0,   112,
     113,   114,   115,   116,   117,   108,     0,   109,     0,     0,
       0,     0,   110,   536,     0,     0,     0,     0,     0,     0,
       0,   112,   113,   114,   115,   116,   117,   160,     0,   161,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,   161,    89,    90,    91,    92,    93,    96,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   346,     0,   161,    89,    90,    91,    92,    93,    96,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,   109,     0,
       0,    96,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   113,   114,   115,   116,   117,   108,     0,
     109,     0,     0,     0,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,   112,   113,   114,   115,   116,   117,
     108,     0,   109,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   114,   115,
     116,   117,   350,     0,   161,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   357,     0,   161,    89,    90,    91,
      92,    93,    96,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,     0,   161,    89,
      90,    91,    92,    93,    96,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,   109,     0,     0,    96,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,   114,
     115,   116,   117,   108,     0,   109,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,   112,
     113,   114,   115,   116,   117,   108,     0,   109,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,   112,   113,   114,   115,   116,   117,   366,     0,   161,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   403,
       0,   161,    89,    90,    91,    92,    93,    96,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   409,     0,   161,    89,    90,    91,    92,    93,    96,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,   109,     0,
       0,    96,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   113,   114,   115,   116,   117,   108,     0,
     109,     0,     0,     0,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,   112,   113,   114,   115,   116,   117,
     108,     0,   109,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   114,   115,
     116,   117,   161,    89,    90,    91,    92,    93,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,    89,    90,    91,    92,    93,
      96,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,    89,    90,    91,
      92,    93,    96,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,   204,   205,   206,   207,     0,     0,   108,
       0,   109,     0,     0,    96,     0,   219,     0,     0,     0,
       0,     0,     0,     0,     0,   112,   113,   114,   115,   116,
     117,   108,     0,   109,     0,     0,     0,     0,   221,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,   114,
     115,   116,   117,   108,     0,   109,    84,     1,     0,     2,
     110,     0,     0,     0,     0,     0,     0,   379,     0,   112,
     113,   114,   115,   116,   117,     0,   209,   210,   211,     0,
       0,   212,   213,   214,   215,     0,     3,   216,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,   453,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,    29,     0,    30,
      31,    32,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     3,    34,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     1,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,    29,     0,    30,     0,    32,     0,   327,
     422,     0,     0,   297,     0,     0,     0,     0,     3,    34,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   316,     0,   204,   205,   206,   207,
       0,     0,     0,     0,     0,     0,     0,    28,     0,    29,
       0,    30,    31,    32,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     3,     0,    34,     0,     0,     0,     0,
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
     316,   204,   205,   206,   207,     0,     0,     0,     0,     0,
     467,     0,     0,     0,    29,     0,     0,    31,     0,   209,
     210,   211,     0,     0,   212,   213,   214,   215,   317,     3,
     216,   204,   205,   206,   207,     0,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   204,   205,   206,   207,     0,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
      29,     0,     0,    31,   209,   210,   211,     0,     0,   212,
     213,   214,   215,     0,   444,   216,   204,   205,   206,   207,
       0,     0,     0,     0,     0,     0,   481,     0,     0,     0,
     204,   205,   206,   207,   209,   210,   211,     0,     0,   212,
     213,   214,   215,     0,     0,   216,     0,   204,   205,   206,
     207,   485,     0,     0,     0,     0,     0,     0,   209,   210,
     211,     0,     0,   212,   213,   214,   215,     0,     0,   216,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   490,     0,     0,     0,     0,   209,
     210,   211,     0,     0,   212,   213,   214,   215,   554,     0,
     216,     0,     0,   209,   210,   211,     0,     0,   212,   213,
     214,   215,   508,   190,   216,   191,     0,     0,     0,     0,
     209,   210,   211,     0,     0,   212,   213,   214,   215,     0,
       0,   216,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   498,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,    29,     0,    30,     0,    32,     0,     0,
     192,     0,     0,     0,     0,     0,     0,     3,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,    29,     0,
      30,     0,    32,     0,     0,   499,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   312,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       3,    31,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,    29,     0,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,   180,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,    29,
       0,    30,    31,    32,     0,    52,     0,     0,     0,     0,
       0,     3,    53,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,    29,     0,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     3,    53,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     451,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,    29,     0,    30,     3,    32,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   454,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,    29,
       0,    30,     3,    32,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,    28,     0,    29,     0,    30,     0,    32,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,   538,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,    29,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29
};

static const yytype_int16 yycheck[] =
{
      34,    60,    81,   175,     0,    80,    47,   102,   180,     3,
     185,    81,    61,     1,     1,   288,    75,    75,     0,   292,
       3,    60,    34,    79,   512,   107,    60,     1,   110,     3,
     210,   211,    66,   125,    14,    15,   231,    33,    88,    89,
      36,    75,    75,    19,   100,    60,    61,    81,    97,    77,
     298,   110,   166,    49,    66,    37,    38,     1,    79,     3,
      42,    43,    44,    77,    85,    53,     1,    49,     3,    57,
      57,   110,     1,     1,     3,     3,   110,    77,    99,   193,
      67,   329,    97,    71,    71,   265,   266,     1,    87,     3,
      84,   579,    79,    92,    93,     1,    85,     3,    80,    99,
      77,    84,     1,    77,    81,   175,   165,   165,   167,   167,
     180,   100,     1,    87,    94,    95,     1,   209,     3,   198,
     212,   213,    98,   218,   183,   183,   185,   185,   198,    79,
     225,   165,   202,   167,   216,    85,    84,   219,   313,   221,
     413,    85,    77,    77,   226,   227,   228,    81,    77,   183,
     183,   185,   185,     1,   166,     3,   144,    85,    87,    85,
     219,    78,   221,    77,   198,   247,    80,    79,   202,   239,
     262,   263,   264,    87,   100,    79,   246,   372,   373,   238,
     219,   193,   221,   206,   207,   219,   100,   221,   100,    84,
     260,   187,    77,    79,   182,   182,   100,   193,   280,   238,
      79,    81,    87,    83,   238,     1,    85,     3,    84,    77,
      77,   281,    79,    81,   100,   100,    77,    84,   297,    99,
      14,    15,    16,    17,    80,    79,    77,   297,    79,    77,
      77,    85,    99,   100,    81,    77,   306,    79,    80,    87,
      87,   290,   291,   231,    14,    15,    16,    17,    99,   100,
     273,   274,   100,    78,   313,   313,   174,     1,    79,     3,
     178,    82,     1,   297,     3,    77,   336,   362,   440,   339,
      80,   320,    87,    88,    89,   290,   291,    92,    93,   313,
     313,    77,    78,    79,   296,    81,    77,    78,   329,   381,
      79,    85,    62,    87,    88,    89,    85,   326,    92,    93,
      94,    95,   336,   332,    98,   320,   100,    79,    77,    38,
      39,    40,    77,    85,   296,   327,    77,    87,    88,    89,
      12,    13,    92,    93,    94,    95,    77,    99,    98,    80,
     100,   327,     3,    77,    78,    79,   508,    81,    77,    77,
     512,    80,    71,    87,   326,   327,    87,   426,    87,    77,
     332,    92,    93,     1,   433,     3,   426,   432,    87,   445,
     430,    86,   448,   433,    77,    78,    79,     1,   100,     3,
     440,    97,   467,   468,   469,   470,   471,    16,    17,   474,
     100,    60,    61,     9,    10,    11,    96,   436,    78,    79,
     472,   473,   426,   475,   476,   567,   430,   446,    18,   433,
      99,   450,    78,    79,    78,    79,    99,   579,    78,   479,
      78,   481,    79,   483,    93,    94,    95,    78,    97,   478,
      79,   436,   492,   502,    82,   495,    79,    80,    78,    79,
      82,   446,   502,    78,    79,   450,   506,    80,   508,   534,
      62,   536,   512,   100,   478,    78,   125,   462,   463,   445,
     432,    77,   448,    78,    79,    81,     3,    83,   492,    78,
      79,    79,    80,    78,    79,     3,    14,    15,   502,     6,
     485,   486,   506,   568,    78,    79,   100,   572,    80,   574,
      78,    79,    78,    79,    78,    79,   556,    78,    79,   559,
       3,     3,     4,     5,     6,     7,     8,   567,    10,    11,
      82,   204,   205,   267,   268,   575,    82,    82,   578,   579,
      78,   214,   215,    78,    77,    77,    99,    78,   577,    31,
      79,    79,   556,    78,    78,   204,   205,   206,   207,    82,
     209,   210,   211,   212,   213,   214,   215,    82,    78,    87,
      88,    89,     3,   577,    92,    93,    94,    95,    82,    82,
      78,    82,    84,    82,   100,    82,    82,    82,    70,    60,
      72,    80,    80,   275,   100,    77,   269,   270,   271,   272,
     100,    82,    84,    82,    86,    87,    88,    89,    90,    91,
      82,   276,    82,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,    82,    82,   278,   577,   277,   279,   479,   441,   183,
     154,   290,   291,    49,    71,    -1,    -1,    -1,    -1,    -1,
       1,   144,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   320,    14,    15,    16,    17,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,
       1,    -1,   381,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    87,    88,    89,    -1,   100,
      92,    93,    94,    95,    -1,    -1,    98,    -1,   100,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,    69,    -1,
      71,   450,    73,    -1,    75,    -1,    77,    78,    -1,    -1,
      81,    -1,    -1,   462,   463,     1,    87,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   485,   486,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    14,    15,    16,    17,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,     7,     8,   100,    10,    11,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    87,    88,    89,    -1,    -1,
      92,    93,    94,    95,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    99,     3,
       4,     5,     6,     7,     8,   100,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    31,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    14,    15,
      16,    17,    -1,    57,    58,    59,   100,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    14,
      15,    16,    17,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,     5,     6,     7,     8,   100,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    87,    88,    89,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    98,    78,   100,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    87,    88,    89,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    98,    -1,   100,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,     7,     8,   100,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    14,    15,    16,    17,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,     7,     8,
      80,    10,    11,    -1,    -1,    -1,    -1,    87,    88,    89,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    34,    79,    -1,    -1,
      38,    39,    40,    85,    -1,    87,    88,    89,    -1,    -1,
      92,    93,    94,    95,    -1,    31,    98,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    71,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    31,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,
      -1,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    14,    15,
      16,    17,    -1,    -1,    84,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    87,    88,    89,    -1,    -1,    92,    93,    94,    95,
      -1,    70,    98,    72,    -1,    -1,    31,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,     0,     1,    -1,     3,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    86,
      87,    88,    89,    90,    91,    -1,    87,    88,    89,    -1,
      -1,    92,    93,    94,    95,    -1,    30,    98,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,     1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    87,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,     1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    30,    87,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
       1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    85,    30,
      98,    14,    15,    16,    17,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    87,    88,    89,    -1,    -1,    92,
      93,    94,    95,    -1,    85,    98,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      14,    15,    16,    17,    87,    88,    89,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    98,    -1,    14,    15,    16,
      17,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    82,    -1,
      98,    -1,    -1,    87,    88,    89,    -1,    -1,    92,    93,
      94,    95,    79,     1,    98,     3,    -1,    -1,    -1,    -1,
      87,    88,    89,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      30,    74,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    99,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    30,    84,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    84,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    30,    75,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    30,    75,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    69,    -1,    71,    -1,    73,    -1,    75,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    30,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    69,    71,
      73,    74,    75,    77,    87,   129,   130,   133,   134,   135,
     136,   142,   145,   146,   147,   148,   149,   150,   164,   174,
     175,   176,    77,    84,   129,   130,   167,   177,     3,    84,
      77,    77,     1,   148,   145,   150,   151,     1,   100,   131,
     132,   148,   130,   130,     3,    84,   130,   130,   130,     1,
      77,    81,     1,   149,     0,   175,     1,     1,     3,     4,
       5,     6,     7,     8,    10,    11,    31,    57,    58,    59,
      61,    62,    63,    64,    65,    66,    67,    68,    70,    72,
      77,    85,    86,    87,    88,    89,    90,    91,   100,   102,
     103,   105,   106,   109,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   127,
     129,   165,   166,   167,   168,   169,   170,   171,   172,   173,
       1,   148,   129,   167,    84,     1,     3,   104,   143,   144,
       1,     3,   111,   124,   128,   134,   139,   145,   156,   128,
      78,    78,   145,   150,    79,    99,   100,   167,    79,   100,
      99,   167,   177,    84,     1,   137,   138,   139,   164,   167,
       1,     3,    78,   130,   152,   153,   154,   155,    34,    82,
      87,   125,   151,    78,    14,    15,    16,    17,    85,    87,
      88,    89,    92,    93,    94,    95,    98,   100,    80,    77,
     111,    77,   111,   111,   128,    80,    77,    77,    77,     1,
     165,    77,     3,   100,   100,     1,   100,   127,    77,    77,
       1,   127,   156,     9,    10,    11,    77,    81,    83,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    99,
     126,   113,    87,    92,    93,    88,    89,    12,    13,    14,
      15,    94,    95,    16,    17,    86,    96,    97,    18,    19,
      98,    79,   100,     1,    85,   169,     1,   143,    79,    85,
      99,    99,    79,    85,    78,   139,    77,    81,   150,   157,
     158,   139,    78,    79,     1,   132,    84,   125,   159,   132,
     159,   167,     1,   137,    85,   100,     1,    85,   138,     1,
      80,   100,   140,   141,   148,    78,    79,    77,   148,   150,
     157,    78,    79,    78,    79,   125,   151,    82,    82,    34,
      82,    87,   125,     1,   116,   116,     1,   117,   117,   113,
       1,   114,   114,   113,   113,   116,   116,     1,   127,   165,
     156,   156,    80,   165,     1,   127,     1,   127,   127,    62,
      62,     1,   129,   170,   100,   100,   100,   156,   125,    78,
      78,    78,     3,     1,    78,   110,   125,   127,     3,   125,
     113,   113,   113,   114,   114,   115,   115,   116,   116,   116,
     116,   117,   117,     1,   118,   119,   120,   121,   122,     1,
     127,   125,    85,    79,    85,     1,   144,   128,   128,    85,
     144,     1,    78,   152,   157,     1,    34,    82,    87,   125,
     151,   158,    77,    81,     6,     1,    81,    83,   159,   160,
     161,   162,   163,    85,    85,    79,    80,   128,    79,   100,
      80,    56,   154,     1,    56,   154,     3,    82,   125,   125,
      82,    82,    80,    80,    78,    78,   165,    78,    78,    78,
      78,    78,    77,    77,    78,   170,   170,    78,    79,    84,
     113,    79,    78,    79,    82,    80,    80,    85,    78,    78,
      82,   125,   151,    82,    82,    34,    82,   125,     1,    78,
     152,     1,    34,    82,    87,   125,   151,    78,    79,    85,
     128,     3,    79,    85,   159,    99,   163,     1,   141,   128,
     141,   128,    82,    82,   124,   124,   165,   165,   165,   165,
     165,   127,   127,   165,    78,   127,    78,   127,    58,   107,
     108,   156,     1,   160,   125,   125,   124,   124,    82,   125,
     125,    82,    78,    78,    82,   125,   151,    82,    82,    34,
      82,   125,   100,   159,    82,    85,   159,   161,    60,    78,
      78,   165,    78,   165,    78,    80,    78,    79,    80,    79,
      85,    82,    82,    82,   125,   125,    82,   159,   165,   100,
     100,   165,   165,   125,   108,   125,    85,    82,    82
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   105,   105,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   115,   115,   115,   115,   115,   116,
     116,   116,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   118,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   127,   127,   128,   129,   129,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   131,   132,   132,   132,   133,   133,   133,
     133,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     135,   135,   135,   136,   136,   137,   137,   138,   138,   138,
     138,   139,   139,   139,   139,   140,   140,   140,   141,   141,
     141,   141,   142,   142,   142,   142,   142,   142,   142,   143,
     143,   143,   144,   144,   144,   145,   145,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   150,   150,   150,   150,   151,   151,   152,   152,
     152,   153,   153,   153,   154,   154,   154,   155,   155,   156,
     156,   157,   157,   157,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   159,   159,
     159,   159,   160,   160,   160,   160,   160,   161,   162,   162,
     163,   163,   164,   165,   165,   165,   165,   165,   165,   166,
     166,   166,   167,   167,   167,   168,   168,   169,   169,   170,
     170,   170,   171,   171,   171,   171,   171,   172,   172,   172,
     172,   172,   172,   172,   172,   173,   173,   173,   173,   173,
     173,   174,   174,   175,   175,   176,   176,   176,   176,   176,
     176,   177,   177
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     3,     3,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     3,     1,     2,     2,     2,     2,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     5,     5,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     1,
       3,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     3,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       2,     5,     4,     1,     1,     1,     2,     2,     3,     1,
       2,     2,     1,     2,     1,     1,     3,     3,     2,     3,
       1,     3,     4,     5,     5,     6,     2,     4,     5,     1,
       3,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     4,     2,     1,     1,     3,     3,     4,     6,
       5,     5,     6,     5,     4,     4,     4,     3,     4,     4,
       4,     3,     3,     2,     2,     1,     1,     2,     3,     1,
       3,     1,     3,     3,     2,     2,     1,     1,     3,     2,
       1,     2,     1,     1,     3,     2,     3,     5,     4,     5,
       4,     3,     3,     3,     4,     6,     5,     5,     6,     4,
       4,     2,     3,     3,     4,     3,     4,     4,     3,     4,
       3,     1,     2,     1,     4,     3,     3,     2,     1,     2,
       3,     2,     7,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     3,     1,     2,     1,     1,     1,
       2,     2,     7,     5,     5,     5,     5,     5,     7,     6,
       7,     6,     7,     7,     5,     3,     2,     2,     2,     3,
       3,     1,     2,     1,     1,     4,     3,     3,     3,     3,
       2,     1,     2
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
  case 127: /* storage_class_specifier: TYPEDEF  */
#line 261 "parserNuevecito.y"
                        {typedef_name_flag = 1;}
#line 2575 "parserNuevecito.tab.c"
    break;

  case 161: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 313 "parserNuevecito.y"
                                                  {typedef_name_flag = 2;}
#line 2581 "parserNuevecito.tab.c"
    break;

  case 162: /* specifier_qualifier_list: type_specifier  */
#line 314 "parserNuevecito.y"
                         {typedef_name_flag = 2;}
#line 2587 "parserNuevecito.tab.c"
    break;


#line 2591 "parserNuevecito.tab.c"

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

#line 595 "parserNuevecito.y"

#include <stdio.h>

// char* removeWhitespaces(char *str) {
// 	int i = 0;
// 	char* newString = malloc (strlen(str) + 1);
// 	while (str[i] == ' ') {
// 		i++;
// 	}
// 	while (str[i] != '\0') {
// 		strncat(newString, &str[i], 1);
// 		i++;
// 	}
// 	return newString;
// }

void red() {
	printf("\033[1;31m");
}

void yellow() {
	printf("\033[1;33m");
}

void resetColor() {
	printf("\033[0m");
}

int yyerror(const char *str) {
	yellow();
    printf("prueba.c:%d:%d: ", yylineno, column);
	red();
	printf("error: ");
	resetColor();
	printf("%s\n", str);
	char *newLine = NULL;

	if (!strstr(line, "\n")) {
		newLine = malloc(strlen(line) + 2);
		strcpy(newLine, line);
		strcat(newLine, "\n");
	} else {
		newLine = malloc(strlen(line) + 1);
		strcpy(newLine, line);
	}
	printf("%s", newLine);
	for(int i = 0; i < column - 1; i++)
		printf(" ");
	red();
    printf("^\n");
}

int customError(const char *str) {
	fprintf(stderr, "error: %s, line %d, column %d\n", str, yylineno, column);
}

void eat_to_newline() {
    int c;
    while ((c = getchar()) != EOF && c != '\n');
}

