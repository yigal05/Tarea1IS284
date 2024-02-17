/*
- Fecha de publicaci�n 17/02/2024
- Hora 16:04
- Versi�n de su c�digo: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Este programa lee mph(millas por hora) y los convierte a m/s

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf 


int main()
{
	float mph= .0,conversion= .0; //inicializo las variables que usare 
	
    printf("Por favor digite la cantidad  de mph  que desea convertir a m/s: "); // Solicito ingresar un valor para mph
    scanf("%f",&mph); //asigno el input a la variable mph
    
    conversion= (mph*1609.344)/3600 ; //asigno un valor a la variable conversion
    printf("\n%f mph equivalen a %f m/s ", mph ,conversion);
    return 0;
}
