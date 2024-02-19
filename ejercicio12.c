/*
- Fecha de publicaci�n 17/02/2024
- Hora: 16:25
- Versi�n de su c�digo: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado : C11
- Compilador Utilizado : GCC
- Version del Compilador utilizado : 4.7.1
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Este codigo representa una operation
- Salvedad : para valores de x que hagan que el denominador sea = 0 , no se garentizan resultados
*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf
#include <math.h> // importo la libreria math que me permite expandir las operationes matematicas 

int main()
{
	float operation = (17./11. + 23./2.) / (943./120. + sqrt(144.)); //inicializo las variables que usare 
	
	printf("\n%f", operation ); // imprimo por pantalla un mesanje con el resultado
    return 0;
}
