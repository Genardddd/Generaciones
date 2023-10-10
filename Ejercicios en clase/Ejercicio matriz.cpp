#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int filas, columnas;

    printf("Ingrese el numero de filas de las matrices: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas de las matrices: ");
    scanf("%d", &columnas);

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int resultado[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz1[i][j] = rand() % 10;
            matriz2[i][j] = rand() % 10;
        }
    }
	
	printf("\nMatriz 1:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
    
    int opcion;

    do {
        printf("\nOperaciones sobre matrices:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Suma de la diagonal\n");
        printf("5. Suma triangular superior\n");
        printf("6. Terminar el programa\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: // Suma
                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        resultado[i][j] = matriz1[i][j] + matriz2[i][j];
                    }
                }

                printf("\nResultado de la suma:\n");
                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        printf("%d ", resultado[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2: // Resta
                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        resultado[i][j] = matriz1[i][j] - matriz2[i][j];
                    }
                }

                printf("\nResultado de la resta:\n");
                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        printf("%d ", resultado[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3: // Multiplicación
                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        resultado[i][j] = 0;
                        for (int k = 0; k < columnas; k++) {
                            resultado[i][j] += matriz1[i][k] * matriz2[k][j];
                        }
                    }
                }

                printf("\nResultado de la multiplicación:\n");
                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        printf("%d ", resultado[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 4: // Suma de la diagonal
                if (filas != columnas) {
                    printf("La matriz no es cuadrada, no se puede calcular la suma de la diagonal.\n");
                } else {
                    int sumaDiagonal = 0;
                    for (int i = 0; i < filas; i++) {
                        sumaDiagonal += matriz1[i][i];
                    }
                    printf("\nSuma de la diagonal de matriz1: %d\n", sumaDiagonal);
                }
                break;

            case 5: // Suma triangular superior
                if (filas != columnas) {
                    printf("La matriz no es cuadrada, no se puede calcular la suma del triangular superior.\n");
                } else {
                    int sumaTriangularSuperior = 0;
                    for (int i = 0; i < filas; i++) {
                        for (int j = i + 1; j < columnas; j++) {
                            sumaTriangularSuperior += matriz1[i][j];
                        }
                    }

                    printf("\nMatriz1:\n");
                    for (int i = 0; i < filas; i++) {
                        for (int j = 0; j < columnas; j++) {
                            printf("%d ", matriz1[i][j]);
                        }
                        printf("\n");
                    }

                    printf("\nSuma del triangular superior de matriz1: %d\n", sumaTriangularSuperior);
                }
                break;

            case 6: // Terminar el programa
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opcion no valida. Intente nuevamente.\n");
        }
    } while (opcion != 6);

    return 0;
}
