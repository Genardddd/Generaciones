//Genaro Bermudez| ID:179588

#include <stdio.h>

void imprimirMatriz(int matriz[3][3]) {
    for (int i= 0;i<3;++i) {
        for (int j= 0;j<3;++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int esMatrizMagica(int matriz[3][3]) {
    int sumaFila= matriz[0][0]+matriz[0][1]+matriz[0][2];

    for (int i= 1;i<3;++i) {
        int sumaFilaActual= matriz[i][0]+matriz[i][1]+matriz[i][2];
        if (sumaFilaActual != sumaFila) {
            return 0; // No es mágica
        }
    }

    for (int j= 0;j<3;++j) {
        int sumaColumna= matriz[0][j]+matriz[1][j]+matriz[2][j];
        if (sumaColumna!=sumaFila) {
            return 0; // No es mágica
        }
    }

    int sumaDiagonalPrincipal= matriz[0][0]+matriz[1][1]+matriz[2][2];
    if (sumaDiagonalPrincipal!=sumaFila) {
        return 0; // No es mágica
    }

    int sumaDiagonalSecundaria= matriz[0][2]+matriz[1][1]+matriz[2][0];
    if (sumaDiagonalSecundaria!=sumaFila) {
        return 0; // No es mágica
    }
    return 1; // Es mágica
}

int main() {
    int matriz[3][3];

    printf("Ingrese los valores de la matriz 3x3:\n");
    for (int i= 0;i<3;++i) {
        for (int j= 0;j<3;++j) {
            printf("Fila %d, Columna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz ingresada:\n");
    imprimirMatriz(matriz);

    if (esMatrizMagica(matriz)) {
        printf("La matriz es magica.\n");
    } else {
        printf("La matriz no es magica.\n");
    }

    return 0;
}

