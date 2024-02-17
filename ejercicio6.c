/*
- Fecha de publicación 16/02/2024
- Hora 15:44
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado: C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa recibe un número de minutos como datos de entrada y devuelve el total de
horas y minutos.

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf



int main()
{
	float minutos = .0; //inicializo las variables que usare 
	int horas= .0; //inicializo las variables que usare 
	
    printf("Por favor digite la cantidad de minutos: "); // Solicito ingresar un valor para minutos
    scanf("%f" , &minutos ); //asigno el input a la variable minutos
    
    horas= minutos/60; //asigno un valor a la variable horas
    printf("\n%f minutos equivalen a %i horas y %f minutos.",minutos, horas, minutos-horas*60 ); // imprimo por pantalla un mesanje con el resultado
    
	return 0;
}
