/*
- Fecha de publicación 17/02/2024
- Hora: 16 :31 
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Compilador Utilizado : GCC
- Version del Compilador utilizado : 4.7.1
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Salvedad : para valores de x que hagan que el denominador sea = 0 , no se garantizan resultados
- Salvedad 2: la funcion evaluada en 12 da realmente 144.31331 que es lo que dara este programa

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf
#include <math.h> // importo la libreria math que me permite expandir las operaciones matematicas 

int main()
{ 

	float x= .0, numerator= .0 , denominator= .0; //inicializo las variables que usare
	
	printf("Por favor Digite el valor que le quiere asignar a x: "); // Solicito ingresar un valor para x
	scanf("%f",&x); //asigno el input a la variable x
	
	numerator= (x/2. + sqrt(x)/x +20)*16/x ; //asigno a la variable numerator el resultado que da la operacion en el numerator
	denominator= (0.5- 3.0/4+x)/(2.0/17)+x; //asigno a  la variable denominator el resultado que da la operacion en el denominator
	
	printf("\nEl resultado de la ecuacion para un valor de %f es de %.5f",x, numerator/denominator + pow(x,2) ); // imprimo por pantalla un mesanje con el resultado
    return 0;
}
