#include <stdio.h>

int main(){
	
	float l, a; //La variable "a" guarda el ancho del rect�ngulo, as� como la variable "l" guarda el largo
	
	printf ("Por favor digite el largo del ractangulo: ");
	scanf ("%f", &l);
	
	printf ("Por favor digite el ancho del rectangulo: ");
	scanf("%f", &a);
	
	printf("\n");
	
	printf("El perimetro de un rectangulo con largo %f y ancho %f es de %f.", l, a, (2 * l) + (2 * a));
	
	return 0;
}

//Fecha de publicacion: 08/13/2022
//Hora: 10:34:14
//V. 1.0.3
//Autor: Ing Cristian David Lopez Hurtado
//Lenguaje usado: "C", Compatible con est�ndares de C89 Y C90
//gcc versi�n 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnol�gica de Pereira
//Programa de Ingenier�a de Sistemas y Computaci�n
//Este programa funciona como una calculadora para per�metro de un rect�ngulo
