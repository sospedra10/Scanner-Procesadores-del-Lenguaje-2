#include "tablaSimbolos.h" 

void initSimbolos(tablaSimbolos *table) {
	table->size = 0;
    table->primero = NULL;
    table->ultimo = table->primero;
}

void printSimbolos(tablaSimbolos *table) {
    node *actual = table->primero;

    while (actual != NULL) {
        switch (actual->data->tipo) {
            case SYM_VARIABLE:
                if (strcmp("", actual->data.nombre) == 0)
                    printf("Símbolo # %2d: variable temporal de tipo %s\n",
                        actual->id, variable_tipo_names[actual->data.tipo]);
                else
                    printf("Símbolo # %2d: variable %s de tipo %s\n",
                        actual->id, actual->data.nombre, variable_tipo_names[actual->data.tipo]);
                break;
            default:
                fprintf(stderr, "ERROR: símbolo # %2d de tipo desconocido\n", actual->data.tipo);
        }
        actual = actual->next;
    }
}

int insertarSimbolos(tablaSimbolos *table, elemento new_symbol, tipoS tipo) {
    nodo *actual = malloc(sizeof(nodo));
    actual->symbol = new_symbol;
    actual->id = table->size;
    actual->symbol.tipo = tipo;
    actual->next = NULL;

    if (table->primero == NULL) {
        table->primero = actual;
        table->ultimo = table->primero;
    } 
    else {
        table->ultimo->next = actual;
        table->ultimo = table->ultimo->next;
    }

    table->size += 1;

    return table->ultimo->id;
}

int insertarNombreSimbolos(tablaSimbolos *table, char *nombre, tipoS tipo)
{
    if (strcmp("", nombre) != 0 && existeNombre(table, nombre)) {
        return -1;
    }

    elemento new_symbol;

    new_symbol.nombre = (char *) malloc(sizeof(char) * strlen(nombre));
    strcpy(new_symbol.nombre, nombre);
    new_symbol.tipo = tipo;

    return insertarSimbolos(table, new_symbol, VARIABLE);
}

int existeNombre(tablaSimbolos *table, char *nombre)
{
    return get_var(table, nombre) != NULL;
}

nodo *getNombre(tablaSimbolos *table, char *nombre)
{
    nodo *actual = table->primero;

    while (actual != NULL) {
        if (actual->symbol.tipo == VARIABLE && strcmp(actual->symbol.nombre, nombre) == 0)
			return actual;
        actual = actual->next;
    }

    return NULL;
}

