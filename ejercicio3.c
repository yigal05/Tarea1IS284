/*
- Fecha de publicación 17/02/2024
- Hora : 15:29
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado :C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa lee el ancho y alto de un rectangulo y devuelve su perimetro

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf

int main()
{
    float largo= .0, ancho= .0 ; //inicializo las variables que usare 
    
    printf("Por favor digite el largo del rectangulo: "); // Solicito ingresar un valor para largo
    scanf("%f",&largo); //asigno el input a la variable largo
    
    printf("Por favor digite el ancho del rectangulo: "); // Solicito ingresar un valor para ancho
    scanf("%f",&ancho); //asigno el input a la variable ancho
    
    printf("\nEl perimetro de un rectangulo con largo %f y ancho %f es de %0.2f", largo ,ancho , 2*largo+2*ancho); // imprimo por pantalla un mesanje con el resultado
    
    return 0;
}

