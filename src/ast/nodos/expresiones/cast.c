#include "ast/AbstractExpresion.h"
#include "ast/nodos/builders.h"
#include "context/context.h"
#include "context/result.h"
#include "cast.h"

#include <stdlib.h>
#include <stdio.h>

Result interpretCastExpresion(AbstractExpresion* self, Context* context) {
    CastExpresion* nodo = (CastExpresion*) self;
    
    Result resultado = self->hijos[0]->interpret(self->hijos[0], context);
    
    if (resultado.tipo == nodo->tipoDestino) {
        return resultado; // No change
    }
    
    // Perform casting
    switch (nodo->tipoDestino) {
        case INT: {
            int* res = malloc(sizeof(int));
            if (resultado.tipo == FLOAT) {
                *res = (int)(*(float*)resultado.valor);
                return nuevoValorResultado(res, INT);
            } else if (resultado.tipo == DOUBLE) {
                *res = (int)(*(double*)resultado.valor);
                return nuevoValorResultado(res, INT);
            } else if (resultado.tipo == CHAR) {
                *res = (int)(*(char*)resultado.valor);
                return nuevoValorResultado(res, INT);
            } else if (resultado.tipo == BOOLEAN) {
                *res = (*(int*)resultado.valor)!=0;
                return nuevoValorResultado(res, INT);
            } else if (resultado.tipo == INT) {
                *res = *(int*)resultado.valor;
                return nuevoValorResultado(res, INT);
            }
            free(res);
            break; }
        case FLOAT: {
            float* res = malloc(sizeof(float));
            if (resultado.tipo == INT) {
                *res = (float)(*(int*)resultado.valor);
                return nuevoValorResultado(res, FLOAT);
            } else if (resultado.tipo == CHAR) {
                *res = (float)(*(char*)resultado.valor);
                return nuevoValorResultado(res, FLOAT);
            } else if (resultado.tipo == FLOAT) {
                *res = *(float*)resultado.valor;
                return nuevoValorResultado(res, FLOAT);
            } else if (resultado.tipo == DOUBLE) {
                *res = (float)(*(double*)resultado.valor);
                return nuevoValorResultado(res, FLOAT);
            }
            free(res);
            break; }
        case DOUBLE: {
            double* res = malloc(sizeof(double));
            if (resultado.tipo == INT) {
                *res = (double)(*(int*)resultado.valor);
                return nuevoValorResultado(res, DOUBLE);
            } else if (resultado.tipo == CHAR) {
                *res = (double)(*(char*)resultado.valor);
                return nuevoValorResultado(res, DOUBLE);
            } else if (resultado.tipo == FLOAT) {
                *res = (double)(*(float*)resultado.valor);
                return nuevoValorResultado(res, DOUBLE);
            } else if (resultado.tipo == DOUBLE) {
                *res = *(double*)resultado.valor;
                return nuevoValorResultado(res, DOUBLE);
            }
            free(res);
            break; }
        case CHAR: {
            char* res = malloc(sizeof(char));
            if (resultado.tipo == INT) {
                *res = (char)(*(int*)resultado.valor);
                return nuevoValorResultado(res, CHAR);
            } else if (resultado.tipo == FLOAT) {
                *res = (char)(*(float*)resultado.valor);
                return nuevoValorResultado(res, CHAR);
            } else if (resultado.tipo == DOUBLE) {
                *res = (char)(*(double*)resultado.valor);
                return nuevoValorResultado(res, CHAR);
            }
            free(res);
            break; }
        case BOOLEAN: {
            if (resultado.tipo == INT) {
                int* res = malloc(sizeof(int));
                *res = (*(int*)resultado.valor)!=0;
                return nuevoValorResultado(res, BOOLEAN);
            }
            break; }
        default: break;
    }
    
    printf("Error: Casting no soportado de %d a %d.\n", resultado.tipo, nodo->tipoDestino);
    return nuevoValorResultadoVacio();
}

AbstractExpresion* nuevoCastExpresion(TipoDato tipoDestino, AbstractExpresion* expresion) {
    CastExpresion* nodo = malloc(sizeof(CastExpresion));
    if (!nodo) return NULL;
    buildAbstractExpresion(&nodo->base, interpretCastExpresion);
    
    nodo->tipoDestino = tipoDestino;
    if (expresion) agregarHijo((AbstractExpresion*) nodo, expresion);
    return (AbstractExpresion*) nodo;
}
