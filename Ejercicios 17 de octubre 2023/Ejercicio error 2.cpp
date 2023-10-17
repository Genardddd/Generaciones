#include <stdio.h>

float perimetroFigura(float numero) {
    float perimetro;
    perimetro = 4 * numero;
    return perimetro;
}

float areaFigura(float numero) {
    float area;
    area = numero * numero;
    return area;
}

int main() {
    float num;
    printf("Lado en un cuadrado: ");
    scanf("%f", &num);
    printf("Perimetro: %f\n", perimetroFigura(num));
    printf("Area: %f\n", areaFigura(num));
    return 0;
}

