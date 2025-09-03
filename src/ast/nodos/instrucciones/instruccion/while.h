#ifndef WHILE_EXPRESION_H
#define WHILE_EXPRESION_H

#include "../../../AbstractExpresion.h"

typedef struct {
    AbstractExpresion base;
    AbstractExpresion* condition;
    AbstractExpresion* body;
} WhileExpresion;

AbstractExpresion* nuevoWhileExpresion(AbstractExpresion* condition, AbstractExpresion* body);

#endif
