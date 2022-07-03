#ifndef TABLA_CUADRUPLAS_H

//#include "tablaSimbolos.h"


/*#define ASIGNACION 0
#define SUMA 1
#define RESTA 2
#define MULTIPLICACION 3
#define DIVISION 4
#define MODULO 5
#define ELEVEVACION 6
#define IGUALACION 7
#define COMPARACION_MENOR 8
#define COMPARACION_MAYOR 9
#define COMPARACION_MENORIGUAL 10
#define COMPARACION_MAYORIGUAL 11
#define DISTINTO 12*/

typedef struct {
    int valor1;
    int valor2;
    int operador;
    int resultado;
} cuadrupla;


typedef struct {
    int size;
    cuadrupla array[100];
} tablaCuadruplas;

void initCuadruplas(tablaCuadruplas *table);
void printCuadruplas(tablaCuadruplas *table);
void genCuadruplas(tablaCuadruplas *table, int operador, int valor1, int valor2, int resultado);


#endif
