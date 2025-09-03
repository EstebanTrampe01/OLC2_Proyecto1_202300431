#ifndef FOR_EXPRESION_H
#define FOR_EXPRESION_H

#include "../../../AbstractExpresion.h"

typedef struct {
    AbstractExpresion base;
    AbstractExpresion* initialization;  // Puede ser NULL
    AbstractExpresion* condition;       // Puede ser NULL
    AbstractExpresion* increment;        // Puede ser NULL
    AbstractExpresion* body;
} ForExpresion;

AbstractExpresion* nuevoForExpresion(AbstractExpresion* initialization, AbstractExpresion* condition, AbstractExpresion* increment, AbstractExpresion* body);

#endif
