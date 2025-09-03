#include "array.h"
#include <stdlib.h>
#include <stdio.h>

void* valorPorDefecto(TipoDato tipo) {
    switch (tipo) {
        case INT: case BYTE: case SHORT: case LONG: {
            int* v = malloc(sizeof(int)); *v = 0; return v; }
        case FLOAT: {
            float* v = malloc(sizeof(float)); *v = 0.0f; return v; }
        case DOUBLE: {
            double* v = malloc(sizeof(double)); *v = 0.0; return v; }
        case BOOLEAN: {
            int* v = malloc(sizeof(int)); *v = 0; return v; }
        case CHAR: {
            char* v = malloc(sizeof(char)); *v = '\0'; return v; }
    case STRING: return NULL; // null
    case ARRAY: return NULL; // sub-arrays inicialmente null
    default: return NULL;
    }
}

ArrayValue* nuevoArrayValue(TipoDato elementType, int length) {
    if (length < 0) return NULL;
    ArrayValue* a = malloc(sizeof(ArrayValue));
    a->elementType = elementType;
    a->length = length;
    a->items = malloc(sizeof(void*) * length);
    for (int i=0;i<length;i++) a->items[i] = valorPorDefecto(elementType);
    return a;
}

void liberarArrayValue(ArrayValue* arr) {
    if (!arr) return;
    for (int i=0;i<arr->length;i++) {
        if (arr->items[i]) free(arr->items[i]);
    }
    free(arr->items);
    free(arr);
}