#include "result.h"

#include <stddef.h>
#include <stdio.h>

char* labelTipoDato[TIPO_COUNT] = {
    [VOID] = "void",
    [BOOLEAN] = "boolean",
    [CHAR] = "char",
    [BYTE] = "byte",
    [SHORT] = "short",
    [INT] = "int",
    [LONG] = "long",
    [FLOAT] = "float",
    [DOUBLE] = "double",
    [STRING] = "string",
    [NULO] = "null",
    [BREAK] = "break",
    [CONTINUE] = "continue",
    [RETURN] = "return",
    [ARRAY] = "array"
};

Result nuevoValorResultado(void* valor, TipoDato tipo) {
    Result resultado;
    resultado.tipo = tipo;
    resultado.valor = valor;
    return resultado;
}

Result nuevoValorResultadoVacio() {
    Result resultado;
    resultado.tipo = NULO;
    resultado.valor = NULL;
    return resultado;
}

//Sin usar
TipoDato tipoResultante(Result valor1, Result valor2) {
    if (valor1.tipo >= valor2.tipo) {
        return valor1.tipo;
    } else {
        return valor2.tipo;
    }
}