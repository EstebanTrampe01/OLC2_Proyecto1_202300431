#include "break.h"
#include <stdlib.h>
#include <stdio.h>
#include "../../../../context/result.h"

Result interpretBreakExpresion(AbstractExpresion* self, Context* context);

AbstractExpresion* nuevoBreakExpresion(void) {
    BreakExpresion* expr = (BreakExpresion*)malloc(sizeof(BreakExpresion));
    buildAbstractExpresion(&expr->base, interpretBreakExpresion);
    return (AbstractExpresion*)expr;
}

Result interpretBreakExpresion(AbstractExpresion* self, Context* context) {
    // El break interrumpe la ejecución del switch
    // Devolvemos un resultado especial que indica break
    Result result = nuevoValorResultadoVacio();
    result.tipo = BREAK;
    return result;
}