#include <stdio.h>

int main(){
	
	float C; //Esta variable se encargar� de almacenar el valor en grados cent�grados ingresado por el usuario
	
	printf ("Por favor digite los centigrados a convertir a Fahrenheit: ");
	scanf ("%f", &C);
	
	printf ("\n");
	
	printf("%f%cC son %f Fahrenheit", C, 248, (( 1.8 * C) + 32));
	
	return 0;
}

//Fecha de publicacion: 08/13/2022
//Hora: 10:05:16
//V. 1.1.1
//Autor: Ing Cristian David Lopez Hurtado
//Lenguaje usado: "C", Compatible con est�ndares de C89 Y C90
//gcc versi�n 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnol�gica de Pereira
//Programa de Ingenier�a de Sistemas y Computaci�n
//Este programa funciona como conversor de grados cent�grados a Fahrenheit
