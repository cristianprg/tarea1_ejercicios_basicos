#include <stdio.h>
#include <math.h>

int main(){
	
	float x, op; //La variable "x" almacena el valor ingresado por el usuario y la variable "op" almacena la operación
	
	printf ("Digite el valor que le quiere asignar a x: ");
	scanf ("%f", &x);
	
	op = (((((((x / 6) + (45 / x)) / (x - (-8 / 2))) / 12) / sqrt (x)) / 5) + pow (x, 4)) / sqrt (x);
	
	printf ("\n");
	
	printf ("El resultado de la ecuacion para un valor %f es de %f", x, op);
	
	return 0;
}

//Hora: 13:14:37
//V. 1.0.1
//Autor: Ing Cristian David López Hurtado
//Lenguaje usado: "C", Compatible con estándares de C89 Y C90
//gcc versión 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnológica de Pereira
//Programa de Ingeniería de Sistemas y Computación
//Este programa calcula el resultado de una ecuación reemplazando a x por un valor ingresado desde teclado
