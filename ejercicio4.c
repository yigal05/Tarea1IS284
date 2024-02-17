/*
- Fecha de publicaci�n 17/02/2024
- Hora : 15:32
- Versi�n de su c�digo: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Este programa lee Km/h y los convierte a mph

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf

int main()
{
    float Kph= .0; //inicializo las variables que usare 
    
    printf("Por favor digite cuantos Km/h quiere convertir a mph: "); // Solicito ingresar un valor para Km/h
    scanf("%f", &Kph); //asigno el input a la variable Kph
    
    printf("\n%f Km/h equivalen a %.2f mph", Kph, Kph*0.621371); // imprimo por pantalla un mesanje con el resultado

	return 0;
}

