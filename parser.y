%{
	#include <stdio.h>
	#include <math.h>
	#include <stdlib.h>
	#include "tablaSimbolos.h"
	#include "tablaCuadruplas.h"
	int yylex(void);
	int yyparse(void);
	extern FILE *yyin;
	void yyerror (char const *);
%}

/* Declaraciones de Bison */

%define parse.error verbose
%token accion
%token algoritmo
%token tipoBase
%token identificador
%token <intValue> literalEntero
%token <stringValue> literalCaracter
%token <stringValue> literalBooleano
%token palabraReservada
%token <stringValue> literalCadena
%token <floatValue> literalReal
%token espacio
%left o
%left y
%left no
%token <stringValue> comentario
%token <stringValue> booleano
%token <stringValue> cadena
%token <stringValue> caracter
%token constt
%token continuar
%token de
%token dev
%token divv
%token ent
%token entero
%token es
%token faccion
%token falgoritmo
%token fconst
%token ffuncion
%token fmientras
%token fpara
%token fsi
%token ftipo
%token ftupla
%token funcion
%token fvar
%token hacer
%token hasta
%token mientras
%token mod
%token no 
%token o
%token para
%token <floatValue> real
%token ref
%token sal
%token si
%token tabla
%token tipo
%token tupla
%token var
%token y
%token operadorAsignar
%token operadorPuntoComa
%token operadorComa
%token operadorSubRango
%token operadorDefinicionTipo
%token operadorEntonces
%token operadorInicioArray
%token operadorFinArray
%token operadorIgual
%token operadorSiNoSi
%token operadorInicioParentesis
%token operadorFinParentesis
%token <cuentaValue> operadorMas
%token <cuentaValue> operadorPor
%token <cuentaValue> operadorElevado
%token <cuentaValue> operadorDivisor
%token <cuentaValue> operadorModulo
%token <cuentaValue> operadorMenos
%token operadorMayor
%token operadorMenor 
%token operadorMayorIgual
%token operadorMenorIgual 
%token operadorComparador
%token operadorDistinto
%token operadorAmpersand
%token operadorOr
%token operadorPunto
%token <floatValue> literalNumerico
%left operadorMas operadorMenos
%left operadorPor operadorDivisor divv mod
%left operadorPunto operadorInicioArray ref
%left menosu

//tipos 

%type <intValue> oprel
%type <intValue> expresion


%union {
	int intValue;
	float floatValue;
	char *stringValue;
  	char cuentaValue;
	char *tipo;
}

/*precedencias*/

%%
/* Reglas gramaticales */

desc_algoritmo: 
    algoritmo identificador operadorPuntoComa cabeceraAlgoritmo bloqueAlgoritmo falgoritmo {
		printf("Encontrado algoritmo\n");
	}
;

cabeceraAlgoritmo:
    defGlobales defAccionesFunciones defVariablesInteraccion comentario {printf("Algoritmo declarado\n");}
;

bloqueAlgoritmo:
    bloque comentario {printf("Bloque algoritmo\n");}
;

defGlobales:
    definicionTipo defGlobales {printf("Definición tipo global\n");}
    | definicionConst defGlobales {printf("Definición const global\n");}
    | /* vacio */
;

defAccionesFunciones:
    defAccion defAccionesFunciones {printf("Definición acción\n");}
    |defFuncion_d defAccionesFunciones {printf("Definición función\n");}
    | /* vacio */
;

bloque:
    declaraciones instrucciones {printf("Declaración instrucciones\n");}
;	

declaraciones:
    definicionTipo declaraciones {printf("Definición tipo declaraciones\n");}
    | definicionConst declaraciones {printf("Definición const declaraciones\n");}
    | definicionVar declaraciones {printf("Definición var declaraciones\n");}
    | /* vacio */
;
	
definicionTipo:
    tipo listaDefsTipo ftipo {printf("Definición tipo\n");}
;

definicionConst:
    constt listaDefsConstantes fconst {printf("Definición const\n");}
;

definicionVar:
    var listaDefsVariables fvar {printf("Definición var\n");}
;

listaDefsTipo: 
    identificador operadorIgual defTipo operadorPuntoComa listaDefsTipo {printf("Definición lista tipos\n");}
    | /* vacio */
;

expresionT:
	literalEntero {printf("Literal entero\n");}
	| literalCaracter {printf("Definición caracter\n");}
;

defTipo:
	tupla listaCampos ftupla {printf("Definición tipo Lista campos\n");}
	| tabla operadorInicioArray expresionT operadorSubRango expresionT operadorFinArray de defTipo {printf("Definición tipo tabla\n");}
	| identificador {printf("Definición tipo identificador\n");}
	| expresionT operadorSubRango expresionT {printf("Definición tipo\n");}
	| ref defTipo {printf("Definición ref tipo\n");}
	| entero {printf("Tipo entero\n");}
	| booleano {printf("Tipo booleano\n");}
	| real {printf("Tipo real\n");}
	| caracter {printf("Tipo caracter\n");}
	| cadena {printf("Tipo cadena\n");}
	/*| tipoBase {}*/
;

listaCampos:
	identificador operadorDefinicionTipo defTipo operadorPuntoComa listaCampos {printf("Lista campos\n");}
	| /* vacio */
;

listaDefsConstantes:
	identificador operadorIgual literalEntero operadorPuntoComa listaDefsConstantes {printf("Lista Definción constantes\n");}
	| /* vacio */
;

listaDefsVariables:
	listaId operadorDefinicionTipo defTipo operadorPuntoComa listaDefsVariables {printf("Lista Definción ariables\n");} 
	| /* vacio */
;

listaId:
	identificador operadorComa listaId {}
	| identificador {}
;

defVariablesInteraccion:
	defEntrada {}
	| defEntrada defSalida {}
	| defSalida {}
;

defEntrada:
	ent listaDefsVariables {}
;

defSalida:
	sal listaDefsVariables {}
;

expresion:
	expArit {}
	| expBool {}
	| llamadaFuncion {}
;

expArit: 
	expArit operadorMas expArit {}
	| expArit operadorMenos expArit {}
	| expArit operadorPor expArit {}
	| expArit operadorDivisor expArit {}
	| expArit divv expArit {}
	| expArit mod expArit {}
	| operadorInicioParentesis expArit operadorFinParentesis {}
	| operando {}
	| operadorMenos expArit %prec menosu {}
	| literalNumerico {}
;

operando:
	identificador {}
	| operando operadorPunto operando {}
	| operando operadorInicioArray expresion operadorFinArray {}
	| operando ref {}
;

expBool: 
	expBool y expBool {}
	| expBool o expBool {}
	| no expBool {}
	| literalBooleano {}
	| expresion oprel expresion {}
	| operadorInicioParentesis expBool operadorFinParentesis {}
;

oprel:
	operadorMayor {}
	| operadorMenor {}
	| operadorMayorIgual {}
	| operadorMenorIgual {}
	| operadorComparador {}
	| operadorDistinto {}
;

instrucciones: 
	instruccion operadorPuntoComa instrucciones {}
	| instruccion {}
;

instruccion:
	continuar {}
	| asignacion {}
	| alternativa {}
	| iteracion {}
	| llamadaAccion {}
;

asignacion:
	operando operadorAsignar expresion
;

alternativa:
	si expresion operadorEntonces instrucciones listaOpciones fsi
;
	
listaOpciones:
	operadorInicioArray operadorFinArray expresion operadorEntonces instrucciones listaOpciones {}
	| /* vacio */
;

iteracion: 
	itCotaFija {}
	| itCotaVariable {}
;

itCotaVariable:
	mientras expresion hacer instrucciones fmientras
;

itCotaFija: 
	para identificador operadorAsignar expresion hasta expresion hacer instrucciones fpara
;

defAccion: 
	accion cabeceraAccion bloque faccion
;

defFuncion_d:
	funcion cabeceraFuncion bloque dev expresion ffuncion
;

cabeceraAccion:
	identificador operadorInicioParentesis defParForm operadorFinParentesis operadorPuntoComa
;

cabeceraFuncion: 
	identificador operadorInicioParentesis listaDefsVariables operadorFinParentesis dev tipoBase operadorPuntoComa
;

defParForm: 
	dParForm operadorPuntoComa defParForm {}
	| dParForm {}
	| /* vacio */
;

dParForm: 
	ent listaId operadorDefinicionTipo defTipo {}
	| sal listaId operadorDefinicionTipo defTipo {}
	| es listaId operadorDefinicionTipo defTipo {}
;

llamadaAccion:
	identificador operadorInicioParentesis parametrosReales operadorFinParentesis
;

llamadaFuncion:
	identificador operadorInicioParentesis parametrosReales operadorFinParentesis
;

parametrosReales: 
	expresion operadorComa parametrosReales {}
	| expresion {}
	| /* vacio */
;

%%

void yyerror(char const * error){
  printf("Error: %s\n", error);
  exit(-1);
}

int main(int argc, char *argv[]) {
  if ( argc > 0 ) {
    FILE *myfile = fopen(argv[1], "r");
    yyin=myfile;
  }
  else {
      yyin = stdin;
  }

  do{
    yyparse();
  } while(!feof(yyin));
}
