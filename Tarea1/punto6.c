#include <stdio.h>

int main(){
	
	int m; //La variable "m" guarda los minutos ingresados por el usuario
	
	printf ("Por favor digite la cantidad de minutos: ");
	scanf ("%i", &m);
	
	printf ("\n");
	
	printf ("%i minutos son %i horas y %i minutos.", m, m / 60, m % 60);
	
	return 0;
}

//Fecha de publicacion: 08/13/2022
//Hora: 11:11:17
//V. 1.0.0
//Autor: Ing Cristian David L�pez Hurtado
//Lenguaje usado: "C", Compatible con est�ndares de C89 Y C90
//gcc versi�n 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnol�gica de Pereira
//Programa de Ingenier�a de Sistemas y Computaci�n
//Este programa recoge minutos y devuelve la cantidad de horas y minutos totales
//Salvedades: El programa solo funcona correctamente con numeros enteros
