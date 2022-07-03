#ifndef TABLA_SIMBOLOS_H

#define VACIO -1
#define ENTERO 0
#define REAL 1
#define BOOLEANO 2
#define CHAR 3
#define CADENA 4

typedef enum {
    VARIABLE,
    TIPO,
    FUNCION
} tipoS;

typedef struct elemento {
    char *nombre;
    int data;
    tipoS tipo;
} elemento;

typedef struct nodo {
    int id;
    elemento symbol;
    struct nodo *next;
} nodo;

typedef struct {
    int size;
    nodo *primero;
    nodo *ultimo;
} tablaSimbolos;

void initSimbolos(tablaSimbolos *);
void printSimbolos(tablaSimbolos*);
int insertarSimbolos(tablaSimbolos *, elemento, tipoS);
// Insertar nueva variable, un símbolo de la tabla
int insertarNombreSimbolos(tablaSimbolos *, char *, tipoS);
// Existe variable con ese nombre
int existeNombre(tablaSimbolos *, char *);
// Get referencia de la variable con ese nombre
nodo *getNombre(tablaSimbolos *, char *);


#endif
