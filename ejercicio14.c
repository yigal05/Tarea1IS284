/*
- Fecha de publicaci�n 17/02/2024
- Hora: 16 :31 
- Versi�n de su c�digo: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Salvedad : para valores de x que hagan que el denominador sea = 0 , no se garantizan resultados

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf
#include <math.h> // importo la libreria math que me permite expandir las operaciones matematicas 

int main()
{ 

	float x= .0, numerador= .0 , denominador= .0; //inicializo las variables que usare
	
	printf("Por favor Digite el valor que le quiere asignar a x: "); // Solicito ingresar un valor para x
	scanf("%f",&x); //asigno el input a la variable x
	
	numerador= (x/2. + sqrt(x)/x +20)*16/x ; //asigno a la variable numerador el resultado que da la operacion en el numerador
	denominador= (0.5- 3.0/4+x)/(2.0/17)+x; //asigno a  la variable denominador el resultado que da la operacion en el denominador
	
	printf("\nEl resultado de la ecuacion para un valor de %f es de %.5f",x, numerador/denominador + pow(x,2) ); // imprimo por pantalla un mesanje con el resultado
    return 0;
}
