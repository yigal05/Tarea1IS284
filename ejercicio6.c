/*
- Fecha de publicación 16/02/2024
- Hora 15:44
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado: C11
- Compilador Utilizado : GCC
- Version del Compilador utilizado : 4.7.1
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa recibe un número de minutos como datos de entrada y devuelve el total de
horas y minutos.

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf

int main()
{
	float minutes = .0; //inicializo las variables que usare 
	int hours= .0; //inicializo las variables que usare 
	
    printf("Por favor digite la cantidad de minutos: "); // Solicito ingresar un valor para minutes
    scanf("%f" , &minutes ); //asigno el input a la variable minutes
    
    hours= minutes/60; //asigno un valor a la variable hours
    printf("\n%f minutes equivalen a %i horas y %f minutos.",minutes, hours, minutes-hours*60 ); // imprimo por pantalla un mesanje con el resultado
    
	return 0;
}
