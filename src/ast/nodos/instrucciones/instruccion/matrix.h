#ifndef MATRIX_NODOS_H
#define MATRIX_NODOS_H

#include "../../../AbstractExpresion.h"

AbstractExpresion* nuevoMatrixDeclaracion(TipoDato tipoElem, char* nombre, AbstractExpresion* filasExpr, AbstractExpresion* colsExpr);
AbstractExpresion* nuevoMatrixLiteralDeclaracion(TipoDato tipoElem, char* nombre, AbstractExpresion* filasLista);
AbstractExpresion* nuevoMatrixAsignacionElemento(char* nombre, AbstractExpresion* filaExpr, AbstractExpresion* colExpr, AbstractExpresion* valorExpr);

// Multi-dimension (>=3) declarations with 'new'
AbstractExpresion* nuevoMultiArrayDeclaracion(TipoDato tipoElem, char* nombre, int dims, AbstractExpresion** dimExprs);
// 3D literal declaration (array[][][] id = { { {..},{..} }, { {..},{..} } }; )
AbstractExpresion* nuevoArray3DLiteralDeclaracion(TipoDato tipoElem, char* nombre, AbstractExpresion* bloques2DLista);

#endif