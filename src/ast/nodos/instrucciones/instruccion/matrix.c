#include "matrix.h"
#include "array.h"
#include "context/context.h"
#include "context/result.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Declaración: tipo[][] id = new tipo[filas][cols];
typedef struct { AbstractExpresion base; TipoDato elemTipo; char* nombre; AbstractExpresion* filasExpr; AbstractExpresion* colsExpr; } MatrixDecl;
// Literal: tipo[][] id = { {..}, {..} } ; cada fila es listaExpresiones
typedef struct { AbstractExpresion base; TipoDato elemTipo; char* nombre; AbstractExpresion* filasLista; } MatrixLiteralDecl;
// Asignación elemento: id[f][c] = valor;
typedef struct { AbstractExpresion base; char* nombre; AbstractExpresion* fila; AbstractExpresion* col; AbstractExpresion* valor; } MatrixAsignacionElem;
// Multi-dimension generic new decl
typedef struct { AbstractExpresion base; TipoDato elemTipo; char* nombre; int dims; AbstractExpresion** dimExprs; } MultiArrayDecl;
// 3D literal: tipo[][][] id = { bloque2D, bloque2D, ... }
typedef struct { AbstractExpresion base; TipoDato elemTipo; char* nombre; AbstractExpresion* bloques2DLista; } Array3DLiteralDecl;

static ArrayValue* crearMatrizVacia(TipoDato elemTipo, int filas, int cols) {
    ArrayValue* outer = nuevoArrayValue(ARRAY, filas);
    for (int i=0;i<filas;i++) {
        outer->items[i] = nuevoArrayValue(elemTipo, cols);
    }
    return outer;
}

static Result interpretMatrixDecl(AbstractExpresion* self, Context* context) {
    MatrixDecl* n = (MatrixDecl*)self;
    Result fR = n->filasExpr->interpret(n->filasExpr, context);
    Result cR = n->colsExpr->interpret(n->colsExpr, context);
    if (fR.tipo != INT || cR.tipo != INT) { printf("Error: dimensiones de matriz deben ser int.\n"); return nuevoValorResultadoVacio(); }
    int filas = *((int*)fR.valor); int cols = *((int*)cR.valor);
    if (filas < 0 || cols < 0) { printf("Error: dimensiones negativas de matriz.\n"); return nuevoValorResultadoVacio(); }
    ArrayValue* m = crearMatrizVacia(n->elemTipo, filas, cols);
    agregarSymbol(context, nuevoVariable(n->nombre, m, ARRAY, 0));
    return nuevoValorResultadoVacio();
}

static Result interpretMatrixLiteralDecl(AbstractExpresion* self, Context* context) {
    MatrixLiteralDecl* n = (MatrixLiteralDecl*)self;
    AbstractExpresion* filasLista = n->filasLista;
    int filas = (int)filasLista->numHijos;
    if (filas == 0) { printf("Error: matriz literal vacía.\n"); return nuevoValorResultadoVacio(); }
    AbstractExpresion* fila0 = filasLista->hijos[0];
    int cols = (int)fila0->numHijos;
    ArrayValue* outer = nuevoArrayValue(ARRAY, filas);
    for (int r=0;r<filas;r++) {
        AbstractExpresion* filaNodo = filasLista->hijos[r];
        if ((int)filaNodo->numHijos != cols) {
            printf("Error: filas de distinta longitud en matriz literal.\n");
        }
        ArrayValue* row = nuevoArrayValue(n->elemTipo, cols);
        for (int c=0;c<cols && c<(int)filaNodo->numHijos;c++) {
            Result vr = filaNodo->hijos[c]->interpret(filaNodo->hijos[c], context);
            int compatible=0; void* convertido=NULL;
            if (vr.tipo == n->elemTipo) { compatible=1; convertido=vr.valor; }
            else switch (n->elemTipo) {
                case INT: case BYTE: case SHORT: case LONG:
                    if (vr.tipo==INT||vr.tipo==BYTE||vr.tipo==SHORT||vr.tipo==LONG) { int* v=malloc(sizeof(int)); *v=*((int*)vr.valor); convertido=v; compatible=1; }
                    else if (vr.tipo==FLOAT||vr.tipo==DOUBLE) { float f=*((float*)vr.valor); if (f==(int)f){ int* v=malloc(sizeof(int)); *v=(int)f; convertido=v; compatible=1; } }
                    else if (vr.tipo==BOOLEAN && n->elemTipo==INT) { int* v=malloc(sizeof(int)); *v=*((int*)vr.valor); convertido=v; compatible=1; }
                    break;
                case FLOAT: case DOUBLE:
                    if (vr.tipo==INT||vr.tipo==BYTE||vr.tipo==SHORT||vr.tipo==LONG||vr.tipo==FLOAT||vr.tipo==DOUBLE) { float* v=malloc(sizeof(float)); if (vr.tipo==FLOAT||vr.tipo==DOUBLE) *v=*((float*)vr.valor); else *v=(float)(*((int*)vr.valor)); convertido=v; compatible=1; }
                    break;
                case BOOLEAN:
                    if (vr.tipo==BOOLEAN || vr.tipo==INT) { int* v=malloc(sizeof(int)); *v=(vr.tipo==BOOLEAN)?*((int*)vr.valor):(*((int*)vr.valor)!=0); convertido=v; compatible=1; }
                    break;
                case CHAR:
                    if (vr.tipo==CHAR) { char* v=malloc(sizeof(char)); *v=*((char*)vr.valor); convertido=v; compatible=1; }
                    break;
                case STRING:
                    if (vr.tipo==STRING) { if (vr.valor) { char* dup=strdup((char*)vr.valor); convertido=dup; } else convertido=NULL; compatible=1; }
                    break;
                default: break;
            }
            if (!compatible) { printf("Error: tipo incompatible en matriz literal (%d,%d).\n", r, c); convertido = valorPorDefecto(n->elemTipo); }
            if (vr.tipo != n->elemTipo) { if (vr.tipo==STRING) {/*dup hecha*/} else free(vr.valor); }
            if (row->items[c]) free(row->items[c]);
            row->items[c] = convertido;
        }
        outer->items[r] = row;
    }
    agregarSymbol(context, nuevoVariable(n->nombre, outer, ARRAY, 0));
    return nuevoValorResultadoVacio();
}

static Result interpretMatrixAsignacionElem(AbstractExpresion* self, Context* context) {
    MatrixAsignacionElem* n = (MatrixAsignacionElem*)self;
    Symbol* s = buscarTablaSimbolos(context, n->nombre);
    if (!s || s->tipo != ARRAY) { printf("Error: '%s' no es matriz.\n", n->nombre); return nuevoValorResultadoVacio(); }
    ArrayValue* outer = (ArrayValue*)s->valor;
    if (outer->elementType != ARRAY) { printf("Error: '%s' no es matriz 2D.\n", n->nombre); return nuevoValorResultadoVacio(); }
    Result fR = n->fila->interpret(n->fila, context);
    Result cR = n->col->interpret(n->col, context);
    if (fR.tipo != INT || cR.tipo != INT) { printf("Error: índices deben ser int.\n"); return nuevoValorResultadoVacio(); }
    int f = *((int*)fR.valor); int c = *((int*)cR.valor);
    if (f<0 || f>= outer->length) { printf("Error: índice fila fuera de rango.\n"); return nuevoValorResultadoVacio(); }
    ArrayValue* row = (ArrayValue*)outer->items[f];
    if (!row || c<0 || c>= row->length) { printf("Error: índice columna fuera de rango.\n"); return nuevoValorResultadoVacio(); }
    Result valR = n->valor->interpret(n->valor, context);
    void* convertido=NULL; int compatible=0; TipoDato elemTipo=row->elementType;
    if (valR.tipo == elemTipo) { convertido=valR.valor; compatible=1; }
    else switch (elemTipo) {
        case INT: case BYTE: case SHORT: case LONG:
            if (valR.tipo==INT||valR.tipo==BYTE||valR.tipo==SHORT||valR.tipo==LONG) { int* v=malloc(sizeof(int)); *v=*((int*)valR.valor); convertido=v; compatible=1; }
            else if (valR.tipo==FLOAT||valR.tipo==DOUBLE) { float ftmp=*((float*)valR.valor); if (ftmp==(int)ftmp){ int* v=malloc(sizeof(int)); *v=(int)ftmp; convertido=v; compatible=1; } }
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
    if (!compatible) { printf("Error: tipo incompatible en asignación de matriz.\n"); return nuevoValorResultadoVacio(); }
    if (valR.tipo != elemTipo) { if (valR.tipo==STRING) {/*dup*/} else free(valR.valor); }
    if (row->items[c]) free(row->items[c]);
    row->items[c] = convertido;
    return nuevoValorResultadoVacio();
}

static ArrayValue* crearMultiArrayVacio(TipoDato elemTipo, int dims, int* sizes, int nivel) {
    if (nivel == dims-1) {
        return nuevoArrayValue(elemTipo, sizes[nivel]);
    }
    ArrayValue* arr = nuevoArrayValue(ARRAY, sizes[nivel]);
    for (int i=0;i<sizes[nivel];i++) {
        arr->items[i] = crearMultiArrayVacio(elemTipo, dims, sizes, nivel+1);
    }
    return arr;
}

static Result interpretMultiArrayDecl(AbstractExpresion* self, Context* context) {
    MultiArrayDecl* n = (MultiArrayDecl*)self;
    if (n->dims > 6) { printf("Error: máximo 6 dimensiones soportadas (se dio %d).\n", n->dims); return nuevoValorResultadoVacio(); }
    int* sizes = malloc(sizeof(int)*n->dims);
    for (int i=0;i<n->dims;i++) {
        Result r = n->dimExprs[i]->interpret(n->dimExprs[i], context);
        if (r.tipo != INT) { printf("Error: dimensión %d debe ser int.\n", i); free(sizes); return nuevoValorResultadoVacio(); }
        sizes[i] = *((int*)r.valor);
        if (sizes[i] < 0) { printf("Error: dimensión negativa %d.\n", i); free(sizes); return nuevoValorResultadoVacio(); }
    }
    ArrayValue* root = crearMultiArrayVacio(n->elemTipo, n->dims, sizes, 0);
    free(sizes);
    agregarSymbol(context, nuevoVariable(n->nombre, root, ARRAY, 0));
    return nuevoValorResultadoVacio();
}

static Result interpretArray3DLiteralDecl(AbstractExpresion* self, Context* context) {
    Array3DLiteralDecl* n = (Array3DLiteralDecl*)self;
    AbstractExpresion* bloques = n->bloques2DLista; // lista de 2D blocks
    int depth = (int)bloques->numHijos;
    if (depth==0){ printf("Error: literal 3D vacío.\n"); return nuevoValorResultadoVacio(); }
    // inferir filas y cols del primer bloque
    AbstractExpresion* primer2D = bloques->hijos[0];
    int filas = (int)primer2D->numHijos;
    if (filas==0){ printf("Error: bloque 2D vacío en literal 3D.\n"); return nuevoValorResultadoVacio(); }
    AbstractExpresion* fila0 = primer2D->hijos[0];
    int cols = (int)fila0->numHijos;
    int sizes[3] = { depth, filas, cols };
    ArrayValue* root = crearMultiArrayVacio(n->elemTipo, 3, sizes, 0);
    // Rellenar
    for (int d=0; d<depth; d++) {
        AbstractExpresion* bloque2D = bloques->hijos[d];
        if ((int)bloque2D->numHijos != filas) printf("Error: inconsistencia filas bloque %d.\n", d);
        ArrayValue* arr2D = (ArrayValue*)root->items[d];
        for (int f=0; f<filas && f<(int)bloque2D->numHijos; f++) {
            AbstractExpresion* filaNodo = bloque2D->hijos[f];
            if ((int)filaNodo->numHijos != cols) printf("Error: inconsistencia columnas bloque %d fila %d.\n", d,f);
            ArrayValue* filaArr = (ArrayValue*)arr2D->items[f];
            for (int c=0; c<cols && c<(int)filaNodo->numHijos; c++) {
                Result vr = filaNodo->hijos[c]->interpret(filaNodo->hijos[c], context);
                int compatible=0; void* convertido=NULL;
                if (vr.tipo == n->elemTipo) { compatible=1; convertido=vr.valor; }
                else switch (n->elemTipo) {
                    case INT: case BYTE: case SHORT: case LONG:
                        if (vr.tipo==INT||vr.tipo==BYTE||vr.tipo==SHORT||vr.tipo==LONG){ int* v=malloc(sizeof(int)); *v=*((int*)vr.valor); convertido=v; compatible=1; }
                        else if (vr.tipo==FLOAT||vr.tipo==DOUBLE){ float ftmp=*((float*)vr.valor); if (ftmp==(int)ftmp){ int* v=malloc(sizeof(int)); *v=(int)ftmp; convertido=v; compatible=1; } }
                        else if (vr.tipo==BOOLEAN && n->elemTipo==INT){ int* v=malloc(sizeof(int)); *v=*((int*)vr.valor); convertido=v; compatible=1; }
                        break;
                    case FLOAT: case DOUBLE:
                        if (vr.tipo==INT||vr.tipo==BYTE||vr.tipo==SHORT||vr.tipo==LONG||vr.tipo==FLOAT||vr.tipo==DOUBLE){ float* v=malloc(sizeof(float)); if (vr.tipo==FLOAT||vr.tipo==DOUBLE) *v=*((float*)vr.valor); else *v=(float)(*((int*)vr.valor)); convertido=v; compatible=1; }
                        break;
                    case BOOLEAN:
                        if (vr.tipo==BOOLEAN || vr.tipo==INT){ int* v=malloc(sizeof(int)); *v=(vr.tipo==BOOLEAN)?*((int*)vr.valor):(*((int*)vr.valor)!=0); convertido=v; compatible=1; }
                        break;
                    case CHAR:
                        if (vr.tipo==CHAR){ char* v=malloc(sizeof(char)); *v=*((char*)vr.valor); convertido=v; compatible=1; }
                        break;
                    case STRING:
                        if (vr.tipo==STRING){ if (vr.valor){ char* dup=strdup((char*)vr.valor); convertido=dup; } else convertido=NULL; compatible=1; }
                        break;
                    default: break;
                }
                if (!compatible){ printf("Error: tipo incompatible literal 3D (%d,%d,%d).\n", d,f,c); convertido=valorPorDefecto(n->elemTipo); }
                if (vr.tipo != n->elemTipo){ if (vr.tipo==STRING){} else free(vr.valor); }
                if (filaArr->items[c]) free(filaArr->items[c]);
                filaArr->items[c]=convertido;
            }
        }
    }
    agregarSymbol(context, nuevoVariable(n->nombre, root, ARRAY, 0));
    return nuevoValorResultadoVacio();
}

AbstractExpresion* nuevoMatrixDeclaracion(TipoDato tipoElem, char* nombre, AbstractExpresion* filasExpr, AbstractExpresion* colsExpr) {
    MatrixDecl* n = malloc(sizeof(MatrixDecl));
    n->elemTipo=tipoElem; n->nombre=nombre; n->filasExpr=filasExpr; n->colsExpr=colsExpr;
    buildAbstractExpresion(&n->base, interpretMatrixDecl);
    if (filasExpr) agregarHijo((AbstractExpresion*)n, filasExpr);
    if (colsExpr) agregarHijo((AbstractExpresion*)n, colsExpr);
    return (AbstractExpresion*)n;
}

AbstractExpresion* nuevoMatrixLiteralDeclaracion(TipoDato tipoElem, char* nombre, AbstractExpresion* filasLista) {
    MatrixLiteralDecl* n = malloc(sizeof(MatrixLiteralDecl));
    n->elemTipo=tipoElem; n->nombre=nombre; n->filasLista=filasLista;
    buildAbstractExpresion(&n->base, interpretMatrixLiteralDecl);
    if (filasLista) agregarHijo((AbstractExpresion*)n, filasLista);
    return (AbstractExpresion*)n;
}

AbstractExpresion* nuevoMatrixAsignacionElemento(char* nombre, AbstractExpresion* filaExpr, AbstractExpresion* colExpr, AbstractExpresion* valorExpr) {
    MatrixAsignacionElem* n = malloc(sizeof(MatrixAsignacionElem));
    n->nombre=nombre; n->fila=filaExpr; n->col=colExpr; n->valor=valorExpr;
    buildAbstractExpresion(&n->base, interpretMatrixAsignacionElem);
    if (filaExpr) agregarHijo((AbstractExpresion*)n, filaExpr);
    if (colExpr) agregarHijo((AbstractExpresion*)n, colExpr);
    if (valorExpr) agregarHijo((AbstractExpresion*)n, valorExpr);
    return (AbstractExpresion*)n;
}

AbstractExpresion* nuevoMultiArrayDeclaracion(TipoDato tipoElem, char* nombre, int dims, AbstractExpresion** dimExprs) {
    MultiArrayDecl* n = malloc(sizeof(MultiArrayDecl));
    n->elemTipo=tipoElem; n->nombre=nombre; n->dims=dims; n->dimExprs=dimExprs;
    buildAbstractExpresion(&n->base, interpretMultiArrayDecl);
    for (int i=0;i<dims;i++) if (dimExprs[i]) agregarHijo((AbstractExpresion*)n, dimExprs[i]);
    return (AbstractExpresion*)n;
}

AbstractExpresion* nuevoArray3DLiteralDeclaracion(TipoDato tipoElem, char* nombre, AbstractExpresion* bloques2DLista) {
    Array3DLiteralDecl* n = malloc(sizeof(Array3DLiteralDecl));
    n->elemTipo=tipoElem; n->nombre=nombre; n->bloques2DLista=bloques2DLista;
    buildAbstractExpresion(&n->base, interpretArray3DLiteralDecl);
    if (bloques2DLista) agregarHijo((AbstractExpresion*)n, bloques2DLista);
    return (AbstractExpresion*)n;
}