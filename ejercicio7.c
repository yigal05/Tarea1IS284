/*
- Fecha de publicaci�n 17/02/2024
- Hora 15:49
- Versi�n de su c�digo: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado : C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Este programa lee  nombre, apellido y a�o de nacimiento y luego los imprime juntos.

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf

int main() {

    char nombre[50] = "null" ; //inicializo las variables que usare 
    char apellido[50] = "null"; //inicializo las variables que usare 
    int year= 0; //inicializo las variables que usare 

    printf("Por favor digite su nombre: "); // Solicito ingresar un valor para nombre
    scanf("%s", nombre); //asigno el input a la variable apellido

    printf("Por favor digite su apellido: "); // Solicito ingresar un valor para apellido
    scanf("%s", apellido); //asigno el input a la variable apellido

    printf("Por favor digite su a�o de nacimiento:"); // Solicito ingresar un valor para year
    scanf("%i", &year); //asigno el input a la variable year

    printf("\n%s %s %i\n", nombre, apellido, year); // imprimo por pantalla un mesanje con el resultado


    return 0;
}

