#include <stdio.h>

int main(){
	
	float a; //Esta variable guarda la cantidad de mph ingresada por el usuario
	
	printf ("Por favor digite la cantidad de mph que desea convertitr a m/s: ");
	scanf ("%f", &a);
	
	printf ("\n");
	
	printf ("%f mph equivalen a %f m/s", a, (a * 1609.34) / 3600);
	
	return 0;
}

//Fecha de publicacion: 08/13/2022
//Hora: 13:58:41
//V. 1.0.0
//Autor: Ing Cristian David López Hurtado
//Lenguaje usado: "C", Compatible con estándares de C89 Y C90
//gcc versión 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnológica de Pereira
//Programa de Ingeniería de Sistemas y Computación
//Este programa funciona como conversor de mph a m/s
