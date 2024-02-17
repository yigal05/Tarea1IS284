/*
- Fecha de publicación 17/02/2024
- Hora : 16:20
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa lee horas, minutos y segundos como datos de entrada y muestra en pantalla el número
de milisegundos.

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf 


int main()
{
	float horas= .0 ,minutos,segundos= .0 , segundosTotales= .0; //inicializo las variables que usare 
	printf("Por favor digite eI numero de horas, minutos y segundos que\ndesea convertir a milisegundos.");
	
	printf("\n\nDigite horas: " ); // Solicito ingresar un valor para horas
	scanf("%f",&horas); //asigno el input a la variable horas 
	
	printf("Digite minutos: " ); // Solicito ingresar un valor para minutos
	scanf("%f",&minutos); //asigno el input a la variable minutos
	
	printf("Digite segundos: " ); // Solicito ingresar un valor para segundos
	scanf("%f",&segundos); //asigno el input a la variable segundos
	
	segundosTotales = segundos + horas*3600 + minutos*60;  //asigno un valor a la variable segundosTotales
	
	printf("\nLa cantidad de milisegundos para %f hora, %f minutos y %f segundos\nes de %f milisegundos", horas, minutos ,segundos, segundosTotales*1000 ); // imprimo por pantalla un mesanje con el resultado
    return 0;
}
