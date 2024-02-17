/*
- Fecha de publicaci�n 16/02/2024
- Hora : 15:40
- Versi�n de su c�digo: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado : C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Este programa lee horas y minutos como datos de entrada y devuelve el total en minutos.

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf



int main()
{
    float horas= .0, minutos= .0 , minutosTotales= .0; //inicializo las variables que usare 
    
    printf("Por favor digite la cantidad de horas:"); // Solicito ingresar un valor para horas
    scanf("%f", &horas); //asigno el input a la variable horas
    
    printf("Por favor digite la cantidad de minutos:"); // Solicito ingresar un valor para minutos
    scanf("%f", &minutos); //asigno el input a la variable minutos
    
    minutosTotales = horas*60 + minutos ; //asigno un valor a la variable minutosTotales
    printf("\n%f horas y %f minutos equivalen a %f minutos",horas,minutos,minutosTotales);  // imprimo por pantalla un mesanje con el resultado
    
    return 0;
}
