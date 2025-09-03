%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "ast/AbstractExpresion.h"

    int yylex(void);
    extern AbstractExpresion* ast_root;
    void yyerror(const char *s);
%}

/* Esto va al parser.tab.h */
%code requires {
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
}

/* Seguimiento de ubicaciones */
%locations
/* Mensajes de error más detallados */
%define parse.error verbose

/* Unión de tipos semánticos */
%glr-parser

%union {
    char* string;
    AbstractExpresion* nodo;
    TipoDato tipoDato;
    int boolean;
    char char_val;
    struct ParamList* paramList;
    struct DeclBase* declBase;
    struct MultiAccessTemp* multiAccess;
}

%code {
    TipoDato __tmp_decl_tipo; char* __tmp_decl_nombre; int __tmp_decl_final; int __tmp_decl_dims; 
}

/* Tokens tipados */
%token <string> TOKEN_PRINT TOKEN_DINT TOKEN_DFLOAT TOKEN_DBYTE TOKEN_DSHORT TOKEN_DLONG TOKEN_DDOUBLE
TOKEN_DSTRING TOKEN_UNSIGNED_INTEGER TOKEN_REAL TOKEN_REAL_FLOAT TOKEN_STRING TOKEN_IDENTIFIER
%token <string> TOKEN_TRUE TOKEN_FALSE TOKEN_DBOOLEAN TOKEN_DCHAR TOKEN_CHAR_LITERAL TOKEN_FINAL TOKEN_SYSTEM_OUT_PRINTLN TOKEN_DVOID
%token TOKEN_SHIFT_LEFT TOKEN_SHIFT_RIGHT
%token TOKEN_INTEGER_CLASS TOKEN_DOUBLE_CLASS TOKEN_FLOAT_CLASS TOKEN_ARRAYS
%token TOKEN_PARSE_INT TOKEN_PARSE_DOUBLE TOKEN_PARSE_FLOAT TOKEN_VALUE_OF TOKEN_JOIN TOKEN_LENGTH TOKEN_ADD TOKEN_INDEXOF
%token TOKEN_PLUS_PLUS TOKEN_MINUS_MINUS
%token TOKEN_PLUS_ASSIGN TOKEN_MINUS_ASSIGN TOKEN_MUL_ASSIGN TOKEN_DIV_ASSIGN TOKEN_MOD_ASSIGN
%token TOKEN_AND_ASSIGN TOKEN_OR_ASSIGN TOKEN_XOR_ASSIGN TOKEN_SHL_ASSIGN TOKEN_SHR_ASSIGN
%token TOKEN_EQUAL TOKEN_NOT_EQUAL TOKEN_GREATER TOKEN_LESS TOKEN_GREATER_EQUAL TOKEN_LESS_EQUAL
%token TOKEN_AND TOKEN_OR TOKEN_NOT
%token TOKEN_IF TOKEN_ELSE TOKEN_SWITCH TOKEN_CASE TOKEN_DEFAULT TOKEN_BREAK TOKEN_WHILE TOKEN_FOR TOKEN_CONTINUE TOKEN_NEW TOKEN_RETURN TOKEN_PUBLIC TOKEN_STATIC

/* Tipo de los no-terminales que llevan valor */
%type <nodo> s lSentencia instruccion expr imprimir lista_Expr bloque bloque_for declaracion_var primitivo asignacion if_statement switch_statement break_statement continue_statement case_list case_item instrucciones_case instruccion_case default_case instruccion_simple while_statement for_statement asignacion_elemento filas_lista fila_matriz lista_bloques2D bloque2D funcion_declaracion return_stmt llamada_funcion argumentos_opt join_variadic_args dims_expr_list atom unary postfix indices_una indices_multi main_declaracion
%type <nodo> prefix_array_decl postfix_array_decl final_prefix_array_decl final_postfix_array_decl var_decl final_var_decl array_prefix_init_opt array_postfix_init_opt for_each_statement incremento
/* Eliminados head_nonfinal/head_final y dims_*; nueva estrategia centrada en prefix */
%type <boolean> prefix_dims postfix_dims
%type <paramList> lista_parametros param_opt

%type <tipoDato> tipoPrimitivo
/* removidos dims_new_list y bracket_list_plus definitvamente */

// Precedencias (menor a mayor): OR < AND < igualdad < relacionales < aditivas < bitwise < shifts < multiplicativas < NEG < CAST < acceso '.' < NOT
// Ajuste: AND/OR ahora tienen menor precedencia que comparaciones para que expr: a >= 0 && a < b se agrupe como (a>=0) && (a<b)
%left TOKEN_OR
%left TOKEN_AND
%left TOKEN_EQUAL TOKEN_NOT_EQUAL
%left TOKEN_GREATER TOKEN_LESS TOKEN_GREATER_EQUAL TOKEN_LESS_EQUAL
%left '+' '-'
%left '&' '^' '|'
%left TOKEN_SHIFT_LEFT TOKEN_SHIFT_RIGHT
%left '*' '/' '%'
%left NEG
%left CAST
%left '.'
%right TOKEN_NOT

%%

%start s;

s: lSentencia  { ast_root = $1; $$ = $1; }
    //| error '\n'  { yyerrok; }
    ;
//                                               Padre, hijo;
lSentencia: lSentencia instruccion { agregarHijo($1, $2); $$ = $1;}
    | instruccion {
                        AbstractExpresion* b = nuevoInstruccionesExpresion();
                        agregarHijo(b, $1);
                        $$ =  b;
                    }
    ;

instruccion: if_statement {$$ = $1;}
    | switch_statement {$$ = $1;}
    | break_statement {$$ = $1;}
    | while_statement {$$ = $1;}
    | for_statement {$$ = $1;}
    | for_each_statement {$$ = $1;}
    | imprimir ';' {$$ = $1; }
    | bloque {$$ = $1;}
    | declaracion_var ';' {$$ = $1;}
    | funcion_declaracion {$$ = $1;}
    | main_declaracion {$$ = $1;}
    | return_stmt ';' {$$ = $1;}
    | asignacion ';' {$$ = $1;}
    | asignacion_elemento ';' {$$ = $1;}
    | postfix ';' { $$ = $1; }
    | continue_statement {$$ = $1;}
    ;

if_statement: TOKEN_IF '(' expr ')' bloque { $$ = nuevoIfExpresion($3, $5, NULL); }
    | TOKEN_IF '(' expr ')' bloque TOKEN_ELSE bloque { $$ = nuevoIfExpresion($3, $5, $7); }
    | TOKEN_IF '(' expr ')' bloque TOKEN_ELSE if_statement { $$ = nuevoIfExpresion($3, $5, $7); }
    | TOKEN_IF '(' expr ')' instruccion_simple ';' { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, $5);
        $$ = nuevoIfExpresion($3, nuevoBloqueExpresion(b), NULL); 
    }
    | TOKEN_IF '(' expr ')' instruccion_simple ';' TOKEN_ELSE bloque { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, $5);
        $$ = nuevoIfExpresion($3, nuevoBloqueExpresion(b), $8); 
    }
    | TOKEN_IF '(' expr ')' instruccion_simple ';' TOKEN_ELSE if_statement { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, $5);
        $$ = nuevoIfExpresion($3, nuevoBloqueExpresion(b), $8); 
    }
    ;

switch_statement: TOKEN_SWITCH '(' expr ')' '{' case_list '}' { $$ = nuevoSwitchExpresion($3, $6, NULL); }
    | TOKEN_SWITCH '(' expr ')' '{' case_list default_case '}' { $$ = nuevoSwitchExpresion($3, $6, $7); }
    ;

while_statement: TOKEN_WHILE '(' expr ')' bloque { $$ = nuevoWhileExpresion($3, $5); }
    | TOKEN_WHILE '(' expr ')' instruccion_simple { 
        AbstractExpresion* b = nuevoListaExpresiones();
        agregarHijo(b, $5);
        $$ = nuevoWhileExpresion($3, nuevoBloqueExpresion(b)); 
    }
    ;

for_statement:
    TOKEN_FOR '(' declaracion_var ';' expr ';' incremento ')' bloque_for { $$=nuevoForExpresion($3,$5,$7,$9); }
| TOKEN_FOR '(' declaracion_var ';' expr ';' incremento ')' instruccion_simple { AbstractExpresion* b=nuevoListaExpresiones(); agregarHijo(b,$9); $$=nuevoForExpresion($3,$5,$7,nuevoBloqueExpresionConContextoPadre(b)); }
| TOKEN_FOR '(' declaracion_var ';' expr ';' ')' bloque_for { $$=nuevoForExpresion($3,$5,NULL,$8); }
| TOKEN_FOR '(' declaracion_var ';' expr ';' ')' instruccion_simple { AbstractExpresion* b=nuevoListaExpresiones(); agregarHijo(b,$8); $$=nuevoForExpresion($3,$5,NULL,nuevoBloqueExpresionConContextoPadre(b)); }
| TOKEN_FOR '(' asignacion ';' expr ';' incremento ')' bloque { $$=nuevoForExpresion($3,$5,$7,$9); }
| TOKEN_FOR '(' asignacion ';' expr ';' incremento ')' instruccion_simple { AbstractExpresion* b=nuevoListaExpresiones(); agregarHijo(b,$9); $$=nuevoForExpresion($3,$5,$7,nuevoBloqueExpresion(b)); }
;

incremento:
        asignacion { $$ = $1; }
    | TOKEN_IDENTIFIER TOKEN_PLUS_PLUS { AbstractExpresion* id= nuevoIdentificadorExpresion($1); AbstractExpresion* uno=nuevoPrimitivoExpresion(strdup("1"),INT); AbstractExpresion* sum=nuevoSumaExpresion(id,uno); $$=nuevoAsignacionExpresion($1,sum);} 
    | TOKEN_IDENTIFIER TOKEN_MINUS_MINUS { AbstractExpresion* id= nuevoIdentificadorExpresion($1); AbstractExpresion* uno=nuevoPrimitivoExpresion(strdup("1"),INT); AbstractExpresion* res=nuevoRestaExpresion(id,uno); $$=nuevoAsignacionExpresion($1,res);} ;

case_list: case_item { 
        AbstractExpresion* lista = nuevoListaExpresiones();
        agregarHijo(lista, $1);
        $$ = lista;
    }
    | case_list case_item {
        agregarHijo($1, $2);
        $$ = $1;
    }
    ;

case_item: TOKEN_CASE expr ':' instrucciones_case { $$ = nuevoCaseExpresion($2, $4, 0); }
    | TOKEN_CASE expr ':' instrucciones_case TOKEN_BREAK ';' { $$ = nuevoCaseExpresion($2, $4, 1); }
    ;

instrucciones_case: instruccion_case {
        AbstractExpresion* lista = nuevoListaExpresiones();
        agregarHijo(lista, $1);
        $$ = lista;
    }
    | instrucciones_case instruccion_case {
        agregarHijo($1, $2);
        $$ = $1;
    }
    ;

instruccion_case: imprimir ';' {$$ = $1; }
    | bloque {$$ = $1;}
    | declaracion_var ';' {$$ = $1;}
    | asignacion ';' {$$ = $1;}
    ;

default_case: TOKEN_DEFAULT ':' instrucciones_case { $$ = $3; }
    | TOKEN_DEFAULT ':' instrucciones_case TOKEN_BREAK ';' { $$ = $3; }
    ;

break_statement: TOKEN_BREAK ';' { $$ = nuevoBreakExpresion(); }
    ;

continue_statement: TOKEN_CONTINUE ';' { $$ = nuevoContinueExpresion(); }
    ;

instruccion_simple: imprimir {$$ = $1; }
    | declaracion_var {$$ = $1;}
    | asignacion {$$ = $1;}
    ;

asignacion: TOKEN_IDENTIFIER '=' expr { $$ = nuevoAsignacionExpresion($1, $3); }
    | TOKEN_IDENTIFIER TOKEN_PLUS_ASSIGN expr { $$ = nuevoAsignacionSumaExpresion($1, $3); }
    | TOKEN_IDENTIFIER TOKEN_MINUS_ASSIGN expr { $$ = nuevoAsignacionRestaExpresion($1, $3); }
    | TOKEN_IDENTIFIER TOKEN_MUL_ASSIGN expr { $$ = nuevoAsignacionMultiplicacionExpresion($1, $3); }
    | TOKEN_IDENTIFIER TOKEN_DIV_ASSIGN expr { $$ = nuevoAsignacionDivisionExpresion($1, $3); }
    | TOKEN_IDENTIFIER TOKEN_MOD_ASSIGN expr { $$ = nuevoAsignacionModuloExpresion($1, $3); }
    | TOKEN_IDENTIFIER TOKEN_AND_ASSIGN expr { /* a &= b -> a = a & b */ AbstractExpresion* id=nuevoIdentificadorExpresion($1); AbstractExpresion* op=nuevoBitAndExpresion(id,$3); $$=nuevoAsignacionExpresion($1,op);} 
    | TOKEN_IDENTIFIER TOKEN_OR_ASSIGN expr { AbstractExpresion* id=nuevoIdentificadorExpresion($1); AbstractExpresion* op=nuevoBitOrExpresion(id,$3); $$=nuevoAsignacionExpresion($1,op);} 
    | TOKEN_IDENTIFIER TOKEN_XOR_ASSIGN expr { AbstractExpresion* id=nuevoIdentificadorExpresion($1); AbstractExpresion* op=nuevoBitXorExpresion(id,$3); $$=nuevoAsignacionExpresion($1,op);} 
    | TOKEN_IDENTIFIER TOKEN_SHL_ASSIGN expr { AbstractExpresion* id=nuevoIdentificadorExpresion($1); AbstractExpresion* op=nuevoShiftLeftExpresion(id,$3); $$=nuevoAsignacionExpresion($1,op);} 
    | TOKEN_IDENTIFIER TOKEN_SHR_ASSIGN expr { AbstractExpresion* id=nuevoIdentificadorExpresion($1); AbstractExpresion* op=nuevoShiftRightExpresion(id,$3); $$=nuevoAsignacionExpresion($1,op);} 

lista_Expr: lista_Expr ','  expr { agregarHijo($1, $3); $$ = $1; }
    | expr { 
                AbstractExpresion* b = nuevoListaExpresiones();
                agregarHijo(b, $1);
                $$ =  b;
            }
    ;

imprimir: TOKEN_PRINT '(' lista_Expr ')' { $$ =  nuevoPrintExpresion($3); }
    | TOKEN_SYSTEM_OUT_PRINTLN '(' lista_Expr ')' { $$ =  nuevoPrintExpresion($3); }
    ;

bloque: '{' lSentencia '}' { $$ = nuevoBloqueExpresion($2); }

bloque_for: '{' lSentencia '}' { $$ = nuevoBloqueExpresionConContextoPadre($2); }

/* =================== DECLARACIONES (simplificadas) =================== */

declaracion_var:
      prefix_array_decl
    | postfix_array_decl
    | final_prefix_array_decl
    | final_postfix_array_decl
    | var_decl
    | final_var_decl
    ;

prefix_array_decl:
    tipoPrimitivo prefix_dims TOKEN_IDENTIFIER { __tmp_decl_tipo=$1; __tmp_decl_dims=$2; __tmp_decl_nombre=$3; __tmp_decl_final=0; } array_prefix_init_opt {
        if(__tmp_decl_dims<1||__tmp_decl_dims>5){ printf("Error: dims fuera rango 1-5 (%d)\n",__tmp_decl_dims); $$=nuevoListaExpresiones(); }
        else if(!$5){ $$=nuevoListaExpresiones(); }
        else $$=$5;
    };

postfix_array_decl:
    tipoPrimitivo TOKEN_IDENTIFIER postfix_dims { __tmp_decl_tipo=$1; __tmp_decl_nombre=$2; __tmp_decl_dims=$3; __tmp_decl_final=0; } array_postfix_init_opt {
        if(__tmp_decl_dims<1||__tmp_decl_dims>5){ printf("Error: dims fuera rango 1-5 (%d)\n",__tmp_decl_dims); $$=nuevoListaExpresiones(); }
        else if(!$5){ $$=nuevoListaExpresiones(); }
        else $$=$5;
    };

final_prefix_array_decl:
    TOKEN_FINAL tipoPrimitivo prefix_dims TOKEN_IDENTIFIER { __tmp_decl_tipo=$2; __tmp_decl_dims=$3; __tmp_decl_nombre=$4; __tmp_decl_final=1; } array_prefix_init_opt {
        if(__tmp_decl_dims<1||__tmp_decl_dims>5){ printf("Error: dims fuera rango 1-5 (%d)\n",__tmp_decl_dims); $$=nuevoListaExpresiones(); }
        else if(!$6){ printf("Error: final requiere inicialización.\n"); $$=nuevoListaExpresiones(); }
        else $$=$6;
    };

final_postfix_array_decl:
    TOKEN_FINAL tipoPrimitivo TOKEN_IDENTIFIER postfix_dims { __tmp_decl_tipo=$2; __tmp_decl_nombre=$3; __tmp_decl_dims=$4; __tmp_decl_final=1; } array_postfix_init_opt {
        if(__tmp_decl_dims<1||__tmp_decl_dims>5){ printf("Error: dims fuera rango 1-5 (%d)\n",__tmp_decl_dims); $$=nuevoListaExpresiones(); }
        else if(!$6){ printf("Error: final requiere inicialización.\n"); $$=nuevoListaExpresiones(); }
        else $$=$6;
    };

var_decl:
    tipoPrimitivo TOKEN_IDENTIFIER '=' expr { $$ = nuevoDeclaracionVariables($1,$2,$4,0); }
  | tipoPrimitivo TOKEN_IDENTIFIER { $$ = nuevoListaExpresiones(); };

final_var_decl:
    TOKEN_FINAL tipoPrimitivo TOKEN_IDENTIFIER '=' expr { $$ = nuevoDeclaracionVariables($2,$3,$5,1); };

array_prefix_init_opt:
    /* empty */ { $$=NULL; }
    | '=' TOKEN_NEW tipoPrimitivo dims_expr_list {
        size_t nd=$4->numHijos;
        if ($3 != __tmp_decl_tipo) { printf("Advertencia: tipo NEW distinto del declarado.\n"); }
        if (nd<1||nd>5){ printf("Error: dims fuera rango NEW 1-5 (%zu)\n",nd); $$=nuevoListaExpresiones(); }
        else if(nd==1) $$=nuevoArrayDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre, $4->hijos[0]);
        else if(nd==2) $$=nuevoMatrixDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,$4->hijos[0],$4->hijos[1]);
        else { AbstractExpresion** arr=malloc(sizeof(AbstractExpresion*)*nd); for(size_t i=0;i<nd;i++) arr[i]=$4->hijos[i]; $$=nuevoMultiArrayDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,nd,arr);} }
    | '=' '{' lista_Expr '}' { $$=nuevoArrayLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,$3); }
    | '=' '{' filas_lista '}' { $$=nuevoMatrixLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,$3); }
    | '=' '{' lista_bloques2D '}' { $$=nuevoArray3DLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,$3); }
    | '=' '{' '}' { AbstractExpresion* l=nuevoListaExpresiones(); $$=nuevoArrayLiteralDeclaracion(__tmp_decl_tipo,__tmp_decl_nombre,l); }
    | '=' expr { $$=nuevoArrayDeclaracionDesdeExpr(__tmp_decl_tipo,__tmp_decl_nombre,$2); }
    ;

array_postfix_init_opt: array_prefix_init_opt;

prefix_dims: '[' ']' { $$ = 1; } | prefix_dims '[' ']' { $$ = $1 + 1; };
postfix_dims: '[' ']' { $$ = 1; } | postfix_dims '[' ']' { $$ = $1 + 1; };

/* Lista de dimensiones en NEW */
dims_expr_list: '[' expr ']' { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l,$2); $$ = l; }
        | dims_expr_list '[' expr ']' { agregarHijo($1,$3); $$ = $1; };

/* (Sintaxis prefija eliminada para reducir ambigüedad) */

/* Secuencias de brackets para contar dimensiones (>=1) */

/* multi_array_declaracion original eliminada */

lista_bloques2D: bloque2D { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l, $1); $$ = l; }
    | lista_bloques2D ',' bloque2D { agregarHijo($1, $3); $$ = $1; };

bloque2D: '{' filas_lista '}' { $$ = $2; };

filas_lista: fila_matriz { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l, $1); $$ = l; }
    | filas_lista ',' fila_matriz { agregarHijo($1, $3); $$ = $1; };

fila_matriz: '{' lista_Expr '}' { $$ = $2; };


asignacion_elemento: TOKEN_IDENTIFIER indices_una '=' expr {
        AbstractExpresion* idx = $2->hijos[0]; $$ = nuevoArrayAsignacionElemento($1, idx, $4); }
    | TOKEN_IDENTIFIER indices_multi '=' expr {
        size_t n=$2->numHijos; if (n==2) $$=nuevoMatrixAsignacionElemento($1,$2->hijos[0],$2->hijos[1],$4); else {
            $$=nuevoMultiArrayAsignacionElemento($1,$2,$4); }
    }
    ;

/* Para diferenciar a[i] (simple) de a[i][j]... usamos indices_multi (>=2) */
indices_una: '[' expr ']' { AbstractExpresion* l = nuevoListaExpresiones(); agregarHijo(l,$2); $$=l; };
indices_multi: indices_una indices_una { /* concat */ for(size_t i=0;i<$2->numHijos;i++) agregarHijo($1,$2->hijos[i]); $$=$1; }
    | indices_multi indices_una { for(size_t i=0;i<$2->numHijos;i++) agregarHijo($1,$2->hijos[i]); $$=$1; };


/* 
TODO: para mejorar la legibilidad en lugar de guardar la operacion por incumplir
el principio de responsabilidad única y también el Principio de abierto/cerrado (SOLID)
la accion semantica fungirá como factoría abstracta y cada expresión tendra su método interpret
para hacer la operación además de utilizar otros métodos "heredados".

expr: expr '+' expr   { $$ =  nuevoExpresionLenguaje('+', $1, $3);  }
    | expr '-' expr { $$ =  nuevoExpresionLenguaje('-', $1, $3); }
    | '(' expr ')' { $$ = $2; }
    | '-' expr %prec NEG  { $$ =  nuevoExpresionLenguaje('U', $2, NULL);  }
    | primitivo { $$ = $1; }
    ; 
*/

expr: expr '+' expr   { $$ =  nuevoSumaExpresion($1, $3);  }
    | expr '-' expr { $$ =  nuevoRestaExpresion($1, $3); }
    | expr '*' expr { $$ =  nuevoMultiplicacionExpresion($1, $3); }
    | expr '/' expr { $$ =  nuevoDivisionExpresion($1, $3); }
    | expr '%' expr { $$ =  nuevoModuloExpresion($1, $3); }
    | expr '&' expr { $$ =  nuevoBitAndExpresion($1, $3); }
    | expr '|' expr { $$ =  nuevoBitOrExpresion($1, $3); }
    | expr '^' expr { $$ =  nuevoBitXorExpresion($1, $3); }
    | expr TOKEN_SHIFT_LEFT expr { $$ =  nuevoShiftLeftExpresion($1, $3); }
    | expr TOKEN_SHIFT_RIGHT expr { $$ =  nuevoShiftRightExpresion($1, $3); }
    | expr TOKEN_EQUAL expr { $$ =  nuevoIgualdadExpresion($1, $3); }
    | expr TOKEN_NOT_EQUAL expr { $$ =  nuevoDesigualdadExpresion($1, $3); }
    | expr TOKEN_GREATER expr { $$ =  nuevoMayorQueExpresion($1, $3); }
    | expr TOKEN_LESS expr { $$ =  nuevoMenorQueExpresion($1, $3); }
    | expr TOKEN_GREATER_EQUAL expr { $$ =  nuevoMayorIgualQueExpresion($1, $3); }
    | expr TOKEN_LESS_EQUAL expr { $$ =  nuevoMenorIgualQueExpresion($1, $3); }
    | expr TOKEN_AND expr { $$ =  nuevoAndExpresion($1, $3); }
    | expr TOKEN_OR expr { $$ =  nuevoOrExpresion($1, $3); }
    | TOKEN_NOT expr { $$ =  nuevoNotExpresion($2); }
    | '-' expr %prec NEG  { $$ =  nuevoUnarioExpresion($2);  }
    | postfix { $$ = $1; }
    ;

postfix: unary { $$ = $1; }
    | postfix '[' expr ']' { $$ = nuevoArrayAcceso($1, $3); }
    | postfix '.' TOKEN_LENGTH { $$ = nuevoArrayLength($1); }
    | postfix '.' TOKEN_ADD '(' expr ')' { $$ = nuevoArrayAdd($1, $5); }
    | postfix '.' TOKEN_IDENTIFIER '(' expr ')' { if(strcmp($3,"equals")==0){ $$ = nuevoIgualdadExpresion($1,$5);} else { $$=$1; } }
    | postfix '.' TOKEN_IDENTIFIER '(' ')' { if(strcmp($3,"equals")==0){ printf("Error: equals requiere argumento\n"); $$=$1;} else { $$=$1; } }
    | TOKEN_IDENTIFIER TOKEN_PLUS_PLUS {
        AbstractExpresion* id1 = nuevoIdentificadorExpresion($1);
        AbstractExpresion* uno1 = nuevoPrimitivoExpresion(strdup("1"), INT);
        AbstractExpresion* sum1 = nuevoSumaExpresion(id1, uno1);
        $$ = nuevoAsignacionExpresion($1, sum1);
    }
    | TOKEN_IDENTIFIER TOKEN_MINUS_MINUS {
        AbstractExpresion* id2 = nuevoIdentificadorExpresion($1);
        AbstractExpresion* uno2 = nuevoPrimitivoExpresion(strdup("1"), INT);
        AbstractExpresion* res2 = nuevoRestaExpresion(id2, uno2);
        $$ = nuevoAsignacionExpresion($1, res2);
    }
    ;

unary: atom { $$ = $1; }
    | '(' tipoPrimitivo ')' unary %prec CAST { $$ = nuevoCastExpresion($2, $4); }
    ;

atom: primitivo { $$ = $1; }
    | '(' expr ')' { $$ = $2; }
    | TOKEN_IDENTIFIER { $$ = nuevoIdentificadorExpresion($1); }
    | llamada_funcion { $$ = $1; }
    | TOKEN_ARRAYS '.' TOKEN_INDEXOF '(' expr ',' expr ')' { $$ = nuevoArraysIndexOf($5, $7); }
    | TOKEN_INTEGER_CLASS '.' TOKEN_PARSE_INT '(' expr ')' { $$ = nuevoParseEntero($5); }
    | TOKEN_DOUBLE_CLASS '.' TOKEN_PARSE_DOUBLE '(' expr ')' { $$ = nuevoParseDouble($5); }
    | TOKEN_FLOAT_CLASS '.' TOKEN_PARSE_FLOAT '(' expr ')' { $$ = nuevoParseFloat($5); }
    | TOKEN_DSTRING '.' TOKEN_VALUE_OF '(' expr ')' { $$ = nuevoStringValueOf($5); }
    | TOKEN_DSTRING '.' TOKEN_JOIN '(' expr ',' expr ')' { $$ = nuevoStringJoin($5, $7, 1); }
    | TOKEN_DSTRING '.' TOKEN_JOIN '(' expr ',' join_variadic_args ')' { $$ = nuevoStringJoin($5, $7, 0); }
    ;

join_variadic_args: expr ',' lista_Expr {
        /* crear lista que contenga primer expr y luego los de lista_Expr */
        AbstractExpresion* l = nuevoListaExpresiones();
        agregarHijo(l, $1);
        for(size_t i=0;i<$3->numHijos;i++){ agregarHijo(l, $3->hijos[i]); }
        $$ = l;
    };

primitivo: TOKEN_UNSIGNED_INTEGER { $$ =  nuevoPrimitivoExpresion($1, INT); }
    | TOKEN_STRING { $$ =  nuevoPrimitivoExpresion($1, STRING); }
    | TOKEN_REAL_FLOAT { $$ =  nuevoPrimitivoExpresion($1, FLOAT); }
    | TOKEN_REAL { $$ =  nuevoPrimitivoExpresion($1, DOUBLE); }
    | TOKEN_CHAR_LITERAL { $$ =  nuevoPrimitivoExpresion($1, CHAR); }
    | TOKEN_TRUE { $$ =  nuevoPrimitivoExpresion($1, BOOLEAN); }
    | TOKEN_FALSE { $$ =  nuevoPrimitivoExpresion($1, BOOLEAN); }
    ;

tipoPrimitivo: TOKEN_DINT { $$ = INT; }
    | TOKEN_DFLOAT { $$ = FLOAT; }
    | TOKEN_DDOUBLE { $$ = DOUBLE; }
    | TOKEN_DSTRING { $$ = STRING; }
    | TOKEN_DBOOLEAN { $$ = BOOLEAN; }
    | TOKEN_DCHAR { $$ = CHAR; }
    | TOKEN_DVOID { $$ = VOID; }
    ;

funcion_declaracion: tipoPrimitivo TOKEN_IDENTIFIER '(' param_opt ')' bloque { 
        if($4){ $$ = nuevoFuncionDeclaracion($1, $2, $4->names, $4->types, $4->count, $6); }
        else { $$ = nuevoFuncionDeclaracion($1, $2, NULL, NULL, 0, $6); }
    };

/* public static void main(String[] args){ ... } soporte mínimo: ignoramos params */
main_declaracion: TOKEN_PUBLIC TOKEN_STATIC TOKEN_DVOID TOKEN_IDENTIFIER '(' main_params_opt ')' bloque { $$ = $8; };
main_params_opt: /* empty */ | main_params;
main_params: main_param | main_params ',' main_param;
main_param: tipoPrimitivo main_param_array_brackets TOKEN_IDENTIFIER;
main_param_array_brackets: /* empty */ { /* 0 dims */ } | main_param_array_brackets '[' ']' { /* accum dims ignored */ };

param_opt: /* empty */ { $$ = NULL; }
    | lista_parametros { $$ = $1; };

lista_parametros: tipoPrimitivo TOKEN_IDENTIFIER { 
        ParamList* pl = malloc(sizeof(ParamList));
        pl->count=1; pl->names=malloc(sizeof(char*)); pl->types=malloc(sizeof(TipoDato));
        pl->names[0]=$2; pl->types[0]=$1; $$=pl; }
    | lista_parametros ',' tipoPrimitivo TOKEN_IDENTIFIER { 
        $1->names = realloc($1->names, sizeof(char*)*($1->count+1));
        $1->types = realloc($1->types, sizeof(TipoDato)*($1->count+1));
        $1->names[$1->count]=$4; $1->types[$1->count]=$3; $1->count++; $$=$1; };

return_stmt: TOKEN_RETURN { $$ = nuevoReturnExpresion(NULL); }
    | TOKEN_RETURN expr { $$ = nuevoReturnExpresion($2); }
    ;

/* for-each desazucarado */
for_each_statement:
    TOKEN_FOR '(' tipoPrimitivo TOKEN_IDENTIFIER ':' TOKEN_IDENTIFIER ')' bloque {
          /* Desazucar: soportar flatten para arrays >=2D usando pila de índices
              Estrategia: generar bucles anidados según profundidad dinámica medida en runtime: iteramos cada nivel si el elemento actual aún es ARRAY.
              Simplificación: generamos un for principal sobre el arreglo original; si el elemento es ARRAY, usamos Array.length recursivo que ya suma todos los internos y hacemos un acceso lineal simulando flatten: i recorre 0..lengthTotal-1 y para each recuperamos elemento linealizado.
              Implementación minimal: length recursivo ya devuelve total; acceso lineal: creamos builtin que recorre y avanza un contador global oculto. Aquí haremos workaround: reemplazar for-each multi-dimension por for simple sobre length total y acceso mediante función auxiliar equals sobre índice lineal -> no disponible; alternativa: iterar superficialmente y si elemento es ARRAY, insertar otro for-each recursivo construido aquí. */
          /* Construcción básica 1D y fallback recursivo: si el cuerpo usa variable, queremos consistente para multidim -> generamos verificación y si elemento es ARRAY, no declaramos var primitiva (se imprimirá error si se intenta usar). */
          char bufIdx[64]; snprintf(bufIdx,sizeof(bufIdx),"__idx_fe_%s", $4); char* idxName=strdup(bufIdx);
          AbstractExpresion* cero = nuevoPrimitivoExpresion(strdup("0"), INT);
          AbstractExpresion* declIdx = nuevoDeclaracionVariables(INT, idxName, cero, 0);
          AbstractExpresion* idIdx1 = nuevoIdentificadorExpresion(idxName);
          AbstractExpresion* arrId1 = nuevoIdentificadorExpresion($6);
          AbstractExpresion* lenAcc = nuevoArrayLength(arrId1);
          AbstractExpresion* cond = nuevoMenorQueExpresion(idIdx1, lenAcc);
          AbstractExpresion* idIdx2 = nuevoIdentificadorExpresion(idxName);
          AbstractExpresion* uno = nuevoPrimitivoExpresion(strdup("1"), INT);
          AbstractExpresion* sum = nuevoSumaExpresion(idIdx2, uno);
          AbstractExpresion* inc = nuevoAsignacionExpresion(idxName, sum);
    AbstractExpresion* arrId2 = nuevoIdentificadorExpresion($6);
    AbstractExpresion* idIdx3 = nuevoIdentificadorExpresion(idxName);
    /* Acceso linealizado: soporta multi-d devolviendo elemento hoja en orden */
    AbstractExpresion* acceso = nuevoArrayLinearAccess(arrId2, idIdx3);
          AbstractExpresion* declVar = nuevoDeclaracionVariables($3, $4, acceso, 0);
          AbstractExpresion* lista = nuevoListaExpresiones(); agregarHijo(lista, declVar); agregarHijo(lista, $8);
          AbstractExpresion* cuerpo = nuevoBloqueExpresion(lista);
          $$ = nuevoForExpresion(declIdx, cond, inc, cuerpo);
    };

argumentos_opt: /* empty */ { $$ = nuevoListaExpresiones(); }
    | lista_Expr { $$ = $1; };

llamada_funcion: TOKEN_IDENTIFIER '(' argumentos_opt ')' { $$ = nuevoLlamadaFuncion($1, $3); };
%%

/* definición de yyerror, usa el yylloc global para ubicación */
void yyerror(const char *s) {
    fprintf(stderr,
            "Illegal input %s en %d:%d\n",
            s,
            yylloc.first_line,
            yylloc.first_column);
}
