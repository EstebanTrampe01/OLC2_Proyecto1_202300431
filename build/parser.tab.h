/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

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

#ifndef YY_YY_BUILD_PARSER_TAB_H_INCLUDED
# define YY_YY_BUILD_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 12 "src/entriesTools/parser.y"

    #include "ast/nodos/builders.h"
    #include "context/result.h"
    #include "ast/nodos/instrucciones/instruccion/continue.h"
    #include "ast/nodos/instrucciones/instruccion/array.h"
    #include "ast/nodos/instrucciones/instruccion/matrix.h"
    #include "ast/nodos/instrucciones/instruccion/funcion.h"
    #include "ast/nodos/expresiones/builtins.h"
    typedef struct ParamList {
        char** names;
        TipoDato* types;
        int count;
    } ParamList;
    typedef struct DeclBase {
        TipoDato tipo;
        char* nombre;
        int dims; /* numero de [] */
        int esFinal;
    } DeclBase;
    typedef struct MultiAccessTemp { char* nombre; AbstractExpresion* indicesLista; } MultiAccessTemp;
    /* Variables auxiliares para declaración factorizada */
    extern TipoDato __tmp_decl_tipo; extern char* __tmp_decl_nombre; extern int __tmp_decl_final;

#line 68 "build/parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_PRINT = 258,             /* TOKEN_PRINT  */
    TOKEN_DINT = 259,              /* TOKEN_DINT  */
    TOKEN_DFLOAT = 260,            /* TOKEN_DFLOAT  */
    TOKEN_DBYTE = 261,             /* TOKEN_DBYTE  */
    TOKEN_DSHORT = 262,            /* TOKEN_DSHORT  */
    TOKEN_DLONG = 263,             /* TOKEN_DLONG  */
    TOKEN_DDOUBLE = 264,           /* TOKEN_DDOUBLE  */
    TOKEN_DSTRING = 265,           /* TOKEN_DSTRING  */
    TOKEN_UNSIGNED_INTEGER = 266,  /* TOKEN_UNSIGNED_INTEGER  */
    TOKEN_REAL = 267,              /* TOKEN_REAL  */
    TOKEN_REAL_FLOAT = 268,        /* TOKEN_REAL_FLOAT  */
    TOKEN_STRING = 269,            /* TOKEN_STRING  */
    TOKEN_IDENTIFIER = 270,        /* TOKEN_IDENTIFIER  */
    TOKEN_TRUE = 271,              /* TOKEN_TRUE  */
    TOKEN_FALSE = 272,             /* TOKEN_FALSE  */
    TOKEN_DBOOLEAN = 273,          /* TOKEN_DBOOLEAN  */
    TOKEN_DCHAR = 274,             /* TOKEN_DCHAR  */
    TOKEN_CHAR_LITERAL = 275,      /* TOKEN_CHAR_LITERAL  */
    TOKEN_FINAL = 276,             /* TOKEN_FINAL  */
    TOKEN_SYSTEM_OUT_PRINTLN = 277, /* TOKEN_SYSTEM_OUT_PRINTLN  */
    TOKEN_DVOID = 278,             /* TOKEN_DVOID  */
    TOKEN_SHIFT_LEFT = 279,        /* TOKEN_SHIFT_LEFT  */
    TOKEN_SHIFT_RIGHT = 280,       /* TOKEN_SHIFT_RIGHT  */
    TOKEN_INTEGER_CLASS = 281,     /* TOKEN_INTEGER_CLASS  */
    TOKEN_DOUBLE_CLASS = 282,      /* TOKEN_DOUBLE_CLASS  */
    TOKEN_FLOAT_CLASS = 283,       /* TOKEN_FLOAT_CLASS  */
    TOKEN_ARRAYS = 284,            /* TOKEN_ARRAYS  */
    TOKEN_PARSE_INT = 285,         /* TOKEN_PARSE_INT  */
    TOKEN_PARSE_DOUBLE = 286,      /* TOKEN_PARSE_DOUBLE  */
    TOKEN_PARSE_FLOAT = 287,       /* TOKEN_PARSE_FLOAT  */
    TOKEN_VALUE_OF = 288,          /* TOKEN_VALUE_OF  */
    TOKEN_JOIN = 289,              /* TOKEN_JOIN  */
    TOKEN_LENGTH = 290,            /* TOKEN_LENGTH  */
    TOKEN_ADD = 291,               /* TOKEN_ADD  */
    TOKEN_INDEXOF = 292,           /* TOKEN_INDEXOF  */
    TOKEN_PLUS_PLUS = 293,         /* TOKEN_PLUS_PLUS  */
    TOKEN_MINUS_MINUS = 294,       /* TOKEN_MINUS_MINUS  */
    TOKEN_PLUS_ASSIGN = 295,       /* TOKEN_PLUS_ASSIGN  */
    TOKEN_MINUS_ASSIGN = 296,      /* TOKEN_MINUS_ASSIGN  */
    TOKEN_MUL_ASSIGN = 297,        /* TOKEN_MUL_ASSIGN  */
    TOKEN_DIV_ASSIGN = 298,        /* TOKEN_DIV_ASSIGN  */
    TOKEN_MOD_ASSIGN = 299,        /* TOKEN_MOD_ASSIGN  */
    TOKEN_AND_ASSIGN = 300,        /* TOKEN_AND_ASSIGN  */
    TOKEN_OR_ASSIGN = 301,         /* TOKEN_OR_ASSIGN  */
    TOKEN_XOR_ASSIGN = 302,        /* TOKEN_XOR_ASSIGN  */
    TOKEN_SHL_ASSIGN = 303,        /* TOKEN_SHL_ASSIGN  */
    TOKEN_SHR_ASSIGN = 304,        /* TOKEN_SHR_ASSIGN  */
    TOKEN_EQUAL = 305,             /* TOKEN_EQUAL  */
    TOKEN_NOT_EQUAL = 306,         /* TOKEN_NOT_EQUAL  */
    TOKEN_GREATER = 307,           /* TOKEN_GREATER  */
    TOKEN_LESS = 308,              /* TOKEN_LESS  */
    TOKEN_GREATER_EQUAL = 309,     /* TOKEN_GREATER_EQUAL  */
    TOKEN_LESS_EQUAL = 310,        /* TOKEN_LESS_EQUAL  */
    TOKEN_AND = 311,               /* TOKEN_AND  */
    TOKEN_OR = 312,                /* TOKEN_OR  */
    TOKEN_NOT = 313,               /* TOKEN_NOT  */
    TOKEN_IF = 314,                /* TOKEN_IF  */
    TOKEN_ELSE = 315,              /* TOKEN_ELSE  */
    TOKEN_SWITCH = 316,            /* TOKEN_SWITCH  */
    TOKEN_CASE = 317,              /* TOKEN_CASE  */
    TOKEN_DEFAULT = 318,           /* TOKEN_DEFAULT  */
    TOKEN_BREAK = 319,             /* TOKEN_BREAK  */
    TOKEN_WHILE = 320,             /* TOKEN_WHILE  */
    TOKEN_FOR = 321,               /* TOKEN_FOR  */
    TOKEN_CONTINUE = 322,          /* TOKEN_CONTINUE  */
    TOKEN_NEW = 323,               /* TOKEN_NEW  */
    TOKEN_RETURN = 324,            /* TOKEN_RETURN  */
    TOKEN_PUBLIC = 325,            /* TOKEN_PUBLIC  */
    TOKEN_STATIC = 326,            /* TOKEN_STATIC  */
    NEG = 327,                     /* NEG  */
    CAST = 328                     /* CAST  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "src/entriesTools/parser.y"

    char* string;
    AbstractExpresion* nodo;
    TipoDato tipoDato;
    int boolean;
    char char_val;
    struct ParamList* paramList;
    struct DeclBase* declBase;
    struct MultiAccessTemp* multiAccess;

#line 169 "build/parser.tab.h"

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

#endif /* !YY_YY_BUILD_PARSER_TAB_H_INCLUDED  */
