#include <stdio.h>
#include <math.h>

int main(){
	
	float x, op; //La variable "x" almacena el valor ingresado por el usuario y la variable "op" almacena la operación
	
	printf ("Por favor digite el valor que le quiere asugnar a x: ");
	scanf ("%f", &x);
	
	op = ((((x / 2) + (sqrt (x) / 2) + 20) * (16 / x)) / ((( 0.5 - 0.75 + x) / (0.2857142857142)) + x)) + (pow (x, 2));
	
	printf("\n");
	
	printf ("El resultado de la ecuacion para un valor de %f es de %f", x, op);
	
	return 0;
}

//Fecha de publicacion: 08/13/2022 
//Hora: 13:14:37
//V. 1.3.4
//Autor: Ing Cristian David López Hurtado
//Lenguaje usado: "C", Compatible con estándares de C89 Y C90
//gcc versión 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnológica de Pereira
//Programa de Ingeniería de Sistemas y Computación
//Este programa calcula el resultado de una ecuación reemplazando a x por un valor ingresado desde teclado
