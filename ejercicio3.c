/*
- Fecha de publicaci�n 17/02/2024
- Hora : 15:29
- Versi�n de su c�digo: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado :C11
- Compilador Utilizado : GCC
- Version del Compilador utilizado : 4.7.1
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Este programa lee el ancho y alto de un rectangulo y devuelve su perimetro

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf

int main()
{
    float height= .0, width= .0 ; //inicializo las variables que usare 
    
    printf("Por favor digite el largo del rectangulo: "); // Solicito ingresar un valor para height
    scanf("%f",&height); //asigno el input a la variable height
    
    printf("Por favor digite el ancho del rectangulo: "); // Solicito ingresar un valor para width
    scanf("%f",&width); //asigno el input a la variable width
    
    printf("\nEl perimetro de un rectangulo con largo %f y ancho %f es de %0.2f", height ,width , 2*height+2*width); // imprimo por panheighta un mesanje con el resultado
    
    return 0;
}

