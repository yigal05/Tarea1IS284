/*
- Fecha de publicación 17/02/2024
- Hora 16:04
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Compilador Utilizado : GCC
- Version del Compilador utilizado : 4.7.1
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa lee mph(millas por hora) y los convierte a m/s
- Salvedad: El segundo diseño de pantalla presenta un error en 
 su conversion, por ende este programa no dara ese valor y en su
 lugar imprimira la conversion correcta 

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
