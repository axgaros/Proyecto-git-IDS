#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;
    
    // 1. Solicitar la operación
    printf("--- CALCULADORA BASICA ---\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Seleccione una operacion (1-4): ");
    scanf("%d", &opcion);

    // Validación de opción de menú
    if (opcion < 1 || opcion > 4) {
        printf("Error: Operacion no valida.\n");
        return 0;
    }

    // 2. Pedir los números
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

