#include <stdio.h>
#include <windows.h>
#include <clocale>


int main() {
std::setlocale(LC_ALL, "");  //para acentos y caracteres hispanos
system("color 0A");	
	
    char respuesta = 's';

    while (respuesta == 's' || respuesta == 'S') {
        int numPisos;
        
        printf("¿De cuántos pisos quieres tu árbol?\n");
        scanf("%d", &numPisos);
        
        if (numPisos <= 0) {
            printf("El número de pisos debe ser mayor que cero.\n");
        } else {
            int i = 1;
            while (i <= numPisos) {
                // Imprimir espacios en blanco para centrar el árbol
                int j = 0;
                while (j < numPisos - i) {
                    printf(" ");
                    j++;
                }
                
                // Imprimir asteriscos para representar el piso actual
                int k = 0;
                while (k < 2 * i - 1) {
                    printf("*");
                    k++;
                }
                
                // Cambiar de línea para el siguiente piso
                printf("\n");
                i++;
            }
        }
        
        printf("¿Quieres construir otro árbol? (s/n): ");
        scanf(" %c", &respuesta); // Leemos el carácter y omitimos espacios en blanco.
    }

    return 0;
}
