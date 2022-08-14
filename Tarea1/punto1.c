#include <stdio.h>

int main(){
	
	float C; //Esta variable se encargará de almacenar el valor en grados centígrados ingresado por el usuario
	
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
//Lenguaje usado: "C", Compatible con estándares de C89 Y C90
//gcc versión 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnológica de Pereira
//Programa de Ingeniería de Sistemas y Computación
//Este programa funciona como conversor de grados centígrados a Fahrenheit
