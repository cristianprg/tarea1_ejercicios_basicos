#include <stdio.h>

int main(){
	
	float k; //La variable "k" guarda el valor en kilómetros ingresado por el usuario
	
	printf ("Por favor digite cuantos km/h quiere convertir a mph: ");
	scanf ("%f", &k);
	
	printf ("\n");
	
	printf ("%f km/h equivalen a %f mph.", k, k * 0.621731);
	
	return 0;
}

//Fecha de publicacion: 08/13/2022
//Hora: 10:43:59
//V. 1.0.0
//Autor: Ing Cristian David López Hurtado
//Lenguaje usado: "C", Compatible con estándares de C89 Y C90
//gcc versión 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnológica de Pereira
//Programa de Ingeniería de Sistemas y Computación
//Este programa funciona como un conversor de Kilómetros por hora a millas por hora
