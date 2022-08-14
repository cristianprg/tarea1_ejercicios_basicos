#include <stdio.h>

int main (){
	
	int h, m; //La variable "h" guarda las horas y la variable "m" guarda los minutos
	
	printf ("Por favor digite la cantidad de horas: ");
	scanf ("%i", &h);
	
	printf ("Por favor digite la cantidad de minutos: ");
	scanf ("%i", &m);
	
	printf ("\n");
	
	printf ("%i horas y %i minutos equivalen a %i minutos.", h, m, (h * 60) + m);
	
	return 0;
}

//Fecha de publicacion: 08/13/2022
//Hora: 11:01:20
//V. 1.1.1
//Autor: Ing Cristian David L�pez Hurtado
//Lenguaje usado: "C", Compatible con est�ndares de C89 Y C90
//gcc versi�n 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnol�gica de Pereira
//Programa de Ingenier�a de Sistemas y Computaci�n
//Este programa recoge horas y minutos para devolver la cantidad de minutos totales
//Salvedades: El programa solo funciona correctamente con numeros enteros
