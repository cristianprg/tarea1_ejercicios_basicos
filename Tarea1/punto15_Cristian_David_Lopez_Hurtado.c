#include <stdio.h>
#include <math.h>

int main(){
	
	float x, op; //La variable "x" almacena el valor ingresado por el usuario y la variable "op" almacena la operaci�n
	
	printf ("Digite el valor que le quiere asignar a x: ");
	scanf ("%f", &x);
	
	op = (((((((x / 6) + (45 / x)) / (x - (-8 / 2))) / 12) / sqrt (x)) / 5) + pow (x, 4)) / sqrt (x);
	
	printf ("\n");
	
	printf ("El resultado de la ecuacion para un valor %f es de %f", x, op);
	
	return 0;
}

//Hora: 13:14:37
//V. 1.0.1
//Autor: Ing Cristian David L�pez Hurtado
//Lenguaje usado: "C", Compatible con est�ndares de C89 Y C90
//gcc versi�n 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnol�gica de Pereira
//Programa de Ingenier�a de Sistemas y Computaci�n
//Este programa calcula el resultado de una ecuaci�n reemplazando a x por un valor ingresado desde teclado
