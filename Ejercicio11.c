/*
- Fecha de publicación 17/02/2024
- Hora : 16:20
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Compilador Utilizado : GCC
- Version del Compilador utilizado : 4.7.1
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa lee horas, minutos y segundos como datos de entrada y muestra en pantalla el número
de milisegundos.

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf 


int main()
{
	float hours= .0 ,minutes,seconds= .0 , totalSeconds= .0; //inicializo las variables que usare 
	printf("Por favor digite eI numero de hours, minutes y seconds que\ndesea convertir a miliseconds.");
	
	printf("\n\nDigite horas: " ); // Solicito ingresar un valor para hours
	scanf("%f",&hours); //asigno el input a la variable hours 
	
	printf("Digite minutos: " ); // Solicito ingresar un valor para minutes
	scanf("%f",&minutes); //asigno el input a la variable minutes
	
	printf("Digite segundos: " ); // Solicito ingresar un valor para seconds
	scanf("%f",&seconds); //asigno el input a la variable seconds
	
	totalSeconds = seconds + hours*3600 + minutes*60;  //asigno un valor a la variable totalSeconds
	
	printf("\nLa cantidad de milisegundos para %f hora, %f minutos y %f segundos\nes de %f milisegundos", hours, minutes ,seconds, totalSeconds*1000 );// imprimo por pantalla un mesanje con el resultado
    return 0;
}
