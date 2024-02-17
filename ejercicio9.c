/*
- Fecha de publicación 17/02/2024
- Hora 16:01
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa encuentra el valor del ángulo faltante de un triángulo leyendo el valor de los otros dos
ángulos como datos de entrada

*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf

int main() {
	float a = .0,b = .0; //inicializo las variables que usare 
	
	printf("Por favor digite el valor del primer angulo: "); // Solicito ingresar un valor para a
	scanf("%f",&a); //asigno el input a la variable a
	
	printf("Por favor digite el valor del segundo angulo: "); // Solicito ingresar un valor para b
	scanf("%f",&b); //asigno el input a la variable b
	
	printf("\nEl valor del tercer angulo de un triangulo con angulos de %f y %f es de %f", a ,b , 180-(a+b)); // imprimo por pantalla un mesanje con el resultado
	return 0;
}


