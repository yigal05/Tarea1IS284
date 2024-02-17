/*
- Fecha de publicación 17/02/2024
- Hora 16:28
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa toma como dato de entrada un valor para x , se evalua en una ecuacion y se imprime el resultado
- Salvedad : para valores de x que hagan que el denominador sea = 0 , no se garentizan resultados
*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf
#include <math.h> // importo la libreria math que me permite expandir las operaciones matematicas 

int main()
{ 
	float x= .0; //inicializo las variables que usare 
	
	printf("Por favor Digite el valor que le quiere asignar a x: "); // Solicito ingresar un valor para x
	scanf("%f",&x); //asigno el input a la variable x
	printf("\nEl resultado de la ecuacion para un valor de %f es de %.5f",x ,( x*1/2 + 25 )/ ( sqrt(169)/sqrt(144) + sqrt(x)/x )  ); // imprimo por pantalla un mesanje con el resultado
    
	return 0;
}
