/*
- Fecha de publicación 17/02/2024
- Hora : 16:43
- Versión de su código: 1.0
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Version del lenguaje utilizado : C11
- Compilador Utilizado : GCC
- Version del Compilador utilizado : 4.7.1
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa toma como dato de entrada un valor para x , se evalua en una ecuacion y se imprime el resultado
- Salvedad : para valores de x que hagan que el denominador sea = 0 , no se garentizan resultados
*/

#include <stdio.h> // importo la libreria que me permite usar printf y scanf
#include <math.h> // importo la libreria math que me permite expandir las operaciones matematicas 

int main() {
    double x= .0; // inicializo variables 

    printf("Por favor digite el valor que le quiere asignar a x: "); // solicito valor para x
    scanf("%lf", &x); //asigno el input a la variable x

    // Divido la operación en steps para hacerla más fácil
    double step1 = ((x / 6.) + (45. / x)) / (x - (-8. / 2) ); // resuelvo una parte de la operacion y la guardo en el step 1

    double step2 = (step1 / 12.) / sqrt(x); // resuelvo una parte de la operacion y la guardo en el step 1

    double step3 = (step2 / 5.) + pow(x, 4); // resuelvo una parte de la operacion y la guardo en el step 1

    double finalStep = step3 / sqrt(x);  // resuelvo finalmente la ecuacion y la guardo en finalStep

    printf("\nEl resultado de la ecuacion para un valor de %f es de %.5f",x, finalStep); // imprimo por pantalla un mesanje con el resultado

    return 0;
}

