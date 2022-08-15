#include <stdio.h>

int main(){
	
	int y; //La variable "y" es un entero que guarda el año de nacimiento ingresado por el usuario
	char nombre[20], apellido[20]; //Las variables "nombre" y "apellido" son cadenas de carácteres (strings) que almacenan el nombre y apellido respectivamente
	
	printf ("Por favor digite su nombre: ");
	scanf ("%s", &nombre);
	
	printf ("Por favor digite su apellido: ");
	scanf ("%s", &apellido);
	
	printf ("Por favor digite su a%co de nacimiento: ", 164);
	scanf ("%i", &y);
	
	printf ("\n");
	
	printf ("%s %s %i", nombre, apellido, y);
	
	return 0;
}

//Fecha de publicacion: 08/13/2022
//Hora: 11:39:49
//V. 1.2.2
//Autor: Ing Cristian David López Hurtado
//Lenguaje usado: "C", Compatible con estándares de C89 Y C90
//gcc versión 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnológica de Pereira
//Programa de Ingeniería de Sistemas y Computación
//Este programa recoge nombre, apellido y año de nacimiento del usuario y los imprime juntos
//Salvedades: El programa no funciona correctamente para nombres y apellidos mayores a 20 caracteres
