#include <stdio.h>
#include <math.h>

int main(){
	
	float op; //Esta variable "op" se encarga de guardar el resultado de la operación
	
	op = ((17 / 11) + (23 / 2)) / ((943 / 120) + sqrt (144));
	
	printf ("El resultado de la operacion es: %f", op);
	
	return 0;
}

//Fecha de publicacion: 08/13/2022 
//Hora: 14:31:43
//V. 1.1.1
//Autor: Ing Cristian David López Hurtado
//Lenguaje usado: "C", Compatible con estándares de C89 Y C90
//gcc versión 4.9.2 (compilador)
//Presentado a: Doctor Ricardo Moreno Laverde
//Universidad Tecnológica de Pereira
//Programa de Ingeniería de Sistemas y Computación
//Este programa calcula el resultado de una operación
