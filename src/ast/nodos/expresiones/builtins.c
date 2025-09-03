#include "builtins.h"
#include "context/result.h"
#include "context/array.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct { AbstractExpresion base; AbstractExpresion* a; } UnaryWrap;
typedef struct { AbstractExpresion base; AbstractExpresion* a; AbstractExpresion* b; } BinaryWrap;
typedef struct { AbstractExpresion base; AbstractExpresion* a; AbstractExpresion* b; int flag; } BinaryFlagWrap;

static int totalElementsRecursive(ArrayValue* arr){
    if(!arr) return 0;
    if(arr->elementType!=ARRAY) return arr->length; /* plano */
    int total=0;
    for(int i=0;i<arr->length;i++){
        ArrayValue* inner = (ArrayValue*)arr->items[i];
        if(inner) total += totalElementsRecursive(inner);
    }
    return total;
}
static Result interpretArrayLength(AbstractExpresion* self, Context* ctx){
    UnaryWrap* n=(UnaryWrap*)self; Result r=n->a->interpret(n->a, ctx);
    int* v=malloc(sizeof(int)); *v=0;
    if(r.tipo!=ARRAY||!r.valor){ return nuevoValorResultado(v,INT);} 
    ArrayValue* arr=(ArrayValue*)r.valor; 
    /* Si los elementos son arrays, contar recursivamente, si no, length directo */
    if(arr->length>0 && arr->items && arr->items[0] && arr->elementType==ARRAY){ *v=totalElementsRecursive(arr); }
    else { *v=arr->length; }
    return nuevoValorResultado(v,INT);
} 

static Result interpretArrayAdd(AbstractExpresion* self, Context* ctx){
    BinaryWrap* n=(BinaryWrap*)self; Result r=n->a->interpret(n->a,ctx);
    if(r.tipo!=ARRAY||!r.valor){return nuevoValorResultadoVacio();}
    ArrayValue* arr=(ArrayValue*)r.valor; Result val=n->b->interpret(n->b,ctx);
    /* Si promoción requerida (int->float por agregar float/double), recrear arreglo promovido in-place */
    if((arr->elementType==INT||arr->elementType==BYTE||arr->elementType==SHORT||arr->elementType==LONG) && (val.tipo==FLOAT||val.tipo==DOUBLE)){
        // Promover todo a FLOAT
        void** nuevos = malloc(sizeof(void*) * arr->length);
        for(int i=0;i<arr->length;i++){
            float* vf=malloc(sizeof(float));
            if(arr->items[i]) vf[0]=(float)(*(int*)arr->items[i]); else vf[0]=0.0f;
            nuevos[i]=vf;
        }
        // liberar ints antiguos
        for(int i=0;i<arr->length;i++) if(arr->items[i]) free(arr->items[i]);
        free(arr->items);
        arr->items=nuevos; arr->elementType=FLOAT;
    }
    // Convertir nuevo elemento según tipo final del array
    void* convertido=NULL; int compatible=0; switch(arr->elementType){
        case INT: case BYTE: case SHORT: case LONG:
            if(val.tipo==INT){ int* v=malloc(sizeof(int)); *v=*(int*)val.valor; convertido=v; compatible=1; }
            break;
        case FLOAT:
            if(val.tipo==FLOAT){ float* v=malloc(sizeof(float)); *v=*(float*)val.valor; convertido=v; compatible=1; }
            else if(val.tipo==INT){ float* v=malloc(sizeof(float)); *v=(float)(*(int*)val.valor); convertido=v; compatible=1; }
            else if(val.tipo==DOUBLE){ float* v=malloc(sizeof(float)); *v=(float)(*(double*)val.valor); convertido=v; compatible=1; }
            break;
        case DOUBLE:
            if(val.tipo==DOUBLE){ double* v=malloc(sizeof(double)); *v=*(double*)val.valor; convertido=v; compatible=1; }
            else if(val.tipo==FLOAT){ double* v=malloc(sizeof(double)); *v=(double)(*(float*)val.valor); convertido=v; compatible=1; }
            else if(val.tipo==INT){ double* v=malloc(sizeof(double)); *v=(double)(*(int*)val.valor); convertido=v; compatible=1; }
            break;
        case BOOLEAN:
            if(val.tipo==BOOLEAN||val.tipo==INT){ int* v=malloc(sizeof(int)); *v=*(int*)val.valor; convertido=v; compatible=1; }
            break;
        case CHAR:
            if(val.tipo==CHAR){ char* v=malloc(sizeof(char)); *v=*(char*)val.valor; convertido=v; compatible=1; }
            break;
        case STRING:
            if(val.tipo==STRING){ if(val.valor){ char* dup=strdup((char*)val.valor); convertido=dup;} compatible=1; }
            break;
        default: break;
    }
    if(!compatible){ fprintf(stderr,"Error: tipo incompatible en add.\n"); return nuevoValorResultadoVacio(); }
    // Redimensionar en sitio
    void** nuevosItems = realloc(arr->items, sizeof(void*) * (arr->length+1));
    if(!nuevosItems){ fprintf(stderr,"Error: realloc falló en add.\n"); return nuevoValorResultadoVacio(); }
    arr->items = nuevosItems; arr->items[arr->length]=convertido; arr->length +=1;
    return nuevoValorResultado(arr, ARRAY);
}

static Result interpretArraysIndexOf(AbstractExpresion* self, Context* ctx){ BinaryWrap* n=(BinaryWrap*)self; Result r=n->a->interpret(n->a,ctx); Result key=n->b->interpret(n->b,ctx); int* out=malloc(sizeof(int)); *out=-1; if(r.tipo!=ARRAY||!r.valor){ return nuevoValorResultado(out, INT);} ArrayValue* arr=(ArrayValue*)r.valor; for(int i=0;i<arr->length;i++){ if(!arr->items[i]) continue; switch(arr->elementType){ case INT: case BYTE: case SHORT: case LONG: if(key.tipo==INT && *((int*)arr->items[i])==*((int*)key.valor)) { *out=i; i=arr->length; } break; case BOOLEAN: if(key.tipo==BOOLEAN && *((int*)arr->items[i])==*((int*)key.valor)){ *out=i; i=arr->length;} break; case CHAR: if(key.tipo==CHAR && *((char*)arr->items[i])==*((char*)key.valor)){ *out=i; i=arr->length;} break; case STRING: if(key.tipo==STRING && key.valor && arr->items[i] && strcmp((char*)arr->items[i], (char*)key.valor)==0){ *out=i; i=arr->length;} break; default: break; } }
    return nuevoValorResultado(out, INT);
}

static int isAllDigits(const char* s){ if(!s||!*s) return 0; if(*s=='-') { s++; if(!*s) return 0; } for(const char* p=s; *p; ++p) if(*p<'0'||*p>'9') return 0; return 1; }

static Result interpretParseEntero(AbstractExpresion* self, Context* ctx){ UnaryWrap* n=(UnaryWrap*)self; Result r=n->a->interpret(n->a,ctx); if(r.tipo!=STRING||!r.valor||!isAllDigits((char*)r.valor)){ fprintf(stderr,"Error: parseInt cadena inválida.\n"); int* v=malloc(sizeof(int)); *v=0; return nuevoValorResultado(v,INT);} int* v=malloc(sizeof(int)); *v=atoi((char*)r.valor); return nuevoValorResultado(v,INT);} 

static Result interpretParseDouble(AbstractExpresion* self, Context* ctx){
    UnaryWrap* n=(UnaryWrap*)self; Result r=n->a->interpret(n->a,ctx);
    if(r.tipo!=STRING||!r.valor){ fprintf(stderr,"Error: parseDouble cadena inválida.\n"); double* d=malloc(sizeof(double)); *d=0; return nuevoValorResultado(d,DOUBLE);} 
    double* d=malloc(sizeof(double)); *d=strtod((char*)r.valor,NULL); return nuevoValorResultado(d,DOUBLE);
}

static Result interpretParseFloat(AbstractExpresion* self, Context* ctx){
    UnaryWrap* n=(UnaryWrap*)self; Result r=n->a->interpret(n->a,ctx);
    if(r.tipo!=STRING||!r.valor){ fprintf(stderr,"Error: parseFloat cadena inválida.\n"); float* f=malloc(sizeof(float)); *f=0; return nuevoValorResultado(f,FLOAT);} 
    float* f=malloc(sizeof(float)); *f=strtof((char*)r.valor,NULL); return nuevoValorResultado(f,FLOAT);
}

static Result interpretStringValueOf(AbstractExpresion* self, Context* ctx){ UnaryWrap* n=(UnaryWrap*)self; Result r=n->a->interpret(n->a,ctx); char buf[128]; char* out=NULL; switch(r.tipo){ case INT: case BYTE: case SHORT: case LONG: snprintf(buf,sizeof(buf),"%d", *((int*)r.valor)); out=strdup(buf); break; case FLOAT: snprintf(buf,sizeof(buf),"%g", *((float*)r.valor)); out=strdup(buf); break; case DOUBLE: snprintf(buf,sizeof(buf),"%g", *((double*)r.valor)); out=strdup(buf); break; case BOOLEAN: out=strdup(*((int*)r.valor)?"true":"false"); break; case CHAR: buf[0]=*((char*)r.valor); buf[1]='\0'; out=strdup(buf); break; case STRING: if(r.valor) out=strdup((char*)r.valor); else out=strdup("null"); break; default: out=strdup("null"); }
    return nuevoValorResultado(out, STRING); }

static Result interpretStringJoin(AbstractExpresion* self, Context* ctx){ BinaryFlagWrap* n=(BinaryFlagWrap*)self; Result d = n->a->interpret(n->a, ctx); if(d.tipo!=STRING){ fprintf(stderr,"Error: delimitador debe ser string.\n"); char* z=strdup(""); return nuevoValorResultado(z, STRING);} char* delim = d.valor? (char*)d.valor : ""; if(n->flag){ // array mode
        Result arrR = n->b->interpret(n->b, ctx); if(arrR.tipo!=ARRAY || !arrR.valor){ char* z=strdup(""); return nuevoValorResultado(z, STRING);} ArrayValue* arr=(ArrayValue*)arrR.valor; size_t total=1; for(int i=0;i<arr->length;i++){ if(arr->items[i]) total+=strlen((char*)arr->items[i]); if(i<arr->length-1) total+=strlen(delim); }
        char* res=malloc(total); res[0]='\0'; for(int i=0;i<arr->length;i++){ if(arr->items[i]) strcat(res,(char*)arr->items[i]); if(i<arr->length-1) strcat(res,delim);} return nuevoValorResultado(res, STRING);
    } else { // variadic simple: n->b es lista_Expr
        AbstractExpresion* lista = n->b; size_t total=1; for(size_t i=0;i<lista->numHijos;i++){ Result it=lista->hijos[i]->interpret(lista->hijos[i], ctx); if(it.tipo==STRING && it.valor) total+=strlen((char*)it.valor); if(i<lista->numHijos-1) total+=strlen(delim);} char* res=malloc(total); res[0]='\0'; for(size_t i=0;i<lista->numHijos;i++){ Result it=lista->hijos[i]->interpret(lista->hijos[i], ctx); if(it.tipo==STRING && it.valor) strcat(res,(char*)it.valor); if(i<lista->numHijos-1) strcat(res,delim);} return nuevoValorResultado(res, STRING); }
}

static void build(AbstractExpresion* b, Result (*fn)(AbstractExpresion*, Context*)) { buildAbstractExpresion(b, fn); }

AbstractExpresion* nuevoArrayLength(AbstractExpresion* a){ UnaryWrap* n=malloc(sizeof(UnaryWrap)); build(&n->base, interpretArrayLength); n->a=a; return (AbstractExpresion*)n; }
AbstractExpresion* nuevoArrayAdd(AbstractExpresion* a, AbstractExpresion* v){ BinaryWrap* n=malloc(sizeof(BinaryWrap)); build(&n->base, interpretArrayAdd); n->a=a; n->b=v; return (AbstractExpresion*)n; }
AbstractExpresion* nuevoArraysIndexOf(AbstractExpresion* a, AbstractExpresion* k){ BinaryWrap* n=malloc(sizeof(BinaryWrap)); build(&n->base, interpretArraysIndexOf); n->a=a; n->b=k; return (AbstractExpresion*)n; }
AbstractExpresion* nuevoParseEntero(AbstractExpresion* s){ UnaryWrap* n=malloc(sizeof(UnaryWrap)); build(&n->base, interpretParseEntero); n->a=s; return (AbstractExpresion*)n; }
AbstractExpresion* nuevoParseDouble(AbstractExpresion* s){ UnaryWrap* n=malloc(sizeof(UnaryWrap)); build(&n->base, interpretParseDouble); n->a=s; return (AbstractExpresion*)n; }
AbstractExpresion* nuevoParseFloat(AbstractExpresion* s){ UnaryWrap* n=malloc(sizeof(UnaryWrap)); build(&n->base, interpretParseFloat); n->a=s; return (AbstractExpresion*)n; }
AbstractExpresion* nuevoStringValueOf(AbstractExpresion* s){ UnaryWrap* n=malloc(sizeof(UnaryWrap)); build(&n->base, interpretStringValueOf); n->a=s; return (AbstractExpresion*)n; }
AbstractExpresion* nuevoStringJoin(AbstractExpresion* d, AbstractExpresion* src, int isArray){ BinaryFlagWrap* n=malloc(sizeof(BinaryFlagWrap)); build(&n->base, interpretStringJoin); n->a=d; n->b=src; n->flag=isArray; return (AbstractExpresion*)n; }
