#include <stdio.h>

/* Buena práctica 1: Constantes descriptivas */

#define SUMA 1

#define RESTA 2

#define MULTIPLICACION 3

#define DIVISION 4

/* Buena práctica 2: Función con una sola responsabilidad */

float realizarOperacion(float numero1, float numero2, int opcion) {

    switch(opcion) {

        case SUMA:
            return numero1 + numero2;

        case RESTA:
            return numero1 - numero2;

        case MULTIPLICACION:
            return numero1 * numero2;

        case DIVISION:
            if(numero2 != 0)
                return numero1 / numero2;
            else {
                printf("Error: No se puede dividir entre cero.\n");
                return 0;
            }








    
}
