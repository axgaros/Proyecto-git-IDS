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

        default:
            printf("Opcion invalida.\n");
            return 0;
    }
}

int main() {
    /* Buena práctica 3: Nombres descriptivos */
    float numero1, numero2, resultado;
    int opcion;

    /* Buena práctica 4: Mensajes claros para el usuario */
    printf("=== CALCULADORA ===\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);

    /* Buena práctica 5: Reutilización de código */
    resultado = realizarOperacion(numero1, numero2, opcion);

    printf("Resultado = %.2f\n", resultado);

    return 0;
}

