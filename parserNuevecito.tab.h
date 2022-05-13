/* A Bison parser, made by GNU Bison 3.8.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSERNUEVECITO_TAB_H_INCLUDED
# define YY_YY_PARSERNUEVECITO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 259,        /* INTEGER_CONSTANT  */
    FLOATING_CONSTANT = 260,       /* FLOATING_CONSTANT  */
    CHARACTER_CONSTANT = 261,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    WHITESPACE = 263,              /* WHITESPACE  */
    TYPEDEF_NAME = 264,            /* TYPEDEF_NAME  */
    PTR_OP = 265,                  /* PTR_OP  */
    INC_OP = 266,                  /* INC_OP  */
    DEC_OP = 267,                  /* DEC_OP  */
    LEFT_SHIFT = 268,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 269,             /* RIGHT_SHIFT  */
    LE = 270,                      /* LE  */
    GE = 271,                      /* GE  */
    GREATER_OP = 272,              /* GREATER_OP  */
    HEADER_NAME = 273,             /* HEADER_NAME  */
    LOWER_OP = 274,                /* LOWER_OP  */
    EQ = 275,                      /* EQ  */
    NOT_EQ = 276,                  /* NOT_EQ  */
    LOGICAL_AND = 277,             /* LOGICAL_AND  */
    LOGICAL_OR = 278,              /* LOGICAL_OR  */
    ASSIGNMENT_OPERATOR = 279,     /* ASSIGNMENT_OPERATOR  */
    ELLIPSIS = 280,                /* ELLIPSIS  */
    SIZEOF = 281,                  /* SIZEOF  */
    TYPEDEF = 282,                 /* TYPEDEF  */
    EXTERN = 283,                  /* EXTERN  */
    STATIC = 284,                  /* STATIC  */
    AUTO = 285,                    /* AUTO  */
    REGISTER = 286,                /* REGISTER  */
    VOID = 287,                    /* VOID  */
    CHAR = 288,                    /* CHAR  */
    SHORT = 289,                   /* SHORT  */
    INT = 290,                     /* INT  */
    LONG = 291,                    /* LONG  */
    FLOAT = 292,                   /* FLOAT  */
    DOUBLE = 293,                  /* DOUBLE  */
    DEFAULT = 294,                 /* DEFAULT  */
    IF = 295,                      /* IF  */
    SWITCH = 296,                  /* SWITCH  */
    SIGNED = 297,                  /* SIGNED  */
    UNSIGNED = 298,                /* UNSIGNED  */
    _BOOL = 299,                   /* _BOOL  */
    _COMPLEX = 300,                /* _COMPLEX  */
    _IMAGINARY = 301,              /* _IMAGINARY  */
    STRUCT = 302,                  /* STRUCT  */
    UNION = 303,                   /* UNION  */
    ENUM = 304,                    /* ENUM  */
    CONST = 305,                   /* CONST  */
    RESTRICT = 306,                /* RESTRICT  */
    VOLATILE = 307,                /* VOLATILE  */
    INLINE = 308,                  /* INLINE  */
    CASE = 309,                    /* CASE  */
    ELSE = 310,                    /* ELSE  */
    FOR = 311,                     /* FOR  */
    DO = 312,                      /* DO  */
    WHILE = 313,                   /* WHILE  */
    GOTO = 314,                    /* GOTO  */
    CONTINUE = 315,                /* CONTINUE  */
    BREAK = 316,                   /* BREAK  */
    RETURN = 317                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
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
