#include "context.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Context* nuevoContext(Context* anterior) {
    Context* nuevo = malloc(sizeof(Context));
    nuevo->anterior = anterior;
    if (anterior) {
        nuevo->nombre = anterior->nombre + 1;
        nuevo->dentroLoop = anterior->dentroLoop;
    } else {
        nuevo->dentroLoop = 0;
    }
    nuevo->ultimoSymbol = NULL;

    return nuevo;
}

Symbol* nuevoVariable(char* nombre, void* valor, TipoDato tipo, int isFinal) {
    Symbol* nuevo = malloc(sizeof(Symbol));
    nuevo->nombre = nombre;
    nuevo->valor = valor;
    nuevo->tipo = tipo;
    nuevo->clase = VARIABLE;
    nuevo->isFinal = isFinal;
    return nuevo;
}

void agregarSymbol(Context* actual, Symbol* symbol) {
    // Permitir sombreado: si ya existe en este mismo contexto, reemplazar
    Symbol* prev=NULL; Symbol* cur=actual->ultimoSymbol;
    while(cur){ if(strcmp(cur->nombre, symbol->nombre)==0){
            // Reemplazar cabeza (si prev==NULL) o enlazar prev->anterior
            if(prev==NULL){ symbol->anterior = cur->anterior; actual->ultimoSymbol = symbol; }
            else { symbol->anterior = cur->anterior; prev->anterior = symbol; }
            // No liberamos valor para evitar liberar memoria potencialmente compartida
            free(cur); return; }
        prev=cur; cur=cur->anterior; }
    symbol->anterior = actual->ultimoSymbol; actual->ultimoSymbol = symbol;
}

Symbol* buscarSymbol(Symbol* actual, char* nombre) {
    while (actual) {
        if (strcmp(actual->nombre, nombre) == 0) {
            return actual;
        }
        actual = actual->anterior;
    }
    return NULL;
}

Symbol* buscarTablaSimbolos(Context* actual, char* nombre) {
    while (actual) {
        Symbol* symbolEncontrado = buscarSymbol(actual->ultimoSymbol, nombre);
        if (symbolEncontrado) {
            return symbolEncontrado;
        }
        actual = actual->anterior;
    }
    return NULL;
}