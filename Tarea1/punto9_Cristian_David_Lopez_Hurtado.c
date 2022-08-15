#include <stdio.h>

int main(){
	
	int a, b; //Las variables "a" y "b" guardan los dos �ngulos ingresados por el usuario
	
	printf ("Por favor digite el valor del primer angulo: ");
	scanf ("%i", &a);
	
	printf ("Por favor digite el valor del segundo angulo: ");
	scanf ("%i", &b);
	
	printf ("\n");
	
	printf ("El valor del tercer angulo de un triangulo con angulos %i y %i es %i.", a, b, 180 - (a + b));
	
	return 0;
}

//Fecha de publicacion: 08/13/2022
//Hora: 12:04:37
//V. 1.0.3
//Autor: Ing Cristian David L�pez Hurtado
//Lenguaje usado: "C", Compatible con est�ndares de C89 Y C90
//gcc versi�n 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnol�gica de Pereira
//Programa de Ingenier�a de Sistemas y Computaci�n
//Este programa calcula el valor de un tercer angulo de un triangulo a partir de otros dos angulos ya conocidos
//Salvedades: El programa solo funciona con valores enteros
