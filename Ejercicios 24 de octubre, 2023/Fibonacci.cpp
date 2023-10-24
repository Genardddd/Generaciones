#include <stdio.h>

int fib(int i){
	if(i<2){
		return i;
	}	
	else{
		return fib(i-1)+fib(i-2);
	}
	
}

int main(){
	int n;
	printf("Numero de elementos de la serie: ");
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		printf("%d ", fib(i));
	}
	
	return 0;	
}
