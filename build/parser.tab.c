/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton implementation for Bison GLR parsers in C

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user prologue.  */
#line 1 "src/entriesTools/parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include "ast/AbstractExpresion.h"

    int yylex(void);
    extern AbstractExpresion* ast_root;
    void yyerror(const char *s);

#line 68 "build/parser.tab.c"

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
  YYSYMBOL_TOKEN_SHIFT_LEFT = 24,          /* TOKEN_SHIFT_LEFT  */
  YYSYMBOL_TOKEN_SHIFT_RIGHT = 25,         /* TOKEN_SHIFT_RIGHT  */
  YYSYMBOL_TOKEN_INTEGER_CLASS = 26,       /* TOKEN_INTEGER_CLASS  */
  YYSYMBOL_TOKEN_DOUBLE_CLASS = 27,        /* TOKEN_DOUBLE_CLASS  */
  YYSYMBOL_TOKEN_FLOAT_CLASS = 28,         /* TOKEN_FLOAT_CLASS  */
  YYSYMBOL_TOKEN_ARRAYS = 29,              /* TOKEN_ARRAYS  */
  YYSYMBOL_TOKEN_PARSE_INT = 30,           /* TOKEN_PARSE_INT  */
  YYSYMBOL_TOKEN_PARSE_DOUBLE = 31,        /* TOKEN_PARSE_DOUBLE  */
  YYSYMBOL_TOKEN_PARSE_FLOAT = 32,         /* TOKEN_PARSE_FLOAT  */
  YYSYMBOL_TOKEN_VALUE_OF = 33,            /* TOKEN_VALUE_OF  */
  YYSYMBOL_TOKEN_JOIN = 34,                /* TOKEN_JOIN  */
  YYSYMBOL_TOKEN_LENGTH = 35,              /* TOKEN_LENGTH  */
  YYSYMBOL_TOKEN_ADD = 36,                 /* TOKEN_ADD  */
  YYSYMBOL_TOKEN_INDEXOF = 37,             /* TOKEN_INDEXOF  */
  YYSYMBOL_TOKEN_PLUS_PLUS = 38,           /* TOKEN_PLUS_PLUS  */
  YYSYMBOL_TOKEN_MINUS_MINUS = 39,         /* TOKEN_MINUS_MINUS  */
  YYSYMBOL_TOKEN_PLUS_ASSIGN = 40,         /* TOKEN_PLUS_ASSIGN  */
  YYSYMBOL_TOKEN_MINUS_ASSIGN = 41,        /* TOKEN_MINUS_ASSIGN  */
  YYSYMBOL_TOKEN_MUL_ASSIGN = 42,          /* TOKEN_MUL_ASSIGN  */
  YYSYMBOL_TOKEN_DIV_ASSIGN = 43,          /* TOKEN_DIV_ASSIGN  */
  YYSYMBOL_TOKEN_MOD_ASSIGN = 44,          /* TOKEN_MOD_ASSIGN  */
  YYSYMBOL_TOKEN_AND_ASSIGN = 45,          /* TOKEN_AND_ASSIGN  */
  YYSYMBOL_TOKEN_OR_ASSIGN = 46,           /* TOKEN_OR_ASSIGN  */
  YYSYMBOL_TOKEN_XOR_ASSIGN = 47,          /* TOKEN_XOR_ASSIGN  */
  YYSYMBOL_TOKEN_SHL_ASSIGN = 48,          /* TOKEN_SHL_ASSIGN  */
  YYSYMBOL_TOKEN_SHR_ASSIGN = 49,          /* TOKEN_SHR_ASSIGN  */
  YYSYMBOL_TOKEN_EQUAL = 50,               /* TOKEN_EQUAL  */
  YYSYMBOL_TOKEN_NOT_EQUAL = 51,           /* TOKEN_NOT_EQUAL  */
  YYSYMBOL_TOKEN_GREATER = 52,             /* TOKEN_GREATER  */
  YYSYMBOL_TOKEN_LESS = 53,                /* TOKEN_LESS  */
  YYSYMBOL_TOKEN_GREATER_EQUAL = 54,       /* TOKEN_GREATER_EQUAL  */
  YYSYMBOL_TOKEN_LESS_EQUAL = 55,          /* TOKEN_LESS_EQUAL  */
  YYSYMBOL_TOKEN_AND = 56,                 /* TOKEN_AND  */
  YYSYMBOL_TOKEN_OR = 57,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_NOT = 58,                 /* TOKEN_NOT  */
  YYSYMBOL_TOKEN_IF = 59,                  /* TOKEN_IF  */
  YYSYMBOL_TOKEN_ELSE = 60,                /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_SWITCH = 61,              /* TOKEN_SWITCH  */
  YYSYMBOL_TOKEN_CASE = 62,                /* TOKEN_CASE  */
  YYSYMBOL_TOKEN_DEFAULT = 63,             /* TOKEN_DEFAULT  */
  YYSYMBOL_TOKEN_BREAK = 64,               /* TOKEN_BREAK  */
  YYSYMBOL_TOKEN_WHILE = 65,               /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_FOR = 66,                 /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_CONTINUE = 67,            /* TOKEN_CONTINUE  */
  YYSYMBOL_TOKEN_NEW = 68,                 /* TOKEN_NEW  */
  YYSYMBOL_TOKEN_RETURN = 69,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_PUBLIC = 70,              /* TOKEN_PUBLIC  */
  YYSYMBOL_TOKEN_STATIC = 71,              /* TOKEN_STATIC  */
  YYSYMBOL_72_ = 72,                       /* '+'  */
  YYSYMBOL_73_ = 73,                       /* '-'  */
  YYSYMBOL_74_ = 74,                       /* '&'  */
  YYSYMBOL_75_ = 75,                       /* '^'  */
  YYSYMBOL_76_ = 76,                       /* '|'  */
  YYSYMBOL_77_ = 77,                       /* '*'  */
  YYSYMBOL_78_ = 78,                       /* '/'  */
  YYSYMBOL_79_ = 79,                       /* '%'  */
  YYSYMBOL_NEG = 80,                       /* NEG  */
  YYSYMBOL_CAST = 81,                      /* CAST  */
  YYSYMBOL_82_ = 82,                       /* '.'  */
  YYSYMBOL_83_ = 83,                       /* ';'  */
  YYSYMBOL_84_ = 84,                       /* '('  */
  YYSYMBOL_85_ = 85,                       /* ')'  */
  YYSYMBOL_86_ = 86,                       /* '{'  */
  YYSYMBOL_87_ = 87,                       /* '}'  */
  YYSYMBOL_88_ = 88,                       /* ':'  */
  YYSYMBOL_89_ = 89,                       /* '='  */
  YYSYMBOL_90_ = 90,                       /* ','  */
  YYSYMBOL_91_ = 91,                       /* '['  */
  YYSYMBOL_92_ = 92,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_s = 94,                         /* s  */
  YYSYMBOL_lSentencia = 95,                /* lSentencia  */
  YYSYMBOL_instruccion = 96,               /* instruccion  */
  YYSYMBOL_if_statement = 97,              /* if_statement  */
  YYSYMBOL_switch_statement = 98,          /* switch_statement  */
  YYSYMBOL_while_statement = 99,           /* while_statement  */
  YYSYMBOL_for_statement = 100,            /* for_statement  */
  YYSYMBOL_incremento = 101,               /* incremento  */
  YYSYMBOL_case_list = 102,                /* case_list  */
  YYSYMBOL_case_item = 103,                /* case_item  */
  YYSYMBOL_instrucciones_case = 104,       /* instrucciones_case  */
  YYSYMBOL_instruccion_case = 105,         /* instruccion_case  */
  YYSYMBOL_default_case = 106,             /* default_case  */
  YYSYMBOL_break_statement = 107,          /* break_statement  */
  YYSYMBOL_continue_statement = 108,       /* continue_statement  */
  YYSYMBOL_instruccion_simple = 109,       /* instruccion_simple  */
  YYSYMBOL_asignacion = 110,               /* asignacion  */
  YYSYMBOL_lista_Expr = 111,               /* lista_Expr  */
  YYSYMBOL_imprimir = 112,                 /* imprimir  */
  YYSYMBOL_bloque = 113,                   /* bloque  */
  YYSYMBOL_bloque_for = 114,               /* bloque_for  */
  YYSYMBOL_declaracion_var = 115,          /* declaracion_var  */
  YYSYMBOL_prefix_array_decl = 116,        /* prefix_array_decl  */
  YYSYMBOL_117_1 = 117,                    /* $@1  */
  YYSYMBOL_postfix_array_decl = 118,       /* postfix_array_decl  */
  YYSYMBOL_119_2 = 119,                    /* $@2  */
  YYSYMBOL_final_prefix_array_decl = 120,  /* final_prefix_array_decl  */
  YYSYMBOL_121_3 = 121,                    /* $@3  */
  YYSYMBOL_final_postfix_array_decl = 122, /* final_postfix_array_decl  */
  YYSYMBOL_123_4 = 123,                    /* $@4  */
  YYSYMBOL_var_decl = 124,                 /* var_decl  */
  YYSYMBOL_final_var_decl = 125,           /* final_var_decl  */
  YYSYMBOL_array_prefix_init_opt = 126,    /* array_prefix_init_opt  */
  YYSYMBOL_array_postfix_init_opt = 127,   /* array_postfix_init_opt  */
  YYSYMBOL_prefix_dims = 128,              /* prefix_dims  */
  YYSYMBOL_postfix_dims = 129,             /* postfix_dims  */
  YYSYMBOL_dims_expr_list = 130,           /* dims_expr_list  */
  YYSYMBOL_lista_bloques2D = 131,          /* lista_bloques2D  */
  YYSYMBOL_bloque2D = 132,                 /* bloque2D  */
  YYSYMBOL_filas_lista = 133,              /* filas_lista  */
  YYSYMBOL_fila_matriz = 134,              /* fila_matriz  */
  YYSYMBOL_asignacion_elemento = 135,      /* asignacion_elemento  */
  YYSYMBOL_indices_una = 136,              /* indices_una  */
  YYSYMBOL_indices_multi = 137,            /* indices_multi  */
  YYSYMBOL_expr = 138,                     /* expr  */
  YYSYMBOL_postfix = 139,                  /* postfix  */
  YYSYMBOL_unary = 140,                    /* unary  */
  YYSYMBOL_atom = 141,                     /* atom  */
  YYSYMBOL_join_variadic_args = 142,       /* join_variadic_args  */
  YYSYMBOL_primitivo = 143,                /* primitivo  */
  YYSYMBOL_tipoPrimitivo = 144,            /* tipoPrimitivo  */
  YYSYMBOL_funcion_declaracion = 145,      /* funcion_declaracion  */
  YYSYMBOL_main_declaracion = 146,         /* main_declaracion  */
  YYSYMBOL_main_params_opt = 147,          /* main_params_opt  */
  YYSYMBOL_main_params = 148,              /* main_params  */
  YYSYMBOL_main_param = 149,               /* main_param  */
  YYSYMBOL_main_param_array_brackets = 150, /* main_param_array_brackets  */
  YYSYMBOL_param_opt = 151,                /* param_opt  */
  YYSYMBOL_lista_parametros = 152,         /* lista_parametros  */
  YYSYMBOL_return_stmt = 153,              /* return_stmt  */
  YYSYMBOL_for_each_statement = 154,       /* for_each_statement  */
  YYSYMBOL_argumentos_opt = 155,           /* argumentos_opt  */
  YYSYMBOL_llamada_funcion = 156           /* llamada_funcion  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;


/* Unqualified %code blocks.  */
#line 55 "src/entriesTools/parser.y"

    TipoDato __tmp_decl_tipo; char* __tmp_decl_nombre; int __tmp_decl_final; int __tmp_decl_dims; 

#line 275 "build/parser.tab.c"

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
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

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif (2 < __GNUC__ + (8 <= __GNUC_MINOR__) || defined __clang__ \
        || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  105
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1648

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  399
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 9
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328

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
       2,     2,     2,     2,     2,     2,     2,    79,    74,     2,
      84,    85,    77,    72,    90,    73,    82,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    83,
       2,    89,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    91,     2,    92,    75,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    76,    87,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    80,    81
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   102,   102,   106,   107,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   132,   133,   134,   135,   140,   145,   152,   153,   156,
     157,   165,   166,   167,   168,   169,   170,   174,   175,   176,
     178,   183,   189,   190,   193,   198,   204,   205,   206,   207,
     210,   211,   214,   217,   220,   221,   222,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   237,   238,
     245,   246,   249,   251,   256,   257,   258,   259,   260,   261,
     265,   265,   272,   272,   279,   279,   286,   286,   293,   294,
     297,   300,   301,   308,   309,   310,   311,   312,   315,   317,
     317,   318,   318,   321,   322,   330,   331,   333,   335,   336,
     338,   341,   343,   350,   351,   352,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   392,   393,   394,
     395,   396,   397,   398,   404,   412,   413,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   429,   437,
     438,   439,   440,   441,   442,   443,   446,   447,   448,   449,
     450,   451,   452,   455,   461,   462,   462,   463,   463,   464,
     465,   465,   467,   468,   470,   474,   479,   480,   485,   512,
     513,   515
};
#endif

#define YYPACT_NINF (-273)
#define YYTABLE_NINF (-1)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     483,   -66,  -273,  -273,  -273,   -53,  -273,  -273,  -273,  -273,
     432,  -273,  -273,  -273,  -273,  -273,   270,   -43,  -273,   -24,
     -12,    -8,    18,   -18,     8,    35,    28,    65,    86,   726,
     102,   566,   483,   180,   483,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,   106,   111,  -273,   115,  -273,  -273,  -273,  -273,
    -273,  -273,   116,   -22,  -273,  -273,  -273,    -7,  -273,  -273,
     118,  -273,  -273,   726,    49,  -273,  -273,   726,   726,   726,
     726,   726,   726,   726,   726,   726,   726,   726,   726,   726,
      19,    39,  -273,    -4,   726,   172,   173,   171,   168,   726,
     726,  -273,   726,   301,  -273,   -53,   -16,   726,   726,  1493,
     -61,   183,  1051,   126,   369,  -273,  -273,  -273,  -273,  -273,
    -273,     4,  -273,   726,   -13,   120,    -2,  -273,    29,  1493,
     129,   130,  1493,  1493,  1493,  1493,  1493,  1493,  1493,  1493,
    1493,  1493,   125,   131,  1493,   761,   726,  -273,   726,  -273,
      99,    -1,    31,   134,   136,   137,   138,  1087,  1123,  1159,
     886,   147,   148,     5,  -273,  -273,   726,   726,   726,   726,
     726,   726,   726,   726,   726,   726,   726,   726,   726,   726,
     726,   726,   726,   726,   218,  -273,   746,  -273,   151,  -273,
     152,   769,   270,   726,   146,   149,  -273,  -273,   153,  -273,
     726,   726,   726,  -273,  -273,  1493,  1493,   726,   149,  -273,
    -273,   726,   726,   726,   726,    76,   155,    76,   726,   726,
      38,   108,   108,  1569,  1569,   289,   289,   289,   289,  1537,
    1527,   150,   150,    82,    82,    82,  -273,  -273,  -273,   158,
     159,  -273,   706,   726,  -273,   224,   161,   157,  1493,  -273,
     156,   164,   164,  -273,  1493,  1195,   930,  1493,   164,   164,
    1231,  1267,  1303,   971,   167,  -273,  -273,   195,  -273,    10,
     199,  -273,  -273,  1447,  1481,   242,   270,  -273,  1339,  1375,
    -273,   176,   270,  -273,   620,  -273,  -273,  -273,  -273,   726,
    -273,  -273,  -273,  -273,  -273,   726,   208,   -50,   104,   726,
     -35,  -273,   254,   -10,   185,  -273,   186,   188,  -273,  -273,
    -273,  -273,   258,   270,   587,  1493,   889,   196,  1411,   -50,
    -273,  -273,  1012,   194,  -273,  -273,   198,   402,   207,  -273,
     536,   209,   176,    11,   176,   270,  -273,   205,   641,  -273,
     -28,    33,  -273,    66,  -273,  -273,   726,  -273,  -273,  -273,
    -273,    76,    76,  -273,  -273,  -273,    76,   483,  -273,  -273,
     536,  -273,  -273,   206,  -273,  -273,   726,   210,   726,    67,
      81,  -273,  -273,   211,  -273,   213,   125,   336,  -273,   217,
     219,  -273,   221,   510,  -273,  -273,   398,  -273,  -273,  -273,
     825,   726,  -273,  -273,   213,  -273,  -273,   225,  -273,  -273,
    -273,  -273,   226,  -273,  -273,   833,  -273,  -273,  -273
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   166,   167,   168,   169,   159,   162,   161,   160,
     149,   164,   165,   170,   171,   163,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
       0,     0,     0,     0,     2,     4,     5,     6,     8,     9,
       7,    20,     0,     0,    12,     0,    74,    75,    76,    77,
      78,    79,     0,     0,   137,   145,   147,     0,    14,    15,
       0,    10,   150,     0,     0,   143,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,     0,   169,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    53,     0,   149,     0,     0,   187,
     136,     0,     0,     0,     0,     1,     3,    17,    11,    13,
      18,     0,    19,     0,    89,     0,     0,    16,     0,    69,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,   190,     0,    57,     0,     0,   114,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   148,     0,    72,     0,   139,
       0,     0,   182,     0,     0,    82,    99,    80,     0,    70,
       0,     0,     0,   191,   113,   111,   112,     0,    86,    84,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   116,   117,   121,   123,   122,   118,   119,   120,     0,
     149,   146,     0,     0,   138,     0,     0,   183,    88,   101,
       0,    91,    91,   100,    68,     0,     0,    90,    91,    91,
       0,     0,     0,     0,     0,    56,    54,    21,    55,     0,
       0,    30,    29,     0,     0,     0,   175,   142,     0,     0,
     184,     0,     0,   102,     0,    98,    83,    81,   155,     0,
      87,    85,   152,   153,   154,     0,    24,     0,    89,     0,
       0,    40,     0,     0,     0,   180,     0,   176,   177,   141,
     140,   173,     0,     0,     0,    97,     0,     0,     0,     0,
      23,    22,     0,     0,    27,    41,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,   185,     0,     0,    96,
       0,     0,   105,     0,   108,   156,     0,   157,   151,    26,
      25,     0,     0,    28,    38,    39,     0,     0,    34,    33,
       0,   188,   179,     0,   174,   178,     0,    92,     0,     0,
       0,    93,    95,     0,    94,     0,   158,    42,    44,     0,
       0,    47,     0,    50,    36,    35,     0,    32,    31,   181,
       0,     0,   110,   107,     0,   106,   109,     0,    45,    49,
      46,    48,     0,    73,   103,     0,    43,    51,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,  -273,   -30,   -27,  -272,  -273,  -273,  -273,    14,  -273,
      25,   -21,  -264,  -273,  -273,  -273,  -195,   -83,   -60,  -150,
     -90,   -23,   -55,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -186,    75,   243,   189,  -273,  -273,   -33,
      24,   -32,  -273,    83,  -273,   -25,     1,   160,  -273,  -273,
    -273,     0,  -273,  -273,  -273,  -273,     7,  -273,  -273,  -273,
    -273,  -273,  -273,  -273
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    33,    34,    35,    36,    37,    38,    39,   318,   290,
     291,   367,   368,   316,    40,    41,   254,    42,   359,    43,
      44,   349,    45,    46,   242,    47,   241,    48,   249,    49,
     248,    50,    51,   275,   276,   116,   185,   357,   331,   332,
     360,   334,    52,    80,    81,   119,   100,    54,    55,   307,
      56,   259,    58,    59,   296,   297,   298,   323,   236,   237,
      60,    61,   133,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    53,   104,   118,    99,   317,   102,   106,   114,    23,
     151,   140,   261,   187,   199,   310,    83,   132,    63,   178,
     210,   111,    65,    66,   142,   288,   352,   289,   313,    64,
     113,   103,    57,    53,    57,    53,    32,   339,   152,   179,
     180,    84,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   314,   134,   135,   256,   277,   256,    85,   361,
     111,   112,   190,   281,   147,   148,    89,   149,    77,   113,
      86,   182,   154,   155,    87,   320,   183,   106,   184,     1,
       2,     3,   120,   121,   115,     4,    82,   115,   181,   188,
     188,   150,    90,   153,    13,    14,   115,    16,    17,    18,
      88,   115,   353,   388,    57,    53,   156,   157,   136,   388,
      79,   195,    92,   196,   189,   257,   200,   262,    91,   190,
     362,   190,   255,   363,   255,   348,   265,   183,   138,   184,
      79,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,    93,
     258,   374,   258,   364,   382,   377,   365,   190,   238,   171,
     172,   173,    32,   137,   139,   244,   245,   246,   383,    94,
     256,   365,   247,   101,   156,   157,   250,   251,   252,   253,
     105,   301,   235,   263,   264,   171,   172,   173,   197,   107,
     184,   370,   370,   183,   108,   184,   256,   311,   109,   110,
     256,   117,   143,   145,   144,   146,   174,   268,   269,   319,
     319,   176,   186,   191,   192,   190,   193,   370,   201,   340,
     202,   203,   204,   370,   168,   169,   170,   171,   172,   173,
     208,   209,   351,   229,   354,   232,   233,   255,   239,   270,
     240,   260,   266,    77,   330,   243,   271,   272,   273,   305,
     286,   371,   371,   274,   306,   287,   375,   294,   369,   369,
     308,   289,    32,   255,   312,   258,   295,   255,   309,   317,
     322,   324,   302,   326,     2,     3,   366,   371,   325,     4,
      82,   337,   342,   371,   369,   343,   372,   372,    13,    14,
     369,   258,   346,    18,   350,   258,   356,   384,   379,   358,
     389,   381,   390,   327,   391,     2,     3,   321,   396,   397,
       4,    82,   372,   156,   157,   315,   150,   376,   372,    13,
      14,   373,    16,   280,    18,   295,   141,   378,   333,   198,
     385,   380,   355,   386,     0,     0,   231,     0,     0,     1,
       2,     3,     0,     0,     0,     4,    82,    57,    53,   106,
       0,   150,     0,     0,    13,    14,   395,    16,    17,    18,
       0,   166,   167,   168,   169,   170,   171,   172,   173,     0,
       0,     0,     1,     2,     3,     0,    57,    53,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     0,     0,    19,    20,    21,    22,     0,
     387,     1,     2,     3,     0,     0,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    32,     0,    19,    20,    21,    22,    23,     0,
      24,     0,     0,    25,    26,    27,    28,     0,    29,    30,
     344,   345,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,    31,     0,    32,   177,    23,     0,    24,
       0,     0,    25,    26,    27,    28,     0,    29,    30,     0,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    31,     0,    32,   393,     1,     2,     3,     0,
       0,    78,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     0,     0,    19,
      20,    21,    22,     1,     2,     3,    77,     0,     0,     4,
      82,    78,     0,    79,     0,   150,     0,     0,    13,    14,
       0,    16,    17,    18,     0,     0,     0,     0,     0,     1,
       2,     3,    23,     0,    24,     4,    82,    25,    26,    27,
      28,   150,    29,    30,    13,    14,     0,    16,    17,    18,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    32,
       2,     3,     0,     0,   392,     4,     5,     6,     7,     8,
       9,    96,    11,    12,    13,    14,    15,     0,     0,    18,
       0,     0,    19,    20,    21,    22,    32,    95,     6,     7,
       8,     9,    96,    11,    12,     0,     0,    15,     0,     0,
       0,     0,     0,    19,    20,    21,    22,     0,     0,     0,
       0,     0,   347,     0,    97,     0,     0,     0,     0,     0,
      95,     6,     7,     8,     9,    96,    11,    12,     0,    98,
      15,     0,     0,     0,     0,    97,    19,    20,    21,    22,
      31,    95,     6,     7,     8,     9,    96,    11,    12,     0,
      98,    15,     0,     0,     0,     0,     0,    19,    20,    21,
      22,    31,     0,   328,   329,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   303,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,    31,     0,   304,     0,     0,     0,
       0,     0,     0,     0,    98,     0,    95,     6,     7,     8,
       9,    96,    11,    12,     0,    31,    15,   358,     0,     0,
       0,     0,    19,    20,    21,    22,    95,     6,     7,     8,
       9,    96,    11,    12,     0,     0,    15,     0,     0,     0,
       0,     0,    19,    20,    21,    22,    95,     6,     7,     8,
       9,   230,    11,    12,    97,     0,    15,     0,     0,     0,
       0,     0,    19,    20,    21,    22,     0,     0,     0,    98,
       0,     0,     0,     0,    97,   156,   157,     0,     0,     0,
      31,   267,     0,   156,   157,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,   158,   159,   160,   161,   162,   163,   164,   165,   158,
     159,   160,   161,   162,   163,   164,   165,     0,     0,     0,
      31,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   166,   167,   168,   169,   170,   171,   172,   173,   156,
     157,     0,     0,   194,     0,     0,     0,   156,   157,     0,
       0,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,   159,   160,   161,   162,
     163,   164,   165,   158,   159,   160,   161,   162,   163,   164,
     165,     0,     0,     0,     0,     0,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   166,   167,   168,   169,   170,
     171,   172,   173,   156,   157,     0,     0,   394,     0,     0,
       0,     0,     0,     0,     0,   398,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     0,     0,   158,
     159,   160,   161,   162,   163,   164,   165,     0,     0,     0,
       0,     0,     0,     0,   156,   157,     0,     0,     0,     0,
       0,   166,   167,   168,   169,   170,   171,   172,   173,     0,
       0,     0,     0,     0,   335,    78,     0,     0,     0,   336,
     158,   159,   160,   161,   162,   163,   164,   165,     0,     0,
       0,     0,     0,     0,     0,   156,   157,     0,     0,     0,
       0,     0,   166,   167,   168,   169,   170,   171,   172,   173,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     279,   158,   159,   160,   161,   162,   163,   164,   165,     0,
       0,     0,     0,     0,     0,     0,   156,   157,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   285,   158,   159,   160,   161,   162,   163,   164,   165,
       0,     0,     0,     0,     0,   156,   157,     0,     0,     0,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,     0,     0,     0,     0,     0,     0,     0,     0,
     341,   158,   159,   160,   161,   162,   163,   164,   165,     0,
       0,   156,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,     0,     0,     0,     0,     0,   175,   158,   159,   160,
     161,   162,   163,   164,   165,     0,     0,   156,   157,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   168,   169,   170,   171,   172,   173,     0,     0,     0,
       0,     0,   205,   158,   159,   160,   161,   162,   163,   164,
     165,     0,     0,   156,   157,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,   173,     0,     0,     0,     0,     0,   206,   158,
     159,   160,   161,   162,   163,   164,   165,     0,     0,   156,
     157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   167,   168,   169,   170,   171,   172,   173,     0,
       0,     0,     0,     0,   207,   158,   159,   160,   161,   162,
     163,   164,   165,     0,     0,   156,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   167,   168,
     169,   170,   171,   172,   173,     0,     0,     0,     0,     0,
     278,   158,   159,   160,   161,   162,   163,   164,   165,     0,
       0,   156,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,     0,     0,     0,     0,     0,   282,   158,   159,   160,
     161,   162,   163,   164,   165,     0,     0,   156,   157,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   168,   169,   170,   171,   172,   173,     0,     0,     0,
       0,     0,   283,   158,   159,   160,   161,   162,   163,   164,
     165,     0,     0,   156,   157,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,   173,     0,     0,     0,     0,     0,   284,   158,
     159,   160,   161,   162,   163,   164,   165,     0,     0,   156,
     157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   167,   168,   169,   170,   171,   172,   173,     0,
       0,     0,     0,     0,   299,   158,   159,   160,   161,   162,
     163,   164,   165,     0,     0,   156,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   167,   168,
     169,   170,   171,   172,   173,     0,     0,     0,     0,     0,
     300,   158,   159,   160,   161,   162,   163,   164,   165,     0,
       0,   156,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,     0,     0,     0,     0,     0,   338,   158,   159,   160,
     161,   162,   163,   164,   165,   156,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   156,   157,   166,
     167,   168,   169,   170,   171,   172,   173,     0,     0,     0,
     292,   158,   159,   160,   161,   162,   163,   164,   165,     0,
       0,     0,     0,   158,   159,   160,   161,   162,   163,   164,
     165,   156,   157,   166,   167,   168,   169,   170,   171,   172,
     173,   156,   157,     0,   293,   166,   167,   168,   169,   170,
     171,   172,   173,     0,     0,     0,     0,   158,   159,   160,
     161,   162,   163,   164,     0,     0,     0,   158,   159,   160,
     161,   162,   163,   156,   157,     0,     0,     0,     0,   166,
     167,   168,   169,   170,   171,   172,   173,     0,     0,   166,
     167,   168,   169,   170,   171,   172,   173,     0,     0,     0,
       0,   160,   161,   162,   163,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   167,   168,   169,   170,   171,   172,   173
};

static const yytype_int16 yycheck[] =
{
       0,     0,    32,    63,    29,    15,    31,    34,    15,    59,
      93,    15,   207,    15,    15,   287,    16,    77,    84,    15,
      15,    82,    38,    39,    84,    15,    15,    62,    63,    82,
      91,    31,    32,    32,    34,    34,    86,   309,    93,    35,
      36,    84,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    87,    78,    79,   205,   242,   207,    82,    87,
      82,    83,    90,   249,    89,    90,    84,    92,    84,    91,
      82,    84,    97,    98,    82,    85,    89,   104,    91,     3,
       4,     5,    33,    34,    91,     9,    10,    91,   113,    91,
      91,    15,    84,    93,    18,    19,    91,    21,    22,    23,
      82,    91,    91,   367,   104,   104,    24,    25,    89,   373,
      91,   136,    84,   138,    85,   205,    85,   207,    83,    90,
      87,    90,   205,    90,   207,   320,    88,    89,    89,    91,
      91,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,    84,
     205,   346,   207,    87,    87,   350,    90,    90,   183,    77,
      78,    79,    86,    80,    81,   190,   191,   192,    87,    83,
     320,    90,   197,    71,    24,    25,   201,   202,   203,   204,
       0,   271,   182,   208,   209,    77,    78,    79,    89,    83,
      91,   341,   342,    89,    83,    91,   346,   287,    83,    83,
     350,    83,    30,    32,    31,    37,    23,   232,   233,   292,
     293,    85,    92,    84,    84,    90,    85,   367,    84,   309,
      84,    84,    84,   373,    74,    75,    76,    77,    78,    79,
      83,    83,   322,    15,   324,    84,    84,   320,    92,    15,
      91,    86,    84,    84,   304,    92,    85,    90,    92,   274,
      83,   341,   342,    89,   279,    60,   346,    15,   341,   342,
     285,    62,    86,   346,   289,   320,   266,   350,    60,    15,
      85,    85,   272,    15,     4,     5,   336,   367,    90,     9,
      10,    85,    88,   373,   367,    87,   341,   342,    18,    19,
     373,   346,    85,    23,    85,   350,    91,    86,    92,    86,
      83,    91,    83,   303,    83,     4,     5,   293,    83,    83,
       9,    10,   367,    24,    25,   290,    15,   347,   373,    18,
      19,   342,    21,   248,    23,   325,    83,   350,   304,   140,
     363,   356,   325,   365,    -1,    -1,   176,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,     9,    10,   347,   347,   376,
      -1,    15,    -1,    -1,    18,    19,   381,    21,    22,    23,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,     3,     4,     5,    -1,   376,   376,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    26,    27,    28,    29,    -1,
      64,     3,     4,     5,    -1,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    86,    -1,    26,    27,    28,    29,    59,    -1,
      61,    -1,    -1,    64,    65,    66,    67,    -1,    69,    70,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    84,    -1,    86,    87,    59,    -1,    61,
      -1,    -1,    64,    65,    66,    67,    -1,    69,    70,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    84,    -1,    86,    87,     3,     4,     5,    -1,
      -1,    89,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    26,
      27,    28,    29,     3,     4,     5,    84,    -1,    -1,     9,
      10,    89,    -1,    91,    -1,    15,    -1,    -1,    18,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    59,    -1,    61,     9,    10,    64,    65,    66,
      67,    15,    69,    70,    18,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
       4,     5,    -1,    -1,    64,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    26,    27,    28,    29,    86,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    73,
      20,    -1,    -1,    -1,    -1,    58,    26,    27,    28,    29,
      84,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      73,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    84,    -1,    86,    87,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    84,    20,    86,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    10,    11,    12,    13,
      14,    15,    16,    17,    58,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    58,    24,    25,    -1,    -1,    -1,
      84,    85,    -1,    24,    25,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    50,    51,    52,    53,    54,    55,    56,    57,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      84,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    72,    73,    74,    75,    76,    77,    78,    79,    24,
      25,    -1,    -1,    92,    -1,    -1,    -1,    24,    25,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    72,    73,    74,    75,    76,
      77,    78,    79,    24,    25,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,    85,    89,    -1,    -1,    -1,    90,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    85,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    85,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,    85,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,
      85,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    85,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    85,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,    85,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,
      85,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    85,    50,    51,    52,
      53,    54,    55,    56,    57,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      83,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    24,    25,    72,    73,    74,    75,    76,    77,    78,
      79,    24,    25,    -1,    83,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    24,    25,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    26,
      27,    28,    29,    59,    61,    64,    65,    66,    67,    69,
      70,    84,    86,    94,    95,    96,    97,    98,    99,   100,
     107,   108,   110,   112,   113,   115,   116,   118,   120,   122,
     124,   125,   135,   139,   140,   141,   143,   144,   145,   146,
     153,   154,   156,    84,    82,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    84,    89,    91,
     136,   137,    10,   144,    84,    82,    82,    82,    82,    84,
      84,    83,    84,    84,    83,    10,    15,    58,    73,   138,
     139,    71,   138,   144,    95,     0,    96,    83,    83,    83,
      83,    82,    83,    91,    15,    91,   128,    83,   111,   138,
      33,    34,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   111,   155,   138,   138,    89,   136,    89,   136,
      15,   128,   111,    30,    31,    32,    37,   138,   138,   138,
      15,   110,   115,   144,   138,   138,    24,    25,    50,    51,
      52,    53,    54,    55,    56,    57,    72,    73,    74,    75,
      76,    77,    78,    79,    23,    85,    85,    87,    15,    35,
      36,   138,    84,    89,    91,   129,    92,    15,    91,    85,
      90,    84,    84,    85,    92,   138,   138,    89,   129,    15,
      85,    84,    84,    84,    84,    85,    85,    85,    83,    83,
      15,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,    15,
      15,   140,    84,    84,    92,   144,   151,   152,   138,    92,
      91,   119,   117,    92,   138,   138,   138,   138,   123,   121,
     138,   138,   138,   138,   109,   110,   112,   113,   115,   144,
      86,   109,   113,   138,   138,    88,    84,    85,   138,   138,
      15,    85,    90,    92,    89,   126,   127,   126,    85,    90,
     127,   126,    85,    85,    85,    90,    83,    60,    15,    62,
     102,   103,    83,    83,    15,   144,   147,   148,   149,    85,
      85,   113,   144,    68,    86,   138,   138,   142,   138,    60,
      97,   113,   138,    63,    87,   103,   106,    15,   101,   110,
      85,   101,    85,   150,    85,    90,    15,   144,    86,    87,
     111,   131,   132,   133,   134,    85,    90,    85,    85,    97,
     113,    88,    88,    87,    38,    39,    85,    86,   109,   114,
      85,   113,    15,    91,   113,   149,    91,   130,    86,   111,
     133,    87,    87,    90,    87,    90,   111,   104,   105,   110,
     112,   113,   115,   104,   109,   113,    95,   109,   114,    92,
     138,    91,    87,    87,    86,   132,   134,    64,   105,    83,
      83,    83,    64,    87,    92,   138,    83,    83,    92
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     106,   106,   107,   108,   109,   109,   109,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   111,   111,
     112,   112,   113,   114,   115,   115,   115,   115,   115,   115,
     117,   116,   119,   118,   121,   120,   123,   122,   124,   124,
     125,   126,   126,   126,   126,   126,   126,   126,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   132,   133,   133,
     134,   135,   135,   136,   137,   137,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   142,   143,
     143,   143,   143,   143,   143,   143,   144,   144,   144,   144,
     144,   144,   144,   145,   146,   147,   147,   148,   148,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   155,
     155,   156
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       1,     5,     7,     7,     6,     8,     8,     7,     8,     5,
       5,     9,     9,     8,     8,     9,     9,     1,     2,     2,
       1,     2,     4,     6,     1,     2,     2,     1,     2,     2,
       3,     5,     2,     2,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       4,     4,     3,     3,     1,     1,     1,     1,     1,     1,
       0,     5,     0,     5,     0,     6,     0,     6,     4,     2,
       5,     0,     4,     4,     4,     4,     3,     2,     1,     2,
       3,     2,     3,     3,     4,     1,     3,     3,     1,     3,
       3,     4,     4,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     1,     4,     3,
       6,     6,     5,     2,     2,     1,     4,     1,     3,     1,
       1,     8,     6,     6,     6,     6,     8,     8,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     8,     0,     1,     1,     3,     3,
       0,     3,     0,     1,     2,     4,     1,     2,     8,     0,
       1,     4
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,   149,     0,   149,     0,   149,     0
};


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

# define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)


YYSTYPE yylval;
YYLTYPE yylloc;

int yynerrs;
int yychar;

enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr, yynomem } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState
{
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yyval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yyval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet
{
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption
{
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if 1
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
  "TOKEN_SYSTEM_OUT_PRINTLN", "TOKEN_DVOID", "TOKEN_SHIFT_LEFT",
  "TOKEN_SHIFT_RIGHT", "TOKEN_INTEGER_CLASS", "TOKEN_DOUBLE_CLASS",
  "TOKEN_FLOAT_CLASS", "TOKEN_ARRAYS", "TOKEN_PARSE_INT",
  "TOKEN_PARSE_DOUBLE", "TOKEN_PARSE_FLOAT", "TOKEN_VALUE_OF",
  "TOKEN_JOIN", "TOKEN_LENGTH", "TOKEN_ADD", "TOKEN_INDEXOF",
  "TOKEN_PLUS_PLUS", "TOKEN_MINUS_MINUS", "TOKEN_PLUS_ASSIGN",
  "TOKEN_MINUS_ASSIGN", "TOKEN_MUL_ASSIGN", "TOKEN_DIV_ASSIGN",
  "TOKEN_MOD_ASSIGN", "TOKEN_AND_ASSIGN", "TOKEN_OR_ASSIGN",
  "TOKEN_XOR_ASSIGN", "TOKEN_SHL_ASSIGN", "TOKEN_SHR_ASSIGN",
  "TOKEN_EQUAL", "TOKEN_NOT_EQUAL", "TOKEN_GREATER", "TOKEN_LESS",
  "TOKEN_GREATER_EQUAL", "TOKEN_LESS_EQUAL", "TOKEN_AND", "TOKEN_OR",
  "TOKEN_NOT", "TOKEN_IF", "TOKEN_ELSE", "TOKEN_SWITCH", "TOKEN_CASE",
  "TOKEN_DEFAULT", "TOKEN_BREAK", "TOKEN_WHILE", "TOKEN_FOR",
  "TOKEN_CONTINUE", "TOKEN_NEW", "TOKEN_RETURN", "TOKEN_PUBLIC",
  "TOKEN_STATIC", "'+'", "'-'", "'&'", "'^'", "'|'", "'*'", "'/'", "'%'",
  "NEG", "CAST", "'.'", "';'", "'('", "')'", "'{'", "'}'", "':'", "'='",
  "','", "'['", "']'", "$accept", "s", "lSentencia", "instruccion",
  "if_statement", "switch_statement", "while_statement", "for_statement",
  "incremento", "case_list", "case_item", "instrucciones_case",
  "instruccion_case", "default_case", "break_statement",
  "continue_statement", "instruccion_simple", "asignacion", "lista_Expr",
  "imprimir", "bloque", "bloque_for", "declaracion_var",
  "prefix_array_decl", "$@1", "postfix_array_decl", "$@2",
  "final_prefix_array_decl", "$@3", "final_postfix_array_decl", "$@4",
  "var_decl", "final_var_decl", "array_prefix_init_opt",
  "array_postfix_init_opt", "prefix_dims", "postfix_dims",
  "dims_expr_list", "lista_bloques2D", "bloque2D", "filas_lista",
  "fila_matriz", "asignacion_elemento", "indices_una", "indices_multi",
  "expr", "postfix", "unary", "atom", "join_variadic_args", "primitivo",
  "tipoPrimitivo", "funcion_declaracion", "main_declaracion",
  "main_params_opt", "main_params", "main_param",
  "main_param_array_brackets", "param_opt", "lista_parametros",
  "return_stmt", "for_each_statement", "argumentos_opt", "llamada_funcion", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
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

# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value, Location);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule);

# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_REDUCE_PRINT(Args)

#endif /* !YYDEBUG */

#ifndef yystrlen
# define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
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


/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yyval = s->yysemantics.yyval;
      else
        /* The effect of using yyval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp)
{
  yysymbol_kind_t yytoken;
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
      *yycharp = yylex ();
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT, yynomem for YYNOMEM.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyrule, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp, YYPTRDIFF_T yyk,
              YYSTYPE* yyvalp, YYLTYPE *yylocp)
{
  const yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow = 1;
  YY_USE (yyvalp);
  YY_USE (yylocp);
  YY_USE (yyk);
  YY_USE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYNOMEM
# define YYNOMEM return yynomem
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yyval;
  /* Default location. */
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;
  /* If yyk == -1, we are running a deferred action on a temporary
     stack.  In that case, YY_REDUCE_PRINT must not play with YYFILL,
     so pretend the stack is "normal". */
  YY_REDUCE_PRINT ((yynormal || yyk == -1, yyvsp, yyk, yyrule));
  switch (yyrule)
    {
  case 2: /* s: lSentencia  */
#line 102 "src/entriesTools/parser.y"
               { ast_root = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 2053 "build/parser.tab.c"
    break;

  case 3: /* lSentencia: lSentencia instruccion  */
#line 106 "src/entriesTools/parser.y"
                                   { agregarHijo((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo);}
#line 2059 "build/parser.tab.c"
    break;

  case 4: /* lSentencia: instruccion  */
#line 107 "src/entriesTools/parser.y"
                  {
                        AbstractExpresion* b = nuevoInstruccionesExpresion();
                        agregarHijo(b, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo));
                        ((*yyvalp).nodo) =  b;
                    }
#line 2069 "build/parser.tab.c"
    break;

  case 5: /* instruccion: if_statement  */
#line 114 "src/entriesTools/parser.y"
                          {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2075 "build/parser.tab.c"
    break;

  case 6: /* instruccion: switch_statement  */
#line 115 "src/entriesTools/parser.y"
                       {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2081 "build/parser.tab.c"
    break;

  case 7: /* instruccion: break_statement  */
#line 116 "src/entriesTools/parser.y"
                      {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2087 "build/parser.tab.c"
    break;

  case 8: /* instruccion: while_statement  */
#line 117 "src/entriesTools/parser.y"
                      {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2093 "build/parser.tab.c"
    break;

  case 9: /* instruccion: for_statement  */
#line 118 "src/entriesTools/parser.y"
                    {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2099 "build/parser.tab.c"
    break;

  case 10: /* instruccion: for_each_statement  */
#line 119 "src/entriesTools/parser.y"
                         {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2105 "build/parser.tab.c"
    break;

  case 11: /* instruccion: imprimir ';'  */
#line 120 "src/entriesTools/parser.y"
                   {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo); }
#line 2111 "build/parser.tab.c"
    break;

  case 12: /* instruccion: bloque  */
#line 121 "src/entriesTools/parser.y"
             {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2117 "build/parser.tab.c"
    break;

  case 13: /* instruccion: declaracion_var ';'  */
#line 122 "src/entriesTools/parser.y"
                          {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo);}
#line 2123 "build/parser.tab.c"
    break;

  case 14: /* instruccion: funcion_declaracion  */
#line 123 "src/entriesTools/parser.y"
                          {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2129 "build/parser.tab.c"
    break;

  case 15: /* instruccion: main_declaracion  */
#line 124 "src/entriesTools/parser.y"
                       {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2135 "build/parser.tab.c"
    break;

  case 16: /* instruccion: return_stmt ';'  */
#line 125 "src/entriesTools/parser.y"
                      {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo);}
#line 2141 "build/parser.tab.c"
    break;

  case 17: /* instruccion: asignacion ';'  */
#line 126 "src/entriesTools/parser.y"
                     {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo);}
#line 2147 "build/parser.tab.c"
    break;

  case 18: /* instruccion: asignacion_elemento ';'  */
#line 127 "src/entriesTools/parser.y"
                              {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo);}
#line 2153 "build/parser.tab.c"
    break;

  case 19: /* instruccion: postfix ';'  */
#line 128 "src/entriesTools/parser.y"
                  { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo); }
#line 2159 "build/parser.tab.c"
    break;

  case 20: /* instruccion: continue_statement  */
#line 129 "src/entriesTools/parser.y"
                         {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2165 "build/parser.tab.c"
    break;

  case 21: /* if_statement: TOKEN_IF '(' expr ')' bloque  */
#line 132 "src/entriesTools/parser.y"
                                           { ((*yyvalp).nodo) = nuevoIfExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo), NULL); }
#line 2171 "build/parser.tab.c"
    break;

  case 22: /* if_statement: TOKEN_IF '(' expr ')' bloque TOKEN_ELSE bloque  */
#line 133 "src/entriesTools/parser.y"
                                                     { ((*yyvalp).nodo) = nuevoIfExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2177 "build/parser.tab.c"
    break;

  case 23: /* if_statement: TOKEN_IF '(' expr ')' bloque TOKEN_ELSE if_statement  */
#line 134 "src/entriesTools/parser.y"
                                                           { ((*yyvalp).nodo) = nuevoIfExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2183 "build/parser.tab.c"
    break;

  case 24: /* if_statement: TOKEN_IF '(' expr ')' instruccion_simple ';'  */
#line 135 "src/entriesTools/parser.y"
                                                   { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo));
        ((*yyvalp).nodo) = nuevoIfExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo), nuevoBloqueExpresion(b), NULL); 
    }
#line 2193 "build/parser.tab.c"
    break;

  case 25: /* if_statement: TOKEN_IF '(' expr ')' instruccion_simple ';' TOKEN_ELSE bloque  */
#line 140 "src/entriesTools/parser.y"
                                                                     { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo));
        ((*yyvalp).nodo) = nuevoIfExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.nodo), nuevoBloqueExpresion(b), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); 
    }
#line 2203 "build/parser.tab.c"
    break;

  case 26: /* if_statement: TOKEN_IF '(' expr ')' instruccion_simple ';' TOKEN_ELSE if_statement  */
#line 145 "src/entriesTools/parser.y"
                                                                           { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo));
        ((*yyvalp).nodo) = nuevoIfExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.nodo), nuevoBloqueExpresion(b), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); 
    }
#line 2213 "build/parser.tab.c"
    break;

  case 27: /* switch_statement: TOKEN_SWITCH '(' expr ')' '{' case_list '}'  */
#line 152 "src/entriesTools/parser.y"
                                                              { ((*yyvalp).nodo) = nuevoSwitchExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo), NULL); }
#line 2219 "build/parser.tab.c"
    break;

  case 28: /* switch_statement: TOKEN_SWITCH '(' expr ')' '{' case_list default_case '}'  */
#line 153 "src/entriesTools/parser.y"
                                                               { ((*yyvalp).nodo) = nuevoSwitchExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2225 "build/parser.tab.c"
    break;

  case 29: /* while_statement: TOKEN_WHILE '(' expr ')' bloque  */
#line 156 "src/entriesTools/parser.y"
                                                 { ((*yyvalp).nodo) = nuevoWhileExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2231 "build/parser.tab.c"
    break;

  case 30: /* while_statement: TOKEN_WHILE '(' expr ')' instruccion_simple  */
#line 157 "src/entriesTools/parser.y"
                                                  { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo));
        ((*yyvalp).nodo) = nuevoWhileExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), nuevoBloqueExpresion(b)); 
    }
#line 2241 "build/parser.tab.c"
    break;

  case 31: /* for_statement: TOKEN_FOR '(' declaracion_var ';' expr ';' incremento ')' bloque_for  */
#line 165 "src/entriesTools/parser.y"
                                                                         { ((*yyvalp).nodo)=nuevoForExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2247 "build/parser.tab.c"
    break;

  case 32: /* for_statement: TOKEN_FOR '(' declaracion_var ';' expr ';' incremento ')' instruccion_simple  */
#line 166 "src/entriesTools/parser.y"
                                                                               { AbstractExpresion* b=nuevoListaExpresiones(); agregarHijo(b,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo)=nuevoForExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo),nuevoBloqueExpresionConContextoPadre(b)); }
#line 2253 "build/parser.tab.c"
    break;

  case 33: /* for_statement: TOKEN_FOR '(' declaracion_var ';' expr ';' ')' bloque_for  */
#line 167 "src/entriesTools/parser.y"
                                                            { ((*yyvalp).nodo)=nuevoForExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo),NULL,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2259 "build/parser.tab.c"
    break;

  case 34: /* for_statement: TOKEN_FOR '(' declaracion_var ';' expr ';' ')' instruccion_simple  */
#line 168 "src/entriesTools/parser.y"
                                                                    { AbstractExpresion* b=nuevoListaExpresiones(); agregarHijo(b,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo)=nuevoForExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo),NULL,nuevoBloqueExpresionConContextoPadre(b)); }
#line 2265 "build/parser.tab.c"
    break;

  case 35: /* for_statement: TOKEN_FOR '(' asignacion ';' expr ';' incremento ')' bloque  */
#line 169 "src/entriesTools/parser.y"
                                                              { ((*yyvalp).nodo)=nuevoForExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2271 "build/parser.tab.c"
    break;

  case 36: /* for_statement: TOKEN_FOR '(' asignacion ';' expr ';' incremento ')' instruccion_simple  */
#line 170 "src/entriesTools/parser.y"
                                                                          { AbstractExpresion* b=nuevoListaExpresiones(); agregarHijo(b,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo)=nuevoForExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo),nuevoBloqueExpresion(b)); }
#line 2277 "build/parser.tab.c"
    break;

  case 37: /* incremento: asignacion  */
#line 174 "src/entriesTools/parser.y"
                   { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 2283 "build/parser.tab.c"
    break;

  case 38: /* incremento: TOKEN_IDENTIFIER TOKEN_PLUS_PLUS  */
#line 175 "src/entriesTools/parser.y"
                                       { AbstractExpresion* id= nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.string)); AbstractExpresion* uno=nuevoPrimitivoExpresion(strdup("1"),INT); AbstractExpresion* sum=nuevoSumaExpresion(id,uno); ((*yyvalp).nodo)=nuevoAsignacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.string),sum);}
#line 2289 "build/parser.tab.c"
    break;

  case 39: /* incremento: TOKEN_IDENTIFIER TOKEN_MINUS_MINUS  */
#line 176 "src/entriesTools/parser.y"
                                         { AbstractExpresion* id= nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.string)); AbstractExpresion* uno=nuevoPrimitivoExpresion(strdup("1"),INT); AbstractExpresion* res=nuevoRestaExpresion(id,uno); ((*yyvalp).nodo)=nuevoAsignacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.string),res);}
#line 2295 "build/parser.tab.c"
    break;

  case 40: /* case_list: case_item  */
#line 178 "src/entriesTools/parser.y"
                     { 
        AbstractExpresion* lista = nuevoListaExpresiones();
        agregarHijo(lista, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo));
        ((*yyvalp).nodo) = lista;
    }
#line 2305 "build/parser.tab.c"
    break;

  case 41: /* case_list: case_list case_item  */
#line 183 "src/entriesTools/parser.y"
                          {
        agregarHijo((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo));
        ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo);
    }
#line 2314 "build/parser.tab.c"
    break;

  case 42: /* case_item: TOKEN_CASE expr ':' instrucciones_case  */
#line 189 "src/entriesTools/parser.y"
                                                  { ((*yyvalp).nodo) = nuevoCaseExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo), 0); }
#line 2320 "build/parser.tab.c"
    break;

  case 43: /* case_item: TOKEN_CASE expr ':' instrucciones_case TOKEN_BREAK ';'  */
#line 190 "src/entriesTools/parser.y"
                                                             { ((*yyvalp).nodo) = nuevoCaseExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), 1); }
#line 2326 "build/parser.tab.c"
    break;

  case 44: /* instrucciones_case: instruccion_case  */
#line 193 "src/entriesTools/parser.y"
                                     {
        AbstractExpresion* lista = nuevoListaExpresiones();
        agregarHijo(lista, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo));
        ((*yyvalp).nodo) = lista;
    }
#line 2336 "build/parser.tab.c"
    break;

  case 45: /* instrucciones_case: instrucciones_case instruccion_case  */
#line 198 "src/entriesTools/parser.y"
                                          {
        agregarHijo((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo));
        ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo);
    }
#line 2345 "build/parser.tab.c"
    break;

  case 46: /* instruccion_case: imprimir ';'  */
#line 204 "src/entriesTools/parser.y"
                               {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo); }
#line 2351 "build/parser.tab.c"
    break;

  case 47: /* instruccion_case: bloque  */
#line 205 "src/entriesTools/parser.y"
             {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2357 "build/parser.tab.c"
    break;

  case 48: /* instruccion_case: declaracion_var ';'  */
#line 206 "src/entriesTools/parser.y"
                          {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo);}
#line 2363 "build/parser.tab.c"
    break;

  case 49: /* instruccion_case: asignacion ';'  */
#line 207 "src/entriesTools/parser.y"
                     {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo);}
#line 2369 "build/parser.tab.c"
    break;

  case 50: /* default_case: TOKEN_DEFAULT ':' instrucciones_case  */
#line 210 "src/entriesTools/parser.y"
                                                   { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 2375 "build/parser.tab.c"
    break;

  case 51: /* default_case: TOKEN_DEFAULT ':' instrucciones_case TOKEN_BREAK ';'  */
#line 211 "src/entriesTools/parser.y"
                                                           { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo); }
#line 2381 "build/parser.tab.c"
    break;

  case 52: /* break_statement: TOKEN_BREAK ';'  */
#line 214 "src/entriesTools/parser.y"
                                 { ((*yyvalp).nodo) = nuevoBreakExpresion(); }
#line 2387 "build/parser.tab.c"
    break;

  case 53: /* continue_statement: TOKEN_CONTINUE ';'  */
#line 217 "src/entriesTools/parser.y"
                                       { ((*yyvalp).nodo) = nuevoContinueExpresion(); }
#line 2393 "build/parser.tab.c"
    break;

  case 54: /* instruccion_simple: imprimir  */
#line 220 "src/entriesTools/parser.y"
                             {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 2399 "build/parser.tab.c"
    break;

  case 55: /* instruccion_simple: declaracion_var  */
#line 221 "src/entriesTools/parser.y"
                      {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2405 "build/parser.tab.c"
    break;

  case 56: /* instruccion_simple: asignacion  */
#line 222 "src/entriesTools/parser.y"
                 {((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);}
#line 2411 "build/parser.tab.c"
    break;

  case 57: /* asignacion: TOKEN_IDENTIFIER '=' expr  */
#line 225 "src/entriesTools/parser.y"
                                      { ((*yyvalp).nodo) = nuevoAsignacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2417 "build/parser.tab.c"
    break;

  case 58: /* asignacion: TOKEN_IDENTIFIER TOKEN_PLUS_ASSIGN expr  */
#line 226 "src/entriesTools/parser.y"
                                              { ((*yyvalp).nodo) = nuevoAsignacionSumaExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2423 "build/parser.tab.c"
    break;

  case 59: /* asignacion: TOKEN_IDENTIFIER TOKEN_MINUS_ASSIGN expr  */
#line 227 "src/entriesTools/parser.y"
                                               { ((*yyvalp).nodo) = nuevoAsignacionRestaExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2429 "build/parser.tab.c"
    break;

  case 60: /* asignacion: TOKEN_IDENTIFIER TOKEN_MUL_ASSIGN expr  */
#line 228 "src/entriesTools/parser.y"
                                             { ((*yyvalp).nodo) = nuevoAsignacionMultiplicacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2435 "build/parser.tab.c"
    break;

  case 61: /* asignacion: TOKEN_IDENTIFIER TOKEN_DIV_ASSIGN expr  */
#line 229 "src/entriesTools/parser.y"
                                             { ((*yyvalp).nodo) = nuevoAsignacionDivisionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2441 "build/parser.tab.c"
    break;

  case 62: /* asignacion: TOKEN_IDENTIFIER TOKEN_MOD_ASSIGN expr  */
#line 230 "src/entriesTools/parser.y"
                                             { ((*yyvalp).nodo) = nuevoAsignacionModuloExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2447 "build/parser.tab.c"
    break;

  case 63: /* asignacion: TOKEN_IDENTIFIER TOKEN_AND_ASSIGN expr  */
#line 231 "src/entriesTools/parser.y"
                                             { /* a &= b -> a = a & b */ AbstractExpresion* id=nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string)); AbstractExpresion* op=nuevoBitAndExpresion(id,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo)=nuevoAsignacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string),op);}
#line 2453 "build/parser.tab.c"
    break;

  case 64: /* asignacion: TOKEN_IDENTIFIER TOKEN_OR_ASSIGN expr  */
#line 232 "src/entriesTools/parser.y"
                                            { AbstractExpresion* id=nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string)); AbstractExpresion* op=nuevoBitOrExpresion(id,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo)=nuevoAsignacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string),op);}
#line 2459 "build/parser.tab.c"
    break;

  case 65: /* asignacion: TOKEN_IDENTIFIER TOKEN_XOR_ASSIGN expr  */
#line 233 "src/entriesTools/parser.y"
                                             { AbstractExpresion* id=nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string)); AbstractExpresion* op=nuevoBitXorExpresion(id,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo)=nuevoAsignacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string),op);}
#line 2465 "build/parser.tab.c"
    break;

  case 66: /* asignacion: TOKEN_IDENTIFIER TOKEN_SHL_ASSIGN expr  */
#line 234 "src/entriesTools/parser.y"
                                             { AbstractExpresion* id=nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string)); AbstractExpresion* op=nuevoShiftLeftExpresion(id,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo)=nuevoAsignacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string),op);}
#line 2471 "build/parser.tab.c"
    break;

  case 67: /* asignacion: TOKEN_IDENTIFIER TOKEN_SHR_ASSIGN expr  */
#line 235 "src/entriesTools/parser.y"
                                             { AbstractExpresion* id=nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string)); AbstractExpresion* op=nuevoShiftRightExpresion(id,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo)=nuevoAsignacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string),op);}
#line 2477 "build/parser.tab.c"
    break;

  case 68: /* lista_Expr: lista_Expr ',' expr  */
#line 237 "src/entriesTools/parser.y"
                                 { agregarHijo((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo); }
#line 2483 "build/parser.tab.c"
    break;

  case 69: /* lista_Expr: expr  */
#line 238 "src/entriesTools/parser.y"
           { 
                AbstractExpresion* b = nuevoListaExpresiones();
                agregarHijo(b, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo));
                ((*yyvalp).nodo) =  b;
            }
#line 2493 "build/parser.tab.c"
    break;

  case 70: /* imprimir: TOKEN_PRINT '(' lista_Expr ')'  */
#line 245 "src/entriesTools/parser.y"
                                         { ((*yyvalp).nodo) =  nuevoPrintExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2499 "build/parser.tab.c"
    break;

  case 71: /* imprimir: TOKEN_SYSTEM_OUT_PRINTLN '(' lista_Expr ')'  */
#line 246 "src/entriesTools/parser.y"
                                                  { ((*yyvalp).nodo) =  nuevoPrintExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2505 "build/parser.tab.c"
    break;

  case 72: /* bloque: '{' lSentencia '}'  */
#line 249 "src/entriesTools/parser.y"
                           { ((*yyvalp).nodo) = nuevoBloqueExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2511 "build/parser.tab.c"
    break;

  case 73: /* bloque_for: '{' lSentencia '}'  */
#line 251 "src/entriesTools/parser.y"
                               { ((*yyvalp).nodo) = nuevoBloqueExpresionConContextoPadre((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2517 "build/parser.tab.c"
    break;

  case 80: /* $@1: %empty  */
#line 265 "src/entriesTools/parser.y"
                                               { __tmp_decl_tipo=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.tipoDato); __tmp_decl_dims=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.boolean); __tmp_decl_nombre=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string); __tmp_decl_final=0; }
#line 2523 "build/parser.tab.c"
    break;

  case 81: /* prefix_array_decl: tipoPrimitivo prefix_dims TOKEN_IDENTIFIER $@1 array_prefix_init_opt  */
#line 265 "src/entriesTools/parser.y"
                                                                                                                                                           {
        if(__tmp_decl_dims<1||__tmp_decl_dims>5){ printf("Error: dims fuera rango 1-5 (%d)\n",__tmp_decl_dims); ((*yyvalp).nodo)=nuevoListaExpresiones(); }
        else if(!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)){ ((*yyvalp).nodo)=nuevoListaExpresiones(); }
        else ((*yyvalp).nodo)=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);
    }
#line 2533 "build/parser.tab.c"
    break;

  case 82: /* $@2: %empty  */
#line 272 "src/entriesTools/parser.y"
                                                { __tmp_decl_tipo=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.tipoDato); __tmp_decl_nombre=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.string); __tmp_decl_dims=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.boolean); __tmp_decl_final=0; }
#line 2539 "build/parser.tab.c"
    break;

  case 83: /* postfix_array_decl: tipoPrimitivo TOKEN_IDENTIFIER postfix_dims $@2 array_postfix_init_opt  */
#line 272 "src/entriesTools/parser.y"
                                                                                                                                                             {
        if(__tmp_decl_dims<1||__tmp_decl_dims>5){ printf("Error: dims fuera rango 1-5 (%d)\n",__tmp_decl_dims); ((*yyvalp).nodo)=nuevoListaExpresiones(); }
        else if(!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)){ ((*yyvalp).nodo)=nuevoListaExpresiones(); }
        else ((*yyvalp).nodo)=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);
    }
#line 2549 "build/parser.tab.c"
    break;

  case 84: /* $@3: %empty  */
#line 279 "src/entriesTools/parser.y"
                                                           { __tmp_decl_tipo=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.tipoDato); __tmp_decl_dims=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.boolean); __tmp_decl_nombre=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string); __tmp_decl_final=1; }
#line 2555 "build/parser.tab.c"
    break;

  case 85: /* final_prefix_array_decl: TOKEN_FINAL tipoPrimitivo prefix_dims TOKEN_IDENTIFIER $@3 array_prefix_init_opt  */
#line 279 "src/entriesTools/parser.y"
                                                                                                                                                                       {
        if(__tmp_decl_dims<1||__tmp_decl_dims>5){ printf("Error: dims fuera rango 1-5 (%d)\n",__tmp_decl_dims); ((*yyvalp).nodo)=nuevoListaExpresiones(); }
        else if(!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)){ printf("Error: final requiere inicialización.\n"); ((*yyvalp).nodo)=nuevoListaExpresiones(); }
        else ((*yyvalp).nodo)=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);
    }
#line 2565 "build/parser.tab.c"
    break;

  case 86: /* $@4: %empty  */
#line 286 "src/entriesTools/parser.y"
                                                            { __tmp_decl_tipo=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.tipoDato); __tmp_decl_nombre=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.string); __tmp_decl_dims=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.boolean); __tmp_decl_final=1; }
#line 2571 "build/parser.tab.c"
    break;

  case 87: /* final_postfix_array_decl: TOKEN_FINAL tipoPrimitivo TOKEN_IDENTIFIER postfix_dims $@4 array_postfix_init_opt  */
#line 286 "src/entriesTools/parser.y"
                                                                                                                                                                         {
        if(__tmp_decl_dims<1||__tmp_decl_dims>5){ printf("Error: dims fuera rango 1-5 (%d)\n",__tmp_decl_dims); ((*yyvalp).nodo)=nuevoListaExpresiones(); }
        else if(!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)){ printf("Error: final requiere inicialización.\n"); ((*yyvalp).nodo)=nuevoListaExpresiones(); }
        else ((*yyvalp).nodo)=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo);
    }
#line 2581 "build/parser.tab.c"
    break;

  case 88: /* var_decl: tipoPrimitivo TOKEN_IDENTIFIER '=' expr  */
#line 293 "src/entriesTools/parser.y"
                                            { ((*yyvalp).nodo) = nuevoDeclaracionVariables((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.tipoDato),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo),0); }
#line 2587 "build/parser.tab.c"
    break;

  case 89: /* var_decl: tipoPrimitivo TOKEN_IDENTIFIER  */
#line 294 "src/entriesTools/parser.y"
                                   { ((*yyvalp).nodo) = nuevoListaExpresiones(); }
#line 2593 "build/parser.tab.c"
    break;

  case 90: /* final_var_decl: TOKEN_FINAL tipoPrimitivo TOKEN_IDENTIFIER '=' expr  */
#line 297 "src/entriesTools/parser.y"
                                                        { ((*yyvalp).nodo) = nuevoDeclaracionVariables((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.tipoDato),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo),1); }
#line 2599 "build/parser.tab.c"
    break;

  case 91: /* array_prefix_init_opt: %empty  */
#line 300 "src/entriesTools/parser.y"
                { ((*yyvalp).nodo)=NULL; }
#line 2605 "build/parser.tab.c"
    break;

  case 92: /* array_prefix_init_opt: '=' TOKEN_NEW tipoPrimitivo dims_expr_list  */
#line 301 "src/entriesTools/parser.y"
                                                 {
        size_t nd=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->numHijos;
        if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.tipoDato) != __tmp_decl_tipo) { printf("Advertencia: tipo NEW distinto del declarado.\n"); }
        if (nd<1||nd>5){ printf("Error: dims fuera rango NEW 1-5 (%zu)\n",nd); ((*yyvalp).nodo)=nuevoListaExpresiones(); }
        else if(nd==1) ((*yyvalp).nodo)=nuevoArrayDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->hijos[0]);
        else if(nd==2) ((*yyvalp).nodo)=nuevoMatrixDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->hijos[0],(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->hijos[1]);
        else { AbstractExpresion** arr=malloc(sizeof(AbstractExpresion*)*nd); for(size_t i=0;i<nd;i++) arr[i]=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->hijos[i]; ((*yyvalp).nodo)=nuevoMultiArrayDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,nd,arr);} }
#line 2617 "build/parser.tab.c"
    break;

  case 93: /* array_prefix_init_opt: '=' '{' lista_Expr '}'  */
#line 308 "src/entriesTools/parser.y"
                             { ((*yyvalp).nodo)=nuevoArrayLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2623 "build/parser.tab.c"
    break;

  case 94: /* array_prefix_init_opt: '=' '{' filas_lista '}'  */
#line 309 "src/entriesTools/parser.y"
                              { ((*yyvalp).nodo)=nuevoMatrixLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2629 "build/parser.tab.c"
    break;

  case 95: /* array_prefix_init_opt: '=' '{' lista_bloques2D '}'  */
#line 310 "src/entriesTools/parser.y"
                                  { ((*yyvalp).nodo)=nuevoArray3DLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2635 "build/parser.tab.c"
    break;

  case 96: /* array_prefix_init_opt: '=' '{' '}'  */
#line 311 "src/entriesTools/parser.y"
                  { AbstractExpresion* l=nuevoListaExpresiones(); ((*yyvalp).nodo)=nuevoArrayLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,l); }
#line 2641 "build/parser.tab.c"
    break;

  case 97: /* array_prefix_init_opt: '=' expr  */
#line 312 "src/entriesTools/parser.y"
               { ((*yyvalp).nodo)=nuevoArrayDeclaracionDesdeExpr(__tmp_decl_tipo,__tmp_decl_nombre,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2647 "build/parser.tab.c"
    break;

  case 99: /* prefix_dims: '[' ']'  */
#line 317 "src/entriesTools/parser.y"
                     { ((*yyvalp).boolean) = 1; }
#line 2653 "build/parser.tab.c"
    break;

  case 100: /* prefix_dims: prefix_dims '[' ']'  */
#line 317 "src/entriesTools/parser.y"
                                                       { ((*yyvalp).boolean) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.boolean) + 1; }
#line 2659 "build/parser.tab.c"
    break;

  case 101: /* postfix_dims: '[' ']'  */
#line 318 "src/entriesTools/parser.y"
                      { ((*yyvalp).boolean) = 1; }
#line 2665 "build/parser.tab.c"
    break;

  case 102: /* postfix_dims: postfix_dims '[' ']'  */
#line 318 "src/entriesTools/parser.y"
                                                         { ((*yyvalp).boolean) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.boolean) + 1; }
#line 2671 "build/parser.tab.c"
    break;

  case 103: /* dims_expr_list: '[' expr ']'  */
#line 321 "src/entriesTools/parser.y"
                             { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo) = l; }
#line 2677 "build/parser.tab.c"
    break;

  case 104: /* dims_expr_list: dims_expr_list '[' expr ']'  */
#line 322 "src/entriesTools/parser.y"
                                      { agregarHijo((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo); }
#line 2683 "build/parser.tab.c"
    break;

  case 105: /* lista_bloques2D: bloque2D  */
#line 330 "src/entriesTools/parser.y"
                          { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo) = l; }
#line 2689 "build/parser.tab.c"
    break;

  case 106: /* lista_bloques2D: lista_bloques2D ',' bloque2D  */
#line 331 "src/entriesTools/parser.y"
                                   { agregarHijo((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo); }
#line 2695 "build/parser.tab.c"
    break;

  case 107: /* bloque2D: '{' filas_lista '}'  */
#line 333 "src/entriesTools/parser.y"
                              { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo); }
#line 2701 "build/parser.tab.c"
    break;

  case 108: /* filas_lista: fila_matriz  */
#line 335 "src/entriesTools/parser.y"
                         { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo) = l; }
#line 2707 "build/parser.tab.c"
    break;

  case 109: /* filas_lista: filas_lista ',' fila_matriz  */
#line 336 "src/entriesTools/parser.y"
                                  { agregarHijo((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo); }
#line 2713 "build/parser.tab.c"
    break;

  case 110: /* fila_matriz: '{' lista_Expr '}'  */
#line 338 "src/entriesTools/parser.y"
                                { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo); }
#line 2719 "build/parser.tab.c"
    break;

  case 111: /* asignacion_elemento: TOKEN_IDENTIFIER indices_una '=' expr  */
#line 341 "src/entriesTools/parser.y"
                                                           {
        AbstractExpresion* idx = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo)->hijos[0]; ((*yyvalp).nodo) = nuevoArrayAsignacionElemento((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.string), idx, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2726 "build/parser.tab.c"
    break;

  case 112: /* asignacion_elemento: TOKEN_IDENTIFIER indices_multi '=' expr  */
#line 343 "src/entriesTools/parser.y"
                                              {
        size_t n=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo)->numHijos; if (n==2) ((*yyvalp).nodo)=nuevoMatrixAsignacionElemento((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.string),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo)->hijos[0],(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo)->hijos[1],(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); else {
            ((*yyvalp).nodo)=nuevoMultiArrayAsignacionElemento((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.string),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
    }
#line 2735 "build/parser.tab.c"
    break;

  case 113: /* indices_una: '[' expr ']'  */
#line 350 "src/entriesTools/parser.y"
                          { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); ((*yyvalp).nodo)=l; }
#line 2741 "build/parser.tab.c"
    break;

  case 114: /* indices_multi: indices_una indices_una  */
#line 351 "src/entriesTools/parser.y"
                                       { /* concat */ for(size_t i=0;i<(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->numHijos;i++) agregarHijo((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->hijos[i]); ((*yyvalp).nodo)=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo); }
#line 2747 "build/parser.tab.c"
    break;

  case 115: /* indices_multi: indices_multi indices_una  */
#line 352 "src/entriesTools/parser.y"
                                { for(size_t i=0;i<(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->numHijos;i++) agregarHijo((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->hijos[i]); ((*yyvalp).nodo)=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo); }
#line 2753 "build/parser.tab.c"
    break;

  case 116: /* expr: expr '+' expr  */
#line 369 "src/entriesTools/parser.y"
                      { ((*yyvalp).nodo) =  nuevoSumaExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo));  }
#line 2759 "build/parser.tab.c"
    break;

  case 117: /* expr: expr '-' expr  */
#line 370 "src/entriesTools/parser.y"
                    { ((*yyvalp).nodo) =  nuevoRestaExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2765 "build/parser.tab.c"
    break;

  case 118: /* expr: expr '*' expr  */
#line 371 "src/entriesTools/parser.y"
                    { ((*yyvalp).nodo) =  nuevoMultiplicacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2771 "build/parser.tab.c"
    break;

  case 119: /* expr: expr '/' expr  */
#line 372 "src/entriesTools/parser.y"
                    { ((*yyvalp).nodo) =  nuevoDivisionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2777 "build/parser.tab.c"
    break;

  case 120: /* expr: expr '%' expr  */
#line 373 "src/entriesTools/parser.y"
                    { ((*yyvalp).nodo) =  nuevoModuloExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2783 "build/parser.tab.c"
    break;

  case 121: /* expr: expr '&' expr  */
#line 374 "src/entriesTools/parser.y"
                    { ((*yyvalp).nodo) =  nuevoBitAndExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2789 "build/parser.tab.c"
    break;

  case 122: /* expr: expr '|' expr  */
#line 375 "src/entriesTools/parser.y"
                    { ((*yyvalp).nodo) =  nuevoBitOrExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2795 "build/parser.tab.c"
    break;

  case 123: /* expr: expr '^' expr  */
#line 376 "src/entriesTools/parser.y"
                    { ((*yyvalp).nodo) =  nuevoBitXorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2801 "build/parser.tab.c"
    break;

  case 124: /* expr: expr TOKEN_SHIFT_LEFT expr  */
#line 377 "src/entriesTools/parser.y"
                                 { ((*yyvalp).nodo) =  nuevoShiftLeftExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2807 "build/parser.tab.c"
    break;

  case 125: /* expr: expr TOKEN_SHIFT_RIGHT expr  */
#line 378 "src/entriesTools/parser.y"
                                  { ((*yyvalp).nodo) =  nuevoShiftRightExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2813 "build/parser.tab.c"
    break;

  case 126: /* expr: expr TOKEN_EQUAL expr  */
#line 379 "src/entriesTools/parser.y"
                            { ((*yyvalp).nodo) =  nuevoIgualdadExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2819 "build/parser.tab.c"
    break;

  case 127: /* expr: expr TOKEN_NOT_EQUAL expr  */
#line 380 "src/entriesTools/parser.y"
                                { ((*yyvalp).nodo) =  nuevoDesigualdadExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2825 "build/parser.tab.c"
    break;

  case 128: /* expr: expr TOKEN_GREATER expr  */
#line 381 "src/entriesTools/parser.y"
                              { ((*yyvalp).nodo) =  nuevoMayorQueExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2831 "build/parser.tab.c"
    break;

  case 129: /* expr: expr TOKEN_LESS expr  */
#line 382 "src/entriesTools/parser.y"
                           { ((*yyvalp).nodo) =  nuevoMenorQueExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2837 "build/parser.tab.c"
    break;

  case 130: /* expr: expr TOKEN_GREATER_EQUAL expr  */
#line 383 "src/entriesTools/parser.y"
                                    { ((*yyvalp).nodo) =  nuevoMayorIgualQueExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2843 "build/parser.tab.c"
    break;

  case 131: /* expr: expr TOKEN_LESS_EQUAL expr  */
#line 384 "src/entriesTools/parser.y"
                                 { ((*yyvalp).nodo) =  nuevoMenorIgualQueExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2849 "build/parser.tab.c"
    break;

  case 132: /* expr: expr TOKEN_AND expr  */
#line 385 "src/entriesTools/parser.y"
                          { ((*yyvalp).nodo) =  nuevoAndExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2855 "build/parser.tab.c"
    break;

  case 133: /* expr: expr TOKEN_OR expr  */
#line 386 "src/entriesTools/parser.y"
                         { ((*yyvalp).nodo) =  nuevoOrExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2861 "build/parser.tab.c"
    break;

  case 134: /* expr: TOKEN_NOT expr  */
#line 387 "src/entriesTools/parser.y"
                     { ((*yyvalp).nodo) =  nuevoNotExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2867 "build/parser.tab.c"
    break;

  case 135: /* expr: '-' expr  */
#line 388 "src/entriesTools/parser.y"
                          { ((*yyvalp).nodo) =  nuevoUnarioExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo));  }
#line 2873 "build/parser.tab.c"
    break;

  case 136: /* expr: postfix  */
#line 389 "src/entriesTools/parser.y"
              { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 2879 "build/parser.tab.c"
    break;

  case 137: /* postfix: unary  */
#line 392 "src/entriesTools/parser.y"
               { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 2885 "build/parser.tab.c"
    break;

  case 138: /* postfix: postfix '[' expr ']'  */
#line 393 "src/entriesTools/parser.y"
                           { ((*yyvalp).nodo) = nuevoArrayAcceso((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2891 "build/parser.tab.c"
    break;

  case 139: /* postfix: postfix '.' TOKEN_LENGTH  */
#line 394 "src/entriesTools/parser.y"
                               { ((*yyvalp).nodo) = nuevoArrayLength((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo)); }
#line 2897 "build/parser.tab.c"
    break;

  case 140: /* postfix: postfix '.' TOKEN_ADD '(' expr ')'  */
#line 395 "src/entriesTools/parser.y"
                                         { ((*yyvalp).nodo) = nuevoArrayAdd((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2903 "build/parser.tab.c"
    break;

  case 141: /* postfix: postfix '.' TOKEN_IDENTIFIER '(' expr ')'  */
#line 396 "src/entriesTools/parser.y"
                                                { if(strcmp((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.string),"equals")==0){ ((*yyvalp).nodo) = nuevoIgualdadExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.nodo),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo));} else { ((*yyvalp).nodo)=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.nodo); } }
#line 2909 "build/parser.tab.c"
    break;

  case 142: /* postfix: postfix '.' TOKEN_IDENTIFIER '(' ')'  */
#line 397 "src/entriesTools/parser.y"
                                           { if(strcmp((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string),"equals")==0){ printf("Error: equals requiere argumento\n"); ((*yyvalp).nodo)=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.nodo);} else { ((*yyvalp).nodo)=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.nodo); } }
#line 2915 "build/parser.tab.c"
    break;

  case 143: /* postfix: TOKEN_IDENTIFIER TOKEN_PLUS_PLUS  */
#line 398 "src/entriesTools/parser.y"
                                       {
        AbstractExpresion* id1 = nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.string));
        AbstractExpresion* uno1 = nuevoPrimitivoExpresion(strdup("1"), INT);
        AbstractExpresion* sum1 = nuevoSumaExpresion(id1, uno1);
        ((*yyvalp).nodo) = nuevoAsignacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.string), sum1);
    }
#line 2926 "build/parser.tab.c"
    break;

  case 144: /* postfix: TOKEN_IDENTIFIER TOKEN_MINUS_MINUS  */
#line 404 "src/entriesTools/parser.y"
                                         {
        AbstractExpresion* id2 = nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.string));
        AbstractExpresion* uno2 = nuevoPrimitivoExpresion(strdup("1"), INT);
        AbstractExpresion* res2 = nuevoRestaExpresion(id2, uno2);
        ((*yyvalp).nodo) = nuevoAsignacionExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.string), res2);
    }
#line 2937 "build/parser.tab.c"
    break;

  case 145: /* unary: atom  */
#line 412 "src/entriesTools/parser.y"
            { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 2943 "build/parser.tab.c"
    break;

  case 146: /* unary: '(' tipoPrimitivo ')' unary  */
#line 413 "src/entriesTools/parser.y"
                                             { ((*yyvalp).nodo) = nuevoCastExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.tipoDato), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 2949 "build/parser.tab.c"
    break;

  case 147: /* atom: primitivo  */
#line 416 "src/entriesTools/parser.y"
                { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 2955 "build/parser.tab.c"
    break;

  case 148: /* atom: '(' expr ')'  */
#line 417 "src/entriesTools/parser.y"
                   { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo); }
#line 2961 "build/parser.tab.c"
    break;

  case 149: /* atom: TOKEN_IDENTIFIER  */
#line 418 "src/entriesTools/parser.y"
                       { ((*yyvalp).nodo) = nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string)); }
#line 2967 "build/parser.tab.c"
    break;

  case 150: /* atom: llamada_funcion  */
#line 419 "src/entriesTools/parser.y"
                      { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 2973 "build/parser.tab.c"
    break;

  case 151: /* atom: TOKEN_ARRAYS '.' TOKEN_INDEXOF '(' expr ',' expr ')'  */
#line 420 "src/entriesTools/parser.y"
                                                           { ((*yyvalp).nodo) = nuevoArraysIndexOf((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2979 "build/parser.tab.c"
    break;

  case 152: /* atom: TOKEN_INTEGER_CLASS '.' TOKEN_PARSE_INT '(' expr ')'  */
#line 421 "src/entriesTools/parser.y"
                                                           { ((*yyvalp).nodo) = nuevoParseEntero((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2985 "build/parser.tab.c"
    break;

  case 153: /* atom: TOKEN_DOUBLE_CLASS '.' TOKEN_PARSE_DOUBLE '(' expr ')'  */
#line 422 "src/entriesTools/parser.y"
                                                             { ((*yyvalp).nodo) = nuevoParseDouble((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2991 "build/parser.tab.c"
    break;

  case 154: /* atom: TOKEN_FLOAT_CLASS '.' TOKEN_PARSE_FLOAT '(' expr ')'  */
#line 423 "src/entriesTools/parser.y"
                                                           { ((*yyvalp).nodo) = nuevoParseFloat((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 2997 "build/parser.tab.c"
    break;

  case 155: /* atom: TOKEN_DSTRING '.' TOKEN_VALUE_OF '(' expr ')'  */
#line 424 "src/entriesTools/parser.y"
                                                    { ((*yyvalp).nodo) = nuevoStringValueOf((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 3003 "build/parser.tab.c"
    break;

  case 156: /* atom: TOKEN_DSTRING '.' TOKEN_JOIN '(' expr ',' expr ')'  */
#line 425 "src/entriesTools/parser.y"
                                                         { ((*yyvalp).nodo) = nuevoStringJoin((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo), 1); }
#line 3009 "build/parser.tab.c"
    break;

  case 157: /* atom: TOKEN_DSTRING '.' TOKEN_JOIN '(' expr ',' join_variadic_args ')'  */
#line 426 "src/entriesTools/parser.y"
                                                                       { ((*yyvalp).nodo) = nuevoStringJoin((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.nodo), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo), 0); }
#line 3015 "build/parser.tab.c"
    break;

  case 158: /* join_variadic_args: expr ',' lista_Expr  */
#line 429 "src/entriesTools/parser.y"
                                        {
        /* crear lista que contenga primer expr y luego los de lista_Expr */
        AbstractExpresion* l = nuevoListaExpresiones();
        agregarHijo(l, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.nodo));
        for(size_t i=0;i<(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->numHijos;i++){ agregarHijo(l, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)->hijos[i]); }
        ((*yyvalp).nodo) = l;
    }
#line 3027 "build/parser.tab.c"
    break;

  case 159: /* primitivo: TOKEN_UNSIGNED_INTEGER  */
#line 437 "src/entriesTools/parser.y"
                                  { ((*yyvalp).nodo) =  nuevoPrimitivoExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string), INT); }
#line 3033 "build/parser.tab.c"
    break;

  case 160: /* primitivo: TOKEN_STRING  */
#line 438 "src/entriesTools/parser.y"
                   { ((*yyvalp).nodo) =  nuevoPrimitivoExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string), STRING); }
#line 3039 "build/parser.tab.c"
    break;

  case 161: /* primitivo: TOKEN_REAL_FLOAT  */
#line 439 "src/entriesTools/parser.y"
                       { ((*yyvalp).nodo) =  nuevoPrimitivoExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string), FLOAT); }
#line 3045 "build/parser.tab.c"
    break;

  case 162: /* primitivo: TOKEN_REAL  */
#line 440 "src/entriesTools/parser.y"
                 { ((*yyvalp).nodo) =  nuevoPrimitivoExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string), DOUBLE); }
#line 3051 "build/parser.tab.c"
    break;

  case 163: /* primitivo: TOKEN_CHAR_LITERAL  */
#line 441 "src/entriesTools/parser.y"
                         { ((*yyvalp).nodo) =  nuevoPrimitivoExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string), CHAR); }
#line 3057 "build/parser.tab.c"
    break;

  case 164: /* primitivo: TOKEN_TRUE  */
#line 442 "src/entriesTools/parser.y"
                 { ((*yyvalp).nodo) =  nuevoPrimitivoExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string), BOOLEAN); }
#line 3063 "build/parser.tab.c"
    break;

  case 165: /* primitivo: TOKEN_FALSE  */
#line 443 "src/entriesTools/parser.y"
                  { ((*yyvalp).nodo) =  nuevoPrimitivoExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string), BOOLEAN); }
#line 3069 "build/parser.tab.c"
    break;

  case 166: /* tipoPrimitivo: TOKEN_DINT  */
#line 446 "src/entriesTools/parser.y"
                          { ((*yyvalp).tipoDato) = INT; }
#line 3075 "build/parser.tab.c"
    break;

  case 167: /* tipoPrimitivo: TOKEN_DFLOAT  */
#line 447 "src/entriesTools/parser.y"
                   { ((*yyvalp).tipoDato) = FLOAT; }
#line 3081 "build/parser.tab.c"
    break;

  case 168: /* tipoPrimitivo: TOKEN_DDOUBLE  */
#line 448 "src/entriesTools/parser.y"
                    { ((*yyvalp).tipoDato) = DOUBLE; }
#line 3087 "build/parser.tab.c"
    break;

  case 169: /* tipoPrimitivo: TOKEN_DSTRING  */
#line 449 "src/entriesTools/parser.y"
                    { ((*yyvalp).tipoDato) = STRING; }
#line 3093 "build/parser.tab.c"
    break;

  case 170: /* tipoPrimitivo: TOKEN_DBOOLEAN  */
#line 450 "src/entriesTools/parser.y"
                     { ((*yyvalp).tipoDato) = BOOLEAN; }
#line 3099 "build/parser.tab.c"
    break;

  case 171: /* tipoPrimitivo: TOKEN_DCHAR  */
#line 451 "src/entriesTools/parser.y"
                  { ((*yyvalp).tipoDato) = CHAR; }
#line 3105 "build/parser.tab.c"
    break;

  case 172: /* tipoPrimitivo: TOKEN_DVOID  */
#line 452 "src/entriesTools/parser.y"
                  { ((*yyvalp).tipoDato) = VOID; }
#line 3111 "build/parser.tab.c"
    break;

  case 173: /* funcion_declaracion: tipoPrimitivo TOKEN_IDENTIFIER '(' param_opt ')' bloque  */
#line 455 "src/entriesTools/parser.y"
                                                                             { 
        if((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.paramList)){ ((*yyvalp).nodo) = nuevoFuncionDeclaracion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.tipoDato), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.string), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.paramList)->names, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.paramList)->types, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.paramList)->count, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
        else { ((*yyvalp).nodo) = nuevoFuncionDeclaracion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.tipoDato), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.string), NULL, NULL, 0, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
    }
#line 3120 "build/parser.tab.c"
    break;

  case 174: /* main_declaracion: TOKEN_PUBLIC TOKEN_STATIC TOKEN_DVOID TOKEN_IDENTIFIER '(' main_params_opt ')' bloque  */
#line 461 "src/entriesTools/parser.y"
                                                                                                        { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 3126 "build/parser.tab.c"
    break;

  case 180: /* main_param_array_brackets: %empty  */
#line 465 "src/entriesTools/parser.y"
                                       { /* 0 dims */ }
#line 3132 "build/parser.tab.c"
    break;

  case 181: /* main_param_array_brackets: main_param_array_brackets '[' ']'  */
#line 465 "src/entriesTools/parser.y"
                                                                                            { /* accum dims ignored */ }
#line 3138 "build/parser.tab.c"
    break;

  case 182: /* param_opt: %empty  */
#line 467 "src/entriesTools/parser.y"
                       { ((*yyvalp).paramList) = NULL; }
#line 3144 "build/parser.tab.c"
    break;

  case 183: /* param_opt: lista_parametros  */
#line 468 "src/entriesTools/parser.y"
                       { ((*yyvalp).paramList) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.paramList); }
#line 3150 "build/parser.tab.c"
    break;

  case 184: /* lista_parametros: tipoPrimitivo TOKEN_IDENTIFIER  */
#line 470 "src/entriesTools/parser.y"
                                                 { 
        ParamList* pl = malloc(sizeof(ParamList));
        pl->count=1; pl->names=malloc(sizeof(char*)); pl->types=malloc(sizeof(TipoDato));
        pl->names[0]=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string); pl->types[0]=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.tipoDato); ((*yyvalp).paramList)=pl; }
#line 3159 "build/parser.tab.c"
    break;

  case 185: /* lista_parametros: lista_parametros ',' tipoPrimitivo TOKEN_IDENTIFIER  */
#line 474 "src/entriesTools/parser.y"
                                                          { 
        (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->names = realloc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->names, sizeof(char*)*((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->count+1));
        (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->types = realloc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->types, sizeof(TipoDato)*((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->count+1));
        (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->names[(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->count]=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.string); (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->types[(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->count]=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.tipoDato); (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList)->count++; ((*yyvalp).paramList)=(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.paramList); }
#line 3168 "build/parser.tab.c"
    break;

  case 186: /* return_stmt: TOKEN_RETURN  */
#line 479 "src/entriesTools/parser.y"
                          { ((*yyvalp).nodo) = nuevoReturnExpresion(NULL); }
#line 3174 "build/parser.tab.c"
    break;

  case 187: /* return_stmt: TOKEN_RETURN expr  */
#line 480 "src/entriesTools/parser.y"
                        { ((*yyvalp).nodo) = nuevoReturnExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo)); }
#line 3180 "build/parser.tab.c"
    break;

  case 188: /* for_each_statement: TOKEN_FOR '(' tipoPrimitivo TOKEN_IDENTIFIER ':' TOKEN_IDENTIFIER ')' bloque  */
#line 485 "src/entriesTools/parser.y"
                                                                                 {
          /* Desazucar: soportar flatten para arrays >=2D usando pila de índices
              Estrategia: generar bucles anidados según profundidad dinámica medida en runtime: iteramos cada nivel si el elemento actual aún es ARRAY.
              Simplificación: generamos un for principal sobre el arreglo original; si el elemento es ARRAY, usamos Array.length recursivo que ya suma todos los internos y hacemos un acceso lineal simulando flatten: i recorre 0..lengthTotal-1 y para each recuperamos elemento linealizado.
              Implementación minimal: length recursivo ya devuelve total; acceso lineal: creamos builtin que recorre y avanza un contador global oculto. Aquí haremos workaround: reemplazar for-each multi-dimension por for simple sobre length total y acceso mediante función auxiliar equals sobre índice lineal -> no disponible; alternativa: iterar superficialmente y si elemento es ARRAY, insertar otro for-each recursivo construido aquí. */
          /* Construcción básica 1D y fallback recursivo: si el cuerpo usa variable, queremos consistente para multidim -> generamos verificación y si elemento es ARRAY, no declaramos var primitiva (se imprimirá error si se intenta usar). */
          char bufIdx[64]; snprintf(bufIdx,sizeof(bufIdx),"__idx_fe_%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.string)); char* idxName=strdup(bufIdx);
          AbstractExpresion* cero = nuevoPrimitivoExpresion(strdup("0"), INT);
          AbstractExpresion* declIdx = nuevoDeclaracionVariables(INT, idxName, cero, 0);
          AbstractExpresion* idIdx1 = nuevoIdentificadorExpresion(idxName);
          AbstractExpresion* arrId1 = nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string));
          AbstractExpresion* lenAcc = nuevoArrayLength(arrId1);
          AbstractExpresion* cond = nuevoMenorQueExpresion(idIdx1, lenAcc);
          AbstractExpresion* idIdx2 = nuevoIdentificadorExpresion(idxName);
          AbstractExpresion* uno = nuevoPrimitivoExpresion(strdup("1"), INT);
          AbstractExpresion* sum = nuevoSumaExpresion(idIdx2, uno);
          AbstractExpresion* inc = nuevoAsignacionExpresion(idxName, sum);
    AbstractExpresion* arrId2 = nuevoIdentificadorExpresion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.string));
    AbstractExpresion* idIdx3 = nuevoIdentificadorExpresion(idxName);
    /* Acceso linealizado: soporta multi-d devolviendo elemento hoja en orden */
    AbstractExpresion* acceso = nuevoArrayLinearAccess(arrId2, idIdx3);
          AbstractExpresion* declVar = nuevoDeclaracionVariables((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.tipoDato), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.string), acceso, 0);
          AbstractExpresion* lista = nuevoListaExpresiones(); agregarHijo(lista, declVar); agregarHijo(lista, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo));
          AbstractExpresion* cuerpo = nuevoBloqueExpresion(lista);
          ((*yyvalp).nodo) = nuevoForExpresion(declIdx, cond, inc, cuerpo);
    }
#line 3211 "build/parser.tab.c"
    break;

  case 189: /* argumentos_opt: %empty  */
#line 512 "src/entriesTools/parser.y"
                            { ((*yyvalp).nodo) = nuevoListaExpresiones(); }
#line 3217 "build/parser.tab.c"
    break;

  case 190: /* argumentos_opt: lista_Expr  */
#line 513 "src/entriesTools/parser.y"
                 { ((*yyvalp).nodo) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.nodo); }
#line 3223 "build/parser.tab.c"
    break;

  case 191: /* llamada_funcion: TOKEN_IDENTIFIER '(' argumentos_opt ')'  */
#line 515 "src/entriesTools/parser.y"
                                                         { ((*yyvalp).nodo) = nuevoLlamadaFuncion((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.string), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.nodo)); }
#line 3229 "build/parser.tab.c"
    break;


#line 3233 "build/parser.tab.c"

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), yyvalp, yylocp);

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYNOMEM
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YY_USE (yy0);
  YY_USE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

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

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yyval, &yys->yyloc);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == YYSYMBOL_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if YYDEBUG

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yylow = 1;
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yyval,
                       &(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)                       );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, YYLTYPE *yylocp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp, yyk,
                           yyvalp, yylocp);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      if (yynrhs == 0)
        /* Set default location.  */
        yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyk, yyvalp, yylocp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yyval;
      YYLTYPE yyloc;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yyval, &yyloc);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
      if (yyflag != yyok)
        return yyflag;
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yyval, &yyloc);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yyval = yys0->yysemantics.yyval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yyval = yys1->yysemantics.yyval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, YYLTYPE *yylocp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    YYLTYPE yylloc_current = yylloc;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yylloc = yyopt->yyloc;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, -1, yyvalp, yylocp);
    yychar = yychar_current;
    yylval = yylval_current;
    yylloc = yylloc_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YY_USE (yyx0);
  YY_USE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the locations for each of the YYN1 states in *YYSTACKP,
 *  ending at YYS1.  Has no effect on previously resolved states.
 *  The first semantic option of a state is always chosen.  */
static void
yyresolveLocations (yyGLRState *yys1, int yyn1,
                    yyGLRStack *yystackp)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp);
      if (!yys1->yyresolved)
        {
          yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
          int yynrhs;
          yySemanticOption *yyoption = yys1->yysemantics.yyfirstVal;
          YY_ASSERT (yyoption);
          yynrhs = yyrhsLength (yyoption->yyrule);
          if (0 < yynrhs)
            {
              yyGLRState *yys;
              int yyn;
              yyresolveLocations (yyoption->yystate, yynrhs,
                                  yystackp);
              for (yys = yyoption->yystate, yyn = yynrhs;
                   yyn > 0;
                   yys = yys->yypred, yyn -= 1)
                yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
            }
          else
            {
              /* Both yyresolveAction and yyresolveLocations traverse the GSS
                 in reverse rightmost order.  It is only necessary to invoke
                 yyresolveLocations on a subforest for which yyresolveAction
                 would have been invoked next had an ambiguity not been
                 detected.  Thus the location of the previous state (but not
                 necessarily the previous state itself) is guaranteed to be
                 resolved already.  */
              yyGLRState *yyprevious = yyoption->yystate;
              yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
            }
          YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
        }
    }
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yyval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              yyresolveLocations (yys, 1, yystackp);
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yyval, yylocp);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yyval_other;
                YYLTYPE yydummy;
                yyflag = yyresolveAction (yyp, yystackp, &yyval_other, &yydummy);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yyval, yylocp);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yyval, &yyval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yyval, yylocp);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yyval = yyval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

/** Called when returning to deterministic operation to clean up the extra
 * stacks. */
static void
yycompressStack (yyGLRStack* yystackp)
{
  /* yyr is the state after the split point.  */
  yyGLRState *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  {
    yyGLRState *yyp, *yyq;
    for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
         yyp != yystackp->yysplitPoint;
         yyr = yyp, yyp = yyq, yyq = yyp->yypred)
      yyp->yypred = yyr;
  }

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYSTACKP, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  */
static int
yypcontext_expected_tokens (const yyGLRStack* yystackp,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
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

static int
yy_syntax_error_arguments (const yyGLRStack* yystackp,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  yysymbol_kind_t yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
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
  if (yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yystackp,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}



static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
  {
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount
    = yy_syntax_error_arguments (yystackp, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    yyMemoryExhausted (yystackp);

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
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
        YYPTRDIFF_T yysz
          = yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (YYSIZE_MAXIMUM - yysize < yysz)
          yysize_overflow = yytrue;
        else
          yysize += yysz;
      }
  }

  if (!yysize_overflow)
    yymsg = YY_CAST (char *, YYMALLOC (YY_CAST (YYSIZE_T, yysize)));

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
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
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            /* We throw away the lookahead, but the error range
               of the shifted error token must take it into account.  */
            yyGLRState *yys = yystackp->yytops.yystates[0];
            yyGLRStackItem yyerror_range[3];
            yyerror_range[1].yystate.yyloc = yys->yyloc;
            yyerror_range[2].yystate.yyloc = yylloc;
            YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval, &yylloc);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYSYMBOL_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYSYMBOL_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              /* First adjust its location.*/
              YYLTYPE yyerrloc;
              yystackp->yyerror_range[2].yystate.yyloc = yylloc;
              YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval, &yyerrloc);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                             \
  do {                                          \
    switch (YYE) {                              \
    case yyok:     break;                       \
    case yyabort:  goto yyabortlab;             \
    case yyaccept: goto yyacceptlab;            \
    case yyerr:    goto yyuser_error;           \
    case yynomem:  goto yyexhaustedlab;         \
    default:       goto yybuglab;               \
    }                                           \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;
  yylloc = yyloc_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != YYerror)
                    yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yystack.yyerror_range[1].yystate.yyloc = yylloc;
              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval, &yylloc);
              YY_DPRINTF ((stderr, "Stack %ld now in state %d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturnlab;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

 yyreturnlab:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval, &yylloc);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
/* Print *YYS and its predecessors. */
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

/* Print YYS (possibly NULL) and its predecessors. */
static void
yypstates (yyGLRState* yys)
{
  if (yys == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yys);
  YY_FPRINTF ((stderr, "\n"));
}

/* Print the stack #YYK.  */
static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

/* Print all the stacks.  */
static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs
#undef yylloc




#line 516 "src/entriesTools/parser.y"


/* definición de yyerror, usa el yylloc global para ubicación */
void yyerror(const char *s) {
    fprintf(stderr,
            "Illegal input %s en %d:%d\n",
            s,
            yylloc.first_line,
            yylloc.first_column);
}
