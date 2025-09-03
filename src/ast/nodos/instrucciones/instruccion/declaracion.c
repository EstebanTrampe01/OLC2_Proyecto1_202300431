#include "ast/AbstractExpresion.h"
#include "ast/nodos/builders.h"
#include "context/context.h"
#include "context/result.h"
#include "declaracion.h"

#include <stdlib.h>
#include <stdio.h>

Result interpretDeclaracionVariable(AbstractExpresion* nodo, Context* context) {
    DeclaracionVariable* self = (DeclaracionVariable*) nodo;
    
    if (nodo->numHijos > 0) {
        Result resultado = nodo->hijos[0]->interpret(nodo->hijos[0], context);

        // Verificar compatibilidad de tipos (widening / algunos narrowing controlados)
        int tiposCompatibles = 0;
        switch (self->tipo) {
            case BYTE: case SHORT: case INT: case LONG:
                if (resultado.tipo == BYTE || resultado.tipo == SHORT || resultado.tipo == INT || resultado.tipo == LONG || resultado.tipo == CHAR) tiposCompatibles = 1;
                else if (resultado.tipo == FLOAT || resultado.tipo == DOUBLE) tiposCompatibles = 1; // se validará integridad
                break;
            case FLOAT:
                if (resultado.tipo == BYTE || resultado.tipo == SHORT || resultado.tipo == INT || resultado.tipo == LONG || resultado.tipo == FLOAT || resultado.tipo == DOUBLE || resultado.tipo == CHAR) tiposCompatibles = 1;
                break;
            case DOUBLE:
                if (resultado.tipo == BYTE || resultado.tipo == SHORT || resultado.tipo == INT || resultado.tipo == LONG || resultado.tipo == FLOAT || resultado.tipo == DOUBLE || resultado.tipo == CHAR) tiposCompatibles = 1;
                break;
            case BOOLEAN:
                if (resultado.tipo == BOOLEAN || resultado.tipo == INT) tiposCompatibles = 1;
                break;
            case CHAR:
                if (resultado.tipo == CHAR) tiposCompatibles = 1; // otros requieren cast explícito
                break;
            case STRING:
                if (resultado.tipo == STRING) tiposCompatibles = 1;
                break;
            default: break;
        }

        if (!tiposCompatibles) {
            printf("Error tipos incorrectos \n");
            return nuevoValorResultadoVacio();
        }

        void* almacen = NULL;
        switch (self->tipo) {
            case BYTE: case SHORT: case INT: case LONG: {
                int* v = malloc(sizeof(int));
                if (resultado.tipo == FLOAT) {
                    float f = *((float*)resultado.valor);
                    if (f != (int)f) { printf("Error: pérdida de precisión al inicializar entero con %.6f.\n", f); free(v); return nuevoValorResultadoVacio(); }
                    *v = (int)f;
                } else if (resultado.tipo == DOUBLE) {
                    double d = *((double*)resultado.valor);
                    if (d != (long long)d) { printf("Error: pérdida de precisión al inicializar entero con %.10g.\n", d); free(v); return nuevoValorResultadoVacio(); }
                    *v = (int)d;
                } else if (resultado.tipo == CHAR) {
                    *v = (int)(*((char*)resultado.valor));
                } else if (resultado.tipo == INT || resultado.tipo == BYTE || resultado.tipo == SHORT || resultado.tipo == LONG) {
                    *v = *((int*)resultado.valor);
                } else { free(v); printf("Error: tipo incompatible en inicialización de entero.\n"); return nuevoValorResultadoVacio(); }
                almacen = v; break; }
            case FLOAT: {
                float* f = malloc(sizeof(float));
                if (resultado.tipo == FLOAT) *f = *((float*)resultado.valor);
                else if (resultado.tipo == DOUBLE) *f = (float)(*((double*)resultado.valor));
                else if (resultado.tipo == CHAR) *f = (float)(*((char*)resultado.valor));
                else /* entero */ *f = (float)(*((int*)resultado.valor));
                almacen = f; break; }
            case DOUBLE: {
                double* d = malloc(sizeof(double));
                if (resultado.tipo == DOUBLE) *d = *((double*)resultado.valor);
                else if (resultado.tipo == FLOAT) *d = (double)(*((float*)resultado.valor));
                else if (resultado.tipo == CHAR) *d = (double)(*((char*)resultado.valor));
                else /* entero */ *d = (double)(*((int*)resultado.valor));
                almacen = d; break; }
            case BOOLEAN: {
                int* b = malloc(sizeof(int));
                if (resultado.tipo == BOOLEAN) *b = *((int*)resultado.valor)!=0; else *b = (*((int*)resultado.valor)!=0);
                almacen = b; break; }
            case CHAR: {
                char* c = malloc(sizeof(char)); *c = *((char*)resultado.valor); almacen = c; break; }
            case STRING: {
                // Se almacena la referencia (inmutable simple). Si se quisiera copia: strdup.
                almacen = resultado.valor; break; }
            default: almacen = NULL; break;
        }

    // Nota: No se libera 'resultado.valor' aquí para evitar liberar memoria de variables existentes
    // cuando la inicialización proviene de un identificador (alias). Se acepta pequeña fuga controlada.

        agregarSymbol(context, nuevoVariable(self->nombre, almacen, self->tipo, self->isFinal));
        return nuevoValorResultadoVacio();
    }
    
    if (self->isFinal) {
        printf("Error: Las constantes 'final' deben inicializarse.\n");
        return nuevoValorResultadoVacio();
    }
    
    // Asignar valor por defecto según el tipo
    void* defaultValue = NULL;
    TipoDato defaultTipo = self->tipo;
    switch (self->tipo) {
        case INT:
        case BYTE:
        case SHORT:
        case LONG:
            defaultValue = malloc(sizeof(int));
            *(int*)defaultValue = 0;
            defaultTipo = self->tipo; // Mantener el tipo original
            break;
        case FLOAT: {
            defaultValue = malloc(sizeof(float));
            *(float*)defaultValue = 0.0f;
            break; }
        case DOUBLE: {
            defaultValue = malloc(sizeof(double));
            *(double*)defaultValue = 0.0;
            break; }
        case BOOLEAN:
            defaultValue = malloc(sizeof(int));
            *(int*)defaultValue = 0; // FALSE
            break;
        case CHAR:
            defaultValue = malloc(sizeof(char));
            *(char*)defaultValue = '\0'; // '\u0000'
            break;
        case STRING:
            defaultTipo = NULO;
            defaultValue = NULL;
            break;
        default:
            defaultValue = NULL;
    }
    
    agregarSymbol(context, nuevoVariable(self->nombre, defaultValue, defaultTipo, self->isFinal));
    return nuevoValorResultadoVacio();
}

AbstractExpresion* nuevoDeclaracionVariables(TipoDato tipo, char* nombre, AbstractExpresion* expresion, int isFinal) {
    //reservar el espacio en memoria y obtener el puntero a este
    DeclaracionVariable* nodo = malloc(sizeof(DeclaracionVariable));
    if (!nodo) return NULL;
    //asignar valores
    buildAbstractExpresion(&nodo->base, interpretDeclaracionVariable);
    nodo->tipo = tipo;
    nodo->nombre = nombre;
    nodo->isFinal = isFinal;

    if (expresion) agregarHijo((AbstractExpresion*) nodo, expresion);
    return (AbstractExpresion*) nodo;
}
