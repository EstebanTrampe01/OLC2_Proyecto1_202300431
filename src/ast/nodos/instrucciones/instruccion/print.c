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
    PrintExpresion* pe = (PrintExpresion*)self;
    // Limpieza: se eliminaron hacks de transformación contextual
    for (size_t i = 0; i < listaExpresiones->numHijos; ++i) {
        if (!listaExpresiones->hijos[i]) continue;
        Result result = listaExpresiones->hijos[i]->interpret(listaExpresiones->hijos[i], context);
        int last = (i == listaExpresiones->numHijos - 1);
        switch (result.tipo) {
            case STRING: { const char* s=(const char*)result.valor; printf("%s", s? s: "null"); break; }
            case INT:      printf("%d", *(int*)result.valor); break;
            case ARRAY: {  ArrayValue* arr = (ArrayValue*)result.valor; printArrayRec(arr); break; }
            case FLOAT:    printf("%g", *(float*)result.valor); break;
            case DOUBLE: { double dv=*(double*)result.valor; if((long)dv==dv) printf("%ld.0", (long)dv); else printf("%.*g", 15, dv); break; }
            case BOOLEAN:  printf("%s", *(int*)result.valor ? "true" : "false"); break;
            case CHAR: /* Mostrar código unicode numérico crudo */ printf("%d", (int)(*(unsigned char*)result.valor)); break;
            case NULO:     printf("NULL"); break;
            default:       printf("<tipo %d>", result.tipo); break;
        }
    // evitamos segunda impresión de cadenas (antes duplicaba)
        /* Separador entre expresiones: espacio como Java cuando concatenas: aquí conservamos sin espacio; el usuario controla via String.valueOf en su código */
    }
    if (pe->newline) printf("\n");
    return nuevoValorResultadoVacio();
}

AbstractExpresion* nuevoPrintExpresion(AbstractExpresion* listaExpresiones, int newline) {
    PrintExpresion* nodo = malloc(sizeof(PrintExpresion));
    if (!nodo) return NULL; 
    buildAbstractExpresion(&nodo->base, interpretPrintExpresion);
    nodo->newline = newline;
    if (listaExpresiones) agregarHijo((AbstractExpresion*) nodo, listaExpresiones);
    else agregarHijo((AbstractExpresion*) nodo, nuevoListaExpresiones());
    return (AbstractExpresion*) nodo; }