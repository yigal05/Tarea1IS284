/*
- Fecha de publicación 17/02/2024
- Hora: 16:25
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este codigo representa una operacion
- Salvedad : para valores de x que hagan que el denominador sea = 0 , no se garentizan resultados
*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf
#include <math.h> // importo la libreria math que me permite expandir las operaciones matematicas 

int main()
{
	float operacion = (17./11. + 23./2.) / (943./120. + sqrt(144.)); //inicializo las variables que usare 
	
	printf("\n%f", operacion ); // imprimo por pantalla un mesanje con el resultado
    return 0;
}
