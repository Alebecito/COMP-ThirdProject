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
    LEFT_SHIFT = 268,
    RIGHT_SHIFT = 269,
    LE = 270,
    GE = 271,
    GREATER_OP = 272,
    HEADER_NAME = 273,
    LOWER_OP = 274,
    EQ = 275,
    NOT_EQ = 276,
    LOGICAL_AND = 277,
    LOGICAL_OR = 278,
    ASSIGNMENT_OPERATOR = 279,
    ELLIPSIS = 280,
    SIZEOF = 281,
    TYPEDEF = 282,
    EXTERN = 283,
    STATIC = 284,
    AUTO = 285,
    REGISTER = 286,
    VOID = 287,
    CHAR = 288,
    SHORT = 289,
    INT = 290,
    LONG = 291,
    FLOAT = 292,
    DOUBLE = 293,
    DEFAULT = 294,
    IF = 295,
    SWITCH = 296,
    SIGNED = 297,
    UNSIGNED = 298,
    _BOOL = 299,
    _COMPLEX = 300,
    _IMAGINARY = 301,
    STRUCT = 302,
    UNION = 303,
    ENUM = 304,
    CONST = 305,
    RESTRICT = 306,
    VOLATILE = 307,
    INLINE = 308,
    CASE = 309,
    ELSE = 310,
    FOR = 311,
    DO = 312,
    WHILE = 313,
    GOTO = 314,
    CONTINUE = 315,
    BREAK = 316,
    RETURN = 317,
    END_OF_FILE = 318
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
