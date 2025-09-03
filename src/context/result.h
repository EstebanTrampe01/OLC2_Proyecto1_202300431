#ifndef RESULT_H
#define RESULT_H

// El orden es la jerarquia del resultado en la operación
typedef enum {
    VOID,
    BOOLEAN,
    CHAR,
    BYTE,
    SHORT,
    INT,
    LONG,
    FLOAT,
    DOUBLE,
    STRING,
    NULO,
    BREAK,
    CONTINUE,
    RETURN,
    ARRAY,
    TIPO_COUNT
} TipoDato;

extern char* labelTipoDato[];

typedef struct {
    TipoDato tipo;
    void* valor;
} Result;

TipoDato tipoResultante(Result, Result);
/*utilizado para devolver un Result*/
Result nuevoValorResultado(void* valor, TipoDato tipo);
/*Utilizado para devolver una repuesta nula */
Result nuevoValorResultadoVacio(void);

#endif