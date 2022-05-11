/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 123 "parserNuevecito.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSERNUEVECITO_TAB_H_INCLUDED  */
