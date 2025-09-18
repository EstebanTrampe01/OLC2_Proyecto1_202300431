/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/entriesTools/parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include "ast/AbstractExpresion.h"

    int yylex(void);
    extern AbstractExpresion* ast_root;
    void yyerror(const char *s);
#line 12 "src/entriesTools/parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "ast/nodos/builders.h"
#include "ast/nodos/expresiones/expresiones.h"
#include "ast/nodos/expresiones/listaExpresiones.h"
#include "ast/nodos/instrucciones/instrucciones.h"
#include "ast/nodos/instrucciones/bloque.h"
#include "ast/nodos/instrucciones/instruccion/print.h"
#include "ast/nodos/instrucciones/instruccion/declaracion.h"
#include "ast/nodos/instrucciones/instruccion/array.h"
#include "ast/nodos/instrucciones/instruccion/matrix.h"
#include "ast/nodos/instrucciones/instruccion/funcion.h"
#include "ast/nodos/instrucciones/instruccion/if.h"
#include "ast/nodos/instrucciones/instruccion/while.h"
#include "ast/nodos/instrucciones/instruccion/for.h"
#include "ast/nodos/instrucciones/instruccion/switch.h"
#include "ast/nodos/instrucciones/instruccion/break.h"
#include "ast/nodos/instrucciones/instruccion/continue.h"
#include "ast/nodos/expresiones/relacionales/relacionales.h"
#include "ast/nodos/expresiones/logicas/logicas.h"
#include "ast/nodos/expresiones/aritmeticas/aritmeticas.h"
#include "ast/nodos/expresiones/cast.h"
#include "ast/nodos/expresiones/terminales/identificadores.h"
#include "ast/nodos/expresiones/terminales/primitivos.h"
#include "ast/nodos/expresiones/builtins.h"
#include "context/error_reporting.h"


#line 112 "build/parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_PRINT = 3,                /* TOKEN_PRINT  */
  YYSYMBOL_TOKEN_DINT = 4,                 /* TOKEN_DINT  */
  YYSYMBOL_TOKEN_DFLOAT = 5,               /* TOKEN_DFLOAT  */
  YYSYMBOL_TOKEN_DBYTE = 6,                /* TOKEN_DBYTE  */
  YYSYMBOL_TOKEN_DSHORT = 7,               /* TOKEN_DSHORT  */
  YYSYMBOL_TOKEN_DLONG = 8,                /* TOKEN_DLONG  */
  YYSYMBOL_TOKEN_DDOUBLE = 9,              /* TOKEN_DDOUBLE  */
  YYSYMBOL_TOKEN_DSTRING = 10,             /* TOKEN_DSTRING  */
  YYSYMBOL_TOKEN_UNSIGNED_INTEGER = 11,    /* TOKEN_UNSIGNED_INTEGER  */
  YYSYMBOL_TOKEN_REAL = 12,                /* TOKEN_REAL  */
  YYSYMBOL_TOKEN_REAL_FLOAT = 13,          /* TOKEN_REAL_FLOAT  */
  YYSYMBOL_TOKEN_STRING = 14,              /* TOKEN_STRING  */
  YYSYMBOL_TOKEN_IDENTIFIER = 15,          /* TOKEN_IDENTIFIER  */
  YYSYMBOL_TOKEN_TRUE = 16,                /* TOKEN_TRUE  */
  YYSYMBOL_TOKEN_FALSE = 17,               /* TOKEN_FALSE  */
  YYSYMBOL_TOKEN_DBOOLEAN = 18,            /* TOKEN_DBOOLEAN  */
  YYSYMBOL_TOKEN_DCHAR = 19,               /* TOKEN_DCHAR  */
  YYSYMBOL_TOKEN_CHAR_LITERAL = 20,        /* TOKEN_CHAR_LITERAL  */
  YYSYMBOL_TOKEN_FINAL = 21,               /* TOKEN_FINAL  */
  YYSYMBOL_TOKEN_SYSTEM_OUT_PRINTLN = 22,  /* TOKEN_SYSTEM_OUT_PRINTLN  */
  YYSYMBOL_TOKEN_DVOID = 23,               /* TOKEN_DVOID  */
  YYSYMBOL_TOKEN_NULL = 24,                /* TOKEN_NULL  */
  YYSYMBOL_TOKEN_SHIFT_LEFT = 25,          /* TOKEN_SHIFT_LEFT  */
  YYSYMBOL_TOKEN_SHIFT_RIGHT = 26,         /* TOKEN_SHIFT_RIGHT  */
  YYSYMBOL_TOKEN_INTEGER_CLASS = 27,       /* TOKEN_INTEGER_CLASS  */
  YYSYMBOL_TOKEN_DOUBLE_CLASS = 28,        /* TOKEN_DOUBLE_CLASS  */
  YYSYMBOL_TOKEN_FLOAT_CLASS = 29,         /* TOKEN_FLOAT_CLASS  */
  YYSYMBOL_TOKEN_ARRAYS = 30,              /* TOKEN_ARRAYS  */
  YYSYMBOL_TOKEN_PARSE_INT = 31,           /* TOKEN_PARSE_INT  */
  YYSYMBOL_TOKEN_PARSE_DOUBLE = 32,        /* TOKEN_PARSE_DOUBLE  */
  YYSYMBOL_TOKEN_PARSE_FLOAT = 33,         /* TOKEN_PARSE_FLOAT  */
  YYSYMBOL_TOKEN_VALUE_OF = 34,            /* TOKEN_VALUE_OF  */
  YYSYMBOL_TOKEN_JOIN = 35,                /* TOKEN_JOIN  */
  YYSYMBOL_TOKEN_LENGTH = 36,              /* TOKEN_LENGTH  */
  YYSYMBOL_TOKEN_ADD = 37,                 /* TOKEN_ADD  */
  YYSYMBOL_TOKEN_INDEXOF = 38,             /* TOKEN_INDEXOF  */
  YYSYMBOL_TOKEN_PLUS_PLUS = 39,           /* TOKEN_PLUS_PLUS  */
  YYSYMBOL_TOKEN_MINUS_MINUS = 40,         /* TOKEN_MINUS_MINUS  */
  YYSYMBOL_TOKEN_PLUS_ASSIGN = 41,         /* TOKEN_PLUS_ASSIGN  */
  YYSYMBOL_TOKEN_MINUS_ASSIGN = 42,        /* TOKEN_MINUS_ASSIGN  */
  YYSYMBOL_TOKEN_MUL_ASSIGN = 43,          /* TOKEN_MUL_ASSIGN  */
  YYSYMBOL_TOKEN_DIV_ASSIGN = 44,          /* TOKEN_DIV_ASSIGN  */
  YYSYMBOL_TOKEN_MOD_ASSIGN = 45,          /* TOKEN_MOD_ASSIGN  */
  YYSYMBOL_TOKEN_AND_ASSIGN = 46,          /* TOKEN_AND_ASSIGN  */
  YYSYMBOL_TOKEN_OR_ASSIGN = 47,           /* TOKEN_OR_ASSIGN  */
  YYSYMBOL_TOKEN_XOR_ASSIGN = 48,          /* TOKEN_XOR_ASSIGN  */
  YYSYMBOL_TOKEN_SHL_ASSIGN = 49,          /* TOKEN_SHL_ASSIGN  */
  YYSYMBOL_TOKEN_SHR_ASSIGN = 50,          /* TOKEN_SHR_ASSIGN  */
  YYSYMBOL_TOKEN_EQUAL = 51,               /* TOKEN_EQUAL  */
  YYSYMBOL_TOKEN_NOT_EQUAL = 52,           /* TOKEN_NOT_EQUAL  */
  YYSYMBOL_TOKEN_GREATER = 53,             /* TOKEN_GREATER  */
  YYSYMBOL_TOKEN_LESS = 54,                /* TOKEN_LESS  */
  YYSYMBOL_TOKEN_GREATER_EQUAL = 55,       /* TOKEN_GREATER_EQUAL  */
  YYSYMBOL_TOKEN_LESS_EQUAL = 56,          /* TOKEN_LESS_EQUAL  */
  YYSYMBOL_TOKEN_AND = 57,                 /* TOKEN_AND  */
  YYSYMBOL_TOKEN_OR = 58,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_NOT = 59,                 /* TOKEN_NOT  */
  YYSYMBOL_TOKEN_IF = 60,                  /* TOKEN_IF  */
  YYSYMBOL_TOKEN_ELSE = 61,                /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_SWITCH = 62,              /* TOKEN_SWITCH  */
  YYSYMBOL_TOKEN_CASE = 63,                /* TOKEN_CASE  */
  YYSYMBOL_TOKEN_DEFAULT = 64,             /* TOKEN_DEFAULT  */
  YYSYMBOL_TOKEN_BREAK = 65,               /* TOKEN_BREAK  */
  YYSYMBOL_TOKEN_WHILE = 66,               /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_FOR = 67,                 /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_CONTINUE = 68,            /* TOKEN_CONTINUE  */
  YYSYMBOL_TOKEN_NEW = 69,                 /* TOKEN_NEW  */
  YYSYMBOL_TOKEN_RETURN = 70,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_PUBLIC = 71,              /* TOKEN_PUBLIC  */
  YYSYMBOL_TOKEN_STATIC = 72,              /* TOKEN_STATIC  */
  YYSYMBOL_73_ = 73,                       /* '+'  */
  YYSYMBOL_74_ = 74,                       /* '-'  */
  YYSYMBOL_75_ = 75,                       /* '&'  */
  YYSYMBOL_76_ = 76,                       /* '^'  */
  YYSYMBOL_77_ = 77,                       /* '|'  */
  YYSYMBOL_78_ = 78,                       /* '*'  */
  YYSYMBOL_79_ = 79,                       /* '/'  */
  YYSYMBOL_80_ = 80,                       /* '%'  */
  YYSYMBOL_NEG = 81,                       /* NEG  */
  YYSYMBOL_CAST = 82,                      /* CAST  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_84_ = 84,                       /* '}'  */
  YYSYMBOL_85_ = 85,                       /* ';'  */
  YYSYMBOL_86_ = 86,                       /* '('  */
  YYSYMBOL_87_ = 87,                       /* ')'  */
  YYSYMBOL_88_ = 88,                       /* '{'  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_90_ = 90,                       /* '='  */
  YYSYMBOL_91_ = 91,                       /* ','  */
  YYSYMBOL_92_ = 92,                       /* '['  */
  YYSYMBOL_93_ = 93,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 94,                  /* $accept  */
  YYSYMBOL_s = 95,                         /* s  */
  YYSYMBOL_lSentencia = 96,                /* lSentencia  */
  YYSYMBOL_instruccion = 97,               /* instruccion  */
  YYSYMBOL_if_statement = 98,              /* if_statement  */
  YYSYMBOL_switch_statement = 99,          /* switch_statement  */
  YYSYMBOL_while_statement = 100,          /* while_statement  */
  YYSYMBOL_for_statement = 101,            /* for_statement  */
  YYSYMBOL_incremento = 102,               /* incremento  */
  YYSYMBOL_case_list = 103,                /* case_list  */
  YYSYMBOL_case_labels = 104,              /* case_labels  */
  YYSYMBOL_case_item = 105,                /* case_item  */
  YYSYMBOL_instrucciones_case = 106,       /* instrucciones_case  */
  YYSYMBOL_instruccion_case = 107,         /* instruccion_case  */
  YYSYMBOL_default_case = 108,             /* default_case  */
  YYSYMBOL_break_statement = 109,          /* break_statement  */
  YYSYMBOL_continue_statement = 110,       /* continue_statement  */
  YYSYMBOL_instruccion_simple = 111,       /* instruccion_simple  */
  YYSYMBOL_asignacion = 112,               /* asignacion  */
  YYSYMBOL_lista_Expr = 113,               /* lista_Expr  */
  YYSYMBOL_imprimir = 114,                 /* imprimir  */
  YYSYMBOL_bloque = 115,                   /* bloque  */
  YYSYMBOL_bloque_for = 116,               /* bloque_for  */
  YYSYMBOL_declaracion_var = 117,          /* declaracion_var  */
  YYSYMBOL_prefix_array_decl = 118,        /* prefix_array_decl  */
  YYSYMBOL_119_1 = 119,                    /* $@1  */
  YYSYMBOL_postfix_array_decl = 120,       /* postfix_array_decl  */
  YYSYMBOL_121_2 = 121,                    /* $@2  */
  YYSYMBOL_final_prefix_array_decl = 122,  /* final_prefix_array_decl  */
  YYSYMBOL_123_3 = 123,                    /* $@3  */
  YYSYMBOL_final_postfix_array_decl = 124, /* final_postfix_array_decl  */
  YYSYMBOL_125_4 = 125,                    /* $@4  */
  YYSYMBOL_var_decl = 126,                 /* var_decl  */
  YYSYMBOL_final_var_decl = 127,           /* final_var_decl  */
  YYSYMBOL_array_prefix_init_opt = 128,    /* array_prefix_init_opt  */
  YYSYMBOL_array_postfix_init_opt = 129,   /* array_postfix_init_opt  */
  YYSYMBOL_prefix_dims = 130,              /* prefix_dims  */
  YYSYMBOL_postfix_dims = 131,             /* postfix_dims  */
  YYSYMBOL_dims_expr_list = 132,           /* dims_expr_list  */
  YYSYMBOL_lista_bloques2D = 133,          /* lista_bloques2D  */
  YYSYMBOL_bloque2D = 134,                 /* bloque2D  */
  YYSYMBOL_filas_lista = 135,              /* filas_lista  */
  YYSYMBOL_fila_matriz = 136,              /* fila_matriz  */
  YYSYMBOL_asignacion_elemento = 137,      /* asignacion_elemento  */
  YYSYMBOL_indices_una = 138,              /* indices_una  */
  YYSYMBOL_indices_multi = 139,            /* indices_multi  */
  YYSYMBOL_expr = 140,                     /* expr  */
  YYSYMBOL_postfix = 141,                  /* postfix  */
  YYSYMBOL_unary = 142,                    /* unary  */
  YYSYMBOL_atom = 143,                     /* atom  */
  YYSYMBOL_join_variadic_args = 144,       /* join_variadic_args  */
  YYSYMBOL_primitivo = 145,                /* primitivo  */
  YYSYMBOL_tipoPrimitivo = 146,            /* tipoPrimitivo  */
  YYSYMBOL_funcion_declaracion = 147,      /* funcion_declaracion  */
  YYSYMBOL_main_declaracion = 148,         /* main_declaracion  */
  YYSYMBOL_main_params_opt = 149,          /* main_params_opt  */
  YYSYMBOL_main_params = 150,              /* main_params  */
  YYSYMBOL_main_param = 151,               /* main_param  */
  YYSYMBOL_main_param_array_brackets = 152, /* main_param_array_brackets  */
  YYSYMBOL_param_opt = 153,                /* param_opt  */
  YYSYMBOL_param_array_brackets = 154,     /* param_array_brackets  */
  YYSYMBOL_lista_parametros = 155,         /* lista_parametros  */
  YYSYMBOL_return_stmt = 156,              /* return_stmt  */
  YYSYMBOL_for_each_statement = 157,       /* for_each_statement  */
  YYSYMBOL_argumentos_opt = 158,           /* argumentos_opt  */
  YYSYMBOL_llamada_funcion = 159           /* llamada_funcion  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 44 "src/entriesTools/parser.y"

    TipoDato __tmp_decl_tipo; char* __tmp_decl_nombre; int __tmp_decl_final; int __tmp_decl_dims; 
#line 57 "src/entriesTools/parser.y"

// Helper para reportar errores semánticos tempranos (declaraciones) desde el parser.
// Crea un nodo lista vacío, asigna posición y usa report_runtime_error con ctx NULL (scope Global).
static AbstractExpresion* parser_error_node(YYLTYPE loc, const char* fmt, ...){
    static int last_line=-1, last_col=-1; static char last_msg[256];
    AbstractExpresion* n = nuevoListaExpresiones();
    SET_POS(n, loc);
    char msg[256];
    va_list ap; va_start(ap, fmt); vsnprintf(msg,sizeof(msg),fmt,ap); va_end(ap);
    // De-dup: si es el mismo mensaje en la misma ubicación, no volver a reportar
    if(!(last_line==loc.first_line && last_col==loc.first_column && strncmp(last_msg,msg,sizeof(last_msg))==0)){
        // Reusar API central (nodo y contexto NULL -> Global)
    report_syntax_error("%s", msg);
        last_line = loc.first_line; last_col = loc.first_column; strncpy(last_msg,msg,sizeof(last_msg)); last_msg[sizeof(last_msg)-1]='\0';
    }
    return n;
}

#line 328 "build/parser.tab.c"

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  110
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1919

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  422

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   329


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
       2,     2,     2,     2,     2,     2,     2,    80,    75,     2,
      86,    87,    78,    73,    91,    74,    83,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    85,
       2,    90,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    93,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,    77,    84,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    81,    82
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   130,   130,   134,   135,   141,   142,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   162,   163,   166,   167,   168,   169,   174,
     179,   186,   187,   190,   191,   199,   200,   201,   202,   203,
     204,   208,   209,   210,   221,   225,   232,   237,   243,   255,
     267,   272,   278,   279,   280,   281,   284,   285,   288,   291,
     294,   295,   296,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   311,   312,   319,   320,   321,   324,
     325,   327,   332,   333,   334,   335,   336,   337,   341,   341,
     348,   348,   355,   355,   362,   362,   369,   370,   373,   376,
     377,   384,   385,   386,   387,   388,   391,   393,   393,   394,
     394,   397,   398,   406,   407,   409,   411,   412,   414,   417,
     419,   426,   427,   428,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   468,   469,   470,   471,   472,
     473,   474,   480,   488,   492,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   508,   516,   517,   518,
     519,   520,   521,   522,   523,   526,   527,   528,   529,   530,
     531,   532,   535,   542,   543,   543,   544,   544,   545,   546,
     546,   548,   549,   552,   553,   555,   559,   564,   565,   570,
     600,   624,   625,   627
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_PRINT",
  "TOKEN_DINT", "TOKEN_DFLOAT", "TOKEN_DBYTE", "TOKEN_DSHORT",
  "TOKEN_DLONG", "TOKEN_DDOUBLE", "TOKEN_DSTRING",
  "TOKEN_UNSIGNED_INTEGER", "TOKEN_REAL", "TOKEN_REAL_FLOAT",
  "TOKEN_STRING", "TOKEN_IDENTIFIER", "TOKEN_TRUE", "TOKEN_FALSE",
  "TOKEN_DBOOLEAN", "TOKEN_DCHAR", "TOKEN_CHAR_LITERAL", "TOKEN_FINAL",
  "TOKEN_SYSTEM_OUT_PRINTLN", "TOKEN_DVOID", "TOKEN_NULL",
  "TOKEN_SHIFT_LEFT", "TOKEN_SHIFT_RIGHT", "TOKEN_INTEGER_CLASS",
  "TOKEN_DOUBLE_CLASS", "TOKEN_FLOAT_CLASS", "TOKEN_ARRAYS",
  "TOKEN_PARSE_INT", "TOKEN_PARSE_DOUBLE", "TOKEN_PARSE_FLOAT",
  "TOKEN_VALUE_OF", "TOKEN_JOIN", "TOKEN_LENGTH", "TOKEN_ADD",
  "TOKEN_INDEXOF", "TOKEN_PLUS_PLUS", "TOKEN_MINUS_MINUS",
  "TOKEN_PLUS_ASSIGN", "TOKEN_MINUS_ASSIGN", "TOKEN_MUL_ASSIGN",
  "TOKEN_DIV_ASSIGN", "TOKEN_MOD_ASSIGN", "TOKEN_AND_ASSIGN",
  "TOKEN_OR_ASSIGN", "TOKEN_XOR_ASSIGN", "TOKEN_SHL_ASSIGN",
  "TOKEN_SHR_ASSIGN", "TOKEN_EQUAL", "TOKEN_NOT_EQUAL", "TOKEN_GREATER",
  "TOKEN_LESS", "TOKEN_GREATER_EQUAL", "TOKEN_LESS_EQUAL", "TOKEN_AND",
  "TOKEN_OR", "TOKEN_NOT", "TOKEN_IF", "TOKEN_ELSE", "TOKEN_SWITCH",
  "TOKEN_CASE", "TOKEN_DEFAULT", "TOKEN_BREAK", "TOKEN_WHILE", "TOKEN_FOR",
  "TOKEN_CONTINUE", "TOKEN_NEW", "TOKEN_RETURN", "TOKEN_PUBLIC",
  "TOKEN_STATIC", "'+'", "'-'", "'&'", "'^'", "'|'", "'*'", "'/'", "'%'",
  "NEG", "CAST", "'.'", "'}'", "';'", "'('", "')'", "'{'", "':'", "'='",
  "','", "'['", "']'", "$accept", "s", "lSentencia", "instruccion",
  "if_statement", "switch_statement", "while_statement", "for_statement",
  "incremento", "case_list", "case_labels", "case_item",
  "instrucciones_case", "instruccion_case", "default_case",
  "break_statement", "continue_statement", "instruccion_simple",
  "asignacion", "lista_Expr", "imprimir", "bloque", "bloque_for",
  "declaracion_var", "prefix_array_decl", "$@1", "postfix_array_decl",
  "$@2", "final_prefix_array_decl", "$@3", "final_postfix_array_decl",
  "$@4", "var_decl", "final_var_decl", "array_prefix_init_opt",
  "array_postfix_init_opt", "prefix_dims", "postfix_dims",
  "dims_expr_list", "lista_bloques2D", "bloque2D", "filas_lista",
  "fila_matriz", "asignacion_elemento", "indices_una", "indices_multi",
  "expr", "postfix", "unary", "atom", "join_variadic_args", "primitivo",
  "tipoPrimitivo", "funcion_declaracion", "main_declaracion",
  "main_params_opt", "main_params", "main_param",
  "main_param_array_brackets", "param_opt", "param_array_brackets",
  "lista_parametros", "return_stmt", "for_each_statement",
  "argumentos_opt", "llamada_funcion", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-319)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-81)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     630,    75,   -71,  -319,  -319,  -319,   -43,  -319,  -319,  -319,
    -319,  1805,  -319,  -319,  -319,  -319,  -319,   347,   -27,  -319,
    -319,   -19,   -13,     3,    20,    22,    50,    -2,    80,    94,
      38,   932,   130,   738,   710,   183,   378,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,   112,   121,  -319,   127,  -319,  -319,
    -319,  -319,  -319,  -319,   133,    37,  -319,  -319,  -319,   -11,
    -319,  -319,   143,  -319,  -319,  -319,  -319,   932,   155,  -319,
    -319,   932,   932,   932,   932,   932,   932,   932,   932,   932,
     932,   932,   932,   932,    41,    79,  -319,    -3,   854,   184,
     198,   203,   202,   932,   932,  -319,   932,   432,  -319,   -43,
      -1,   932,   932,  1714,   -72,   218,  1237,   156,   125,   458,
    -319,   139,  -319,  -319,  -319,  -319,  -319,    29,  -319,   932,
      87,   151,     6,  -319,    91,  1714,   160,   161,  1714,  1714,
    1714,  1714,  1714,  1714,  1714,  1714,  1714,  1714,   157,   163,
    1714,   946,   932,  -319,   932,  -319,   106,     7,  -319,   108,
     166,   168,   169,   174,  1274,  1311,  1348,   889,   176,   178,
       8,  -319,  -319,   932,   932,   932,   932,   932,   932,   932,
     932,   932,   932,   932,   932,   932,   932,   932,   932,   932,
     932,   250,  -319,   569,    32,  -319,  -319,   180,  -319,   181,
     956,   347,   932,   175,   177,  -319,  -319,   179,  -319,   932,
     932,   932,  -319,  -319,  1714,  1714,   932,   177,  -319,  -319,
     932,   932,   932,   932,   407,   185,   407,   932,   932,   111,
     186,   -49,   -49,  1787,  1787,   591,   591,   591,   591,  1755,
    1722,    36,    36,   232,   232,   232,  -319,  -319,  -319,   191,
     -72,   891,   932,  -319,  -319,   196,   187,  1714,  -319,   194,
     200,   200,  -319,  1714,  1385,  1077,  1714,   200,   200,  1422,
    1459,  1496,  1118,   199,  -319,  -319,   227,  -319,     9,   229,
    -319,  -319,  1644,  1679,   278,   280,   347,  -319,  1533,  1570,
      10,   210,   347,  -319,   775,  -319,  -319,  -319,  -319,   932,
    -319,  -319,  -319,  -319,  -319,   932,   238,   -47,   115,   932,
      43,    69,  -319,   286,    -5,   215,   214,  -319,   220,   223,
    -319,  -319,  -319,  -319,   212,  -319,  -319,   347,   803,  1714,
    1036,   222,  1607,   -47,  -319,  -319,  1159,   226,  -319,  -319,
     234,   932,   216,  -319,   231,   235,  -319,   236,  1829,   240,
    -319,   487,   241,   210,   307,    12,   210,   347,  -319,    13,
     237,  -319,   826,   -28,   -24,  -319,    34,  -319,  -319,   932,
    -319,  -319,  -319,  -319,  -319,   407,  -319,  1198,   247,  -319,
    -319,  -319,  -319,  -319,  -319,   407,   630,  -319,  -319,   487,
    -319,   246,  -319,   242,  -319,  -319,  -319,   932,   245,   932,
      72,    74,  -319,  -319,   253,  -319,   260,   157,   321,  -319,
    -319,  -319,  -319,   544,  -319,  -319,   210,  -319,   990,   932,
    -319,  -319,   260,  -319,  -319,   249,  -319,  -319,  -319,  1002,
    -319,  -319
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   175,   176,   177,   178,   167,   170,   169,
     168,   157,   172,   173,   179,   180,   171,     0,     0,   181,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,     0,     0,     0,     0,     0,     4,     7,     8,
      10,    11,     9,    22,     0,     0,    14,     0,    82,    83,
      84,    85,    86,    87,     0,     0,   145,   153,   155,     0,
      16,    17,     0,    12,   158,     6,    23,     0,     0,   151,
     152,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,    59,     0,
     157,     0,     0,   198,   144,     0,     0,     0,     0,     0,
       1,     0,     3,    19,    13,    15,    20,     0,    21,     0,
      97,     0,     0,    18,     0,    75,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,   202,     0,
      63,     0,     0,   122,     0,   123,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   142,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   156,     0,     6,    79,     5,     0,   147,     0,
       0,   191,     0,     0,    90,   107,    88,     0,    76,     0,
       0,     0,   203,   121,   119,   120,     0,    94,    92,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   124,   125,   129,   131,   130,   126,   127,   128,     0,
     154,     0,     0,   146,   193,     0,   192,    96,   109,     0,
      99,    99,   108,    74,     0,     0,    98,    99,    99,     0,
       0,     0,     0,     0,    62,    60,    25,    61,     0,     0,
      34,    33,     0,     0,     0,   107,   184,   150,     0,     0,
       0,     0,     0,   110,     0,   106,    91,    89,   163,     0,
      95,    93,   160,   161,   162,     0,    28,     0,    97,     0,
       0,     0,    44,     0,     0,     0,     0,   189,     0,   185,
     186,   149,   148,   195,     0,   182,   193,     0,     0,   105,
       0,     0,     0,     0,    27,    26,     0,     0,    31,    45,
       0,     0,    48,    50,     0,     0,    53,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,   194,     0,
       0,   104,     0,     0,     0,   113,     0,   116,   164,     0,
     165,   159,    30,    29,    46,     0,    32,     0,     0,    51,
      55,    52,    54,    42,    43,     0,     0,    38,    37,     0,
     199,     0,   188,     0,   183,   187,   196,     0,   100,     0,
       0,     0,   101,   103,     0,   102,     0,   166,    56,    47,
      49,    40,    39,     0,    36,    35,     0,   190,     0,     0,
     118,   115,     0,   114,   117,     0,    81,   200,   111,     0,
      57,   112
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -319,  -319,   -31,   -34,  -281,  -319,  -319,  -319,    45,  -319,
    -319,    53,   -15,  -318,  -319,  -319,  -319,  -207,   -90,   -62,
    -171,   -52,   -41,   -79,  -319,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -130,    98,   271,   213,  -319,  -319,
     -33,    42,   -32,  -319,   148,  -319,   -25,     1,  -319,  -319,
    -319,  -319,     0,  -319,  -319,  -319,  -319,    16,  -319,  -319,
      51,  -319,  -319,  -319,  -319,  -319
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    35,    36,    37,    38,    39,    40,    41,   339,   300,
     301,   302,   332,   333,   330,    42,    43,   263,    44,   390,
      45,    46,   378,    47,    48,   251,    49,   250,    50,   258,
      51,   257,    52,    53,   285,   286,   122,   194,   388,   354,
     355,   391,   357,    54,    84,    85,   125,   104,    56,    57,
     321,    58,   268,    60,    61,   308,   309,   310,   345,   245,
     280,   246,    62,    63,   139,    64
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,    55,   112,   109,   120,   124,   103,   158,   106,   270,
     338,   117,   146,    25,   369,    67,   324,    87,   159,   138,
     119,   196,   208,   219,   298,   313,   149,   382,   386,   178,
     179,   180,   -80,   107,    59,    55,    59,    55,    69,    70,
      68,    34,   362,   265,   187,   265,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   392,   140,   141,    88,
     393,   163,   164,   199,    89,   188,   189,   394,   154,   155,
      90,   156,     2,     3,     4,   112,   161,   162,     5,    86,
     369,   121,   341,    95,   157,    81,    91,    14,    15,   121,
      17,    18,    19,   -80,   190,   -80,   -80,   160,   197,   197,
     220,   121,   314,    92,   383,   314,   299,   327,    93,    59,
      55,   175,   176,   177,   178,   179,   180,   204,   395,   205,
     117,   287,   118,    98,   264,   396,   264,   328,   291,   119,
     335,   142,   331,    83,   377,   267,    94,   267,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   410,    34,   411,    65,
      66,   335,   266,   199,   271,   396,    96,   247,   401,   144,
     265,    83,   404,   191,   253,   254,   255,   192,   198,   193,
      97,   256,   199,   110,   240,   259,   260,   261,   262,   126,
     127,   244,   272,   273,   335,   209,   206,   113,   193,   199,
     274,   192,   105,   193,   265,   192,   114,   193,   265,   184,
      66,   334,   115,   340,   340,   150,   278,   279,   116,     2,
       3,     4,   337,   186,    66,     5,    86,   335,   123,   315,
     151,   157,   143,   145,    14,    15,   152,    17,    18,    19,
     153,   181,   334,   183,   195,   325,   200,   201,   199,   336,
     202,   264,   210,   337,   211,   212,   353,   163,   164,   319,
     213,   217,   267,   218,   320,   239,   241,   242,   248,   249,
     322,   363,   252,   269,   326,   334,   307,   276,   282,   275,
     336,   368,   316,   281,   296,   264,   337,   283,   297,   264,
     284,   380,   299,   305,   384,   306,   267,   397,    34,   323,
     267,   338,   343,   344,    34,   348,   367,   346,   334,   360,
     178,   179,   180,   336,   347,   365,   370,   350,   366,   337,
     371,   372,   381,   402,     2,     3,     4,   375,   379,   387,
       5,    86,   400,   406,   420,   407,   157,   409,   405,    14,
      15,   412,    17,    18,    19,   403,   336,   307,   389,   342,
     398,     3,     4,   329,   417,   290,     5,    86,   147,   207,
     356,   413,   408,   385,   414,    14,    15,   349,     0,   112,
      19,     0,     0,     0,     0,     0,    59,    55,    -2,   111,
       0,     2,     3,     4,   419,     0,   415,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    59,    55,    21,    22,    23,    24,    34,
       2,     3,     4,     0,     0,     0,     5,    86,     0,     0,
       0,     0,   157,     0,     0,    14,    15,     0,    17,    18,
      19,     0,     0,     0,     0,     0,     3,     4,    25,     0,
      26,     5,    86,    27,    28,    29,    30,   157,    31,    32,
      14,    15,     0,    17,     0,    19,     0,     0,     0,   111,
       0,     2,     3,     4,    33,     0,    34,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,    21,    22,    23,    24,     0,
       2,     3,     4,     0,     0,    34,     5,    86,     0,     0,
       0,     0,   157,     0,     0,    14,    15,     0,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,    25,     0,
      26,     0,     0,    27,    28,    29,    30,     0,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,     0,    33,   111,    34,     2,     3,     4,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,    21,    22,    23,    24,   376,     0,     0,     0,    99,
       7,     8,     9,    10,   100,    12,    13,     0,     0,    16,
       0,     0,     0,    20,     0,     0,    21,    22,    23,    24,
       0,     0,     0,     0,    25,     0,    26,     0,     0,    27,
      28,    29,    30,     0,    31,    32,   163,   164,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   416,     0,
      33,     1,    34,     2,     3,     4,     0,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    33,     0,    21,    22,    23,
      24,     0,     0,     0,   173,   174,   175,   176,   177,   178,
     179,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    26,     0,     0,    27,    28,    29,    30,     0,
      31,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,     2,     3,     4,    33,     0,    34,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,    21,    22,    23,
      24,     0,     3,     4,     0,     0,     0,     5,     6,     7,
       8,     9,    10,   100,    12,    13,    14,    15,    16,     0,
       0,    19,    20,     0,     0,    21,    22,    23,    24,     0,
      25,     0,    26,     0,     0,    27,    28,    29,    30,     0,
      31,    32,     0,     0,     0,    99,     7,     8,     9,    10,
     100,    12,    13,     0,     0,    16,    33,   101,    34,    20,
       0,     0,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,   102,    99,     7,     8,     9,    10,   100,    12,
      13,     0,     0,    16,    33,     0,     0,    20,     0,     0,
      21,    22,    23,    24,   101,     0,    99,     7,     8,     9,
      10,   100,    12,    13,   317,     0,    16,     0,     0,   102,
      20,     0,     0,    21,    22,    23,    24,     0,     0,     0,
       0,    33,   101,   318,    99,     7,     8,     9,    10,   100,
      12,    13,     0,     0,    16,     0,     0,   102,    20,     0,
       0,    21,    22,    23,    24,   101,     0,   351,     0,    33,
       0,   352,     0,     0,     0,     0,     0,     0,     0,     0,
     102,    99,     7,     8,     9,    10,   100,    12,    13,     0,
       0,    16,    33,   101,   389,    20,     0,     0,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,   102,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      33,   148,    99,     7,     8,     9,    10,   100,    12,    13,
     101,     0,    16,     0,     0,     0,    20,     0,     0,    21,
      22,    23,    24,     0,     0,   102,     0,     0,     0,     0,
       0,   163,   164,     0,     0,     0,     0,    33,   277,    82,
       0,   163,   164,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,     0,     0,     0,   165,   166,   167,
     168,   169,   170,   171,   172,     0,   102,   165,   166,   167,
     168,   169,   170,   171,   172,   163,   164,     0,    33,   173,
     174,   175,   176,   177,   178,   179,   180,   163,   164,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,   203,
       0,   165,   166,   167,   168,   169,   170,   171,   172,   243,
       0,     0,     0,   165,   166,   167,   168,   169,   170,   171,
     172,   163,   164,   173,   174,   175,   176,   177,   178,   179,
     180,     0,     0,     0,     0,   173,   174,   175,   176,   177,
     178,   179,   180,   418,     0,     0,     0,   165,   166,   167,
     168,   169,   170,   171,   172,   421,     0,     0,     0,     0,
       0,     0,   163,   164,     0,     0,     0,     0,     0,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,     0,
       0,     0,     0,   358,     0,     0,     0,   359,   165,   166,
     167,   168,   169,   170,   171,   172,     0,     0,     0,     0,
       0,     0,     0,   163,   164,     0,     0,     0,     0,     0,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   289,   165,
     166,   167,   168,   169,   170,   171,   172,     0,     0,     0,
       0,     0,     0,     0,   163,   164,     0,     0,     0,     0,
       0,   173,   174,   175,   176,   177,   178,   179,   180,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
     165,   166,   167,   168,   169,   170,   171,   172,     0,     0,
       0,     0,     0,   163,   164,     0,     0,     0,     0,     0,
       0,     0,   173,   174,   175,   176,   177,   178,   179,   180,
       0,     0,     0,     0,     0,     0,     0,     0,   364,   165,
     166,   167,   168,   169,   170,   171,   172,     0,     0,     0,
       0,     0,   163,   164,     0,     0,     0,     0,     0,     0,
       0,   173,   174,   175,   176,   177,   178,   179,   180,     0,
       0,     0,     0,     0,     0,     0,     0,   399,   165,   166,
     167,   168,   169,   170,   171,   172,     0,     0,     0,   163,
     164,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
       0,     0,     0,     0,   182,   165,   166,   167,   168,   169,
     170,   171,   172,     0,     0,     0,   163,   164,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,   174,   175,
     176,   177,   178,   179,   180,     0,     0,     0,     0,     0,
       0,   214,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,     0,   163,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,   174,   175,   176,   177,   178,
     179,   180,     0,     0,     0,     0,     0,     0,   215,   165,
     166,   167,   168,   169,   170,   171,   172,     0,     0,     0,
     163,   164,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   173,   174,   175,   176,   177,   178,   179,   180,     0,
       0,     0,     0,     0,     0,   216,   165,   166,   167,   168,
     169,   170,   171,   172,     0,     0,     0,   163,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   174,
     175,   176,   177,   178,   179,   180,     0,     0,     0,     0,
       0,     0,   288,   165,   166,   167,   168,   169,   170,   171,
     172,     0,     0,     0,   163,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   173,   174,   175,   176,   177,
     178,   179,   180,     0,     0,     0,     0,     0,     0,   292,
     165,   166,   167,   168,   169,   170,   171,   172,     0,     0,
       0,   163,   164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,   174,   175,   176,   177,   178,   179,   180,
       0,     0,     0,     0,     0,     0,   293,   165,   166,   167,
     168,   169,   170,   171,   172,     0,     0,     0,   163,   164,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,     0,
       0,     0,     0,   294,   165,   166,   167,   168,   169,   170,
     171,   172,     0,     0,     0,   163,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   173,   174,   175,   176,
     177,   178,   179,   180,     0,     0,     0,     0,     0,     0,
     311,   165,   166,   167,   168,   169,   170,   171,   172,     0,
       0,     0,   163,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   173,   174,   175,   176,   177,   178,   179,
     180,     0,     0,     0,     0,     0,     0,   312,   165,   166,
     167,   168,   169,   170,   171,   172,     0,     0,     0,   163,
     164,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
       0,     0,     0,     0,   361,   165,   166,   167,   168,   169,
     170,   171,   172,     0,   163,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,   174,   175,
     176,   177,   178,   179,   180,     0,     0,     0,     0,   303,
     165,   166,   167,   168,   169,   170,   171,   172,     0,   163,
     164,     0,     0,     0,     0,     0,     0,   163,   164,     0,
       0,     0,   173,   174,   175,   176,   177,   178,   179,   180,
       0,     0,     0,     0,   304,   165,   166,   167,   168,   169,
     170,   171,   172,   165,   166,   167,   168,   169,   170,   171,
     163,   164,     0,     0,     0,     0,     0,   173,   174,   175,
     176,   177,   178,   179,   180,   173,   174,   175,   176,   177,
     178,   179,   180,     0,     0,     0,   165,   166,   167,   168,
     169,   170,   163,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   174,
     175,   176,   177,   178,   179,   180,     0,     0,     0,     0,
     167,   168,   169,   170,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,     0,     0,     0,
     173,   174,   175,   176,   177,   178,   179,   180,   373,   374,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,    82,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82
};

static const yytype_int16 yycheck[] =
{
       0,     0,    36,    34,    15,    67,    31,    97,    33,   216,
      15,    83,    15,    60,   332,    86,   297,    17,    97,    81,
      92,    15,    15,    15,    15,    15,    88,    15,    15,    78,
      79,    80,     0,    33,    34,    34,    36,    36,    39,    40,
      83,    88,   323,   214,    15,   216,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    84,    82,    83,    86,
      84,    25,    26,    91,    83,    36,    37,    91,    93,    94,
      83,    96,     3,     4,     5,   109,   101,   102,     9,    10,
     398,    92,    87,    85,    15,    86,    83,    18,    19,    92,
      21,    22,    23,    61,   119,    63,    64,    97,    92,    92,
      92,    92,    92,    83,    92,    92,    63,    64,    86,   109,
     109,    75,    76,    77,    78,    79,    80,   142,    84,   144,
      83,   251,    85,    85,   214,    91,   216,    84,   258,    92,
     301,    90,    63,    92,   341,   214,    86,   216,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,    84,    88,    84,    84,
      85,   332,   214,    91,   216,    91,    86,   192,   375,    90,
     341,    92,   379,    86,   199,   200,   201,    90,    87,    92,
      86,   206,    91,     0,   183,   210,   211,   212,   213,    34,
      35,   191,   217,   218,   365,    87,    90,    85,    92,    91,
      89,    90,    72,    92,   375,    90,    85,    92,   379,    84,
      85,   301,    85,   303,   304,    31,   241,   242,    85,     3,
       4,     5,   301,    84,    85,     9,    10,   398,    85,   281,
      32,    15,    84,    85,    18,    19,    33,    21,    22,    23,
      38,    23,   332,    87,    93,   297,    86,    86,    91,   301,
      87,   341,    86,   332,    86,    86,   318,    25,    26,   284,
      86,    85,   341,    85,   289,    15,    86,    86,    93,    92,
     295,   323,    93,    88,   299,   365,   276,    86,    91,    93,
     332,    65,   282,    87,    85,   375,   365,    93,    61,   379,
      90,   343,    63,    15,   346,    15,   375,   359,    88,    61,
     379,    15,    87,    89,    88,    93,   331,    87,   398,    87,
      78,    79,    80,   365,    91,    89,    85,   317,    84,   398,
      85,    85,    15,   375,     3,     4,     5,    87,    87,    92,
       9,    10,    85,    87,    85,    93,    15,    92,   379,    18,
      19,    88,    21,    22,    23,   376,   398,   347,    88,   304,
     365,     4,     5,   300,   406,   257,     9,    10,    87,   146,
     318,   394,   387,   347,   396,    18,    19,   316,    -1,   403,
      23,    -1,    -1,    -1,    -1,    -1,   376,   376,     0,     1,
      -1,     3,     4,     5,   409,    -1,    65,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   403,   403,    27,    28,    29,    30,    88,
       3,     4,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,     4,     5,    60,    -1,
      62,     9,    10,    65,    66,    67,    68,    15,    70,    71,
      18,    19,    -1,    21,    -1,    23,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    86,    -1,    88,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    -1,
       3,     4,     5,    -1,    -1,    88,     9,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,     1,    88,     3,     4,     5,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    88,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    20,
      -1,    -1,    -1,    24,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    -1,    70,    71,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      86,     1,    88,     3,     4,     5,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    86,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    62,    -1,    -1,    65,    66,    67,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    86,    -1,    88,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    28,    29,
      30,    -1,     4,     5,    -1,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    29,    30,    -1,
      60,    -1,    62,    -1,    -1,    65,    66,    67,    68,    -1,
      70,    71,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    20,    86,    59,    88,    24,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,    86,    -1,    -1,    24,    -1,    -1,
      27,    28,    29,    30,    59,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    69,    -1,    20,    -1,    -1,    74,
      24,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    86,    59,    88,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    20,    -1,    -1,    74,    24,    -1,
      -1,    27,    28,    29,    30,    59,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    20,    86,    59,    88,    24,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      86,    87,    10,    11,    12,    13,    14,    15,    16,    17,
      59,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    86,    87,    90,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    74,    51,    52,    53,
      54,    55,    56,    57,    58,    25,    26,    -1,    86,    73,
      74,    75,    76,    77,    78,    79,    80,    25,    26,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    93,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    93,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    25,    26,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    93,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    85,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    85,    51,    52,    53,    54,    55,
      56,    57,    58,    51,    52,    53,    54,    55,    56,    57,
      25,    26,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    27,    28,    29,    30,    60,    62,    65,    66,    67,
      68,    70,    71,    86,    88,    95,    96,    97,    98,    99,
     100,   101,   109,   110,   112,   114,   115,   117,   118,   120,
     122,   124,   126,   127,   137,   141,   142,   143,   145,   146,
     147,   148,   156,   157,   159,    84,    85,    86,    83,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    86,    90,    92,   138,   139,    10,   146,    86,    83,
      83,    83,    83,    86,    86,    85,    86,    86,    85,    10,
      15,    59,    74,   140,   141,    72,   140,   146,     1,    96,
       0,     1,    97,    85,    85,    85,    85,    83,    85,    92,
      15,    92,   130,    85,   113,   140,    34,    35,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   113,   158,
     140,   140,    90,   138,    90,   138,    15,   130,    87,   113,
      31,    32,    33,    38,   140,   140,   140,    15,   112,   117,
     146,   140,   140,    25,    26,    51,    52,    53,    54,    55,
      56,    57,    58,    73,    74,    75,    76,    77,    78,    79,
      80,    23,    87,    87,    84,    84,    84,    15,    36,    37,
     140,    86,    90,    92,   131,    93,    15,    92,    87,    91,
      86,    86,    87,    93,   140,   140,    90,   131,    15,    87,
      86,    86,    86,    86,    87,    87,    87,    85,    85,    15,
      92,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,    15,
     141,    86,    86,    93,   146,   153,   155,   140,    93,    92,
     121,   119,    93,   140,   140,   140,   140,   125,   123,   140,
     140,   140,   140,   111,   112,   114,   115,   117,   146,    88,
     111,   115,   140,   140,    89,    93,    86,    87,   140,   140,
     154,    87,    91,    93,    90,   128,   129,   128,    87,    91,
     129,   128,    87,    87,    87,    91,    85,    61,    15,    63,
     103,   104,   105,    85,    85,    15,    15,   146,   149,   150,
     151,    87,    87,    15,    92,   115,   146,    69,    88,   140,
     140,   144,   140,    61,    98,   115,   140,    64,    84,   105,
     108,    63,   106,   107,   112,   114,   115,   117,    15,   102,
     112,    87,   102,    87,    89,   152,    87,    91,    93,   154,
     146,    84,    88,   113,   133,   134,   135,   136,    87,    91,
      87,    87,    98,   115,    89,    89,    84,   140,    65,   107,
      85,    85,    85,    39,    40,    87,    88,   111,   116,    87,
     115,    15,    15,    92,   115,   151,    15,    92,   132,    88,
     113,   135,    84,    84,    91,    84,    91,   113,   106,    89,
      85,   111,   115,    96,   111,   116,    87,    93,   140,    92,
      84,    84,    88,   134,   136,    65,    84,   115,    93,   140,
      85,    93
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    96,    96,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    98,    98,    98,    98,    98,
      98,    99,    99,   100,   100,   101,   101,   101,   101,   101,
     101,   102,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   108,   108,   109,   110,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   114,   115,
     115,   116,   117,   117,   117,   117,   117,   117,   119,   118,
     121,   120,   123,   122,   125,   124,   126,   126,   127,   128,
     128,   128,   128,   128,   128,   128,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   135,   135,   136,   137,
     137,   138,   139,   139,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   142,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   144,   145,   145,   145,
     145,   145,   145,   145,   145,   146,   146,   146,   146,   146,
     146,   146,   147,   148,   149,   149,   150,   150,   151,   152,
     152,   153,   153,   154,   154,   155,   155,   156,   156,   157,
     157,   158,   158,   159
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     2,     2,
       2,     2,     1,     2,     2,     5,     7,     7,     6,     8,
       8,     7,     8,     5,     5,     9,     9,     8,     8,     9,
       9,     1,     2,     2,     1,     2,     3,     4,     2,     4,
       1,     2,     2,     1,     2,     2,     3,     5,     2,     2,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     4,     4,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     0,     5,
       0,     5,     0,     6,     0,     6,     4,     2,     5,     0,
       4,     4,     4,     4,     3,     2,     1,     2,     3,     2,
       3,     3,     4,     1,     3,     3,     1,     3,     3,     4,
       4,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     4,     3,     6,     6,
       5,     2,     2,     1,     4,     1,     3,     1,     1,     8,
       6,     6,     6,     6,     8,     8,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     8,     0,     1,     1,     3,     3,     0,
       3,     0,     1,     0,     3,     3,     5,     1,     2,     8,
      10,     0,     1,     4
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* s: lSentencia  */
#line 130 "src/entriesTools/parser.y"
               { ast_root = (yyvsp[0].nodo); (yyval.nodo) = (yyvsp[0].nodo); }
#line 2009 "build/parser.tab.c"
    break;

  case 3: /* lSentencia: lSentencia instruccion  */
#line 134 "src/entriesTools/parser.y"
                                   { agregarHijo((yyvsp[-1].nodo), (yyvsp[0].nodo)); (yyval.nodo) = (yyvsp[-1].nodo);}
#line 2015 "build/parser.tab.c"
    break;

  case 4: /* lSentencia: instruccion  */
#line 135 "src/entriesTools/parser.y"
                  {
                        AbstractExpresion* b = nuevoInstruccionesExpresion();
                        agregarHijo(b, (yyvsp[0].nodo));
                        (yyval.nodo) =  b;
                    }
#line 2025 "build/parser.tab.c"
    break;

  case 5: /* lSentencia: lSentencia error '}'  */
#line 141 "src/entriesTools/parser.y"
                           { yyerrok; (yyval.nodo) = (yyvsp[-2].nodo); }
#line 2031 "build/parser.tab.c"
    break;

  case 6: /* lSentencia: error '}'  */
#line 142 "src/entriesTools/parser.y"
                { yyerrok; (yyval.nodo) = nuevoInstruccionesExpresion(); }
#line 2037 "build/parser.tab.c"
    break;

  case 7: /* instruccion: if_statement  */
#line 145 "src/entriesTools/parser.y"
                          {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2043 "build/parser.tab.c"
    break;

  case 8: /* instruccion: switch_statement  */
#line 146 "src/entriesTools/parser.y"
                       {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2049 "build/parser.tab.c"
    break;

  case 9: /* instruccion: break_statement  */
#line 147 "src/entriesTools/parser.y"
                      {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2055 "build/parser.tab.c"
    break;

  case 10: /* instruccion: while_statement  */
#line 148 "src/entriesTools/parser.y"
                      {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2061 "build/parser.tab.c"
    break;

  case 11: /* instruccion: for_statement  */
#line 149 "src/entriesTools/parser.y"
                    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2067 "build/parser.tab.c"
    break;

  case 12: /* instruccion: for_each_statement  */
#line 150 "src/entriesTools/parser.y"
                         {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2073 "build/parser.tab.c"
    break;

  case 13: /* instruccion: imprimir ';'  */
#line 151 "src/entriesTools/parser.y"
                   {(yyval.nodo) = (yyvsp[-1].nodo); }
#line 2079 "build/parser.tab.c"
    break;

  case 14: /* instruccion: bloque  */
#line 152 "src/entriesTools/parser.y"
             {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2085 "build/parser.tab.c"
    break;

  case 15: /* instruccion: declaracion_var ';'  */
#line 153 "src/entriesTools/parser.y"
                          {(yyval.nodo) = (yyvsp[-1].nodo);}
#line 2091 "build/parser.tab.c"
    break;

  case 16: /* instruccion: funcion_declaracion  */
#line 154 "src/entriesTools/parser.y"
                          {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2097 "build/parser.tab.c"
    break;

  case 17: /* instruccion: main_declaracion  */
#line 155 "src/entriesTools/parser.y"
                       {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2103 "build/parser.tab.c"
    break;

  case 18: /* instruccion: return_stmt ';'  */
#line 156 "src/entriesTools/parser.y"
                      {(yyval.nodo) = (yyvsp[-1].nodo);}
#line 2109 "build/parser.tab.c"
    break;

  case 19: /* instruccion: asignacion ';'  */
#line 157 "src/entriesTools/parser.y"
                     {(yyval.nodo) = (yyvsp[-1].nodo);}
#line 2115 "build/parser.tab.c"
    break;

  case 20: /* instruccion: asignacion_elemento ';'  */
#line 158 "src/entriesTools/parser.y"
                              {(yyval.nodo) = (yyvsp[-1].nodo);}
#line 2121 "build/parser.tab.c"
    break;

  case 21: /* instruccion: postfix ';'  */
#line 159 "src/entriesTools/parser.y"
                  { (yyval.nodo) = (yyvsp[-1].nodo); }
#line 2127 "build/parser.tab.c"
    break;

  case 22: /* instruccion: continue_statement  */
#line 160 "src/entriesTools/parser.y"
                         {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2133 "build/parser.tab.c"
    break;

  case 23: /* instruccion: error ';'  */
#line 162 "src/entriesTools/parser.y"
                { (yyval.nodo) = parser_error_node((yylsp[-1]), "Se esperaba ';'"); yyerrok; }
#line 2139 "build/parser.tab.c"
    break;

  case 24: /* instruccion: error '}'  */
#line 163 "src/entriesTools/parser.y"
                { (yyval.nodo) = parser_error_node((yylsp[-1]), "Se esperaba '}'"); yyerrok; }
#line 2145 "build/parser.tab.c"
    break;

  case 25: /* if_statement: TOKEN_IF '(' expr ')' bloque  */
#line 166 "src/entriesTools/parser.y"
                                           { (yyval.nodo) = nuevoIfExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo), NULL); }
#line 2151 "build/parser.tab.c"
    break;

  case 26: /* if_statement: TOKEN_IF '(' expr ')' bloque TOKEN_ELSE bloque  */
#line 167 "src/entriesTools/parser.y"
                                                     { (yyval.nodo) = nuevoIfExpresion((yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2157 "build/parser.tab.c"
    break;

  case 27: /* if_statement: TOKEN_IF '(' expr ')' bloque TOKEN_ELSE if_statement  */
#line 168 "src/entriesTools/parser.y"
                                                           { (yyval.nodo) = nuevoIfExpresion((yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2163 "build/parser.tab.c"
    break;

  case 28: /* if_statement: TOKEN_IF '(' expr ')' instruccion_simple ';'  */
#line 169 "src/entriesTools/parser.y"
                                                   { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, (yyvsp[-1].nodo));
        (yyval.nodo) = nuevoIfExpresion((yyvsp[-3].nodo), nuevoBloqueExpresion(b), NULL); 
    }
#line 2173 "build/parser.tab.c"
    break;

  case 29: /* if_statement: TOKEN_IF '(' expr ')' instruccion_simple ';' TOKEN_ELSE bloque  */
#line 174 "src/entriesTools/parser.y"
                                                                     { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, (yyvsp[-3].nodo));
        (yyval.nodo) = nuevoIfExpresion((yyvsp[-5].nodo), nuevoBloqueExpresion(b), (yyvsp[0].nodo)); 
    }
#line 2183 "build/parser.tab.c"
    break;

  case 30: /* if_statement: TOKEN_IF '(' expr ')' instruccion_simple ';' TOKEN_ELSE if_statement  */
#line 179 "src/entriesTools/parser.y"
                                                                           { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, (yyvsp[-3].nodo));
        (yyval.nodo) = nuevoIfExpresion((yyvsp[-5].nodo), nuevoBloqueExpresion(b), (yyvsp[0].nodo)); 
    }
#line 2193 "build/parser.tab.c"
    break;

  case 31: /* switch_statement: TOKEN_SWITCH '(' expr ')' '{' case_list '}'  */
#line 186 "src/entriesTools/parser.y"
                                                              { (yyval.nodo) = nuevoSwitchExpresion((yyvsp[-4].nodo), (yyvsp[-1].nodo), NULL); }
#line 2199 "build/parser.tab.c"
    break;

  case 32: /* switch_statement: TOKEN_SWITCH '(' expr ')' '{' case_list default_case '}'  */
#line 187 "src/entriesTools/parser.y"
                                                               { (yyval.nodo) = nuevoSwitchExpresion((yyvsp[-5].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo)); }
#line 2205 "build/parser.tab.c"
    break;

  case 33: /* while_statement: TOKEN_WHILE '(' expr ')' bloque  */
#line 190 "src/entriesTools/parser.y"
                                                 { (yyval.nodo) = nuevoWhileExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2211 "build/parser.tab.c"
    break;

  case 34: /* while_statement: TOKEN_WHILE '(' expr ')' instruccion_simple  */
#line 191 "src/entriesTools/parser.y"
                                                  { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, (yyvsp[0].nodo));
        (yyval.nodo) = nuevoWhileExpresion((yyvsp[-2].nodo), nuevoBloqueExpresion(b)); 
    }
#line 2221 "build/parser.tab.c"
    break;

  case 35: /* for_statement: TOKEN_FOR '(' declaracion_var ';' expr ';' incremento ')' bloque_for  */
#line 199 "src/entriesTools/parser.y"
                                                                         { (yyval.nodo)=nuevoForExpresion((yyvsp[-6].nodo),(yyvsp[-4].nodo),(yyvsp[-2].nodo),(yyvsp[0].nodo)); }
#line 2227 "build/parser.tab.c"
    break;

  case 36: /* for_statement: TOKEN_FOR '(' declaracion_var ';' expr ';' incremento ')' instruccion_simple  */
#line 200 "src/entriesTools/parser.y"
                                                                               { AbstractExpresion* b=nuevoListaExpresiones(); agregarHijo(b,(yyvsp[0].nodo)); (yyval.nodo)=nuevoForExpresion((yyvsp[-6].nodo),(yyvsp[-4].nodo),(yyvsp[-2].nodo),nuevoBloqueExpresionConContextoPadre(b)); }
#line 2233 "build/parser.tab.c"
    break;

  case 37: /* for_statement: TOKEN_FOR '(' declaracion_var ';' expr ';' ')' bloque_for  */
#line 201 "src/entriesTools/parser.y"
                                                            { (yyval.nodo)=nuevoForExpresion((yyvsp[-5].nodo),(yyvsp[-3].nodo),NULL,(yyvsp[0].nodo)); }
#line 2239 "build/parser.tab.c"
    break;

  case 38: /* for_statement: TOKEN_FOR '(' declaracion_var ';' expr ';' ')' instruccion_simple  */
#line 202 "src/entriesTools/parser.y"
                                                                    { AbstractExpresion* b=nuevoListaExpresiones(); agregarHijo(b,(yyvsp[0].nodo)); (yyval.nodo)=nuevoForExpresion((yyvsp[-5].nodo),(yyvsp[-3].nodo),NULL,nuevoBloqueExpresionConContextoPadre(b)); }
#line 2245 "build/parser.tab.c"
    break;

  case 39: /* for_statement: TOKEN_FOR '(' asignacion ';' expr ';' incremento ')' bloque  */
#line 203 "src/entriesTools/parser.y"
                                                              { (yyval.nodo)=nuevoForExpresion((yyvsp[-6].nodo),(yyvsp[-4].nodo),(yyvsp[-2].nodo),(yyvsp[0].nodo)); }
#line 2251 "build/parser.tab.c"
    break;

  case 40: /* for_statement: TOKEN_FOR '(' asignacion ';' expr ';' incremento ')' instruccion_simple  */
#line 204 "src/entriesTools/parser.y"
                                                                          { AbstractExpresion* b=nuevoListaExpresiones(); agregarHijo(b,(yyvsp[0].nodo)); (yyval.nodo)=nuevoForExpresion((yyvsp[-6].nodo),(yyvsp[-4].nodo),(yyvsp[-2].nodo),nuevoBloqueExpresion(b)); }
#line 2257 "build/parser.tab.c"
    break;

  case 41: /* incremento: asignacion  */
#line 208 "src/entriesTools/parser.y"
                   { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2263 "build/parser.tab.c"
    break;

  case 42: /* incremento: TOKEN_IDENTIFIER TOKEN_PLUS_PLUS  */
#line 209 "src/entriesTools/parser.y"
                                       { AbstractExpresion* id= nuevoIdentificadorExpresion((yyvsp[-1].string)); SET_POS(id,(yylsp[-1])); AbstractExpresion* uno=nuevoPrimitivoExpresion(strdup("1"),INT); SET_POS(uno,(yylsp[0])); AbstractExpresion* sum=nuevoSumaExpresion(id,uno); AbstractExpresion* asg=nuevoAsignacionExpresion((yyvsp[-1].string),sum); SET_POS(asg,(yylsp[-1])); (yyval.nodo)=asg;}
#line 2269 "build/parser.tab.c"
    break;

  case 43: /* incremento: TOKEN_IDENTIFIER TOKEN_MINUS_MINUS  */
#line 210 "src/entriesTools/parser.y"
                                         { AbstractExpresion* id= nuevoIdentificadorExpresion((yyvsp[-1].string)); SET_POS(id,(yylsp[-1])); AbstractExpresion* uno=nuevoPrimitivoExpresion(strdup("1"),INT); SET_POS(uno,(yylsp[0])); AbstractExpresion* res=nuevoRestaExpresion(id,uno); AbstractExpresion* asg=nuevoAsignacionExpresion((yyvsp[-1].string),res); SET_POS(asg,(yylsp[-1])); (yyval.nodo)=asg;}
#line 2275 "build/parser.tab.c"
    break;

  case 44: /* case_list: case_item  */
#line 221 "src/entriesTools/parser.y"
                     { 
        /* case_item ya retorna una lista de CaseExpresion; la usamos directamente */
        (yyval.nodo) = (yyvsp[0].nodo);
    }
#line 2284 "build/parser.tab.c"
    break;

  case 45: /* case_list: case_list case_item  */
#line 225 "src/entriesTools/parser.y"
                          {
        /* aplanar: anexar todos los hijos de $2 a la lista existente */
        for(size_t i=0;i<(yyvsp[0].nodo)->numHijos;i++){ agregarHijo((yyvsp[-1].nodo), (yyvsp[0].nodo)->hijos[i]); }
        (yyval.nodo) = (yyvsp[-1].nodo);
    }
#line 2294 "build/parser.tab.c"
    break;

  case 46: /* case_labels: TOKEN_CASE expr ':'  */
#line 232 "src/entriesTools/parser.y"
                                 {
        AbstractExpresion* etiquetas = nuevoListaExpresiones();
        agregarHijo(etiquetas, (yyvsp[-1].nodo));
        (yyval.nodo) = etiquetas;
    }
#line 2304 "build/parser.tab.c"
    break;

  case 47: /* case_labels: case_labels TOKEN_CASE expr ':'  */
#line 237 "src/entriesTools/parser.y"
                                      {
        agregarHijo((yyvsp[-3].nodo), (yyvsp[-1].nodo));
        (yyval.nodo) = (yyvsp[-3].nodo);
    }
#line 2313 "build/parser.tab.c"
    break;

  case 48: /* case_item: case_labels instrucciones_case  */
#line 243 "src/entriesTools/parser.y"
                                          {
        /* Construir lista de CaseExpresion: uno por cada etiqueta */
        AbstractExpresion* lista = nuevoListaExpresiones();
        for(size_t i=0;i<(yyvsp[-1].nodo)->numHijos;i++){
            AbstractExpresion* etiqueta = (yyvsp[-1].nodo)->hijos[i];
            AbstractExpresion* c = nuevoCaseExpresion(etiqueta, (yyvsp[0].nodo), 0);
            agregarHijo(lista, c);
        }
    /* Asignar propiedad única del bloque de instrucciones al primer CaseExpresion */
    if(lista->numHijos>0){ agregarHijo(lista->hijos[0], (yyvsp[0].nodo)); }
        (yyval.nodo) = lista;
    }
#line 2330 "build/parser.tab.c"
    break;

  case 49: /* case_item: case_labels instrucciones_case TOKEN_BREAK ';'  */
#line 255 "src/entriesTools/parser.y"
                                                     {
        AbstractExpresion* lista = nuevoListaExpresiones();
        for(size_t i=0;i<(yyvsp[-3].nodo)->numHijos;i++){
            AbstractExpresion* etiqueta = (yyvsp[-3].nodo)->hijos[i];
            AbstractExpresion* c = nuevoCaseExpresion(etiqueta, (yyvsp[-2].nodo), 1);
            agregarHijo(lista, c);
        }
    if(lista->numHijos>0){ agregarHijo(lista->hijos[0], (yyvsp[-2].nodo)); }
        (yyval.nodo) = lista;
    }
#line 2345 "build/parser.tab.c"
    break;

  case 50: /* instrucciones_case: instruccion_case  */
#line 267 "src/entriesTools/parser.y"
                                     {
        AbstractExpresion* lista = nuevoListaExpresiones();
        agregarHijo(lista, (yyvsp[0].nodo));
        (yyval.nodo) = lista;
    }
#line 2355 "build/parser.tab.c"
    break;

  case 51: /* instrucciones_case: instrucciones_case instruccion_case  */
#line 272 "src/entriesTools/parser.y"
                                          {
        agregarHijo((yyvsp[-1].nodo), (yyvsp[0].nodo));
        (yyval.nodo) = (yyvsp[-1].nodo);
    }
#line 2364 "build/parser.tab.c"
    break;

  case 52: /* instruccion_case: imprimir ';'  */
#line 278 "src/entriesTools/parser.y"
                               {(yyval.nodo) = (yyvsp[-1].nodo); }
#line 2370 "build/parser.tab.c"
    break;

  case 53: /* instruccion_case: bloque  */
#line 279 "src/entriesTools/parser.y"
             {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2376 "build/parser.tab.c"
    break;

  case 54: /* instruccion_case: declaracion_var ';'  */
#line 280 "src/entriesTools/parser.y"
                          {(yyval.nodo) = (yyvsp[-1].nodo);}
#line 2382 "build/parser.tab.c"
    break;

  case 55: /* instruccion_case: asignacion ';'  */
#line 281 "src/entriesTools/parser.y"
                     {(yyval.nodo) = (yyvsp[-1].nodo);}
#line 2388 "build/parser.tab.c"
    break;

  case 56: /* default_case: TOKEN_DEFAULT ':' instrucciones_case  */
#line 284 "src/entriesTools/parser.y"
                                                   { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2394 "build/parser.tab.c"
    break;

  case 57: /* default_case: TOKEN_DEFAULT ':' instrucciones_case TOKEN_BREAK ';'  */
#line 285 "src/entriesTools/parser.y"
                                                           { (yyval.nodo) = (yyvsp[-2].nodo); }
#line 2400 "build/parser.tab.c"
    break;

  case 58: /* break_statement: TOKEN_BREAK ';'  */
#line 288 "src/entriesTools/parser.y"
                                 { (yyval.nodo) = nuevoBreakExpresion(); SET_POS((yyval.nodo), (yylsp[-1])); }
#line 2406 "build/parser.tab.c"
    break;

  case 59: /* continue_statement: TOKEN_CONTINUE ';'  */
#line 291 "src/entriesTools/parser.y"
                                       { (yyval.nodo) = nuevoContinueExpresion(); SET_POS((yyval.nodo), (yylsp[-1])); }
#line 2412 "build/parser.tab.c"
    break;

  case 60: /* instruccion_simple: imprimir  */
#line 294 "src/entriesTools/parser.y"
                             {(yyval.nodo) = (yyvsp[0].nodo); }
#line 2418 "build/parser.tab.c"
    break;

  case 61: /* instruccion_simple: declaracion_var  */
#line 295 "src/entriesTools/parser.y"
                      {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2424 "build/parser.tab.c"
    break;

  case 62: /* instruccion_simple: asignacion  */
#line 296 "src/entriesTools/parser.y"
                 {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2430 "build/parser.tab.c"
    break;

  case 63: /* asignacion: TOKEN_IDENTIFIER '=' expr  */
#line 299 "src/entriesTools/parser.y"
                                      { (yyval.nodo) = nuevoAsignacionExpresion((yyvsp[-2].string), (yyvsp[0].nodo)); SET_POS((yyval.nodo), (yylsp[-2])); }
#line 2436 "build/parser.tab.c"
    break;

  case 64: /* asignacion: TOKEN_IDENTIFIER TOKEN_PLUS_ASSIGN expr  */
#line 300 "src/entriesTools/parser.y"
                                              { (yyval.nodo) = nuevoAsignacionSumaExpresion((yyvsp[-2].string), (yyvsp[0].nodo)); }
#line 2442 "build/parser.tab.c"
    break;

  case 65: /* asignacion: TOKEN_IDENTIFIER TOKEN_MINUS_ASSIGN expr  */
#line 301 "src/entriesTools/parser.y"
                                               { (yyval.nodo) = nuevoAsignacionRestaExpresion((yyvsp[-2].string), (yyvsp[0].nodo)); }
#line 2448 "build/parser.tab.c"
    break;

  case 66: /* asignacion: TOKEN_IDENTIFIER TOKEN_MUL_ASSIGN expr  */
#line 302 "src/entriesTools/parser.y"
                                             { (yyval.nodo) = nuevoAsignacionMultiplicacionExpresion((yyvsp[-2].string), (yyvsp[0].nodo)); }
#line 2454 "build/parser.tab.c"
    break;

  case 67: /* asignacion: TOKEN_IDENTIFIER TOKEN_DIV_ASSIGN expr  */
#line 303 "src/entriesTools/parser.y"
                                             { (yyval.nodo) = nuevoAsignacionDivisionExpresion((yyvsp[-2].string), (yyvsp[0].nodo)); }
#line 2460 "build/parser.tab.c"
    break;

  case 68: /* asignacion: TOKEN_IDENTIFIER TOKEN_MOD_ASSIGN expr  */
#line 304 "src/entriesTools/parser.y"
                                             { (yyval.nodo) = nuevoAsignacionModuloExpresion((yyvsp[-2].string), (yyvsp[0].nodo)); }
#line 2466 "build/parser.tab.c"
    break;

  case 69: /* asignacion: TOKEN_IDENTIFIER TOKEN_AND_ASSIGN expr  */
#line 305 "src/entriesTools/parser.y"
                                             { AbstractExpresion* id=nuevoIdentificadorExpresion((yyvsp[-2].string)); SET_POS(id,(yylsp[-2])); AbstractExpresion* op=nuevoBitAndExpresion(id,(yyvsp[0].nodo)); AbstractExpresion* asg=nuevoAsignacionExpresion((yyvsp[-2].string),op); SET_POS(asg,(yylsp[-2])); (yyval.nodo)=asg;}
#line 2472 "build/parser.tab.c"
    break;

  case 70: /* asignacion: TOKEN_IDENTIFIER TOKEN_OR_ASSIGN expr  */
#line 306 "src/entriesTools/parser.y"
                                            { AbstractExpresion* id=nuevoIdentificadorExpresion((yyvsp[-2].string)); SET_POS(id,(yylsp[-2])); AbstractExpresion* op=nuevoBitOrExpresion(id,(yyvsp[0].nodo)); AbstractExpresion* asg=nuevoAsignacionExpresion((yyvsp[-2].string),op); SET_POS(asg,(yylsp[-2])); (yyval.nodo)=asg;}
#line 2478 "build/parser.tab.c"
    break;

  case 71: /* asignacion: TOKEN_IDENTIFIER TOKEN_XOR_ASSIGN expr  */
#line 307 "src/entriesTools/parser.y"
                                             { AbstractExpresion* id=nuevoIdentificadorExpresion((yyvsp[-2].string)); SET_POS(id,(yylsp[-2])); AbstractExpresion* op=nuevoBitXorExpresion(id,(yyvsp[0].nodo)); AbstractExpresion* asg=nuevoAsignacionExpresion((yyvsp[-2].string),op); SET_POS(asg,(yylsp[-2])); (yyval.nodo)=asg;}
#line 2484 "build/parser.tab.c"
    break;

  case 72: /* asignacion: TOKEN_IDENTIFIER TOKEN_SHL_ASSIGN expr  */
#line 308 "src/entriesTools/parser.y"
                                             { AbstractExpresion* id=nuevoIdentificadorExpresion((yyvsp[-2].string)); SET_POS(id,(yylsp[-2])); AbstractExpresion* op=nuevoShiftLeftExpresion(id,(yyvsp[0].nodo)); AbstractExpresion* asg=nuevoAsignacionExpresion((yyvsp[-2].string),op); SET_POS(asg,(yylsp[-2])); (yyval.nodo)=asg;}
#line 2490 "build/parser.tab.c"
    break;

  case 73: /* asignacion: TOKEN_IDENTIFIER TOKEN_SHR_ASSIGN expr  */
#line 309 "src/entriesTools/parser.y"
                                             { AbstractExpresion* id=nuevoIdentificadorExpresion((yyvsp[-2].string)); SET_POS(id,(yylsp[-2])); AbstractExpresion* op=nuevoShiftRightExpresion(id,(yyvsp[0].nodo)); AbstractExpresion* asg=nuevoAsignacionExpresion((yyvsp[-2].string),op); SET_POS(asg,(yylsp[-2])); (yyval.nodo)=asg;}
#line 2496 "build/parser.tab.c"
    break;

  case 74: /* lista_Expr: lista_Expr ',' expr  */
#line 311 "src/entriesTools/parser.y"
                                 { agregarHijo((yyvsp[-2].nodo), (yyvsp[0].nodo)); (yyval.nodo) = (yyvsp[-2].nodo); }
#line 2502 "build/parser.tab.c"
    break;

  case 75: /* lista_Expr: expr  */
#line 312 "src/entriesTools/parser.y"
           { 
                AbstractExpresion* b = nuevoListaExpresiones();
                agregarHijo(b, (yyvsp[0].nodo));
                (yyval.nodo) =  b;
            }
#line 2512 "build/parser.tab.c"
    break;

  case 76: /* imprimir: TOKEN_PRINT '(' lista_Expr ')'  */
#line 319 "src/entriesTools/parser.y"
                                         { (yyval.nodo) =  nuevoPrintExpresion((yyvsp[-1].nodo), 0); }
#line 2518 "build/parser.tab.c"
    break;

  case 77: /* imprimir: TOKEN_SYSTEM_OUT_PRINTLN '(' lista_Expr ')'  */
#line 320 "src/entriesTools/parser.y"
                                                  { (yyval.nodo) =  nuevoPrintExpresion((yyvsp[-1].nodo), 1); }
#line 2524 "build/parser.tab.c"
    break;

  case 78: /* imprimir: TOKEN_SYSTEM_OUT_PRINTLN '(' ')'  */
#line 321 "src/entriesTools/parser.y"
                                       { (yyval.nodo) = nuevoPrintExpresion(nuevoListaExpresiones(), 1); }
#line 2530 "build/parser.tab.c"
    break;

  case 79: /* bloque: '{' lSentencia '}'  */
#line 324 "src/entriesTools/parser.y"
                           { (yyval.nodo) = nuevoBloqueExpresion((yyvsp[-1].nodo)); }
#line 2536 "build/parser.tab.c"
    break;

  case 80: /* bloque: '{' error '}'  */
#line 325 "src/entriesTools/parser.y"
                    { (yyval.nodo) = nuevoBloqueExpresion(nuevoListaExpresiones()); yyerrok; }
#line 2542 "build/parser.tab.c"
    break;

  case 81: /* bloque_for: '{' lSentencia '}'  */
#line 327 "src/entriesTools/parser.y"
                               { (yyval.nodo) = nuevoBloqueExpresionConContextoPadre((yyvsp[-1].nodo)); }
#line 2548 "build/parser.tab.c"
    break;

  case 88: /* $@1: %empty  */
#line 341 "src/entriesTools/parser.y"
                                               { __tmp_decl_tipo=(yyvsp[-2].tipoDato); __tmp_decl_dims=(yyvsp[-1].boolean); __tmp_decl_nombre=(yyvsp[0].string); __tmp_decl_final=0; }
#line 2554 "build/parser.tab.c"
    break;

  case 89: /* prefix_array_decl: tipoPrimitivo prefix_dims TOKEN_IDENTIFIER $@1 array_prefix_init_opt  */
#line 341 "src/entriesTools/parser.y"
                                                                                                                                                           {
    if(__tmp_decl_dims<1||__tmp_decl_dims>5){ (yyval.nodo)=parser_error_node((yylsp[-2]), "dimensiones fuera de rango 1-5 (%d)",__tmp_decl_dims); }
    else if(!(yyvsp[0].nodo)){ (yyval.nodo)=parser_error_node((yylsp[-2]), "inicialización de arreglo inválida"); }
        else (yyval.nodo)=(yyvsp[0].nodo);
    }
#line 2564 "build/parser.tab.c"
    break;

  case 90: /* $@2: %empty  */
#line 348 "src/entriesTools/parser.y"
                                                { __tmp_decl_tipo=(yyvsp[-2].tipoDato); __tmp_decl_nombre=(yyvsp[-1].string); __tmp_decl_dims=(yyvsp[0].boolean); __tmp_decl_final=0; }
#line 2570 "build/parser.tab.c"
    break;

  case 91: /* postfix_array_decl: tipoPrimitivo TOKEN_IDENTIFIER postfix_dims $@2 array_postfix_init_opt  */
#line 348 "src/entriesTools/parser.y"
                                                                                                                                                             {
    if(__tmp_decl_dims<1||__tmp_decl_dims>5){ (yyval.nodo)=parser_error_node((yylsp[-3]), "dimensiones fuera de rango 1-5 (%d)",__tmp_decl_dims); }
    else if(!(yyvsp[0].nodo)){ (yyval.nodo)=parser_error_node((yylsp[-3]), "inicialización de arreglo inválida"); }
        else (yyval.nodo)=(yyvsp[0].nodo);
    }
#line 2580 "build/parser.tab.c"
    break;

  case 92: /* $@3: %empty  */
#line 355 "src/entriesTools/parser.y"
                                                           { __tmp_decl_tipo=(yyvsp[-2].tipoDato); __tmp_decl_dims=(yyvsp[-1].boolean); __tmp_decl_nombre=(yyvsp[0].string); __tmp_decl_final=1; }
#line 2586 "build/parser.tab.c"
    break;

  case 93: /* final_prefix_array_decl: TOKEN_FINAL tipoPrimitivo prefix_dims TOKEN_IDENTIFIER $@3 array_prefix_init_opt  */
#line 355 "src/entriesTools/parser.y"
                                                                                                                                                                       {
    if(__tmp_decl_dims<1||__tmp_decl_dims>5){ (yyval.nodo)=parser_error_node((yylsp[-2]), "dimensiones fuera de rango 1-5 (%d)",__tmp_decl_dims); }
    else if(!(yyvsp[0].nodo)){ (yyval.nodo)=parser_error_node((yylsp[-2]), "variable final requiere inicialización"); }
        else (yyval.nodo)=(yyvsp[0].nodo);
    }
#line 2596 "build/parser.tab.c"
    break;

  case 94: /* $@4: %empty  */
#line 362 "src/entriesTools/parser.y"
                                                            { __tmp_decl_tipo=(yyvsp[-2].tipoDato); __tmp_decl_nombre=(yyvsp[-1].string); __tmp_decl_dims=(yyvsp[0].boolean); __tmp_decl_final=1; }
#line 2602 "build/parser.tab.c"
    break;

  case 95: /* final_postfix_array_decl: TOKEN_FINAL tipoPrimitivo TOKEN_IDENTIFIER postfix_dims $@4 array_postfix_init_opt  */
#line 362 "src/entriesTools/parser.y"
                                                                                                                                                                         {
    if(__tmp_decl_dims<1||__tmp_decl_dims>5){ (yyval.nodo)=parser_error_node((yylsp[-3]), "dimensiones fuera de rango 1-5 (%d)",__tmp_decl_dims); }
    else if(!(yyvsp[0].nodo)){ (yyval.nodo)=parser_error_node((yylsp[-3]), "variable final requiere inicialización"); }
        else (yyval.nodo)=(yyvsp[0].nodo);
    }
#line 2612 "build/parser.tab.c"
    break;

  case 96: /* var_decl: tipoPrimitivo TOKEN_IDENTIFIER '=' expr  */
#line 369 "src/entriesTools/parser.y"
                                                { (yyval.nodo) = nuevoDeclaracionVariables((yyvsp[-3].tipoDato),(yyvsp[-2].string),(yyvsp[0].nodo),0); ((DeclaracionVariable*)(yyval.nodo))->linea = (yylsp[-2]).first_line; ((DeclaracionVariable*)(yyval.nodo))->columna = (yylsp[-2]).first_column; }
#line 2618 "build/parser.tab.c"
    break;

  case 97: /* var_decl: tipoPrimitivo TOKEN_IDENTIFIER  */
#line 370 "src/entriesTools/parser.y"
                                     { (yyval.nodo) = nuevoDeclaracionVariables((yyvsp[-1].tipoDato),(yyvsp[0].string),NULL,0); ((DeclaracionVariable*)(yyval.nodo))->linea = (yylsp[0]).first_line; ((DeclaracionVariable*)(yyval.nodo))->columna = (yylsp[0]).first_column; }
#line 2624 "build/parser.tab.c"
    break;

  case 98: /* final_var_decl: TOKEN_FINAL tipoPrimitivo TOKEN_IDENTIFIER '=' expr  */
#line 373 "src/entriesTools/parser.y"
                                                        { (yyval.nodo) = nuevoDeclaracionVariables((yyvsp[-3].tipoDato),(yyvsp[-2].string),(yyvsp[0].nodo),1); ((DeclaracionVariable*)(yyval.nodo))->linea = (yylsp[-2]).first_line; ((DeclaracionVariable*)(yyval.nodo))->columna = (yylsp[-2]).first_column; }
#line 2630 "build/parser.tab.c"
    break;

  case 99: /* array_prefix_init_opt: %empty  */
#line 376 "src/entriesTools/parser.y"
                { (yyval.nodo)=NULL; }
#line 2636 "build/parser.tab.c"
    break;

  case 100: /* array_prefix_init_opt: '=' TOKEN_NEW tipoPrimitivo dims_expr_list  */
#line 377 "src/entriesTools/parser.y"
                                                 {
        size_t nd=(yyvsp[0].nodo)->numHijos;
        if ((yyvsp[-1].tipoDato) != __tmp_decl_tipo) { /* warning se mantiene por ahora en stderr plano */ fprintf(stderr,"WARN|tipo NEW distinto del declarado\n"); }
    if (nd<1||nd>5){ (yyval.nodo)=parser_error_node((yylsp[-2]), "dimensiones NEW fuera de rango 1-5 (%zu)",nd); }
        else if(nd==1) (yyval.nodo)=nuevoArrayDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre, (yyvsp[0].nodo)->hijos[0]);
        else if(nd==2) (yyval.nodo)=nuevoMatrixDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,(yyvsp[0].nodo)->hijos[0],(yyvsp[0].nodo)->hijos[1]);
        else { AbstractExpresion** arr=malloc(sizeof(AbstractExpresion*)*nd); for(size_t i=0;i<nd;i++) arr[i]=(yyvsp[0].nodo)->hijos[i]; (yyval.nodo)=nuevoMultiArrayDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,nd,arr);} }
#line 2648 "build/parser.tab.c"
    break;

  case 101: /* array_prefix_init_opt: '=' '{' lista_Expr '}'  */
#line 384 "src/entriesTools/parser.y"
                             { (yyval.nodo)=nuevoArrayLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,(yyvsp[-1].nodo)); }
#line 2654 "build/parser.tab.c"
    break;

  case 102: /* array_prefix_init_opt: '=' '{' filas_lista '}'  */
#line 385 "src/entriesTools/parser.y"
                              { (yyval.nodo)=nuevoMatrixLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,(yyvsp[-1].nodo)); }
#line 2660 "build/parser.tab.c"
    break;

  case 103: /* array_prefix_init_opt: '=' '{' lista_bloques2D '}'  */
#line 386 "src/entriesTools/parser.y"
                                  { (yyval.nodo)=nuevoArray3DLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,(yyvsp[-1].nodo)); }
#line 2666 "build/parser.tab.c"
    break;

  case 104: /* array_prefix_init_opt: '=' '{' '}'  */
#line 387 "src/entriesTools/parser.y"
                  { AbstractExpresion* l=nuevoListaExpresiones(); (yyval.nodo)=nuevoArrayLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,l); }
#line 2672 "build/parser.tab.c"
    break;

  case 105: /* array_prefix_init_opt: '=' expr  */
#line 388 "src/entriesTools/parser.y"
               { (yyval.nodo)=nuevoArrayDeclaracionDesdeExpr(__tmp_decl_tipo,__tmp_decl_nombre,(yyvsp[0].nodo)); }
#line 2678 "build/parser.tab.c"
    break;

  case 107: /* prefix_dims: '[' ']'  */
#line 393 "src/entriesTools/parser.y"
                     { (yyval.boolean) = 1; }
#line 2684 "build/parser.tab.c"
    break;

  case 108: /* prefix_dims: prefix_dims '[' ']'  */
#line 393 "src/entriesTools/parser.y"
                                                       { (yyval.boolean) = (yyvsp[-2].boolean) + 1; }
#line 2690 "build/parser.tab.c"
    break;

  case 109: /* postfix_dims: '[' ']'  */
#line 394 "src/entriesTools/parser.y"
                      { (yyval.boolean) = 1; }
#line 2696 "build/parser.tab.c"
    break;

  case 110: /* postfix_dims: postfix_dims '[' ']'  */
#line 394 "src/entriesTools/parser.y"
                                                         { (yyval.boolean) = (yyvsp[-2].boolean) + 1; }
#line 2702 "build/parser.tab.c"
    break;

  case 111: /* dims_expr_list: '[' expr ']'  */
#line 397 "src/entriesTools/parser.y"
                             { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l,(yyvsp[-1].nodo)); (yyval.nodo) = l; }
#line 2708 "build/parser.tab.c"
    break;

  case 112: /* dims_expr_list: dims_expr_list '[' expr ']'  */
#line 398 "src/entriesTools/parser.y"
                                      { agregarHijo((yyvsp[-3].nodo),(yyvsp[-1].nodo)); (yyval.nodo) = (yyvsp[-3].nodo); }
#line 2714 "build/parser.tab.c"
    break;

  case 113: /* lista_bloques2D: bloque2D  */
#line 406 "src/entriesTools/parser.y"
                          { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l, (yyvsp[0].nodo)); (yyval.nodo) = l; }
#line 2720 "build/parser.tab.c"
    break;

  case 114: /* lista_bloques2D: lista_bloques2D ',' bloque2D  */
#line 407 "src/entriesTools/parser.y"
                                   { agregarHijo((yyvsp[-2].nodo), (yyvsp[0].nodo)); (yyval.nodo) = (yyvsp[-2].nodo); }
#line 2726 "build/parser.tab.c"
    break;

  case 115: /* bloque2D: '{' filas_lista '}'  */
#line 409 "src/entriesTools/parser.y"
                              { (yyval.nodo) = (yyvsp[-1].nodo); }
#line 2732 "build/parser.tab.c"
    break;

  case 116: /* filas_lista: fila_matriz  */
#line 411 "src/entriesTools/parser.y"
                         { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l, (yyvsp[0].nodo)); (yyval.nodo) = l; }
#line 2738 "build/parser.tab.c"
    break;

  case 117: /* filas_lista: filas_lista ',' fila_matriz  */
#line 412 "src/entriesTools/parser.y"
                                  { agregarHijo((yyvsp[-2].nodo), (yyvsp[0].nodo)); (yyval.nodo) = (yyvsp[-2].nodo); }
#line 2744 "build/parser.tab.c"
    break;

  case 118: /* fila_matriz: '{' lista_Expr '}'  */
#line 414 "src/entriesTools/parser.y"
                                { (yyval.nodo) = (yyvsp[-1].nodo); }
#line 2750 "build/parser.tab.c"
    break;

  case 119: /* asignacion_elemento: TOKEN_IDENTIFIER indices_una '=' expr  */
#line 417 "src/entriesTools/parser.y"
                                                           {
        AbstractExpresion* idx = (yyvsp[-2].nodo)->hijos[0]; (yyval.nodo) = nuevoArrayAsignacionElemento((yyvsp[-3].string), idx, (yyvsp[0].nodo)); }
#line 2757 "build/parser.tab.c"
    break;

  case 120: /* asignacion_elemento: TOKEN_IDENTIFIER indices_multi '=' expr  */
#line 419 "src/entriesTools/parser.y"
                                              {
        size_t n=(yyvsp[-2].nodo)->numHijos; if (n==2) (yyval.nodo)=nuevoMatrixAsignacionElemento((yyvsp[-3].string),(yyvsp[-2].nodo)->hijos[0],(yyvsp[-2].nodo)->hijos[1],(yyvsp[0].nodo)); else {
            (yyval.nodo)=nuevoMultiArrayAsignacionElemento((yyvsp[-3].string),(yyvsp[-2].nodo),(yyvsp[0].nodo)); }
    }
#line 2766 "build/parser.tab.c"
    break;

  case 121: /* indices_una: '[' expr ']'  */
#line 426 "src/entriesTools/parser.y"
                          { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l,(yyvsp[-1].nodo)); (yyval.nodo)=l; }
#line 2772 "build/parser.tab.c"
    break;

  case 122: /* indices_multi: indices_una indices_una  */
#line 427 "src/entriesTools/parser.y"
                                       { /* concat */ for(size_t i=0;i<(yyvsp[0].nodo)->numHijos;i++) agregarHijo((yyvsp[-1].nodo),(yyvsp[0].nodo)->hijos[i]); (yyval.nodo)=(yyvsp[-1].nodo); }
#line 2778 "build/parser.tab.c"
    break;

  case 123: /* indices_multi: indices_multi indices_una  */
#line 428 "src/entriesTools/parser.y"
                                { for(size_t i=0;i<(yyvsp[0].nodo)->numHijos;i++) agregarHijo((yyvsp[-1].nodo),(yyvsp[0].nodo)->hijos[i]); (yyval.nodo)=(yyvsp[-1].nodo); }
#line 2784 "build/parser.tab.c"
    break;

  case 124: /* expr: expr '+' expr  */
#line 445 "src/entriesTools/parser.y"
                      { (yyval.nodo) =  nuevoSumaExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo));  }
#line 2790 "build/parser.tab.c"
    break;

  case 125: /* expr: expr '-' expr  */
#line 446 "src/entriesTools/parser.y"
                    { (yyval.nodo) =  nuevoRestaExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2796 "build/parser.tab.c"
    break;

  case 126: /* expr: expr '*' expr  */
#line 447 "src/entriesTools/parser.y"
                    { (yyval.nodo) =  nuevoMultiplicacionExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2802 "build/parser.tab.c"
    break;

  case 127: /* expr: expr '/' expr  */
#line 448 "src/entriesTools/parser.y"
                    { (yyval.nodo) =  nuevoDivisionExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2808 "build/parser.tab.c"
    break;

  case 128: /* expr: expr '%' expr  */
#line 449 "src/entriesTools/parser.y"
                    { (yyval.nodo) =  nuevoModuloExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2814 "build/parser.tab.c"
    break;

  case 129: /* expr: expr '&' expr  */
#line 450 "src/entriesTools/parser.y"
                    { (yyval.nodo) =  nuevoBitAndExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2820 "build/parser.tab.c"
    break;

  case 130: /* expr: expr '|' expr  */
#line 451 "src/entriesTools/parser.y"
                    { (yyval.nodo) =  nuevoBitOrExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2826 "build/parser.tab.c"
    break;

  case 131: /* expr: expr '^' expr  */
#line 452 "src/entriesTools/parser.y"
                    { (yyval.nodo) =  nuevoBitXorExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2832 "build/parser.tab.c"
    break;

  case 132: /* expr: expr TOKEN_SHIFT_LEFT expr  */
#line 453 "src/entriesTools/parser.y"
                                 { (yyval.nodo) =  nuevoShiftLeftExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2838 "build/parser.tab.c"
    break;

  case 133: /* expr: expr TOKEN_SHIFT_RIGHT expr  */
#line 454 "src/entriesTools/parser.y"
                                  { (yyval.nodo) =  nuevoShiftRightExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2844 "build/parser.tab.c"
    break;

  case 134: /* expr: expr TOKEN_EQUAL expr  */
#line 455 "src/entriesTools/parser.y"
                            { (yyval.nodo) =  nuevoIgualdadExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2850 "build/parser.tab.c"
    break;

  case 135: /* expr: expr TOKEN_NOT_EQUAL expr  */
#line 456 "src/entriesTools/parser.y"
                                { (yyval.nodo) =  nuevoDesigualdadExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2856 "build/parser.tab.c"
    break;

  case 136: /* expr: expr TOKEN_GREATER expr  */
#line 457 "src/entriesTools/parser.y"
                              { (yyval.nodo) =  nuevoMayorQueExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2862 "build/parser.tab.c"
    break;

  case 137: /* expr: expr TOKEN_LESS expr  */
#line 458 "src/entriesTools/parser.y"
                           { (yyval.nodo) =  nuevoMenorQueExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2868 "build/parser.tab.c"
    break;

  case 138: /* expr: expr TOKEN_GREATER_EQUAL expr  */
#line 459 "src/entriesTools/parser.y"
                                    { (yyval.nodo) =  nuevoMayorIgualQueExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2874 "build/parser.tab.c"
    break;

  case 139: /* expr: expr TOKEN_LESS_EQUAL expr  */
#line 460 "src/entriesTools/parser.y"
                                 { (yyval.nodo) =  nuevoMenorIgualQueExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2880 "build/parser.tab.c"
    break;

  case 140: /* expr: expr TOKEN_AND expr  */
#line 461 "src/entriesTools/parser.y"
                          { (yyval.nodo) =  nuevoAndExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2886 "build/parser.tab.c"
    break;

  case 141: /* expr: expr TOKEN_OR expr  */
#line 462 "src/entriesTools/parser.y"
                         { (yyval.nodo) =  nuevoOrExpresion((yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2892 "build/parser.tab.c"
    break;

  case 142: /* expr: TOKEN_NOT expr  */
#line 463 "src/entriesTools/parser.y"
                     { (yyval.nodo) =  nuevoNotExpresion((yyvsp[0].nodo)); }
#line 2898 "build/parser.tab.c"
    break;

  case 143: /* expr: '-' expr  */
#line 464 "src/entriesTools/parser.y"
                          { (yyval.nodo) =  nuevoUnarioExpresion((yyvsp[0].nodo));  }
#line 2904 "build/parser.tab.c"
    break;

  case 144: /* expr: postfix  */
#line 465 "src/entriesTools/parser.y"
              { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2910 "build/parser.tab.c"
    break;

  case 145: /* postfix: unary  */
#line 468 "src/entriesTools/parser.y"
               { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2916 "build/parser.tab.c"
    break;

  case 146: /* postfix: postfix '[' expr ']'  */
#line 469 "src/entriesTools/parser.y"
                           { (yyval.nodo) = nuevoArrayAcceso((yyvsp[-3].nodo), (yyvsp[-1].nodo)); }
#line 2922 "build/parser.tab.c"
    break;

  case 147: /* postfix: postfix '.' TOKEN_LENGTH  */
#line 470 "src/entriesTools/parser.y"
                               { (yyval.nodo) = nuevoArrayLength((yyvsp[-2].nodo)); }
#line 2928 "build/parser.tab.c"
    break;

  case 148: /* postfix: postfix '.' TOKEN_ADD '(' expr ')'  */
#line 471 "src/entriesTools/parser.y"
                                         { (yyval.nodo) = nuevoArrayAdd((yyvsp[-5].nodo), (yyvsp[-1].nodo)); }
#line 2934 "build/parser.tab.c"
    break;

  case 149: /* postfix: postfix '.' TOKEN_IDENTIFIER '(' expr ')'  */
#line 472 "src/entriesTools/parser.y"
                                                { if(strcmp((yyvsp[-3].string),"equals")==0){ (yyval.nodo) = nuevoIgualdadExpresion((yyvsp[-5].nodo),(yyvsp[-1].nodo));} else { (yyval.nodo)=(yyvsp[-5].nodo); } }
#line 2940 "build/parser.tab.c"
    break;

  case 150: /* postfix: postfix '.' TOKEN_IDENTIFIER '(' ')'  */
#line 473 "src/entriesTools/parser.y"
                                           { if(strcmp((yyvsp[-2].string),"equals")==0){ AbstractExpresion* e=parser_error_node((yylsp[-2]),"método equals requiere un argumento"); (yyval.nodo)=(yyvsp[-4].nodo); (void)e; } else { (yyval.nodo)=(yyvsp[-4].nodo); } }
#line 2946 "build/parser.tab.c"
    break;

  case 151: /* postfix: TOKEN_IDENTIFIER TOKEN_PLUS_PLUS  */
#line 474 "src/entriesTools/parser.y"
                                       {
        AbstractExpresion* id1 = nuevoIdentificadorExpresion((yyvsp[-1].string));
        AbstractExpresion* uno1 = nuevoPrimitivoExpresion(strdup("1"), INT);
        AbstractExpresion* sum1 = nuevoSumaExpresion(id1, uno1);
        (yyval.nodo) = nuevoAsignacionExpresion((yyvsp[-1].string), sum1);
    }
#line 2957 "build/parser.tab.c"
    break;

  case 152: /* postfix: TOKEN_IDENTIFIER TOKEN_MINUS_MINUS  */
#line 480 "src/entriesTools/parser.y"
                                         {
        AbstractExpresion* id2 = nuevoIdentificadorExpresion((yyvsp[-1].string));
        AbstractExpresion* uno2 = nuevoPrimitivoExpresion(strdup("1"), INT);
        AbstractExpresion* res2 = nuevoRestaExpresion(id2, uno2);
        (yyval.nodo) = nuevoAsignacionExpresion((yyvsp[-1].string), res2);
    }
#line 2968 "build/parser.tab.c"
    break;

  case 153: /* unary: atom  */
#line 488 "src/entriesTools/parser.y"
            { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2974 "build/parser.tab.c"
    break;

  case 154: /* unary: '(' tipoPrimitivo ')' postfix  */
#line 492 "src/entriesTools/parser.y"
                                                { (yyval.nodo) = nuevoCastExpresion((yyvsp[-2].tipoDato), (yyvsp[0].nodo)); }
#line 2980 "build/parser.tab.c"
    break;

  case 155: /* atom: primitivo  */
#line 495 "src/entriesTools/parser.y"
                { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2986 "build/parser.tab.c"
    break;

  case 156: /* atom: '(' expr ')'  */
#line 496 "src/entriesTools/parser.y"
                   { (yyval.nodo) = (yyvsp[-1].nodo); }
#line 2992 "build/parser.tab.c"
    break;

  case 157: /* atom: TOKEN_IDENTIFIER  */
#line 497 "src/entriesTools/parser.y"
                       { (yyval.nodo) = nuevoIdentificadorExpresion((yyvsp[0].string)); SET_POS((yyval.nodo), (yylsp[0])); }
#line 2998 "build/parser.tab.c"
    break;

  case 158: /* atom: llamada_funcion  */
#line 498 "src/entriesTools/parser.y"
                      { (yyval.nodo) = (yyvsp[0].nodo); /* la llamada ya debería heredar pos de su identificador interno */ }
#line 3004 "build/parser.tab.c"
    break;

  case 159: /* atom: TOKEN_ARRAYS '.' TOKEN_INDEXOF '(' expr ',' expr ')'  */
#line 499 "src/entriesTools/parser.y"
                                                           { (yyval.nodo) = nuevoArraysIndexOf((yyvsp[-3].nodo), (yyvsp[-1].nodo)); }
#line 3010 "build/parser.tab.c"
    break;

  case 160: /* atom: TOKEN_INTEGER_CLASS '.' TOKEN_PARSE_INT '(' expr ')'  */
#line 500 "src/entriesTools/parser.y"
                                                           { (yyval.nodo) = nuevoParseEntero((yyvsp[-1].nodo)); }
#line 3016 "build/parser.tab.c"
    break;

  case 161: /* atom: TOKEN_DOUBLE_CLASS '.' TOKEN_PARSE_DOUBLE '(' expr ')'  */
#line 501 "src/entriesTools/parser.y"
                                                             { (yyval.nodo) = nuevoParseDouble((yyvsp[-1].nodo)); }
#line 3022 "build/parser.tab.c"
    break;

  case 162: /* atom: TOKEN_FLOAT_CLASS '.' TOKEN_PARSE_FLOAT '(' expr ')'  */
#line 502 "src/entriesTools/parser.y"
                                                           { (yyval.nodo) = nuevoParseFloat((yyvsp[-1].nodo)); }
#line 3028 "build/parser.tab.c"
    break;

  case 163: /* atom: TOKEN_DSTRING '.' TOKEN_VALUE_OF '(' expr ')'  */
#line 503 "src/entriesTools/parser.y"
                                                    { (yyval.nodo) = nuevoStringValueOf((yyvsp[-1].nodo)); }
#line 3034 "build/parser.tab.c"
    break;

  case 164: /* atom: TOKEN_DSTRING '.' TOKEN_JOIN '(' expr ',' expr ')'  */
#line 504 "src/entriesTools/parser.y"
                                                         { (yyval.nodo) = nuevoStringJoin((yyvsp[-3].nodo), (yyvsp[-1].nodo), 1); }
#line 3040 "build/parser.tab.c"
    break;

  case 165: /* atom: TOKEN_DSTRING '.' TOKEN_JOIN '(' expr ',' join_variadic_args ')'  */
#line 505 "src/entriesTools/parser.y"
                                                                       { (yyval.nodo) = nuevoStringJoin((yyvsp[-3].nodo), (yyvsp[-1].nodo), 0); }
#line 3046 "build/parser.tab.c"
    break;

  case 166: /* join_variadic_args: expr ',' lista_Expr  */
#line 508 "src/entriesTools/parser.y"
                                        {
        /* crear lista que contenga primer expr y luego los de lista_Expr */
        AbstractExpresion* l = nuevoListaExpresiones();
        agregarHijo(l, (yyvsp[-2].nodo));
        for(size_t i=0;i<(yyvsp[0].nodo)->numHijos;i++){ agregarHijo(l, (yyvsp[0].nodo)->hijos[i]); }
        (yyval.nodo) = l;
    }
#line 3058 "build/parser.tab.c"
    break;

  case 167: /* primitivo: TOKEN_UNSIGNED_INTEGER  */
#line 516 "src/entriesTools/parser.y"
                                  { (yyval.nodo) = nuevoPrimitivoExpresion((yyvsp[0].string), INT); SET_POS((yyval.nodo), (yylsp[0])); }
#line 3064 "build/parser.tab.c"
    break;

  case 168: /* primitivo: TOKEN_STRING  */
#line 517 "src/entriesTools/parser.y"
                   { (yyval.nodo) =  nuevoPrimitivoExpresion((yyvsp[0].string), STRING); SET_POS((yyval.nodo), (yylsp[0])); }
#line 3070 "build/parser.tab.c"
    break;

  case 169: /* primitivo: TOKEN_REAL_FLOAT  */
#line 518 "src/entriesTools/parser.y"
                       { (yyval.nodo) =  nuevoPrimitivoExpresion((yyvsp[0].string), FLOAT); SET_POS((yyval.nodo), (yylsp[0])); }
#line 3076 "build/parser.tab.c"
    break;

  case 170: /* primitivo: TOKEN_REAL  */
#line 519 "src/entriesTools/parser.y"
                 { (yyval.nodo) =  nuevoPrimitivoExpresion((yyvsp[0].string), DOUBLE); SET_POS((yyval.nodo), (yylsp[0])); }
#line 3082 "build/parser.tab.c"
    break;

  case 171: /* primitivo: TOKEN_CHAR_LITERAL  */
#line 520 "src/entriesTools/parser.y"
                         { (yyval.nodo) =  nuevoPrimitivoExpresion((yyvsp[0].string), CHAR); SET_POS((yyval.nodo), (yylsp[0])); }
#line 3088 "build/parser.tab.c"
    break;

  case 172: /* primitivo: TOKEN_TRUE  */
#line 521 "src/entriesTools/parser.y"
                 { (yyval.nodo) =  nuevoPrimitivoExpresion((yyvsp[0].string), BOOLEAN); SET_POS((yyval.nodo), (yylsp[0])); }
#line 3094 "build/parser.tab.c"
    break;

  case 173: /* primitivo: TOKEN_FALSE  */
#line 522 "src/entriesTools/parser.y"
                  { (yyval.nodo) =  nuevoPrimitivoExpresion((yyvsp[0].string), BOOLEAN); SET_POS((yyval.nodo), (yylsp[0])); }
#line 3100 "build/parser.tab.c"
    break;

  case 174: /* primitivo: TOKEN_NULL  */
#line 523 "src/entriesTools/parser.y"
                 { (yyval.nodo) = nuevoPrimitivoExpresion(NULL, NULO); SET_POS((yyval.nodo), (yylsp[0])); }
#line 3106 "build/parser.tab.c"
    break;

  case 175: /* tipoPrimitivo: TOKEN_DINT  */
#line 526 "src/entriesTools/parser.y"
                          { (yyval.tipoDato) = INT; }
#line 3112 "build/parser.tab.c"
    break;

  case 176: /* tipoPrimitivo: TOKEN_DFLOAT  */
#line 527 "src/entriesTools/parser.y"
                   { (yyval.tipoDato) = FLOAT; }
#line 3118 "build/parser.tab.c"
    break;

  case 177: /* tipoPrimitivo: TOKEN_DDOUBLE  */
#line 528 "src/entriesTools/parser.y"
                    { (yyval.tipoDato) = DOUBLE; }
#line 3124 "build/parser.tab.c"
    break;

  case 178: /* tipoPrimitivo: TOKEN_DSTRING  */
#line 529 "src/entriesTools/parser.y"
                    { (yyval.tipoDato) = STRING; }
#line 3130 "build/parser.tab.c"
    break;

  case 179: /* tipoPrimitivo: TOKEN_DBOOLEAN  */
#line 530 "src/entriesTools/parser.y"
                     { (yyval.tipoDato) = BOOLEAN; }
#line 3136 "build/parser.tab.c"
    break;

  case 180: /* tipoPrimitivo: TOKEN_DCHAR  */
#line 531 "src/entriesTools/parser.y"
                  { (yyval.tipoDato) = CHAR; }
#line 3142 "build/parser.tab.c"
    break;

  case 181: /* tipoPrimitivo: TOKEN_DVOID  */
#line 532 "src/entriesTools/parser.y"
                  { (yyval.tipoDato) = VOID; }
#line 3148 "build/parser.tab.c"
    break;

  case 182: /* funcion_declaracion: tipoPrimitivo TOKEN_IDENTIFIER '(' param_opt ')' bloque  */
#line 535 "src/entriesTools/parser.y"
                                                                             { 
        if((yyvsp[-2].paramList)){ (yyval.nodo) = nuevoFuncionDeclaracion((yyvsp[-5].tipoDato), (yyvsp[-4].string), (yyvsp[-2].paramList)->names, (yyvsp[-2].paramList)->types, (yyvsp[-2].paramList)->count, (yyvsp[0].nodo)); }
        else { (yyval.nodo) = nuevoFuncionDeclaracion((yyvsp[-5].tipoDato), (yyvsp[-4].string), NULL, NULL, 0, (yyvsp[0].nodo)); }
        ((FuncionDecl*)(yyval.nodo))->linea = (yylsp[-4]).first_line; ((FuncionDecl*)(yyval.nodo))->columna = (yylsp[-4]).first_column;
    }
#line 3158 "build/parser.tab.c"
    break;

  case 183: /* main_declaracion: TOKEN_PUBLIC TOKEN_STATIC TOKEN_DVOID TOKEN_IDENTIFIER '(' main_params_opt ')' bloque  */
#line 542 "src/entriesTools/parser.y"
                                                                                                        { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3164 "build/parser.tab.c"
    break;

  case 189: /* main_param_array_brackets: %empty  */
#line 546 "src/entriesTools/parser.y"
                                       { /* 0 dims */ }
#line 3170 "build/parser.tab.c"
    break;

  case 190: /* main_param_array_brackets: main_param_array_brackets '[' ']'  */
#line 546 "src/entriesTools/parser.y"
                                                                                            { /* accum dims ignored */ }
#line 3176 "build/parser.tab.c"
    break;

  case 191: /* param_opt: %empty  */
#line 548 "src/entriesTools/parser.y"
                       { (yyval.paramList) = NULL; }
#line 3182 "build/parser.tab.c"
    break;

  case 192: /* param_opt: lista_parametros  */
#line 549 "src/entriesTools/parser.y"
                       { (yyval.paramList) = (yyvsp[0].paramList); }
#line 3188 "build/parser.tab.c"
    break;

  case 193: /* param_array_brackets: %empty  */
#line 552 "src/entriesTools/parser.y"
                                  { (yyval.boolean) = 0; }
#line 3194 "build/parser.tab.c"
    break;

  case 194: /* param_array_brackets: param_array_brackets '[' ']'  */
#line 553 "src/entriesTools/parser.y"
                                   { (yyval.boolean) = (yyvsp[-2].boolean) + 1; }
#line 3200 "build/parser.tab.c"
    break;

  case 195: /* lista_parametros: tipoPrimitivo param_array_brackets TOKEN_IDENTIFIER  */
#line 555 "src/entriesTools/parser.y"
                                                                      { 
        ParamList* pl = malloc(sizeof(ParamList));
        pl->count=1; pl->names=malloc(sizeof(char*)); pl->types=malloc(sizeof(TipoDato));
        pl->names[0]=(yyvsp[0].string); pl->types[0]= ((yyvsp[-1].boolean)>0 ? ARRAY : (yyvsp[-2].tipoDato)); (yyval.paramList)=pl; }
#line 3209 "build/parser.tab.c"
    break;

  case 196: /* lista_parametros: lista_parametros ',' tipoPrimitivo param_array_brackets TOKEN_IDENTIFIER  */
#line 559 "src/entriesTools/parser.y"
                                                                               { 
        (yyvsp[-4].paramList)->names = realloc((yyvsp[-4].paramList)->names, sizeof(char*)*((yyvsp[-4].paramList)->count+1));
        (yyvsp[-4].paramList)->types = realloc((yyvsp[-4].paramList)->types, sizeof(TipoDato)*((yyvsp[-4].paramList)->count+1));
        (yyvsp[-4].paramList)->names[(yyvsp[-4].paramList)->count]=(yyvsp[0].string); (yyvsp[-4].paramList)->types[(yyvsp[-4].paramList)->count]= ((yyvsp[-1].boolean)>0 ? ARRAY : (yyvsp[-2].tipoDato)); (yyvsp[-4].paramList)->count++; (yyval.paramList)=(yyvsp[-4].paramList); }
#line 3218 "build/parser.tab.c"
    break;

  case 197: /* return_stmt: TOKEN_RETURN  */
#line 564 "src/entriesTools/parser.y"
                          { (yyval.nodo) = nuevoReturnExpresion(NULL); }
#line 3224 "build/parser.tab.c"
    break;

  case 198: /* return_stmt: TOKEN_RETURN expr  */
#line 565 "src/entriesTools/parser.y"
                        { (yyval.nodo) = nuevoReturnExpresion((yyvsp[0].nodo)); }
#line 3230 "build/parser.tab.c"
    break;

  case 199: /* for_each_statement: TOKEN_FOR '(' tipoPrimitivo TOKEN_IDENTIFIER ':' TOKEN_IDENTIFIER ')' bloque  */
#line 570 "src/entriesTools/parser.y"
                                                                                 {
          /* Desazucar: soportar flatten para arrays >=2D usando pila de índices
              Estrategia: generar bucles anidados según profundidad dinámica medida en runtime: iteramos cada nivel si el elemento actual aún es ARRAY.
              Simplificación: generamos un for principal sobre el arreglo original; si el elemento es ARRAY, usamos Array.length recursivo que ya suma todos los internos y hacemos un acceso lineal simulando flatten: i recorre 0..lengthTotal-1 y para each recuperamos elemento linealizado.
              Implementación minimal: length recursivo ya devuelve total; acceso lineal: creamos builtin que recorre y avanza un contador global oculto. Aquí haremos workaround: reemplazar for-each multi-dimension por for simple sobre length total y acceso mediante función auxiliar equals sobre índice lineal -> no disponible; alternativa: iterar superficialmente y si elemento es ARRAY, insertar otro for-each recursivo construido aquí. */
          /* Construcción básica 1D y fallback recursivo: si el cuerpo usa variable, queremos consistente para multidim -> generamos verificación y si elemento es ARRAY, no declaramos var primitiva (se imprimirá error si se intenta usar). */
          char bufIdx[64]; snprintf(bufIdx,sizeof(bufIdx),"__idx_fe_%s", (yyvsp[-4].string)); char* idxName=strdup(bufIdx);
          AbstractExpresion* cero = nuevoPrimitivoExpresion(strdup("0"), INT);
          AbstractExpresion* declIdx = nuevoDeclaracionVariables(INT, idxName, cero, 0);
          /* Propagar ubicación al índice sintético (usamos la posición del identificador de la variable foreach) */
          ((DeclaracionVariable*)declIdx)->linea = (yylsp[-4]).first_line; ((DeclaracionVariable*)declIdx)->columna = (yylsp[-4]).first_column;
          AbstractExpresion* idIdx1 = nuevoIdentificadorExpresion(idxName);
          AbstractExpresion* arrId1 = nuevoIdentificadorExpresion((yyvsp[-2].string));
          /* Usar longitud total (flatten) para iteración sobre arreglos potencialmente multidimensionales */
          AbstractExpresion* lenAcc = nuevoArrayTotalLength(arrId1);
          AbstractExpresion* cond = nuevoMenorQueExpresion(idIdx1, lenAcc);
          AbstractExpresion* idIdx2 = nuevoIdentificadorExpresion(idxName);
          AbstractExpresion* uno = nuevoPrimitivoExpresion(strdup("1"), INT);
          AbstractExpresion* sum = nuevoSumaExpresion(idIdx2, uno);
          AbstractExpresion* inc = nuevoAsignacionExpresion(idxName, sum);
    AbstractExpresion* arrId2 = nuevoIdentificadorExpresion((yyvsp[-2].string));
    AbstractExpresion* idIdx3 = nuevoIdentificadorExpresion(idxName);
    /* Acceso linealizado: soporta multi-d devolviendo elemento hoja en orden */
    AbstractExpresion* acceso = nuevoArrayLinearAccess(arrId2, idIdx3);
          AbstractExpresion* declVar = nuevoDeclaracionVariables((yyvsp[-5].tipoDato), (yyvsp[-4].string), acceso, 0);
          ((DeclaracionVariable*)declVar)->linea = (yylsp[-4]).first_line; ((DeclaracionVariable*)declVar)->columna = (yylsp[-4]).first_column;
          AbstractExpresion* lista = nuevoListaExpresiones(); agregarHijo(lista, declVar); agregarHijo(lista, (yyvsp[0].nodo));
          AbstractExpresion* cuerpo = nuevoBloqueExpresion(lista);
          (yyval.nodo) = nuevoForExpresion(declIdx, cond, inc, cuerpo);
    }
#line 3265 "build/parser.tab.c"
    break;

  case 200: /* for_each_statement: TOKEN_FOR '(' tipoPrimitivo '[' ']' TOKEN_IDENTIFIER ':' TOKEN_IDENTIFIER ')' bloque  */
#line 600 "src/entriesTools/parser.y"
                                                                                           {
        /* for-each de arrays: itera sobre primer nivel y declara variable de tipo arreglo */
        char bufIdx[64]; snprintf(bufIdx,sizeof(bufIdx),"__idx_fe_%s", (yyvsp[-4].string)); char* idxName=strdup(bufIdx);
        AbstractExpresion* cero = nuevoPrimitivoExpresion(strdup("0"), INT);
        AbstractExpresion* declIdx = nuevoDeclaracionVariables(INT, idxName, cero, 0);
        ((DeclaracionVariable*)declIdx)->linea = (yylsp[-4]).first_line; ((DeclaracionVariable*)declIdx)->columna = (yylsp[-4]).first_column;
        AbstractExpresion* idIdx1 = nuevoIdentificadorExpresion(idxName);
        AbstractExpresion* arrId1 = nuevoIdentificadorExpresion((yyvsp[-2].string));
        AbstractExpresion* lenTop = nuevoArrayTopLength(arrId1);
        AbstractExpresion* cond = nuevoMenorQueExpresion(idIdx1, lenTop);
        AbstractExpresion* idIdx2 = nuevoIdentificadorExpresion(idxName);
        AbstractExpresion* uno = nuevoPrimitivoExpresion(strdup("1"), INT);
        AbstractExpresion* sum = nuevoSumaExpresion(idIdx2, uno);
        AbstractExpresion* inc = nuevoAsignacionExpresion(idxName, sum);
        AbstractExpresion* arrId2 = nuevoIdentificadorExpresion((yyvsp[-2].string));
        AbstractExpresion* idIdx3 = nuevoIdentificadorExpresion(idxName);
        AbstractExpresion* acceso = nuevoArrayAcceso(arrId2, idIdx3);
        AbstractExpresion* declVar = nuevoDeclaracionVariables(ARRAY, (yyvsp[-4].string), acceso, 0);
        ((DeclaracionVariable*)declVar)->linea = (yylsp[-4]).first_line; ((DeclaracionVariable*)declVar)->columna = (yylsp[-4]).first_column;
        AbstractExpresion* lista = nuevoListaExpresiones(); agregarHijo(lista, declVar); agregarHijo(lista, (yyvsp[0].nodo));
        AbstractExpresion* cuerpo = nuevoBloqueExpresion(lista);
        (yyval.nodo) = nuevoForExpresion(declIdx, cond, inc, cuerpo);
    }
#line 3293 "build/parser.tab.c"
    break;

  case 201: /* argumentos_opt: %empty  */
#line 624 "src/entriesTools/parser.y"
                            { (yyval.nodo) = nuevoListaExpresiones(); }
#line 3299 "build/parser.tab.c"
    break;

  case 202: /* argumentos_opt: lista_Expr  */
#line 625 "src/entriesTools/parser.y"
                 { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3305 "build/parser.tab.c"
    break;

  case 203: /* llamada_funcion: TOKEN_IDENTIFIER '(' argumentos_opt ')'  */
#line 627 "src/entriesTools/parser.y"
                                                         { (yyval.nodo) = nuevoLlamadaFuncion((yyvsp[-3].string), (yyvsp[-1].nodo)); }
#line 3311 "build/parser.tab.c"
    break;


#line 3315 "build/parser.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 628 "src/entriesTools/parser.y"


/* definición de yyerror, usa el yylloc global para ubicación */
void yyerror(const char *s) {
    // Traducir mensajes comunes de Bison al español de forma ligera
    const char* msg = s;
    if (strcmp(s, "syntax error") == 0) msg = "Error de sintaxis";
    else if (strstr(s, "unexpected") && strstr(s, "expecting")) msg = s; // dejar tal cual si es detallado
    /* Deduplicación básica: mismo mensaje en la misma posición */
    static int last_line = -1, last_col = -1; static char last_msg[128] = "";
    if (last_line == yylloc.first_line && last_col == yylloc.first_column && strcmp(last_msg, msg) == 0) {
        return;
    }
    last_line = yylloc.first_line; last_col = yylloc.first_column; strncpy(last_msg, msg, sizeof(last_msg)-1); last_msg[sizeof(last_msg)-1]='\0';
    report_syntax_error("%s", msg);
    /* En modo GLR, la recuperación estándar es limitada; evitamos macros no disponibles aquí. */
}
