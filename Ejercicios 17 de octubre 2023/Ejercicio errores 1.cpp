#include <stdio.h>

int sumar(int a, int b);

int main() {
    int num1, num2, resultado;
    printf("Introduce dos números para sumar:\n");
    scanf("%d %d", &num1, &num2);
    resultado = sumar(num1, num2);
    printf("La suma es: %d", resultado);
    return 0;
}

int sumar(int a, int b) {
    int suma = a + b;
    return suma;
}

