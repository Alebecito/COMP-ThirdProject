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
