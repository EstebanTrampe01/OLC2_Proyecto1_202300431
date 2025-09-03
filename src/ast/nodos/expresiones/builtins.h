#ifndef BUILTINS_H
#define BUILTINS_H

#include "ast/AbstractExpresion.h"

AbstractExpresion* nuevoArrayLength(AbstractExpresion* arrExpr);
AbstractExpresion* nuevoArrayAdd(AbstractExpresion* arrExpr, AbstractExpresion* valExpr);
AbstractExpresion* nuevoArraysIndexOf(AbstractExpresion* arrExpr, AbstractExpresion* keyExpr);
AbstractExpresion* nuevoParseEntero(AbstractExpresion* strExpr); // Integer.parseInt
AbstractExpresion* nuevoParseDouble(AbstractExpresion* strExpr); // Double.parseDouble
AbstractExpresion* nuevoParseFloat(AbstractExpresion* strExpr);  // Float.parseFloat
AbstractExpresion* nuevoStringValueOf(AbstractExpresion* anyExpr);
AbstractExpresion* nuevoStringJoin(AbstractExpresion* delimiterExpr, AbstractExpresion* sourceExpr, int isArrayMode);

#endif