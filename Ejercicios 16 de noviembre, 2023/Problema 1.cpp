//Genaro Bermudez| ID:179588

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenarMatrizAleatoria(int matriz[5][7]) {
    srand(time(NULL));

    for (int i= 0;i<5;++i) {
        for (int j= 0;j<7;++j) {
            matriz[i][j]=rand()%10; 
        }
    }
}

void imprimirMatriz(int matriz[5][7]) {
    for (int i= 0;i<5;++i) {
        for (int j= 0;j<7;++j) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[5][7];
    llenarMatrizAleatoria(matriz);

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    int sumaDiagonal=0, sumaPrimeraFila=0, sumaUltimaColumna=0,
        sumaFilasPares=0, sumaColumnasImpares=0,
        sumaTriangularSuperior=0, sumaTriangularInferior=0;

    for (int i= 0;i<5;++i) {
        for (int j= 0;j<7;++j) {
            if (i==j) {
                sumaDiagonal+=matriz[i][j];
            }
            if (i==0) {
                sumaPrimeraFila+=matriz[i][j];
            }
            if (j==6) {
                sumaUltimaColumna+=matriz[i][j];
            }
            if (i%2==1) { 
                sumaFilasPares+=matriz[i][j];
            }
            if (j%2==0) { 
                sumaColumnasImpares+=matriz[i][j];
            }
            if (i<=j) {
                sumaTriangularSuperior+=matriz[i][j];
            }
            if (i>=j) {
                sumaTriangularInferior+=matriz[i][j];
            }
        }
    }

    printf("\nSumas:\n");
    printf("1. Suma de la diagonal principal: %d\n", sumaDiagonal);
    printf("2. Suma de la primera fila: %d\n", sumaPrimeraFila);
    printf("3. Suma de la ultima columna: %d\n", sumaUltimaColumna);
    printf("4. Suma de las filas pares: %d\n", sumaFilasPares);
    printf("5. Suma de las columnas impares: %d\n", sumaColumnasImpares);
    printf("6. Suma del triangular superior y la diagonal principal: %d\n", sumaTriangularSuperior);
    printf("7. Suma del triangular inferior y la diagonal principal: %d\n", sumaTriangularInferior);

    return 0;
}
