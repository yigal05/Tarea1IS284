/*
- Fecha de publicación 17/02/2024
- Hora 3:52
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa lee 2 números y realiza las operaciones de suma, resta, multiplicación y división imprimiendo los resultados
en pantalla.

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf

int main()
{
	float x = .0, y= .0; //inicializo las variables que usare 
	
	printf("Por favor digite el primer numero: "); // Solicito ingresar un valor para x
	scanf("%f",&x); //asigno el input a la variable x
	
	printf("Por favor digite el segundo numero: "); // Solicito ingresar un valor para y
	scanf("%f",&y); //asigno el input a la variable y
	
	printf("\nSuma: %f \nResta: %f \nMultiplicacion: %f \nDivision: %f \n",x+y,x-y,x*y,x/y); // imprimo por pantalla un mesanje con el resultado
    
	return 0;
}
