#include <stdio.h>

int main(){
	
	float a, b; //Las variables "a" y "b" guardan los dos numeros a los que posteriormente se les aplicar�n las 4 operaciones aritmeticas b�sicas
	
	printf ("Por favor digite el primer numero: ");
	scanf ("%f", &a);
	
	printf ("Por favor digite el segundo numero: ");
	scanf ("%f", &b);
	
	printf ("\n");
	
	printf ("Suma: %f\nResta: %f\nMultiplicacion: %f\nDivision: %f", a + b, a - b, a * b, a / b);
	
	return 0;
}

//Fecha de publicacion: 08/13/2022
//Hora: 12:04:37
//V. 1.2.3
//Autor: Ing Cristian David L�pez Hurtado
//Lenguaje usado: "C", Compatible con est�ndares de C89 Y C90
//gcc versi�n 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnol�gica de Pereira
//Programa de Ingenier�a de Sistemas y Computaci�n
//Este programa recoge dos numeros y realiza las 4 operaciones aritmeticas b�sicas con ellos
