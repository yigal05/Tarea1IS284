/*
- Fecha de publicación 17/02/2024
- Hora 15:25
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Compilador Utilizado : GCC
- Version del Compilador utilizado : 4.7.1
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa calcula el volumen de una esfera a partir de su radio

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf
#define PI 3.1415926 //defino PI como un identidicador asignandole un valor de 3.1415926
#include <math.h> // importo la libreria math que me permite expandir las operaciones matematicas 

int main()
{
    float radio = .0; //inicializo las variables que usare 
    
    printf("Por favor digite el radio de la esfera: "); // Solicito ingresar un valor para radio
    scanf("%f",&radio); //asigno el input a la variable radio
    printf("\nEl volumen de una esfera de radio %f es de %.5f", radio , 4*PI/3*pow(radio,3) ); // imprimo por pantalla un mesanje con el resultado
    
    return 0;
}
