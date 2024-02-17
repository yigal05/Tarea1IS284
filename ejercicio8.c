/*
- Fecha de publicaci�n 17/02/2024
- Hora 3:52
- Versi�n de su c�digo: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado : C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Este programa lee 2 n�meros y realiza las operaciones de suma, resta, multiplicaci�n y divisi�n imprimiendo los resultados
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
