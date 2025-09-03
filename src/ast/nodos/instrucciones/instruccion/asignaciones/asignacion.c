#include "ast/AbstractExpresion.h"
#include "ast/nodos/builders.h"
#include "context/context.h"
#include "context/result.h"
#include "asignacion.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Result interpretAsignacionExpresion(AbstractExpresion* self, Context* context) {
    AsignacionExpresion* nodo = (AsignacionExpresion*) self;
    
    // Buscar la variable en la tabla de símbolos
    Symbol* symbol = buscarTablaSimbolos(context, nodo->nombre);
    if (!symbol) {
        printf("Error: Variable '%s' no declarada.\n", nodo->nombre);
        return nuevoValorResultadoVacio();
    }
    
    if (symbol->isFinal) {
        printf("Error: No se puede reasignar la constante 'final' '%s'.\n", nodo->nombre);
        return nuevoValorResultadoVacio();
    }
    
    // Interpretar la expresión
    Result resultado = self->hijos[0]->interpret(self->hijos[0], context);
    
    int ok=0; void* nuevo=NULL; TipoDato tvar=symbol->tipo;
    switch(tvar){
        case BYTE: case SHORT: case INT: case LONG: {
            if(resultado.tipo==BYTE||resultado.tipo==SHORT||resultado.tipo==INT||resultado.tipo==LONG){ int* v=malloc(sizeof(int)); *v=*((int*)resultado.valor); nuevo=v; ok=1; }
            else if(resultado.tipo==CHAR){ int* v=malloc(sizeof(int)); *v=(int)(*((char*)resultado.valor)); nuevo=v; ok=1; }
            else if(resultado.tipo==FLOAT){ float f=*((float*)resultado.valor); if(f==(int)f){ int* v=malloc(sizeof(int)); *v=(int)f; nuevo=v; ok=1; } }
            else if(resultado.tipo==DOUBLE){ double d=*((double*)resultado.valor); if(d==(long long)d){ int* v=malloc(sizeof(int)); *v=(int)d; nuevo=v; ok=1; } }
            break; }
        case FLOAT: {
            if(resultado.tipo==FLOAT){ float* v=malloc(sizeof(float)); *v=*((float*)resultado.valor); nuevo=v; ok=1; }
            else if(resultado.tipo==DOUBLE){ float* v=malloc(sizeof(float)); *v=(float)(*((double*)resultado.valor)); nuevo=v; ok=1; }
            else if(resultado.tipo==CHAR){ float* v=malloc(sizeof(float)); *v=(float)(*((char*)resultado.valor)); nuevo=v; ok=1; }
            else if(resultado.tipo==INT||resultado.tipo==BYTE||resultado.tipo==SHORT||resultado.tipo==LONG){ float* v=malloc(sizeof(float)); *v=(float)(*((int*)resultado.valor)); nuevo=v; ok=1; }
            break; }
        case DOUBLE: {
            if(resultado.tipo==DOUBLE){ double* v=malloc(sizeof(double)); *v=*((double*)resultado.valor); nuevo=v; ok=1; }
            else if(resultado.tipo==FLOAT){ double* v=malloc(sizeof(double)); *v=(double)(*((float*)resultado.valor)); nuevo=v; ok=1; }
            else if(resultado.tipo==CHAR){ double* v=malloc(sizeof(double)); *v=(double)(*((char*)resultado.valor)); nuevo=v; ok=1; }
            else if(resultado.tipo==INT||resultado.tipo==BYTE||resultado.tipo==SHORT||resultado.tipo==LONG){ double* v=malloc(sizeof(double)); *v=(double)(*((int*)resultado.valor)); nuevo=v; ok=1; }
            break; }
        case BOOLEAN: {
            if(resultado.tipo==BOOLEAN){ int* v=malloc(sizeof(int)); *v=*((int*)resultado.valor)!=0; nuevo=v; ok=1; }
            else if(resultado.tipo==INT){ int* v=malloc(sizeof(int)); *v=*((int*)resultado.valor)!=0; nuevo=v; ok=1; }
            break; }
        case CHAR: {
            if(resultado.tipo==CHAR){ char* v=malloc(sizeof(char)); *v=*((char*)resultado.valor); nuevo=v; ok=1; }
            break; }
        case STRING: {
            if(resultado.tipo==STRING){ nuevo=resultado.valor; ok=1; }
            break; }
        case ARRAY: {
            if(resultado.tipo==ARRAY){
                // Reemplazo directo del puntero (mutación ya pudo ocurrir en operaciones como add)
                nuevo = resultado.valor; ok=1;
            }
            break; }
        default: break;
    }
    if(!ok){ printf("Error tipos incorrectos en asignación para '%s'.\n", nodo->nombre); return nuevoValorResultadoVacio(); }
    // Evitar liberar arrays aquí: add() muta en sitio y reasignaciones podrían apuntar al mismo bloque
    if(symbol->valor && symbol->tipo!=STRING && symbol->tipo!=NULO && symbol->tipo!=ARRAY) free(symbol->valor);
    symbol->valor = nuevo; return nuevoValorResultadoVacio();
}

AbstractExpresion* nuevoAsignacionExpresion(char* nombre, AbstractExpresion* expresion) {
    AsignacionExpresion* nodo = malloc(sizeof(AsignacionExpresion));
    if (!nodo) return NULL;
    buildAbstractExpresion(&nodo->base, interpretAsignacionExpresion);
    
    nodo->nombre = nombre;
    if (expresion) agregarHijo((AbstractExpresion*) nodo, expresion);
    return (AbstractExpresion*) nodo;
}
