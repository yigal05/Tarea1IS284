/*
- Fecha de publicaci�n 16/02/2024
- Hora : 15:40
- Versi�n de su c�digo: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado : C11
- Compilador Utilizado : GCC
- Version del Compilador utilizado : 4.7.1
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Este programa lee horas y minutos como datos de entrada y devuelve el total en minutos.

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf



int main()
{
    float hours= .0, minutes= .0 , totalMinutes= .0; //inicializo las variables que usare 
    
    printf("Por favor digite la cantidad de horas:"); // Solicito ingresar un valor para hours
    scanf("%f", &hours); //asigno el input a la variable hours
    
    printf("Por favor digite la cantidad de minutos:"); // Solicito ingresar un valor para minutes
    scanf("%f", &minutes); //asigno el input a la variable minutes
    
    totalMinutes = hours*60 + minutes ; //asigno un valor a la variable totalMinutes
    printf("\n%f horas y %f minutos equivalen a %f minutos",hours,minutes,totalMinutes);  // imprimo por pantalla un mesanje con el resultado
    
    return 0;
}
