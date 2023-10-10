#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int filas, columnas;

    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas de las matrices: ");
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
                // Implementa aquí la multiplicación de matrices
                break;

            case 4: // Suma de la diagonal
                // Implementa aquí la suma de la diagonal de la matriz1
                break;

            case 5: // Suma triangular superior
                // Implementa aquí la suma de la triangular superior de la matriz1
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

