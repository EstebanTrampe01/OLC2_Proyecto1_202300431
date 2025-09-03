#include "asignacion_util.h"
#include "ast/AbstractExpresion.h"
#include "context/context.h"
#include "context/result.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Función auxiliar para verificar compatibilidad de tipos en asignación compuesta
int verificarCompatibilidadTiposAsignacion(TipoDato tipoVariable, TipoDato tipoResultado) {
    if (tipoResultado == tipoVariable) {
        return 1;
    }
    
    switch (tipoVariable) {
        case BYTE:
        case SHORT:
        case INT:
        case LONG:
            if (tipoResultado == INT || tipoResultado == BYTE || tipoResultado == SHORT || tipoResultado == LONG || tipoResultado == FLOAT) {
                return 1;
            }
            break;
        case FLOAT:
        case DOUBLE:
            if (tipoResultado == FLOAT || tipoResultado == DOUBLE || tipoResultado == INT || tipoResultado == BYTE || tipoResultado == SHORT || tipoResultado == LONG) {
                return 1;
            }
            break;
        case BOOLEAN:
            if (tipoResultado == BOOLEAN || tipoResultado == INT) {
                return 1;
            }
            break;
        default:
            break;
    }
    return 0;
}

// Función auxiliar para realizar asignación compuesta
Result realizarAsignacionCompuesta(AbstractExpresion* self, Context* context, char* nombreVariable, Operacion (*tablaOperaciones)[TIPO_COUNT][TIPO_COUNT], char* operador) {
    // Buscar la variable en la tabla de símbolos
    Symbol* symbol = buscarTablaSimbolos(context, nombreVariable);
    if (!symbol) {
        printf("Error: Variable '%s' no declarada.\n", nombreVariable);
        return nuevoValorResultadoVacio();
    }

    if (symbol->isFinal) {
        printf("Error: No se puede reasignar la constante 'final' '%s'.\n", nombreVariable);
        return nuevoValorResultadoVacio();
    }

    // Interpretar la expresión
    Result resultado = self->hijos[0]->interpret(self->hijos[0], context);

    // Crear expresión temporal: variable op expresión
    Result valorVariable;
    valorVariable.tipo = symbol->tipo;
    valorVariable.valor = symbol->valor;

    // Usar la tabla de operaciones correspondiente
    ExpresionLenguaje tempExpresion;
    tempExpresion.izquierda = valorVariable;
    tempExpresion.derecha = resultado;
    tempExpresion.tablaOperaciones = tablaOperaciones;

    Operacion op = (*tempExpresion.tablaOperaciones)[valorVariable.tipo][resultado.tipo];
    if (op == NULL) {
        printf("Error: Operación no soportada para tipos %d y %d en %s.\n", valorVariable.tipo, resultado.tipo, operador);
        return nuevoValorResultadoVacio();
    }

    Result resultadoOperacion = op(&tempExpresion);

    // Verificar compatibilidad de tipos para la asignación
    if (!verificarCompatibilidadTiposAsignacion(symbol->tipo, resultadoOperacion.tipo)) {
        printf("Error tipos incorrectos en asignación %s para '%s'.\n", operador, nombreVariable);
        return nuevoValorResultadoVacio();
    }

    // Reglas de conversión / normalización:
    // 1. Si variable es entero (BYTE/SHORT/INT/LONG) y resultado FLOAT/DOUBLE: solo aceptar si valor es entero exacto, guardando como INT.
    if (symbol->tipo >= BYTE && symbol->tipo <= LONG) {
        if (resultadoOperacion.tipo == FLOAT) {
            float v = *((float*)resultadoOperacion.valor);
            if (v == (int)v) {
                int* nuevo = malloc(sizeof(int)); *nuevo = (int)v; free(resultadoOperacion.valor); resultadoOperacion.valor = nuevo; resultadoOperacion.tipo = INT; }
            else { printf("Error: perdida de precisión al convertir %.6f a entero en %s.\n", v, operador); return nuevoValorResultadoVacio(); }
        } else if (resultadoOperacion.tipo == DOUBLE) {
            double v = *((double*)resultadoOperacion.valor);
            if (v == (long long)v) { int* nuevo = malloc(sizeof(int)); *nuevo = (int)v; free(resultadoOperacion.valor); resultadoOperacion.valor = nuevo; resultadoOperacion.tipo = INT; }
            else { printf("Error: perdida de precisión al convertir %.10g a entero en %s.\n", v, operador); return nuevoValorResultadoVacio(); }
        }
    }
    // 2. Si variable es FLOAT y resultado INT/BYTE/SHORT/LONG -> promover a FLOAT.
    else if (symbol->tipo == FLOAT) {
        if (resultadoOperacion.tipo == INT || (resultadoOperacion.tipo >= BYTE && resultadoOperacion.tipo <= LONG)) {
            float* nuevo = malloc(sizeof(float)); *nuevo = (float)(*(int*)resultadoOperacion.valor); free(resultadoOperacion.valor); resultadoOperacion.valor = nuevo; resultadoOperacion.tipo = FLOAT; }
        else if (resultadoOperacion.tipo == DOUBLE) { // reducir con posible pérdida avisando
            double v = *((double*)resultadoOperacion.valor); float* nuevo = malloc(sizeof(float)); *nuevo = (float)v; free(resultadoOperacion.valor); resultadoOperacion.valor = nuevo; resultadoOperacion.tipo = FLOAT; }
    }
    // 3. Si variable es DOUBLE y resultado es INT/BYTE/SHORT/LONG/FLOAT -> promover a DOUBLE.
    else if (symbol->tipo == DOUBLE) {
        if (resultadoOperacion.tipo != DOUBLE) {
            double* nuevo = malloc(sizeof(double));
            if (resultadoOperacion.tipo == FLOAT) *nuevo = (double)(*(float*)resultadoOperacion.valor);
            else *nuevo = (double)(*(int*)resultadoOperacion.valor);
            free(resultadoOperacion.valor); resultadoOperacion.valor = nuevo; resultadoOperacion.tipo = DOUBLE;
        }
    }

    // Liberar valor previo (excepto strings/nulos que podrían reutilizarse según diseño)
    if (symbol->valor && symbol->tipo != STRING && symbol->tipo != NULO) {
        free(symbol->valor);
    }
    symbol->valor = resultadoOperacion.valor;
    return nuevoValorResultadoVacio();
}
