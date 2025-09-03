%{
#include "parser.tab.h"

#include <stdio.h>
#include <string.h>

extern void yyerror(const char *s);

/* Contador de columna */
int yycolumn = 1;

/* Se ejecuta antes de cada accion, actualiza yylloc y columna */
#define YY_USER_ACTION                                   \
    yylloc.first_line   = yylineno;                      \
    yylloc.first_column = yycolumn;                      \
    yylloc.last_line    = yylineno;                      \
    yylloc.last_column  = yycolumn + yyleng - 1;         \
    yycolumn += yyleng;
%}

/* Opciones de Flex 
 * yylineno:  mantenga el numero de la linea actual
 leida desde su entrada en la variable global yylineno.
 * noyywrap:  hace que el analizador no llame a yywrap() hasta el fin-de-fichero, 
 pero simplemente asume que no hay mas ficheros que analizar.
*/
%option noyywrap yylineno nounput noinput

/* Condiciones de arranque */
%x COMMENT2 COMMENTLINEA

/* definiciones */
white_space       [ \t]*
digit             [0-9]
alpha             [A-Za-z_]
alpha_num         ({alpha}|{digit})
/* hex_digit         [0-9A-F] */
identifier        {alpha}{alpha_num}*
unsigned_integer  {digit}+
/* hex_integer       ${hex_digit}{hex_digit}* */
exponent          e[+-]?{digit}+
i                 {unsigned_integer}
real              ({i}\.{i}?|{i}?\.{i}){exponent}?
real_float_suffix ({i}\.{i}?|{i}?\.{i}){exponent}?[fF]
/* permitir escapes con \ \" y \n etc */
string            \"([^\\"\n]|\\.)*\"
bad_string        \"([^\\"\n]|\\.)+
char_literal      '([^'\\]|\\.)+'

%%
"//"                     BEGIN(COMMENTLINEA);
<COMMENTLINEA>[^\n\r]+ 
<COMMENTLINEA><<EOF>>    { /* terminar comentario de línea al EOF sin error */ return 0; }
<COMMENTLINEA>[\n\r]     {yycolumn=1; BEGIN(INITIAL);}

"/*"                 BEGIN(COMMENT2);
<COMMENT2>[^/*\n\r]+
<COMMENT2>[\n\r]     {yycolumn=1;}
<COMMENT2><<EOF>>    { yyerror("EOF in comment"); return 0; }
<COMMENT2>"*/"       BEGIN(INITIAL);
<COMMENT2>[/*]

"else"              return(TOKEN_ELSE);
"if"                return(TOKEN_IF);
"switch"            return(TOKEN_SWITCH);
"case"              return(TOKEN_CASE);
"default"           return(TOKEN_DEFAULT);
"break"             return(TOKEN_BREAK);
"continue"          return(TOKEN_CONTINUE);
"while"             return(TOKEN_WHILE);
"for"               return(TOKEN_FOR);
"print"             return(TOKEN_PRINT);
"void"              return(TOKEN_DVOID);
"return"            return(TOKEN_RETURN);
"Integer"           return(TOKEN_INTEGER_CLASS);
"Double"            return(TOKEN_DOUBLE_CLASS);
"Float"             return(TOKEN_FLOAT_CLASS);
"Arrays"            return(TOKEN_ARRAYS);
"public"            return(TOKEN_PUBLIC);
"static"            return(TOKEN_STATIC);
"parseInt"          return(TOKEN_PARSE_INT);
"parseDouble"       return(TOKEN_PARSE_DOUBLE);
"parseFloat"        return(TOKEN_PARSE_FLOAT);
"valueOf"           return(TOKEN_VALUE_OF);
"join"              return(TOKEN_JOIN);
"length"            return(TOKEN_LENGTH);
"add"               return(TOKEN_ADD);
"indexOf"           return(TOKEN_INDEXOF);
"int"               return(TOKEN_DINT);
"float"             return(TOKEN_DFLOAT);
"byte"              { yyerror("Tipo byte no soportado"); }
"short"             { yyerror("Tipo short no soportado"); }
"long"              { yyerror("Tipo long no soportado"); }
"double"            return(TOKEN_DDOUBLE);
"String"            return(TOKEN_DSTRING);
"final"             return(TOKEN_FINAL);
"new"               return(TOKEN_NEW);
"true"              {yylval.string = strdup("true"); return(TOKEN_TRUE);}
"false"             {yylval.string = strdup("false"); return(TOKEN_FALSE);}
"boolean"           return(TOKEN_DBOOLEAN);
"char"              return(TOKEN_DCHAR);
"System.out.println" return(TOKEN_SYSTEM_OUT_PRINTLN);

{unsigned_integer}   {yylval.string = strdup(yytext); return(TOKEN_UNSIGNED_INTEGER);}
{real_float_suffix}  { size_t l=yyleng-1; char* tmp=malloc(l+1); strncpy(tmp, yytext, l); tmp[l]='\0'; yylval.string=tmp; return(TOKEN_REAL_FLOAT); }
{real}               {yylval.string = strdup(yytext); return(TOKEN_REAL);}
{string}             {
                        /* quitar comillas */
                        size_t rawLen = yyleng - 2; /* sin comillas */
                        char* raw = &yytext[1];
                        /* primera pasada: contar longitud tras escapes y unificar \r\n */
                        size_t i=0, outLen=0; 
                        while (i < rawLen) {
                            if (raw[i] == '\\' && i + 1 < rawLen) {
                                outLen++; /* cualquier escape produce 1 char */
                                i += 2;
                            } else if (raw[i]=='\r') {
                                if (i+1 < rawLen && raw[i+1]=='\n') { outLen++; i+=2; } else { outLen++; i++; }
                            } else { outLen++; i++; }
                        }
                        char* dest = malloc(outLen+1);
                        i=0; size_t j=0; 
                        while (i < rawLen) {
                            if (raw[i] == '\\' && i + 1 < rawLen) {
                                char c = raw[i+1];
                                switch (c) {
                                    case 'n': dest[j++]='\n'; break;
                                    case 'r': dest[j++]='\r'; break;
                                    case 't': dest[j++]='\t'; break;
                                    case '\\': dest[j++]='\\'; break;
                                    case '"': dest[j++]='"'; break;
                                    case '\'': dest[j++]='\''; break;
                                    default: dest[j++]=c; break;
                                }
                                i+=2;
                            } else if (raw[i]=='\r') {
                                if (i+1 < rawLen && raw[i+1]=='\n') { dest[j++]='\n'; i+=2; } else { dest[j++]='\r'; i++; }
                            } else {
                                dest[j++]=raw[i++]; }
                        }
                        dest[j]='\0';
                        yylval.string = dest; 
                        return(TOKEN_STRING);
                     }
{bad_string}         yyerror("Unterminated string");
{char_literal}       {
                        yylval.string = malloc(yyleng);
                        /* copiar sin comillas */
                        strncpy(yylval.string, &yytext[1], yyleng - 2);
                        yylval.string[yyleng-2]='\0';
                        /* decodificar \uXXXX si aplica */
                        if(strncmp(yylval.string, "\\u",2)==0 && strlen(yylval.string)==6){
                            char hex[5]; memcpy(hex, yylval.string+2,4); hex[4]='\0';
                            char* end=NULL; long code=strtol(hex,&end,16);
                            if(*end=='\0' && code>=0 && code<=255){ /* limitar a 1 byte */
                                yylval.string[0]=(char)code; yylval.string[1]='\0';
                            }
                        }
                        return(TOKEN_CHAR_LITERAL); }

{identifier}         { yylval.string = strdup(yytext); return(TOKEN_IDENTIFIER); }

"++"                   return(TOKEN_PLUS_PLUS);
"--"                   return(TOKEN_MINUS_MINUS);
"+="                   return(TOKEN_PLUS_ASSIGN);
"-="                   return(TOKEN_MINUS_ASSIGN);
"*="                   return(TOKEN_MUL_ASSIGN);
"/="                   return(TOKEN_DIV_ASSIGN);
"%="                   return(TOKEN_MOD_ASSIGN);
"<<="                  return(TOKEN_SHL_ASSIGN);
">>="                  return(TOKEN_SHR_ASSIGN);
"&="                   return(TOKEN_AND_ASSIGN);
"|="                   return(TOKEN_OR_ASSIGN);
"^="                   return(TOKEN_XOR_ASSIGN);
"=="                   return(TOKEN_EQUAL);
"!="                   return(TOKEN_NOT_EQUAL);
">="                   return(TOKEN_GREATER_EQUAL);
"<="                   return(TOKEN_LESS_EQUAL);
">"                    return(TOKEN_GREATER);
"<"                    return(TOKEN_LESS);
"&&"                   return(TOKEN_AND);
"||"                   return(TOKEN_OR);
"!"                    return(TOKEN_NOT);
"<<"                   return(TOKEN_SHIFT_LEFT);
">>"                   return(TOKEN_SHIFT_RIGHT);

[*/+\-,.%^()\[\]\{\}\;:=&|]      return(yytext[0]);

{white_space}        /* do nothing */
[\n\r]               {yycolumn=1;}
.                    yyerror("Illegal input");

%%