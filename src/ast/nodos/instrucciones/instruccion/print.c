#include "ast/AbstractExpresion.h"
#include "ast/nodos/builders.h"
#include "context/context.h"
#include "context/result.h"
#include "print.h"
#include "context/array.h"

#include <stdlib.h>
#include <stdio.h>


static void printArrayRec(ArrayValue* arr) {
    printf("[");
    for (int i=0;i<arr->length;i++) {
        if (i) printf(", ");
        if (!arr->items[i]) { printf("null"); continue; }
        if (arr->elementType == ARRAY) {
            printArrayRec((ArrayValue*)arr->items[i]);
        } else {
            switch (arr->elementType) {
                case INT: case BYTE: case SHORT: case LONG: printf("%d", *((int*)arr->items[i])); break;
                case FLOAT: printf("%g", *((float*)arr->items[i])); break;
                case DOUBLE: printf("%g", *((double*)arr->items[i])); break;
                case BOOLEAN: printf("%s", *((int*)arr->items[i])?"true":"false"); break;
                case CHAR: printf("'%c'", *((char*)arr->items[i])); break;
                case STRING: printf("\"%s\"", (char*)arr->items[i]); break;
                default: printf("?");
            }
        }
    }
    printf("]");
}

Result interpretPrintExpresion(AbstractExpresion* self, Context* context) {
    // interpretar la lista de expresiones
    // recorremos  cada expresion y lo que nos devuelva imprimimos el valor
    AbstractExpresion* listaExpresiones = self->hijos[0];
    if (!listaExpresiones) return nuevoValorResultadoVacio();
    for (size_t i = 0; i < listaExpresiones->numHijos; ++i) {
        if (!listaExpresiones->hijos[i]) continue;
        Result result = listaExpresiones->hijos[i]->interpret(listaExpresiones->hijos[i], context);
    switch (result.tipo) {
            case STRING:
                printf("%s\n", (char*) result.valor);
                break;
            case INT:
                printf("%d\n", *(int*)result.valor);
                break;
            case ARRAY: {
                ArrayValue* arr = (ArrayValue*)result.valor;
                printArrayRec(arr);
                printf("\n");
                break; }
            case FLOAT:
                printf("%g\n", *(float*)result.valor);
                break;
            case DOUBLE:
                printf("%.*g\n", 15, *(double*)result.valor);
                break;
            case BOOLEAN:
                printf("%s\n", *(int*)result.valor ? "true" : "false");
                break;
            case CHAR:
                printf("%c\n", *(char*)result.valor);
                break;
            case NULO:
                printf("NULL\n");
                break;
            default:
                printf("Tipo no implementado (%d)\n", result.tipo);
        }
    }
    return nuevoValorResultadoVacio();
}

AbstractExpresion* nuevoPrintExpresion(AbstractExpresion* listaExpresiones) {
    //reservar el espacio en memoria y obtener el puntero a este
    PrintExpresion* nodo = malloc(sizeof(PrintExpresion));
    if (!nodo) return NULL;
    //asignar valores
    buildAbstractExpresion(&nodo->base, interpretPrintExpresion);

    if (listaExpresiones) agregarHijo((AbstractExpresion*) nodo, listaExpresiones);
    return (AbstractExpresion*) nodo;
}