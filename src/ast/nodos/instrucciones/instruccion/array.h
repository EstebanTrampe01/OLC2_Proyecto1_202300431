#ifndef ARRAY_NODOS_H
#define ARRAY_NODOS_H

#include "../../../AbstractExpresion.h"
#include "context/array.h"

AbstractExpresion* nuevoArrayDeclaracion(TipoDato tipoElemento, char* nombre, AbstractExpresion* exprLength);
AbstractExpresion* nuevoArrayLiteralDeclaracion(TipoDato tipoElemento, char* nombre, AbstractExpresion* listaValores);
AbstractExpresion* nuevoArrayAcceso(AbstractExpresion* arregloExpr, AbstractExpresion* indiceExpr);
AbstractExpresion* nuevoArrayLinearAccess(AbstractExpresion* arregloExpr, AbstractExpresion* linearIdx);
AbstractExpresion* nuevoArrayAsignacionElemento(char* nombre, AbstractExpresion* indiceExpr, AbstractExpresion* valorExpr);
/* Asignación multi-dimensional genérica: nombre[...][...]... = valor */
AbstractExpresion* nuevoMultiArrayAsignacionElemento(char* nombre, AbstractExpresion* indicesLista, AbstractExpresion* valorExpr);
/* Declaración de array a partir de una expresión que retorna ARRAY */
AbstractExpresion* nuevoArrayDeclaracionDesdeExpr(TipoDato tipoElem, char* nombre, AbstractExpresion* exprArray);

#endif