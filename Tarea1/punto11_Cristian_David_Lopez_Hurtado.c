#include <stdio.h>

int main(){
	
	int h, m, s; //Las variables "h", "m" y "s" guardan las horas, minutos y segundos respectivamente
	
	printf ("Por favor digite el numero de horas, minutos y segundos que\ndesea convertir a milisegundos.\n\n");
	
	printf ("Digite horas: ");
	scanf ("%i", &h);
	
	printf ("Digite minutos: ");
	scanf ("%i", &m);
	
	printf ("Digite segundos: ");
	scanf ("%i", &s);
	
	printf ("\n");
	
	printf ("La cantidad de milisegundos para %i horas, %i minutos y %i segundos\nes de: %i milisegundos", h, m, s, ((h * 3600) + (m * 60) + s) * 1000);
	
	return 0;
}

//Fecha de publicacion: 08/13/2022 
//Hora: 14:20:36
//V. 1.2.3
//Autor: Ing Cristian David López Hurtado
//Lenguaje usado: "C", Compatible con estándares de C89 Y C90
//gcc versión 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnológica de Pereira
//Programa de Ingeniería de Sistemas y Computación
//Este programa calcula la cantidad de milisegundos que hay en una hora x ingresada por el usuario
