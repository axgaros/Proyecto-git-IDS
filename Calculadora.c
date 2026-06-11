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

    // 3. Procesar y escribir el resultado
    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 4:
            // Validación para evitar la división por cero
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("\nError: No se puede dividir entre cero.\n");
            }
            break;
    }

    return 0;
}
