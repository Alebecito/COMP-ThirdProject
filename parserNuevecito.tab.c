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
extern int yylineno; // borrar
extern int column; // borrar
extern FILE* yyin;
extern char* lineptr;
extern void eat_to_newline();
extern char* line;
extern char* filename;
int customError(const char* str);
#define YYERROR_VERBOSE 1

#line 88 "parserNuevecito.tab.c"

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



/* Unqualified %code blocks.  */
#line 18 "parserNuevecito.y"

	static void location_print (FILE *out, YYLTYPE const * const loc);
	#define YYLOCATION_PRINT location_print

#line 305 "parserNuevecito.tab.c"

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
# define YYCOPY_NEEDED 1
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  82
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3685

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  324
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  600

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
       0,    53,    53,    54,    55,    56,    57,    58,    62,    63,
      64,    68,    72,    73,    77,    81,    82,    86,    87,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   104,
     105,   106,   110,   111,   112,   113,   114,   115,   116,   120,
     121,   122,   123,   124,   125,   129,   130,   134,   135,   136,
     137,   138,   139,   140,   144,   145,   146,   147,   148,   152,
     153,   154,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   170,   171,   172,   173,   174,   178,   179,   183,   184,
     188,   189,   193,   194,   198,   199,   203,   204,   205,   206,
     207,   211,   212,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   230,   231,   235,   239,   240,   241,
     242,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   259,   260,   261,   265,   266,   267,   271,   272,   273,
     274,   275,   276,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   298,   299,
     300,   301,   302,   306,   307,   311,   312,   316,   317,   318,
     319,   323,   324,   325,   326,   330,   331,   332,   336,   337,
     338,   339,   343,   344,   345,   346,   347,   348,   349,   353,
     354,   355,   359,   360,   361,   365,   366,   367,   368,   372,
     373,   377,   378,   382,   383,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     403,   407,   408,   409,   410,   415,   416,   420,   421,   422,
     426,   427,   428,   432,   433,   434,   435,   436,   440,   441,
     445,   446,   450,   451,   452,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   483,
     484,   485,   486,   490,   491,   492,   493,   494,   498,   502,
     503,   507,   508,   512,   516,   517,   518,   519,   520,   521,
     525,   526,   527,   531,   532,   533,   537,   538,   542,   543,
     547,   548,   549,   553,   554,   555,   556,   557,   558,   562,
     563,   564,   565,   566,   567,   568,   569,   573,   574,   575,
     576,   577,   578,   582,   583,   587,   588,   592,   593,   594,
     595,   596,   597,   602,   603
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "IDENTIFIER",
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
  "_GENERIC", "_NORETURN", "_STATIC_ASSERT", "_THREAD_LOCAL", "then",
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
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-465)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2727,  3489,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,    10,   -51,  -465,
    -465,   -33,  -465,   208,   258,  -465,    79,  3542,  3542,  -465,
      18,  -465,  3542,  3542,  3542,    64,    14,    59,  -465,   728,
    -465,  -465,   649,  -465,   107,  -465,  3489,     4,   264,  1228,
    2063,   -36,    15,  -465,  -465,   258,   162,  -465,   -42,  -465,
    3421,  -465,  -465,    23,  3323,  -465,  -465,  -465,    55,  3101,
    1410,    14,  -465,  -465,   320,    84,  -465,  -465,  -465,  -465,
    2557,  2579,  2579,  -465,  2063,    97,   108,   142,   152,  1006,
     155,   192,   144,   160,   217,   187,   225,  1319,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
     415,   909,  2601,  -465,   189,   242,   310,   119,   325,   229,
     224,   236,   326,     0,  -465,  -465,   -31,  -465,  -465,  -465,
    -465,   824,  -465,  -465,  -465,  -465,  -465,   -23,   252,  -465,
    -465,   289,   118,  -465,   257,   123,  -465,  1992,  -465,  -465,
    -465,   285,  3614,   149,  3614,   287,   305,  -465,  -465,  -465,
    -465,   239,  1928,  -465,  -465,   239,  -465,  1928,  -465,  3489,
    3378,   -21,  2838,  -465,    32,  -465,  -465,   271,  -465,  -465,
      81,   315,   317,  -465,   276,  1749,  -465,   324,   328,  1432,
    2154,  2154,  2176,  2176,  -465,  2601,  2198,  2198,  2601,  2601,
    2154,  2154,  2289,  -465,  1046,  1319,  -465,  1319,  -465,  -465,
     351,  1046,  2311,  2333,  2063,   490,   342,   915,   333,  -465,
    -465,   577,  -465,    -1,  3614,  2063,  1105,   322,   357,   448,
    -465,  -465,  1174,  2063,   455,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  2063,  -465,  2601,  2601,
    2601,  2198,  2198,  2154,  2154,  2154,  2154,  2154,  2154,  2176,
    2176,  2424,  2424,  2424,  2424,  2424,  2446,  2063,  -465,  1364,
    -465,  -465,   170,   198,   309,  -465,  2063,  2063,    26,  -465,
    -465,  -465,  2783,  1523,   111,  -465,   135,  -465,  -465,   454,
     365,  -465,  1884,  -465,  -465,  -465,  -465,  -465,   101,  2894,
    -465,  -465,   366,  -465,  -465,   308,  2063,  -465,    13,  -465,
     390,  2671,  -465,  3211,  -465,    48,  -465,  -465,  -465,  -465,
    3267,  -465,   469,   394,  1749,  -465,  -465,  2063,  -465,   397,
     401,   165,   310,   310,   508,   119,   119,  -465,   226,   189,
     189,  -465,  -465,   310,   310,  2827,   323,  -465,   410,   419,
    1046,  -465,  2882,   338,  2912,   349,   359,   424,   431,  1071,
    1137,  1137,  -465,  -465,  -465,   435,   414,  -465,  -465,  2468,
    -465,  2936,  -465,   384,  -465,   -29,  -465,  -465,  -465,  -465,
    -465,   189,   189,   242,   242,   310,   310,   310,   310,   119,
     119,   888,   325,   229,   224,   236,   326,  2967,   389,  -465,
    -465,    29,  -465,   417,  -465,  -465,  -465,  -465,  -465,   363,
    -465,   436,   437,  2981,  1749,  -465,   442,   456,  1545,   135,
    3156,  1636,   439,   520,  2063,   515,  -465,   301,  1928,    92,
    -465,  -465,  -465,   234,  2063,  -465,   234,  -465,  2063,   283,
      81,  -465,  -465,  -465,  -465,  -465,  -465,   457,   458,  -465,
    -465,  2063,  2063,   460,   460,  -465,  1046,  1046,  1046,  1046,
    1046,  2063,  2063,  1046,  2019,  2041,  -465,  3580,  1906,  -465,
    2063,  -465,  2063,  -465,  2063,  2063,  -465,  -465,  -465,  -465,
     459,  1749,  -465,  -465,  2063,  -465,   463,   290,  -465,   464,
    3002,  1749,  -465,   465,   466,  1658,   446,  1928,  -465,   467,
    -465,  1771,  -465,  -465,  -465,  -465,   470,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,   491,   493,  -465,  -465,  -465,
     403,   408,  -465,  1046,   412,  1046,   416,   474,   421,  -465,
     475,  3022,   304,  -465,  -465,  -465,  -465,  -465,   476,   477,
    -465,  -465,  -465,  -465,   478,  1749,  -465,  -465,  2063,  -465,
     479,  -465,  -465,  -465,  -465,  -465,  1928,  1046,  1046,   480,
     481,  -465,  1046,  -465,  1046,  2063,  -465,  3580,  2063,  1793,
    -465,  -465,  -465,  -465,   484,   492,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   195,   147,   127,   128,   129,   131,   132,   189,
     185,   186,   187,   142,   134,   135,   136,   137,   140,   141,
     138,   139,   133,   143,   144,   153,   154,     0,     0,   188,
     190,     0,   130,     0,   214,   316,     0,   112,   114,   145,
       0,   146,   116,   118,   120,     0,   194,     0,   109,     0,
     313,   315,     0,   323,     0,   322,     0,   176,     0,     0,
       0,     0,     0,   215,   213,   212,     0,   107,     0,   121,
     125,   111,   113,   150,     0,   115,   117,   119,     0,     0,
       0,   193,     1,   314,     0,     2,     8,     9,    12,    13,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   283,    39,
      40,    41,    42,    43,    44,   290,    19,     3,     4,     7,
      32,    45,     0,    47,    54,    59,    62,    71,    76,    78,
      80,    82,    84,    86,    91,   104,     0,   288,   289,   274,
     275,     0,   286,   276,   277,   278,   279,     0,   125,   324,
     320,     0,     0,    11,   183,     0,   179,     0,     2,    45,
     106,     0,   162,   231,   164,     0,     0,   210,   196,   216,
     211,     0,     0,   110,   319,     0,   108,     0,   318,     0,
       0,     0,     0,   155,     0,   159,   321,     0,   228,   207,
     225,     0,   218,   220,     0,     0,   197,    40,     0,     0,
       0,     0,     0,     0,   285,     0,     0,     0,     0,     0,
       0,     0,     0,   292,     0,     0,    36,     0,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   308,
     309,     0,   310,     0,     0,     0,     0,     0,     0,     0,
      25,    26,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    93,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   291,     0,
     284,   287,     0,     0,     0,   177,     0,     0,     0,   172,
     192,   161,     0,     0,   233,   230,   234,   163,   191,     0,
       0,   123,     0,   262,   126,   122,   124,   317,     0,     0,
     152,   160,     0,   148,   156,     0,     0,   157,     0,   165,
     170,     0,   209,     0,   226,   233,   227,   223,   224,   206,
       0,   208,     0,     0,     0,   198,   205,     0,   204,    40,
       0,     0,    69,    70,     0,    74,    75,    51,     0,    57,
      58,    52,    53,    67,    68,     0,     0,   280,     0,     0,
       0,   282,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   307,   312,   311,     0,     0,     6,     5,     0,
      24,     0,    21,     0,    29,     0,    23,    92,    48,    49,
      50,    55,    56,    60,    61,    65,    66,    63,    64,    72,
      73,     0,    77,    79,    81,    83,    85,     0,     0,   105,
     178,     0,   174,     0,   181,   184,   182,   173,   180,     0,
     252,     0,     0,     0,     0,   236,    40,     0,     0,   232,
       0,     0,     0,     0,     0,     0,   264,     0,     0,     0,
     269,   151,   149,     0,     0,   168,     0,   158,     0,     0,
       0,   219,   222,   217,   221,   229,   200,     0,     0,   201,
     203,     0,     0,    37,     0,   281,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,    46,
       0,    22,     0,    20,     0,     0,   175,   253,   235,   256,
       0,     0,   237,   243,     0,   242,     0,     0,   254,     0,
       0,     0,   244,    40,     0,     0,     0,     0,   261,     0,
     272,     0,   259,   263,   268,   270,     0,   167,   171,   166,
     169,   199,   202,    88,    90,   296,   294,   297,   295,   299,
       0,     0,   306,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,    31,    30,    89,    87,   239,     0,     0,
     241,   257,   255,   258,     0,     0,   245,   251,     0,   250,
       0,   273,   267,   271,   260,   266,     0,     0,     0,     0,
       0,   303,     0,   301,     0,     0,    14,     0,     0,     0,
      27,   238,   240,   247,     0,     0,   248,   265,   298,   293,
     305,   300,   304,   302,    18,    16,    17,    28,   246,   249
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -465,  -465,  -465,  -465,  -465,  -465,  -465,    -2,  -465,  -465,
     362,  -465,   -54,  -120,   247,   546,  -132,   286,   284,   303,
     312,   314,  -465,    41,   -46,  -465,    56,   -53,    11,    17,
    -465,    68,  -465,   -58,  -465,  -465,   407,  -159,   -59,  -465,
    -299,  -465,   447,  -266,   -34,  -465,  -465,     3,   -41,   -20,
     -78,   -71,  -465,  -240,  -465,   -35,  -152,  -251,  -168,   126,
    -464,  -465,   167,   -64,   -94,  -465,    19,  -465,   497,  -199,
    -465,  -465,  -465,  -465,   561,  -465,   541
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   116,   117,   154,   118,   119,   538,   539,   120,   383,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   256,   136,   161,    35,    54,
      68,    69,    37,    38,    39,    40,   182,   183,   163,   318,
     319,    41,   155,   156,    42,    43,    44,   324,    46,    47,
      65,   421,   192,   193,   194,   540,   326,   296,   436,   437,
     438,   439,   440,    48,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    49,    50,    51,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,   162,   199,    45,   304,   226,    81,   166,   191,   306,
     185,   295,    53,    57,    64,   184,   162,    36,   414,   275,
      55,    73,   418,   314,   165,   164,    59,   413,   371,   153,
     413,   169,   153,   315,   198,     2,    62,   175,   328,    70,
     164,   220,   167,   429,    60,   170,    63,   566,   277,   162,
     277,     2,    45,   483,    71,    72,   171,   148,   176,    75,
      76,    77,     2,   137,   310,    78,    36,   149,   257,   278,
     345,   346,   238,   164,   429,   150,   172,   173,   277,   311,
      66,    53,     2,   452,     2,   174,   349,   350,   151,   178,
     454,    79,   446,   168,    58,    80,   190,   186,   276,   374,
     160,   160,    74,   291,   162,   297,   162,   180,   147,    33,
       2,   417,   316,   447,   486,   566,   185,   334,   185,    34,
     357,   184,   162,   184,   162,   321,   303,   361,   164,   293,
     164,   303,   317,   265,   266,   160,    33,   399,   400,    52,
     422,   391,   392,   294,   517,   418,   164,   519,   164,   333,
     314,   347,   137,   340,   351,   352,    33,   162,   321,   162,
     233,    63,   293,   237,   214,   169,    34,   325,    34,   422,
     325,   474,   475,   434,   148,   435,   162,   221,   148,    67,
     358,   164,   359,   164,    33,   222,   441,   320,   292,   376,
     149,   514,   293,   327,    34,   228,   384,   284,   307,   375,
     164,   311,   288,   285,   388,   389,   390,    67,   289,    61,
     387,     2,   430,   267,   268,   428,   431,   286,   231,   223,
     158,    86,    87,    88,    89,    90,   292,    91,    92,   224,
     293,   409,   227,   415,   416,   516,    34,     2,   370,   301,
     300,   171,     2,   305,   229,   185,    52,   427,    93,   284,
     184,   162,   205,   206,   207,   410,   303,   208,   209,    63,
     230,   172,   173,   445,   234,   152,   465,   153,   356,   286,
     513,   237,   294,   237,     2,   164,   258,   411,   363,   365,
     366,   259,   260,   412,    81,    33,     2,   105,   457,   106,
     282,   458,   153,     2,   107,    34,    10,    11,    12,   385,
     169,   325,   235,   109,   110,   111,   112,   113,   114,   190,
     413,    33,   153,   205,   316,   271,    33,   232,   208,   209,
     272,    34,   263,   264,    62,   479,    34,   160,   160,    29,
     261,   262,   408,   273,   200,   201,   202,   203,   190,   562,
     190,   269,   270,   565,   274,    34,   491,   190,   321,   322,
     323,   177,   293,   505,   331,   332,   287,   160,    34,   499,
     321,   167,   323,   290,   293,   298,     2,   321,   551,   323,
      34,   293,   525,   526,   527,   528,   529,    34,   490,   532,
     511,   509,   496,   579,   299,   504,   512,   443,   444,   580,
      63,   518,   303,   329,   169,   520,   330,    63,   587,   325,
     378,   277,   277,   462,   368,   204,   335,   205,   206,   207,
     336,   565,   208,   209,   210,   211,   467,   277,   212,   162,
     213,   159,   159,   555,   239,   240,   241,   469,   277,   325,
     325,   360,   303,   372,   543,   379,   544,   470,   277,   571,
     321,   573,   323,   164,   293,   548,   320,   190,   549,   320,
      34,   380,   216,   218,   219,   554,   159,   169,   386,   560,
     432,   303,   481,   482,   172,   303,   311,    63,   277,   485,
     448,   169,   455,   588,   589,   160,   456,   325,   592,   459,
     593,   569,   277,   460,   159,   160,   570,   277,   463,   160,
     572,   277,   242,   477,   574,   277,   243,   464,   244,   576,
     577,   471,   523,   524,   200,   201,   202,   203,   472,   584,
     393,   394,   585,   476,   487,   488,   286,   506,   510,   162,
     303,   169,   200,   201,   492,   545,   546,   530,   531,   594,
     534,   536,   596,   303,   200,   201,   202,   203,   493,   521,
     522,   547,   552,   164,   478,   550,   561,   556,   557,   563,
     444,   567,   367,   568,   575,   578,   403,   402,   581,   582,
     583,   586,   159,   159,   159,   159,   598,   159,   159,   159,
     159,   159,   159,   159,   599,   595,   404,   205,   206,   207,
     590,   591,   208,   209,   210,   211,   405,   309,   212,   406,
     213,   200,   201,   202,   203,   205,   206,   207,   283,   507,
     208,   209,   210,   211,   542,   508,   515,   205,   206,   207,
      83,   179,   208,   209,   210,   211,     0,     0,   212,     0,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   281,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   159,   159,
      84,     0,    85,    86,    87,    88,    89,    90,     0,    91,
      92,     0,     0,     0,   205,   206,   207,     0,     0,   208,
     209,   210,   211,     0,     0,   212,     0,   373,   159,     3,
      93,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    94,    95,    96,     0,
      97,    98,    99,   100,   101,   102,   103,   104,    28,   105,
      29,   106,    30,    31,    32,     0,   107,     0,    82,     1,
       0,     2,     0,    52,   108,   109,   110,   111,   112,   113,
     114,   159,     0,     0,     0,     0,   342,   343,     0,   115,
       0,     0,     0,     0,     0,     0,   353,   354,     3,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   159,    28,     0,    29,
       0,    30,    31,    32,     0,    33,   159,     0,     0,     0,
     159,   395,   396,   397,   398,    34,     0,     0,     0,     0,
       0,     0,     0,   159,   159,   279,     0,    85,    86,    87,
      88,    89,    90,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   159,   159,     0,     0,
       0,     0,     0,     0,     3,    93,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,    28,   105,    29,   106,    30,    31,    32,
       0,   107,   200,   201,   202,   203,     0,     0,    52,   280,
     109,   110,   111,   112,   113,   114,   369,     0,   158,    86,
      87,    88,    89,    90,   115,    91,    92,     0,     0,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,     0,
       0,     0,     0,     0,     0,     3,    93,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,   205,   206,   207,     0,     0,
     208,   209,   210,   211,    28,   105,    29,   106,    30,    31,
      32,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   111,   112,   113,   114,   225,   255,    85,
      86,    87,    88,    89,    90,   115,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   279,     0,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,    94,    95,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,     0,   105,    93,   106,     0,
       0,     0,     0,   107,     0,   200,   201,   202,   203,     0,
      52,     0,   109,   110,   111,   112,   113,   114,     0,     0,
       0,     0,     0,    94,    95,    96,   115,    97,    98,    99,
     100,   101,   102,   103,   104,     0,   105,     0,   106,   200,
     201,   202,   203,   107,     0,     0,     0,     0,     0,     0,
      52,     0,   109,   110,   111,   112,   113,   114,   279,     0,
     158,    86,    87,    88,    89,    90,   115,    91,    92,   473,
       0,     0,     0,     0,     0,     0,     0,     0,   205,   206,
     207,     0,     0,   208,   209,   210,   211,     0,    93,   212,
       0,   213,     0,     0,     0,   381,     0,   158,    86,    87,
      88,    89,    90,   377,    91,    92,     0,     0,     0,     0,
       0,     0,   205,   206,   207,     0,     0,   208,   209,   210,
     211,     0,     0,   212,     0,    93,     0,   105,     0,   106,
       0,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,   113,   114,   157,
       0,   158,    86,    87,    88,    89,    90,   115,    91,    92,
       0,     0,     0,     0,   105,     0,   106,     0,     0,     0,
       0,   107,   382,     0,     0,     0,     0,     0,     3,    93,
     109,   110,   111,   112,   113,   114,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,    29,
     106,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   110,   111,   112,   113,   114,
     236,     0,   158,    86,    87,    88,    89,    90,     0,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      93,     0,     0,     0,     0,     0,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,   200,   201,
     202,   203,     0,     0,     0,     0,     0,     0,     0,   105,
      29,   106,     0,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   157,     0,   158,    86,    87,    88,    89,    90,     0,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,     0,   158,    86,    87,    88,    89,
      90,    93,    91,    92,   195,     0,     0,     0,    10,    11,
      12,   205,   206,   207,     0,     0,   208,   209,   210,   211,
       0,     0,   212,    93,   213,     0,   337,     0,     0,     0,
      10,    11,    12,     0,     0,     0,     0,     0,     0,     0,
     105,    29,   106,     0,     0,     0,     0,   107,     0,     0,
       0,     0,   196,     0,     0,     0,   109,   197,   111,   112,
     113,   114,   105,    29,   106,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   338,     0,     0,     0,   109,   339,
     111,   112,   113,   114,   423,     0,   158,    86,    87,    88,
      89,    90,     0,    91,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,     0,   158,    86,
      87,    88,    89,    90,    93,    91,    92,   424,     0,     0,
       0,    10,    11,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,   494,
       0,     0,     0,    10,    11,    12,     0,     0,     0,     0,
       0,     0,     0,   105,    29,   106,     0,     0,     0,     0,
     107,     0,     0,     0,     0,   425,     0,     0,     0,   109,
     426,   111,   112,   113,   114,   105,    29,   106,     0,     0,
       0,     0,   107,     0,     0,     0,     0,   495,     0,     0,
       0,   109,   110,   111,   112,   113,   114,   500,     0,   158,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
       0,   158,    86,    87,    88,    89,    90,    93,    91,    92,
     501,     0,     0,     0,    10,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,   558,     0,     0,     0,    10,    11,    12,     0,
       0,     0,     0,     0,     0,     0,   105,    29,   106,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   502,     0,
       0,     0,   109,   503,   111,   112,   113,   114,   105,    29,
     106,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     559,     0,     0,     0,   109,   110,   111,   112,   113,   114,
     157,     0,   158,    86,    87,    88,    89,    90,     0,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,     0,   158,    86,    87,    88,    89,    90,
      93,    91,    92,     0,     0,     0,     0,    10,    11,    12,
       0,     0,     0,     0,   157,     0,   158,    86,    87,    88,
      89,    90,    93,    91,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
      29,   106,     0,     0,    93,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   105,     0,   106,     0,     0,     0,     0,   107,     0,
       0,     0,   434,     0,   435,   302,   564,   109,   110,   111,
     112,   113,   114,   105,     0,   106,     0,     0,     0,     0,
     107,     0,     0,     0,   434,     0,   435,   302,   597,   109,
     110,   111,   112,   113,   114,   433,     0,   158,    86,    87,
      88,    89,    90,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   541,     0,   158,
      86,    87,    88,    89,    90,    93,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
       0,   158,    86,    87,    88,    89,    90,    93,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,     0,   106,     0,     0,    93,
       0,   107,     0,     0,     0,   434,     0,   435,   302,     0,
     109,   110,   111,   112,   113,   114,   105,     0,   106,     0,
       0,     0,     0,   107,     0,     0,     0,   434,     0,   435,
     302,     0,   109,   110,   111,   112,   113,   114,   105,     0,
     106,     0,     0,     0,     0,   107,   200,   201,   202,   203,
       0,     0,   302,     0,   109,   110,   111,   112,   113,   114,
     157,     0,   158,    86,    87,    88,    89,    90,     0,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,     0,   158,    86,    87,    88,    89,    90,
      93,    91,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,     0,   158,    86,    87,    88,
      89,    90,    93,    91,    92,     0,     0,     0,     0,   205,
     206,   207,     0,     0,   208,   209,   210,   211,     0,   105,
     212,   106,     0,     0,    93,     0,   107,   533,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   105,     0,   106,     0,     0,     0,     0,   107,   535,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,   114,   105,     0,   106,     0,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,   114,   341,     0,   158,    86,    87,
      88,    89,    90,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   344,     0,   158,
      86,    87,    88,    89,    90,    93,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,   158,    86,    87,    88,    89,    90,    93,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,     0,   106,     0,     0,    93,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,   113,   114,   105,     0,   106,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,   109,   110,   111,   112,   113,   114,   105,     0,
     106,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   110,   111,   112,   113,   114,
     355,     0,   158,    86,    87,    88,    89,    90,     0,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   362,     0,   158,    86,    87,    88,    89,    90,
      93,    91,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   364,     0,   158,    86,    87,    88,
      89,    90,    93,    91,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
       0,   106,     0,     0,    93,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   105,     0,   106,     0,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,   114,   105,     0,   106,     0,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,   114,   401,     0,   158,    86,    87,
      88,    89,    90,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   407,     0,   158,
      86,    87,    88,    89,    90,    93,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   158,    86,    87,    88,    89,    90,    93,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,     0,   106,     0,     0,    93,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,   113,   114,   105,     0,   106,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,   109,   110,   111,   112,   113,   114,   105,     0,
     106,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,   478,     0,   109,   110,   111,   112,   113,   114,
     158,    86,    87,    88,    89,    90,     0,    91,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   158,    86,    87,    88,    89,    90,    93,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   158,    86,    87,    88,    89,    90,
      93,    91,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,   106,
       0,     0,    93,     0,   215,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,   113,   114,   105,
       0,   106,     0,     0,     0,     0,   217,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   105,   449,   106,     2,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     1,     0,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,    29,     0,    30,     0,    32,     0,   321,   420,
       0,     0,   293,     0,     0,     0,     0,     3,    34,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,   419,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,    29,     0,
      30,    31,    32,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    34,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   312,
       0,   200,   201,   202,   203,     0,     0,     0,     0,     0,
       0,     0,    28,     0,    29,     0,    30,     0,    32,     0,
     292,   420,     0,     0,   293,     0,     0,     0,     3,     0,
      34,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   312,   200,   201,   202,   203,
       0,     0,     0,     0,     0,     0,     0,   461,     0,    29,
       0,     0,    31,     0,   205,   206,   207,     0,     0,   208,
     209,   210,   211,   313,     3,   212,   200,   201,   202,   203,
       0,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     200,   201,   202,   203,     0,     0,     0,     0,     0,     0,
     466,     0,     0,     0,     0,    29,     0,     0,    31,   205,
     206,   207,     0,     0,   208,   209,   210,   211,     0,   442,
     212,   200,   201,   202,   203,     0,     0,     0,     0,     0,
     468,     0,     0,     0,     0,   200,   201,   202,   203,   205,
     206,   207,     0,     0,   208,   209,   210,   211,     0,     0,
     212,     0,     0,     0,     0,   480,   200,   201,   202,   203,
       0,     0,     0,   205,   206,   207,     0,     0,   208,   209,
     210,   211,     0,     0,   212,     0,   200,   201,   202,   203,
       0,     0,     0,     0,     0,     0,     0,   484,     0,     0,
       0,     0,     0,     0,   205,   206,   207,     0,     0,   208,
     209,   210,   211,   489,     0,   212,     0,     0,   205,   206,
     207,     0,     0,   208,   209,   210,   211,     0,     0,   212,
       0,     0,     0,     0,   553,     0,     0,     0,     0,   205,
     206,   207,     0,     0,   208,   209,   210,   211,     0,     0,
     212,   507,   187,     0,   188,     0,     0,     0,     0,   205,
     206,   207,     0,     0,   208,   209,   210,   211,     0,     0,
     212,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   497,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,    29,     0,    30,     0,    32,     0,     0,   189,
       0,     0,     0,     0,     0,     0,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   450,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,    29,     0,    30,
       0,    32,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     3,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   451,   450,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,    29,     0,    30,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   453,   181,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,    29,     0,
      30,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     3,    31,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,    29,     0,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
     177,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
      29,     0,    30,    31,    32,     0,     0,     0,     0,     0,
       0,     0,     3,    52,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,    28,     0,    29,     0,    30,     0,    32,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,   537,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,    29,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29
};

static const yytype_int16 yycheck[] =
{
      34,    59,    80,     0,   172,    99,    47,    60,    79,   177,
      74,   163,     1,     3,    34,    74,    74,     0,   284,    19,
       1,     3,   288,   182,    59,    59,    77,     1,   227,     3,
       1,    65,     3,     1,    80,     3,    33,    79,   190,    36,
      74,    94,    78,   294,    77,    65,    80,   511,    79,   107,
      79,     3,    49,    82,    37,    38,    79,    54,   100,    42,
      43,    44,     3,    52,    85,     1,    49,    56,   122,   100,
     202,   203,   107,   107,   325,    56,    99,   100,    79,   100,
       1,    70,     3,   323,     3,    66,   206,   207,    84,    70,
     330,    77,    79,    78,    84,    81,    79,    78,    98,   100,
      59,    60,    84,   162,   162,   164,   164,    84,     1,    77,
       3,    85,    80,   100,    85,   579,   180,   195,   182,    87,
     214,   180,   180,   182,   182,    77,   172,   221,   162,    81,
     164,   177,   100,    14,    15,    94,    77,   269,   270,    84,
     292,   261,   262,   163,   443,   411,   180,   446,   182,   195,
     309,   205,   141,   199,   208,   209,    77,   215,    77,   217,
     104,   195,    81,   107,    80,   199,    87,   187,    87,   321,
     190,   370,   371,    81,   171,    83,   234,    80,   175,   100,
     215,   215,   217,   217,    77,    77,    85,   184,    77,   235,
     179,    99,    81,   190,    87,     3,   242,    79,   179,   234,
     234,   100,    79,    85,   258,   259,   260,   100,    85,     1,
     256,     3,    77,    94,    95,   293,    81,    99,     1,    77,
       3,     4,     5,     6,     7,     8,    77,    10,    11,    77,
      81,   277,    77,   286,   287,     1,    87,     3,   227,   171,
       1,    79,     3,   175,   100,   309,    84,   293,    31,    79,
     309,   309,    87,    88,    89,    85,   302,    92,    93,   293,
     100,    99,   100,   316,    77,     1,   360,     3,   212,    99,
     438,   215,   292,   217,     3,   309,    87,    79,   222,   223,
     224,    92,    93,    85,   325,    77,     3,    70,   334,    72,
       1,   337,     3,     3,    77,    87,    38,    39,    40,   243,
     334,   321,    77,    86,    87,    88,    89,    90,    91,   292,
       1,    77,     3,    87,    80,    86,    77,   100,    92,    93,
      96,    87,    12,    13,   321,   379,    87,   286,   287,    71,
      88,    89,   276,    97,    14,    15,    16,    17,   321,   507,
     323,    16,    17,   511,    18,    87,   424,   330,    77,    78,
      79,    99,    81,   431,    78,    79,    99,   316,    87,   430,
      77,    78,    79,    78,    81,    78,     3,    77,    78,    79,
      87,    81,   466,   467,   468,   469,   470,    87,   424,   473,
      79,   434,   428,    79,    79,   431,    85,    79,    80,    85,
     424,   444,   438,    78,   428,   448,    79,   431,   566,   419,
      78,    79,    79,    80,    62,    85,    82,    87,    88,    89,
      82,   579,    92,    93,    94,    95,    78,    79,    98,   477,
     100,    59,    60,   501,     9,    10,    11,    78,    79,   449,
     450,    80,   478,   100,   480,    78,   482,    78,    79,   533,
      77,   535,    79,   477,    81,   491,   443,   430,   494,   446,
      87,     3,    90,    91,    92,   501,    94,   491,     3,   505,
       6,   507,    78,    79,    99,   511,   100,   501,    79,    80,
      80,   505,     3,   567,   568,   434,    82,   497,   572,    82,
     574,    78,    79,    82,   122,   444,    78,    79,    78,   448,
      78,    79,    77,    79,    78,    79,    81,    78,    83,    78,
      79,    77,   461,   462,    14,    15,    16,    17,    77,   555,
     263,   264,   558,    78,    78,    78,    99,    78,     3,   577,
     566,   555,    14,    15,    82,   484,   485,   471,   472,   575,
     474,   475,   578,   579,    14,    15,    16,    17,    82,    82,
      82,    82,    78,   577,    84,    82,   100,    82,    82,    82,
      80,    60,    62,    60,    80,    80,   272,   271,    82,    82,
      82,    82,   200,   201,   202,   203,    82,   205,   206,   207,
     208,   209,   210,   211,    82,   577,   273,    87,    88,    89,
     100,   100,    92,    93,    94,    95,   274,   180,    98,   275,
     100,    14,    15,    16,    17,    87,    88,    89,   151,    79,
      92,    93,    94,    95,   478,    85,   439,    87,    88,    89,
      49,    70,    92,    93,    94,    95,    -1,    -1,    98,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,   287,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    87,    88,    89,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    98,    -1,   100,   316,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,     0,     1,
      -1,     3,    -1,    84,    85,    86,    87,    88,    89,    90,
      91,   379,    -1,    -1,    -1,    -1,   200,   201,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   210,   211,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   434,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    77,   444,    -1,    -1,    -1,
     448,   265,   266,   267,   268,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   461,   462,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   484,   485,    -1,    -1,
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
      -1,    -1,    -1,    77,    -1,    14,    15,    16,    17,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,   100,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    14,
      15,    16,    17,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,     5,     6,     7,     8,   100,    10,    11,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    -1,    -1,    92,    93,    94,    95,    -1,    31,    98,
      -1,   100,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    78,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    98,    -1,    31,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,     7,     8,   100,    10,    11,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    30,    31,
      86,    87,    88,    89,    90,    91,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    34,    -1,    -1,    -1,    38,    39,
      40,    87,    88,    89,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    98,    31,   100,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    71,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    31,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,
      -1,    77,    -1,    -1,    -1,    81,    -1,    83,    84,    -1,
      86,    87,    88,    89,    90,    91,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    14,    15,    16,    17,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    90,    91,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    -1,    70,
      98,    72,    -1,    -1,    31,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    90,    91,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    70,     1,    72,     3,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,     1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    30,    87,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    87,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      77,    78,    -1,    -1,    81,    -1,    -1,    -1,    30,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,     1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    71,
      -1,    -1,    74,    -1,    87,    88,    89,    -1,    -1,    92,
      93,    94,    95,    85,    30,    98,    14,    15,    16,    17,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    -1,    85,
      98,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    79,    14,    15,    16,    17,
      -1,    -1,    -1,    87,    88,    89,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    98,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    -1,    -1,    92,
      93,    94,    95,    82,    -1,    98,    -1,    -1,    87,    88,
      89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      98,    79,     1,    -1,     3,    -1,    -1,    -1,    -1,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    30,    74,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      99,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    84,    32,    33,    34,    35,    36,    37,
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
     175,   176,    84,   129,   130,   167,   177,     3,    84,    77,
      77,     1,   148,   145,   150,   151,     1,   100,   131,   132,
     148,   130,   130,     3,    84,   130,   130,   130,     1,    77,
      81,   149,     0,   175,     1,     3,     4,     5,     6,     7,
       8,    10,    11,    31,    57,    58,    59,    61,    62,    63,
      64,    65,    66,    67,    68,    70,    72,    77,    85,    86,
      87,    88,    89,    90,    91,   100,   102,   103,   105,   106,
     109,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   127,   129,   165,   166,
     167,   168,   169,   170,   171,   172,   173,     1,   148,   129,
     167,    84,     1,     3,   104,   143,   144,     1,     3,   111,
     124,   128,   134,   139,   145,   156,   128,    78,    78,   145,
     150,    79,    99,   100,   167,    79,   100,    99,   167,   177,
      84,     1,   137,   138,   139,   164,   167,     1,     3,    78,
     130,   152,   153,   154,   155,    34,    82,    87,   125,   151,
      14,    15,    16,    17,    85,    87,    88,    89,    92,    93,
      94,    95,    98,   100,    80,    77,   111,    77,   111,   111,
     128,    80,    77,    77,    77,     1,   165,    77,     3,   100,
     100,     1,   100,   127,    77,    77,     1,   127,   156,     9,
      10,    11,    77,    81,    83,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    99,   126,   113,    87,    92,
      93,    88,    89,    12,    13,    14,    15,    94,    95,    16,
      17,    86,    96,    97,    18,    19,    98,    79,   100,     1,
      85,   169,     1,   143,    79,    85,    99,    99,    79,    85,
      78,   139,    77,    81,   150,   157,   158,   139,    78,    79,
       1,   132,    84,   125,   159,   132,   159,   167,     1,   137,
      85,   100,     1,    85,   138,     1,    80,   100,   140,   141,
     148,    77,    78,    79,   148,   150,   157,   148,   157,    78,
      79,    78,    79,   125,   151,    82,    82,    34,    82,    87,
     125,     1,   116,   116,     1,   117,   117,   113,     1,   114,
     114,   113,   113,   116,   116,     1,   127,   165,   156,   156,
      80,   165,     1,   127,     1,   127,   127,    62,    62,     1,
     129,   170,   100,   100,   100,   156,   125,    78,    78,    78,
       3,     1,    78,   110,   125,   127,     3,   125,   113,   113,
     113,   114,   114,   115,   115,   116,   116,   116,   116,   117,
     117,     1,   118,   119,   120,   121,   122,     1,   127,   125,
      85,    79,    85,     1,   144,   128,   128,    85,   144,     1,
      78,   152,   157,     1,    34,    82,    87,   125,   151,   158,
      77,    81,     6,     1,    81,    83,   159,   160,   161,   162,
     163,    85,    85,    79,    80,   128,    79,   100,    80,     1,
       1,    56,   154,    56,   154,     3,    82,   125,   125,    82,
      82,    80,    80,    78,    78,   165,    78,    78,    78,    78,
      78,    77,    77,    78,   170,   170,    78,    79,    84,   113,
      79,    78,    79,    82,    80,    80,    85,    78,    78,    82,
     125,   151,    82,    82,    34,    82,   125,     1,    78,   152,
       1,    34,    82,    87,   125,   151,    78,    79,    85,   128,
       3,    79,    85,   159,    99,   163,     1,   141,   128,   141,
     128,    82,    82,   124,   124,   165,   165,   165,   165,   165,
     127,   127,   165,    78,   127,    78,   127,    58,   107,   108,
     156,     1,   160,   125,   125,   124,   124,    82,   125,   125,
      82,    78,    78,    82,   125,   151,    82,    82,    34,    82,
     125,   100,   159,    82,    85,   159,   161,    60,    60,    78,
      78,   165,    78,   165,    78,    80,    78,    79,    80,    79,
      85,    82,    82,    82,   125,   125,    82,   159,   165,   165,
     100,   100,   165,   165,   125,   108,   125,    85,    82,    82
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
     149,   150,   150,   150,   150,   151,   151,   152,   152,   152,
     153,   153,   153,   154,   154,   154,   154,   154,   155,   155,
     156,   156,   157,   157,   157,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   159,
     159,   159,   159,   160,   160,   160,   160,   160,   161,   162,
     162,   163,   163,   164,   165,   165,   165,   165,   165,   165,
     166,   166,   166,   167,   167,   167,   168,   168,   169,   169,
     170,   170,   170,   171,   171,   171,   171,   171,   171,   172,
     172,   172,   172,   172,   172,   172,   172,   173,   173,   173,
     173,   173,   173,   174,   174,   175,   175,   176,   176,   176,
     176,   176,   176,   177,   177
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
       3,     3,     2,     2,     1,     1,     2,     3,     1,     3,
       1,     3,     3,     2,     2,     1,     2,     2,     1,     3,
       2,     1,     2,     1,     1,     3,     2,     3,     5,     4,
       5,     4,     3,     3,     3,     4,     6,     5,     5,     6,
       4,     4,     2,     3,     3,     4,     3,     4,     4,     3,
       4,     3,     1,     2,     1,     4,     3,     3,     2,     1,
       2,     3,     2,     7,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     1,     2,     1,     1,
       1,     2,     2,     7,     5,     5,     5,     5,     7,     5,
       7,     6,     7,     6,     7,     7,     5,     3,     2,     2,
       2,     3,     3,     1,     2,     1,     1,     4,     3,     3,
       3,     3,     2,     1,     2
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
        YY_LAC_DISCARD ("YYBACKUP");                              \
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          YYNOMEM;                                                      \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
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

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




/* The kind of the lookahead of this context.  */
static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx)
{
  return yyctx->yytoken;
}

/* The location of the lookahead of this context.  */
static YYLTYPE *
yypcontext_location (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static YYLTYPE *
yypcontext_location (const yypcontext_t *yyctx)
{
  return yyctx->yylloc;
}

/* User defined function to report a syntax error.  */
static int
yyreport_syntax_error (const yypcontext_t *yyctx);

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      YY_LAC_ESTABLISH;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 127: /* storage_class_specifier: TYPEDEF  */
#line 271 "parserNuevecito.y"
                        {typedef_name_flag = 1;}
#line 2734 "parserNuevecito.tab.c"
    break;

  case 153: /* struct_or_union: STRUCT  */
#line 306 "parserNuevecito.y"
                 {typedef_name_flag = 4;}
#line 2740 "parserNuevecito.tab.c"
    break;


#line 2744 "parserNuevecito.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
  *++yylsp = yyloc;

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
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken, &yylloc};
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        if (yyreport_syntax_error (&yyctx) == 2)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);

  return yyresult;
}

#line 606 "parserNuevecito.y"

#include <stdio.h>
const YYLTYPE *loc;

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
	resetColor();
}

int customError(const char *str) {
	fprintf(stderr, "error: %s, line %d, column %d\n", str, yylineno, column);
}

void eat_to_newline() {
    int c;
    while ((c = getchar()) != EOF && c != '\n');
}

static void location_print (FILE *out, YYLTYPE const * const loc) {
  fprintf (out, "\033[1;33mprueba.c:%d:%d\033[0m", loc->first_line, loc->first_column);

  int end_col = 0 != loc->last_column ? loc->last_column - 1 : 0;
  if (loc->first_line < loc->last_line) 
    fprintf (out, "\033[1;33m-%d:%d\033[0m", loc->last_line, end_col);
  else if (loc->first_column < end_col)
    fprintf (out, "\033[1;33m-%d\033[0m", end_col);
}

static const char * error_format_string (int argc) {
	switch (argc) {
		default:
		case 0: return ("%@: \033[1;31msyntax error\033[0m: unexpected %u");
		case 1: return ("%@: \033[1;31msyntax error\033[0m: unexpected %u");
		case 2: return ("%@: \033[1;31msyntax error\033[0m: expected %0e before %u");
		case 3: return ("%@: \033[1;31msyntax error\033[0m: expected %0e or %1e before %u");
		case 4: return ("%@: \033[1;31msyntax error\033[0m: expected %0e or %1e or %2e etc. before %u");
	}
}

int yyreport_syntax_error (const yypcontext_t *yyctx) {

	enum {ARGS_MAX = 3};
	yysymbol_kind_t arg[ARGS_MAX];

	int argsize = yypcontext_expected_tokens (yyctx, arg, ARGS_MAX);

	if (argsize < 0) {
		return argsize;
	}

	const int too_many_tokens = argsize == 0 && arg[0] != YYSYMBOL_YYEMPTY;

	if (too_many_tokens) {
		argsize = ARGS_MAX;
	}

	const char *format = error_format_string(1 + argsize + too_many_tokens);
	const YYLTYPE *loc = yypcontext_location (yyctx);

	while (*format)
		if (format[0] == '%' && format[1] == '@') {
			YYLOCATION_PRINT (stderr, loc);
			format += 2;
		} else if (format[0] == '%' && format[1] == 'u') {
			fputs (yysymbol_name (yypcontext_token (yyctx)), stderr);
			format += 2;
		} else if (format[0] == '%' && format[2] == 'e' && (format[1] - '0') < argsize) {
			int i = format[1] - '0';
        	fputs (yysymbol_name (arg[i]), stderr);
        	format += 3;
		} else {
			fputc (*format, stderr);
			++format;
		}
	fputc ('\n', stderr);

	if (line != NULL) {
		line[strcspn(line, "\n")] = 0;
	}

    fprintf (stderr, "\033[1;33m%5d\033[0m | %s\n", loc->first_line, line);
    fprintf (stderr, "%5s | \033[1;31m%*s\033[0m", "", loc->first_column, "^");
    for (int i = loc->last_column - loc->first_column - 1; 0 < i; --i)
      putc ('~', stderr);
    putc ('\n', stderr);

	return 0;
}
