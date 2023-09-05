#include<stdio.h>
#include <clocale> //para acentos y caracteres hispanos
int main(){
	int a;
	
std::setlocale(LC_ALL, "");  //para acentos y caracteres hispanos
	while (a>=0 && a<=100){
	printf("¿De cuántos pisos quieres tu árbol?\n");
	scanf ("%d", &a);
	
	if (a>=0 && a<=50){
		printf("  *\n ***\n*****\n  |\n");
	} else if(a>50 && a<=100){
		printf("   *\n  ***\n *****\n*******\n  ||\n");
	}
	else (a<0 && a>100);{
		printf("Escoge un valor válido");
	}
}
    return 0;

}
