#include "array.h"
#include "context/context.h"
#include "context/result.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Declaración: tipo[] nombre = new tipo[exprLength]
typedef struct { AbstractExpresion base; TipoDato elemTipo; char* nombre; AbstractExpresion* lengthExpr; } ArrayDecl;
// Literal: tipo[] nombre = { listaValores }
typedef struct { AbstractExpresion base; TipoDato elemTipo; char* nombre; AbstractExpresion* listaValores; } ArrayLiteralDecl;
// Acceso: arreglo[indice]
typedef struct { AbstractExpresion base; AbstractExpresion* arreglo; AbstractExpresion* indice; } ArrayAcceso;
// Asignación elemento: nombre[indice] = valor
typedef struct { AbstractExpresion base; char* nombre; AbstractExpresion* indice; AbstractExpresion* valor; } ArrayAsignacionElem;
// Asignación multi-d genérica: nombre[i][j][k]... = valor (indicesLista es listaExpresiones)
typedef struct { AbstractExpresion base; char* nombre; AbstractExpresion* indicesLista; AbstractExpresion* valor; } MultiArrayAsignacionElem;
// Acceso linealizado: dado array (que puede ser multi-d) y un índice lineal, devolver el n-ésimo elemento hoja
typedef struct { AbstractExpresion base; AbstractExpresion* arreglo; AbstractExpresion* linearIndex; } ArrayLinearAccess;

static Result interpretArrayDecl(AbstractExpresion* self, Context* context) {
    ArrayDecl* n = (ArrayDecl*)self;
    Result lenR = n->lengthExpr->interpret(n->lengthExpr, context);
    if (lenR.tipo != INT) { printf("Error: tamaño de array debe ser int.\n"); return nuevoValorResultadoVacio(); }
    int len = *((int*)lenR.valor);
    if (len < 0) { printf("Error: tamaño negativo de array.\n"); return nuevoValorResultadoVacio(); }
    ArrayValue* arr = nuevoArrayValue(n->elemTipo, len);
    agregarSymbol(context, nuevoVariable(n->nombre, arr, ARRAY, 0));
    return nuevoValorResultadoVacio();
}

static Result interpretArrayLiteralDecl(AbstractExpresion* self, Context* context) {
    ArrayLiteralDecl* n = (ArrayLiteralDecl*)self;
    // listaValores es un nodo listaExpresiones
    AbstractExpresion* lista = n->listaValores;
    int len = (int)lista->numHijos;
    ArrayValue* arr = nuevoArrayValue(n->elemTipo, len);
    for (int i=0;i<len;i++) {
        Result vr = lista->hijos[i]->interpret(lista->hijos[i], context);
        // conversión / compatibilidad amplia
        void* convertido = NULL;
        int compatible = 0;
        if (vr.tipo == n->elemTipo) {
            compatible = 1;
            convertido = vr.valor; // mismo puntero
        } else {
            switch (n->elemTipo) {
                case INT: case BYTE: case SHORT: case LONG: {
                    if (vr.tipo==INT||vr.tipo==BYTE||vr.tipo==SHORT||vr.tipo==LONG) { // numérico entero
                        int* v = malloc(sizeof(int)); *v = *((int*)vr.valor); convertido = v; compatible=1; }
                    else if (vr.tipo==FLOAT||vr.tipo==DOUBLE) {
                        float f = *((float*)vr.valor); if (f==(int)f) {int* v=malloc(sizeof(int)); *v=(int)f; convertido=v; compatible=1;} }
                    else if (vr.tipo==BOOLEAN && (n->elemTipo==INT)) { int* v=malloc(sizeof(int)); *v = *((int*)vr.valor); convertido=v; compatible=1; }
                    break; }
                case FLOAT: case DOUBLE: {
                    if (vr.tipo==INT||vr.tipo==BYTE||vr.tipo==SHORT||vr.tipo==LONG||vr.tipo==FLOAT||vr.tipo==DOUBLE) { float* v=malloc(sizeof(float));
                        if (vr.tipo==FLOAT||vr.tipo==DOUBLE) *v = *((float*)vr.valor); else *v = (float)(*((int*)vr.valor)); convertido=v; compatible=1; }
                    break; }
                case BOOLEAN: {
                    if (vr.tipo==BOOLEAN || vr.tipo==INT) { int* v=malloc(sizeof(int)); *v = (vr.tipo==BOOLEAN)?*((int*)vr.valor):(*((int*)vr.valor)!=0); convertido=v; compatible=1; }
                    break; }
                case CHAR: {
                    if (vr.tipo==CHAR) { char* v=malloc(sizeof(char)); *v=*((char*)vr.valor); convertido=v; compatible=1; }
                    break; }
                case STRING: {
                    if (vr.tipo==STRING) { if (vr.valor) { char* dup = strdup((char*)vr.valor); convertido=dup; } else convertido=NULL; compatible=1; }
                    break; }
                default: break;
            }
        }
        if (!compatible) {
            printf("Error: tipo incompatible en literal de array (pos %d).\n", i);
            convertido = valorPorDefecto(n->elemTipo);
        }
        if (vr.tipo != n->elemTipo) { // liberar original si creamos copia
            if (vr.tipo==STRING) { /* string ownership ya movido al duplicado */ }
            else free(vr.valor);
        }
        if (arr->items[i]) free(arr->items[i]);
        arr->items[i] = convertido;
    }
    agregarSymbol(context, nuevoVariable(n->nombre, arr, ARRAY, 0));
    return nuevoValorResultadoVacio();
}

static Result interpretArrayAcceso(AbstractExpresion* self, Context* context) {
    ArrayAcceso* n = (ArrayAcceso*)self;
    Result arrR = n->arreglo->interpret(n->arreglo, context);
    if (arrR.tipo != ARRAY) { printf("Error: intento de indexar algo que no es array.\n"); return nuevoValorResultadoVacio(); }
    ArrayValue* arr = (ArrayValue*)arrR.valor;
    Result idxR = n->indice->interpret(n->indice, context);
    if (idxR.tipo != INT) { printf("Error: índice debe ser int.\n"); return nuevoValorResultadoVacio(); }
    int idx = *((int*)idxR.valor);
    if (idx < 0 || idx >= arr->length) { printf("Error: índice fuera de rango.\n"); return nuevoValorResultadoVacio(); }
    // devolver valor del elemento sin copiar
    return nuevoValorResultado(arr->items[idx], arr->elementType);
}

static Result interpretArrayAsignacionElem(AbstractExpresion* self, Context* context) {
    ArrayAsignacionElem* n = (ArrayAsignacionElem*)self;
    Symbol* s = buscarTablaSimbolos(context, n->nombre);
    if (!s || s->tipo != ARRAY) { printf("Error: '%s' no es un array.\n", n->nombre); return nuevoValorResultadoVacio(); }
    ArrayValue* arr = (ArrayValue*)s->valor;
    Result idxR = n->indice->interpret(n->indice, context);
    if (idxR.tipo != INT) { printf("Error: índice debe ser int.\n"); return nuevoValorResultadoVacio(); }
    int idx = *((int*)idxR.valor);
    if (idx < 0 || idx >= arr->length) { printf("Error: índice fuera de rango.\n"); return nuevoValorResultadoVacio(); }
    Result valR = n->valor->interpret(n->valor, context);
    void* convertido = NULL; int compatible=0;
    if (valR.tipo == arr->elementType) { convertido = valR.valor; compatible=1; }
    else {
        switch (arr->elementType) {
            case INT: case BYTE: case SHORT: case LONG: {
                if (valR.tipo==INT||valR.tipo==BYTE||valR.tipo==SHORT||valR.tipo==LONG) { int* v=malloc(sizeof(int)); *v=*((int*)valR.valor); convertido=v; compatible=1; }
                else if (valR.tipo==FLOAT||valR.tipo==DOUBLE) { float f=*((float*)valR.valor); if (f==(int)f) { int* v=malloc(sizeof(int)); *v=(int)f; convertido=v; compatible=1; } }
                else if (valR.tipo==BOOLEAN && arr->elementType==INT) { int* v=malloc(sizeof(int)); *v=*((int*)valR.valor); convertido=v; compatible=1; }
                break; }
            case FLOAT: case DOUBLE: {
                if (valR.tipo==INT||valR.tipo==BYTE||valR.tipo==SHORT||valR.tipo==LONG||valR.tipo==FLOAT||valR.tipo==DOUBLE) { float* v=malloc(sizeof(float)); if (valR.tipo==FLOAT||valR.tipo==DOUBLE) *v=*((float*)valR.valor); else *v=(float)(*((int*)valR.valor)); convertido=v; compatible=1; }
                break; }
            case BOOLEAN: {
                if (valR.tipo==BOOLEAN || valR.tipo==INT) { int* v=malloc(sizeof(int)); *v=(valR.tipo==BOOLEAN)?*((int*)valR.valor):(*((int*)valR.valor)!=0); convertido=v; compatible=1; }
                break; }
            case CHAR: {
                if (valR.tipo==CHAR) { char* v=malloc(sizeof(char)); *v=*((char*)valR.valor); convertido=v; compatible=1; }
                break; }
            case STRING: {
                if (valR.tipo==STRING) { if (valR.valor) { char* dup=strdup((char*)valR.valor); convertido=dup; } else convertido=NULL; compatible=1; }
                break; }
            default: break;
        }
    }
    if (!compatible) { printf("Error: tipo incompatible en asignación de elemento.\n"); return nuevoValorResultadoVacio(); }
    if (valR.tipo != arr->elementType) {
        if (valR.tipo==STRING) { /* duplicado ya creado */ } else free(valR.valor);
    }
    if (arr->items[idx]) free(arr->items[idx]);
    arr->items[idx] = convertido;
    return nuevoValorResultadoVacio();
}

static int flattenFetch(ArrayValue* arr, int* targetIdx, void** out, TipoDato* outType){
    if(!arr) return 0;
    if(arr->elementType!=ARRAY){
        for(int i=0;i<arr->length;i++){
            if(*targetIdx==0){ *out=arr->items[i]; *outType=arr->elementType; return 1; }
            (*targetIdx)--;
        }
        return 0;
    } else {
        for(int i=0;i<arr->length;i++){
            ArrayValue* inner=(ArrayValue*)arr->items[i];
            if(flattenFetch(inner,targetIdx,out,outType)) return 1;
        }
        return 0;
    }
}

static Result interpretArrayLinearAccess(AbstractExpresion* self, Context* context){
    ArrayLinearAccess* n=(ArrayLinearAccess*)self; Result arrR=n->arreglo->interpret(n->arreglo,context); if(arrR.tipo!=ARRAY||!arrR.valor){ printf("Error: acceso lineal sobre no-array.\n"); return nuevoValorResultadoVacio(); }
    Result idxR=n->linearIndex->interpret(n->linearIndex,context); if(idxR.tipo!=INT){ printf("Error: índice lineal debe ser int.\n"); return nuevoValorResultadoVacio(); }
    int idx = *((int*)idxR.valor); if(idx<0){ printf("Error: índice lineal negativo.\n"); return nuevoValorResultadoVacio(); }
    ArrayValue* arr=(ArrayValue*)arrR.valor; void* out=NULL; TipoDato t=NULO; int ti=idx; if(!flattenFetch(arr,&ti,&out,&t)){ printf("Error: índice lineal fuera de rango.\n"); return nuevoValorResultadoVacio(); }
    return nuevoValorResultado(out,t);
}

static Result interpretMultiArrayAsignacionElem(AbstractExpresion* self, Context* context) {
    MultiArrayAsignacionElem* n = (MultiArrayAsignacionElem*)self;
    Symbol* s = buscarTablaSimbolos(context, n->nombre);
    if (!s || s->tipo != ARRAY) { printf("Error: '%s' no es un array.\n", n->nombre) ; return nuevoValorResultadoVacio(); }
    ArrayValue* current = (ArrayValue*)s->valor;
    size_t dims = n->indicesLista->numHijos;
    if (dims==0) { printf("Error: sin índices en asignación multi-d.\n"); return nuevoValorResultadoVacio(); }
    if (dims > 6) { printf("Error: máximo 6 dimensiones soportadas (se dio %zu).\n", dims); return nuevoValorResultadoVacio(); }
    // Navegar hasta el penúltimo nivel
    for (size_t i=0;i<dims;i++) {
        AbstractExpresion* idxExpr = n->indicesLista->hijos[i];
        Result idxR = idxExpr->interpret(idxExpr, context);
        if (idxR.tipo != INT) { printf("Error: índice %zu debe ser int.\n", i); return nuevoValorResultadoVacio(); }
        int idx = *((int*)idxR.valor);
        if (idx < 0 || idx >= current->length) { printf("Error: índice %zu fuera de rango.\n", i); return nuevoValorResultadoVacio(); }
        if (i == dims-1) {
            // nivel final: current debe tener elementType != ARRAY (tipo base)
            Result valR = n->valor->interpret(n->valor, context);
            TipoDato elemTipo = current->elementType;
            void* convertido=NULL; int compatible=0;
            if (valR.tipo == elemTipo) { convertido=valR.valor; compatible=1; }
            else switch (elemTipo) {
                case INT: case BYTE: case SHORT: case LONG:
                    if (valR.tipo==INT||valR.tipo==BYTE||valR.tipo==SHORT||valR.tipo==LONG) { int* v=malloc(sizeof(int)); *v=*((int*)valR.valor); convertido=v; compatible=1; }
                    else if (valR.tipo==FLOAT||valR.tipo==DOUBLE) { float f=*((float*)valR.valor); if (f==(int)f){ int* v=malloc(sizeof(int)); *v=(int)f; convertido=v; compatible=1; } }
                    else if (valR.tipo==BOOLEAN && elemTipo==INT) { int* v=malloc(sizeof(int)); *v=*((int*)valR.valor); convertido=v; compatible=1; }
                    break;
                case FLOAT: case DOUBLE:
                    if (valR.tipo==INT||valR.tipo==BYTE||valR.tipo==SHORT||valR.tipo==LONG||valR.tipo==FLOAT||valR.tipo==DOUBLE) { float* v=malloc(sizeof(float)); if (valR.tipo==FLOAT||valR.tipo==DOUBLE) *v=*((float*)valR.valor); else *v=(float)(*((int*)valR.valor)); convertido=v; compatible=1; }
                    break;
                case BOOLEAN:
                    if (valR.tipo==BOOLEAN || valR.tipo==INT) { int* v=malloc(sizeof(int)); *v=(valR.tipo==BOOLEAN)?*((int*)valR.valor):(*((int*)valR.valor)!=0); convertido=v; compatible=1; }
                    break;
                case CHAR:
                    if (valR.tipo==CHAR) { char* v=malloc(sizeof(char)); *v=*((char*)valR.valor); convertido=v; compatible=1; }
                    break;
                case STRING:
                    if (valR.tipo==STRING) { if (valR.valor) { char* dup=strdup((char*)valR.valor); convertido=dup; } else convertido=NULL; compatible=1; }
                    break;
                default: break;
            }
            if (!compatible) { printf("Error: tipo incompatible en asignación multi-d.\n"); return nuevoValorResultadoVacio(); }
            if (valR.tipo != elemTipo) { if (valR.tipo==STRING){} else free(valR.valor); }
            if (current->items[idx]) free(current->items[idx]);
            current->items[idx] = convertido;
            return nuevoValorResultadoVacio();
        } else {
            // descender un nivel
            if (current->elementType != ARRAY) { printf("Error: demasiados índices para array base.\n"); return nuevoValorResultadoVacio(); }
            current = (ArrayValue*)current->items[idx];
            if (!current) { printf("Error: sub-array nulo en nivel %zu.\n", i); return nuevoValorResultadoVacio(); }
        }
    }
    return nuevoValorResultadoVacio();
}

AbstractExpresion* nuevoArrayDeclaracion(TipoDato tipoElemento, char* nombre, AbstractExpresion* exprLength) {
    ArrayDecl* n = malloc(sizeof(ArrayDecl));
    n->elemTipo = tipoElemento; n->nombre = nombre; n->lengthExpr = exprLength;
    buildAbstractExpresion(&n->base, interpretArrayDecl);
    if (exprLength) agregarHijo((AbstractExpresion*)n, exprLength); // no usado directamente pero para liberar
    return (AbstractExpresion*)n;
}

AbstractExpresion* nuevoArrayLiteralDeclaracion(TipoDato tipoElemento, char* nombre, AbstractExpresion* listaValores) {
    ArrayLiteralDecl* n = malloc(sizeof(ArrayLiteralDecl));
    n->elemTipo = tipoElemento; n->nombre = nombre; n->listaValores = listaValores;
    buildAbstractExpresion(&n->base, interpretArrayLiteralDecl);
    if (listaValores) agregarHijo((AbstractExpresion*)n, listaValores);
    return (AbstractExpresion*)n;
}

AbstractExpresion* nuevoArrayAcceso(AbstractExpresion* arregloExpr, AbstractExpresion* indiceExpr) {
    ArrayAcceso* n = malloc(sizeof(ArrayAcceso));
    n->arreglo = arregloExpr; n->indice = indiceExpr;
    buildAbstractExpresion(&n->base, interpretArrayAcceso);
    if (arregloExpr) agregarHijo((AbstractExpresion*)n, arregloExpr);
    if (indiceExpr) agregarHijo((AbstractExpresion*)n, indiceExpr);
    return (AbstractExpresion*)n;
}

AbstractExpresion* nuevoArrayAsignacionElemento(char* nombre, AbstractExpresion* indiceExpr, AbstractExpresion* valorExpr) {
    ArrayAsignacionElem* n = malloc(sizeof(ArrayAsignacionElem));
    n->nombre = nombre; n->indice = indiceExpr; n->valor = valorExpr;
    buildAbstractExpresion(&n->base, interpretArrayAsignacionElem);
    if (indiceExpr) agregarHijo((AbstractExpresion*)n, indiceExpr);
    if (valorExpr) agregarHijo((AbstractExpresion*)n, valorExpr);
    return (AbstractExpresion*)n;
}

AbstractExpresion* nuevoArrayLinearAccess(AbstractExpresion* arregloExpr, AbstractExpresion* linearIdx){
    ArrayLinearAccess* n=malloc(sizeof(ArrayLinearAccess)); n->arreglo=arregloExpr; n->linearIndex=linearIdx; buildAbstractExpresion(&n->base, interpretArrayLinearAccess); if(arregloExpr) agregarHijo((AbstractExpresion*)n,arregloExpr); if(linearIdx) agregarHijo((AbstractExpresion*)n,linearIdx); return (AbstractExpresion*)n;
}

AbstractExpresion* nuevoMultiArrayAsignacionElemento(char* nombre, AbstractExpresion* indicesLista, AbstractExpresion* valorExpr) {
    MultiArrayAsignacionElem* n = malloc(sizeof(MultiArrayAsignacionElem));
    n->nombre = nombre; n->indicesLista = indicesLista; n->valor = valorExpr;
    buildAbstractExpresion(&n->base, interpretMultiArrayAsignacionElem);
    if (indicesLista) agregarHijo((AbstractExpresion*)n, indicesLista);
    if (valorExpr) agregarHijo((AbstractExpresion*)n, valorExpr);
    return (AbstractExpresion*)n;
}

/* Declaración de array a partir de una expresión que en runtime debe retornar ARRAY.
   Se interpreta evaluando la expresión y validando que sea ARRAY; si no lo es, se crea vacío. */
typedef struct { AbstractExpresion base; TipoDato elemTipo; char* nombre; AbstractExpresion* origen; } ArrayDeclFromExpr;
static Result interpretArrayDeclFromExpr(AbstractExpresion* self, Context* ctx){
    ArrayDeclFromExpr* n=(ArrayDeclFromExpr*)self; Result r=n->origen->interpret(n->origen, ctx);
    if (r.tipo!=ARRAY || !r.valor){ fprintf(stderr,"Error tipos incorrectos en asignación para '%s'.\n", n->nombre); agregarSymbol(ctx, nuevoVariable(n->nombre, NULL, NULO, 0)); return nuevoValorResultadoVacio(); }
    ArrayValue* arr=(ArrayValue*)r.valor; /* opcional: validar elemento */
    agregarSymbol(ctx, nuevoVariable(n->nombre, arr, ARRAY, 0));
    return nuevoValorResultadoVacio(); }

AbstractExpresion* nuevoArrayDeclaracionDesdeExpr(TipoDato tipoElem, char* nombre, AbstractExpresion* exprArray){
    ArrayDeclFromExpr* n = malloc(sizeof(ArrayDeclFromExpr));
    n->elemTipo=tipoElem; n->nombre=nombre; n->origen=exprArray; buildAbstractExpresion(&n->base, interpretArrayDeclFromExpr);
    if (exprArray) agregarHijo((AbstractExpresion*)n, exprArray);
    return (AbstractExpresion*)n; }