// función y return
#ifndef FUNCION_NODO_H
#define FUNCION_NODO_H

#include "../../../AbstractExpresion.h"
#include "context/context.h"

typedef struct {
    AbstractExpresion base;
    char* nombre;
    TipoDato retorno;
    char** paramNombres;
    TipoDato* paramTipos;
    int paramCount;
    AbstractExpresion* cuerpo; // bloque
} FuncionDecl;

typedef struct {
    AbstractExpresion base;
    AbstractExpresion* valor; // puede ser NULL para void
} ReturnExpresion;

typedef struct {
    AbstractExpresion base;
    char* nombre;
    AbstractExpresion* args; // lista expresiones
} LlamadaFuncion;

AbstractExpresion* nuevoFuncionDeclaracion(TipoDato retorno, char* nombre, char** paramNombres, TipoDato* paramTipos, int paramCount, AbstractExpresion* cuerpo);
AbstractExpresion* nuevoReturnExpresion(AbstractExpresion* valor);
AbstractExpresion* nuevoLlamadaFuncion(char* nombre, AbstractExpresion* args);

Result interpretFuncionDeclaracion(AbstractExpresion*, Context*);
Result interpretReturnExpresion(AbstractExpresion*, Context*);
Result interpretLlamadaFuncion(AbstractExpresion*, Context*);

#endif