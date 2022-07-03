#include "tablaCuadruplas.h"
#include <stdio.h>
#include <stdlib.h>

void initTable(tablaCuadruplas *tabla) {
	tabla->size = 0;
}


void genCuadruplas(tablaCuadruplas *tabla, int operador, int valor1, int valor2, int resultado) {
	printf("Generando operacion: %d valor1:%d valor2:%d resultado: %d\n", operador, valor1, valor2, resultado);
	tabla->array[tabla->size].operador = operador;  
	tabla->array[tabla->size].valor1 = valor1;  
	tabla->array[tabla->size].valor2 = valor2;
	tabla->array[tabla->size].resultado = resultado;  
	tabla->size += 1;
}

void imprimirTupla(tablaCuadruplas *tabla) {
    for (int i = 0; i < table->size; i++) {
        printf("Cuádrupla # %2d: %s %2d (valor1) %2d (valor2) %2d (resultado)\n", i, operador_names[table->array[i].operador],
        table->array[i].valor1,
        table->array[i].valor2,
        table->array[i].resultado);
    }
}
