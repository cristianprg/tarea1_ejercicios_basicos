#include <stdio.h>
#include <math.h>

int main (){
	
	float r, pi; //La variable "r" es la que almacena el valor del radio introducido por el usuario. Y la variable "pi" guarda el valor de pi.
	
	pi = 3.1415926;
	
	printf ("Por favor digite el radio de la esfera: ");
	scanf ("%f", &r);
	
	printf("\n");
	
	printf("El volumen de una esfera de radio %f es de %f", r, (1.33333 * pi * pow (r, 3)));
	
	return 0;
}

//Fecha de publicacion: 08/13/2022
//Hora: 10:21:13
//V. 1.1.4
//Autor: Ing Cristian David Lopez Hurtado
//Lenguaje usado: "C", Compatible con estándares de C89 Y C90
//gcc versión 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnológica de Pereira
//Programa de Ingeniería de Sistemas y Computación
//Este programa funciona como una calculadora para el volumen de una esfera
