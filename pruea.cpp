#include<stdio.h>
#include<iostream> //Para usar operaciones de  "input" (entrada) y "output" (salida).
#include<stdlib.h>
#include<windows.h> 

using namespace std;

int main(){
	   system("color F9");
	setlocale(LC_ALL, "");
	float valor;

	printf("Escribe tu valor a convertir: \n");
		cin >> valor;

	printf("\n¿Qué quieres convertir?\n");
	printf ("1. De Fahrenheit a Celsius\n");
	printf ("2. De Celsius a Fahrenheit");

	int opcion;
	cin >> opcion;

	switch(opcion){
		case 1:
		valor = ((valor)*(1.8)+32);
		printf("%f", valor);
			break;

	case 2:
		valor = ((valor - 32))/(1.8);
		printf("%f", valor);
		break;
		
	default:
		printf ("Valor inválido");
		break;
	}
	
	
	
	return 0;
}
