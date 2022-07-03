%top{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include "tablaSimbolos.h"
	#include "tablaCuadruplas.h"
    #include "parser.tab.h"
}
    char *parseString(char *toParse) {
		char* solucion=(char *) malloc((strlen(yytext)+1)*sizeof(char));
		strcpy(solucion, toParse);
		solucion[strlen(solucion)]='\0';
		return solucion;
  }



cifra               [0-9]
identificador       [A-Za-z][A-Za-z0-9]*
letraOCifra         [A-Za-z0-9]
letra               [a-zA-Z]

literalEntero       (-|\+)?[0-9]+((e|E)(-|\+)?[0-9]+)?
literalReal         (-|\+)?[0-9]+(\.[0-9]+)?((e|E)(-|\+)?[0-9]+)?
literalBooleano     verdadero|falso
literalCaracter     \".\"
espacio             [ \t\n]
literalCadena       \'([^']|(\/'))*\'
literalNumerico 	literalEntero|literalReal

comentario          (\{([^\}]|(\/\}))*\})

accion              ?i:"accion"
algoritmo           ?i:"algoritmo"
booleano            ?i:"boolean"
cadena              ?i:"cadena"
caracter            ?i:"caracter"
constt              ?i:"const"
continuar           ?i:"continuar"
de                  ?i:"de"
dev                 ?i:"dev"
divv                ?i:"div"
ent                 ?i:"ent"
entero              ?i:"entero"
es                 	?i:"e/s"
falso				?i:"falso"
faccion             ?i:"faccion"
falgoritmo          ?i:"falgoritmo"
fconst              ?i:"fconst"
ffuncion            ?i:"ffuncion"
fmientras           ?i:"fmientras"
fpara               ?i:"fpara"
fsi                 ?i:"fsi"
ftipo               ?i:"ftipo"
ftupla              ?i:"ftupla"
funcion             ?i:"funcion"
fvar                ?i:"fvar"
hacer               ?i:"hacer"
hasta               ?i:"hasta"
mientras            ?i:"mientras"
mod                 ?i:"mod"
no                  ?i:"no"
o                   ?i:"o"
para                ?i:"para"
real                ?i:"real"
ref                 ?i:"ref"
sal                 ?i:"sal"
si                  ?i:"si"
tabla               ?i:"tabla"
tipo                ?i:"tipo"
tupla               ?i:"tupla"
var                 ?i:"var"
verdadero			?i:"verdadero"
y                   ?i:"y"

operadorAsignar     ":="
operadorPuntoComa   ";"
operadorComa        ","
operadorSubRango    ".."
operadorDefinicionTipo ":"
operadorEntonces    "->"
operadorInicioArray "["
operadorFinArray    "]"
operadorIgual       "="
operadorSiNoSi      "[]"
operadorInicioParentesis "("
operadorFinParentesis ")"
operadorMas         "+"
operadorPor         "*"
operadorElevado     "^"
operadorDivisor     "/"
operadorModulo      "%"
operadorMenos       "-"
operadorMayor       ">"
operadorMenor       "<"
operadorMayorIgual ">="
operadorMenorIgual "<="
operadorComparador "=="
operadorDistinto   "!="
operadorAmpersand  "&"
operadorOr         "\|"
operadorPunto		"."

tipoBase 			Entero|Booleano|Caracter|Real|Cadena


palabraReservada    accion|algoritmo|booleano|cadena|caracter|constt|continuar|de|dev|divv|ent|entero|e\/s|faccion|falgoritmo|fconst|ffuncion|fmientras|fpara|fsi|ftipo|ftupla|funcion|fvar|hacer|hasta|mientras|mod|no|o|para|real|ref|sal|si|tabla|tipo|tupla|var|y

%%

{operadorAsignar}             {printf( "Un operadorAsignar: %s\n", yytext );yylval.stringValue;return operadorAsignar;}
{operadorPuntoComa}           {printf( "Un operadorPuntoComa: %s\n", yytext );return operadorPuntoComa;}
{operadorComa}                {printf( "Un operadorComa: %s\n", yytext );return operadorComa;}
{operadorSubRango}            {printf( "Un operadorSubRango: %s\n", yytext );return operadorSubRango;}
{operadorDefinicionTipo}      {printf( "Un operadorDefinicionTipo: %s\n", yytext );return operadorDefinicionTipo;}
{operadorEntonces}            {printf( "Un operadorEntonces: %s\n", yytext );return operadorEntonces;}
{operadorInicioArray}         {printf( "Un operadorInicioArray: %s\n", yytext );return operadorInicioArray;}
{operadorFinArray}            {printf( "Un operadorFinArray: %s\n", yytext );return operadorFinArray;}
{operadorIgual}               {printf( "Un operadorIgual: %s\n", yytext );return operadorIgual;}
{operadorSiNoSi}              {printf( "Un operadorSiNoSi: %s\n", yytext );return operadorSiNoSi;}
{operadorInicioParentesis}    {printf( "Un operadorInicioParentesis: %s\n", yytext );return operadorInicioParentesis;}
{operadorFinParentesis}       {printf( "Un operadorFinParentesis: %s\n", yytext );return operadorFinParentesis;}
{operadorMas}                 {printf( "Un operadorMas: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorMas;}
{operadorPor}                 {printf( "Un operadorPor: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorPor;}
{operadorElevado}             {printf( "Un operadorElevado: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorElevado;}
{operadorDivisor}             {printf( "Un operadorDivisor: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorDivisor;}
{operadorModulo}              {printf( "Un operadorModulo: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorModulo;}
{operadorMenos}               {printf( "Un operadorMenos: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorMenos;}
{operadorMayor}               {printf( "Un operadorMayor: %s\n", yytext );return operadorMayor;}
{operadorMenor}               {printf( "Un operadorMenor: %s\n", yytext );return operadorMenor;}
{operadorMayorIgual}          {printf( "Un operadorMayorIgual: %s\n", yytext ); return operadorMayorIgual;}
{operadorMenorIgual}          {printf( "Un operadorMenorIgual: %s\n", yytext );return operadorMenorIgual;}
{operadorComparador}          {printf( "Un operadorComparador: %s\n", yytext );return operadorComparador;}
{operadorDistinto}            {printf( "Un operadorDistinto: %s\n", yytext );return operadorDistinto;}
{operadorAmpersand}           {printf( "Un operadorAmpersand: %s\n", yytext );return operadorAmpersand;}
{operadorOr}                  {printf( "Un operadorOr: %s\n", yytext );return operadorOr;}

{accion}                      {printf( "Una accion: %s\n", yytext );return accion;}
{algoritmo}                   {printf( "Un algoritmo: %s\n", yytext );yylval.stringValue=parseString(yytext);return algoritmo;} 
{booleano}                    {printf( "Un booleano: %s\n", yytext );return booleano;} 
{cadena}                      {printf( "Una cadena: %s\n", yytext );return cadena;} 
{caracter}                    {printf( "Un caracter: %s\n", yytext );return caracter;} 
{constt}                      {printf( "Una constt: %s\n", yytext );return constt;} 
{continuar}                   {printf( "Un continuar: %s\n", yytext );return continuar;} 
{de}                          {printf( "Un de: %s\n", yytext );return de;} 
{dev}                         {printf( "Un dev: %s\n", yytext );return dev;} 
{divv}                        {printf( "Un divv: %s\n", yytext );return divv;} 

{ent}                         {printf( "Una ent: %s\n", yytext );return ent;} 
{entero}                      {printf( "Un entero: %s\n", yytext );return entero;} 
{es}                          {printf( "Una e/s: %s\n", yytext );return es;} 
{faccion}                     {printf( "Una faccion: %s\n", yytext );return faccion;}
{falgoritmo}                  {printf( "Un falgoritmo: %s\n", yytext );return falgoritmo;}
{fconst}                      {printf( "Una fconst: %s\n", yytext );return fconst;}
{ffuncion}                    {printf( "Una ffuncion: %s\n", yytext );return ffuncion;} 
{fmientras}                   {printf( "Un fmientras: %s\n", yytext );return fmientras;}
{fpara}                       {printf( "Un fpara: %s\n", yytext );return fpara;} 
{fsi}                         {printf( "Un fsi: %s\n", yytext );return fsi;}
{ftipo}                       {printf( "Un ftipo: %s\n", yytext );return ftipo;} 
{ftupla}                      {printf( "Una ftupla: %s\n", yytext );return ftupla;} 
{funcion}                     {printf( "Una funcion: %s\n", yytext );return funcion;}

{fvar}                        {printf( "Un fvar: %s\n", yytext );return fvar;}
{hacer}                       {printf( "Un hacer: %s\n", yytext );return hacer;} 
{hasta}                       {printf( "Un hasta: %s\n", yytext );return hasta;}
{mientras}                    {printf( "Un mientras: %s\n", yytext );return mientras;} 
{mod}                         {printf( "Un mod: %s\n", yytext );return mod;}
{no}                          {printf( "Un no: %s\n", yytext );return no;}
{o}                           {printf( "Una o: %s\n", yytext );return o;}
{para}                        {printf( "Un para: %s\n", yytext );return para;} 
{real}                        {printf( "Un real: %s\n", yytext );return real;}
{ref}                         {printf( "Una ref: %s\n", yytext );return ref;}
{sal}                         {printf( "Una sal: %s\n", yytext );return sal;}
{si}                          {printf( "Un si: %s\n", yytext );return si;}
{tabla}                       {printf( "Una tabla: %s\n", yytext );return tabla;} 
{tipo}                        {printf( "Un tipo: %s\n", yytext );return tipo;}
{tupla}                       {printf( "Una tupla: %s\n", yytext );return tupla;} 
{var}                         {printf( "Una var: %s\n", yytext );return var;}
{y}                           {printf( "Una y: %s\n", yytext );return y;}

{literalCaracter}             {printf( "Un literalCaracter: %s\n", yytext );return literalCaracter;}
{literalCadena}               {printf( "Un literalCadena: %s\n", yytext );return literalCadena;}
{comentario}                  {printf( "Un comentario: %s\n", yytext );return comentario;}
{literalEntero}               {printf( "Un literalEntero: %s\n", yytext );return literalEntero;}
{literalReal}                 {printf( "Un literalReal: %s\n", yytext );return literalReal;}
{literalBooleano}             {printf( "Un literalBooleano: %s\n", yytext );return literalBooleano;}
{identificador}               {printf( "Un identificador: %s\n", yytext );yylval.stringValue=parseString(yytext);return identificador;}

%%

