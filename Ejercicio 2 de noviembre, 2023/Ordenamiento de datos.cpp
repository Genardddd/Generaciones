#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generarNumeroAleatorio() {
    return (rand()%30)+1;
}

void selectionSort(int arr[], int n) {
    for (int i= 0; i<n-1; i++) {
        int min_index = i;
        for (int j= i+1; j<n; j++) {
            if (arr[j]< arr[min_index]) {
                min_index= j;
            }
        }
        int temp= arr[i];
        arr[i]= arr[min_index];
        arr[min_index]= temp;
    }
}

void mostrarArreglo(int arr[], int n) {
    printf("Arreglo generado: ");
    for (int i= 0; i<n; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n");
}

int encontrarMinimo(int arr[], int n) {
    int min= arr[0];
    for (int i= 1; i<n; i++) {
        if (arr[i]<min) {
            min= arr[i];
        }
    }
    return min;
}

int encontrarMaximo(int arr[], int n) {
    int max = arr[0];
    for (int i= 1; i<n; i++) {
        if (arr[i]>max) {
            max= arr[i];
        }
    }
    return max;
}

float calcularMedia(int arr[], int n) {
    float suma= 0;
    for (int i= 0; i<n; i++) {
        suma+= arr[i];
    }
    return suma / n;
}

float calcularMediana(int arr[], int n) {
    if (n%2== 0) {
        return (arr[n/2- 1]+arr[n/2])/2.0;
    } else {
        return arr[n/2];
    }
}

int main() {
    srand(time(NULL));
    int N;
    printf("Ingrese el numero de elementos (N): ");
    scanf("%d", &N);

    int arreglo[N];
    for (int i= 0; i<N; i++) {
        arreglo[i] = generarNumeroAleatorio();
    }

    mostrarArreglo(arreglo, N);

    selectionSort(arreglo, N);

    printf("Arreglo ordenado: ");
    for (int i= 0; i<N; i++) {
        printf("%d,", arreglo[i]);
    }
    printf("\n");

    int minimo= encontrarMinimo(arreglo, N);
    int maximo= encontrarMaximo(arreglo, N);

    printf("\nEl valor menor de la lista es: %d\n", minimo);
    printf("El valor mayor de la lista es: %d\n", maximo);

    float media= calcularMedia(arreglo, N);
    float mediana= calcularMediana(arreglo, N);

    printf("\nLa media es: %.2f\n", media);
    printf("La mediana es: %.2f\n", mediana);

    int moda[30]= {0};
    int maxModa= 0;

    for (int i= 0; i<N; i++) {
        moda[arreglo[i]-1]++;
        if (moda[arreglo[i]-1]>maxModa) {
            maxModa= moda[arreglo[i]-1];
        }
    }

    printf("Moda: ");
    for (int i= 0; i<30; i++) {
        if (moda[i]== maxModa) {
            printf("%d,", i+1);
        }
    }
    printf("\n");
    
    printf("Histograma:\n");
int frecuencia[30]= {0};

for (int i= 0; i<N; i++) {
    frecuencia[arreglo[i]-1]++;
}

for (int i= 0; i<30; i++) {
    float probabilidad= 100.0*(float)frecuencia[i]/N;

    printf("%2d (%.2f%%): ", i+1, probabilidad);
    for (int j= 0; j<probabilidad; j++) {
        printf("*");
    }
    printf("\n");
}

    return 0;
}
