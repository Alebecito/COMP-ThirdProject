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
    WHITESPACE = 265,
    NEWLINE = 266,
    END_OF_FILE = 267,
    ERROR = 268,
    PTR_OP = 269,
    INC_OP = 270,
    DEC_OP = 271,
    UNARY_OP = 272,
    LEFT_SHIFT = 273,
    RIGHT_SHIFT = 274,
    LE = 275,
    GE = 276,
    GREATER_OP = 277,
    HEADER_NAME = 278,
    LOWER_OP = 279,
    EQ = 280,
    NOT_EQ = 281,
    LOGICAL_AND = 282,
    LOGICAL_OR = 283,
    ASSIGNMENT_OPERATOR = 284,
    ELLIPSIS = 285,
    SIZEOF = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    VOID = 292,
    CHAR = 293,
    SHORT = 294,
    INT = 295,
    LONG = 296,
    FLOAT = 297,
    DOUBLE = 298,
    DEFAULT = 299,
    IF = 300,
    SWITCH = 301,
    SIGNED = 302,
    UNSIGNED = 303,
    _BOOL = 304,
    _COMPLEX = 305,
    _IMAGINARY = 306,
    STRUCT = 307,
    UNION = 308,
    ENUM = 309,
    CONST = 310,
    RESTRICT = 311,
    VOLATILE = 312,
    INLINE = 313,
    CASE = 314,
    ELSE = 315,
    FOR = 316,
    DO = 317,
    WHILE = 318,
    GOTO = 319,
    CONTINUE = 320,
    BREAK = 321,
    RETURN = 322
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
