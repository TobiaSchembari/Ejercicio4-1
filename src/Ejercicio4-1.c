/*
 ============================================================================
 Name        : Ejercicio4-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "BiblioInput.h"

/*Ejercicio 4-1:
 *  Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
un número. Utilizar la función de PedirNumero de la ejercitación 3. Por ejemplo:
5! = 5*4*3*2*1 = 120*/
int main(void) {
setbuf(stdout,NULL);
int numero;
int resultado = 1;
numero = retornarNumero(6);//Esta funcion devuelve el numero que se le pasa por paramtero.


for(int i = 1 ; i<=numero; i++){
	resultado = resultado*i;//1x1=1 x2=2 x3=6 x4=24 x5=120 x6 = 720


}
printf("\nEl Factorial de %d es : %d",numero,resultado);


	return EXIT_SUCCESS;
}


