/*
- Fecha de publicación 17/02/2024
- Hora : 14:01
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C 
- Versión del lenguaje utilizado : C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa convierte grados centigrados a grados fahrenheit

*/

#include <stdio.h>  // importo la libreria que me permite usar printf y scanf
#define PI 3.1415926 //defino PI como un identificador asignandole un valor de 3.1415926


int main()
{
    float centigrados = 0.; // creo la variable que guardara los centigrados
    
    printf("Por favor digite los centigrados a convertir a Farenheit: "); // Solicito ingresar un valor para centrigrados
    scanf("%f",&centigrados); //asigno el input a la variable centigrados
    printf("\n%.0f°C son %0.1f grados Fahrenheit" , centigrados, 1.8*centigrados+32); // imprimo por pantalla un mesanje con el resultado

    return 0;
}
