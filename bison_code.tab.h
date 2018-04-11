/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_BISON_CODE_TAB_H_INCLUDED
# define YY_YY_BISON_CODE_TAB_H_INCLUDED
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
    END = 0,
    IF = 258,
    ELSE = 259,
    WHILE = 260,
    CLASS = 261,
    THIS = 262,
    NEW = 263,
    MAIN = 264,
    PUBLIC = 265,
    EXTENDS = 266,
    INT = 267,
    BOOL = 268,
    STRING = 269,
    SQBR_L = 270,
    SQBR_R = 271,
    RNDBR_L = 272,
    RNDBR_R = 273,
    BTBR_L = 274,
    BTBR_R = 275,
    COMMA = 276,
    DOT = 277,
    SEMICOLON = 278,
    EQ = 279,
    AND = 280,
    OR = 281,
    PLUS = 282,
    MINUS = 283,
    STAR = 284,
    LESS = 285,
    EXCL = 286,
    FALSE = 287,
    TRUE = 288,
    PRINT = 289,
    LEN = 290,
    RETURN = 291,
    NUM = 292,
    ID = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 77 "bison_code" /* yacc.c:1909  */

    SymbolTable::Symbol* symbol;
    int intval;
    char* strValue;
    Program* program;
    MainClass* main_class;
    ClassDecl *class_dec;
    ClassDeclList *class_dec_list;
    VarDecl* var_dec;
    VarDeclList* var_dec_list;
    MethodDecl* method;
    MethodDeclList* method_list;
    ArgumentList* arg_list;
    Type* type;
    StatementList* statement_list;
    Statement* statement;
    ExpressionList* expression_list;
    Expression* expression;
    SymbolTable::Symbol* id;

#line 115 "bison_code.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_BISON_CODE_TAB_H_INCLUDED  */
