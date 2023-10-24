#include <stdio.h>

unsigned long long int fib(unsigned long long int i){
	if(i<2){
		return i;
	}	
	else{
		return fib(i-1)+fib(i-2);
	}
	
}

int main(){
	unsigned long long int n;
	printf("Numero de elementos de la serie: ");
	scanf("%llu", &n);
	
	for(int i=0;i<n;i++){
		printf("\nvalor %d: %llu\n", i, fib(i));
	}
	
	return 0;	
}
