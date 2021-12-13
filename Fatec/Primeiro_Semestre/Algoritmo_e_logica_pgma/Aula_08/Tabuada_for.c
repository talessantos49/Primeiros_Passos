#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, n;
	float x=0.5;
	
	// Tabuada de N
	printf("\n Numero:  ");
	scanf("%d", &n);
	
	printf("\n Tabuada de %d", n);
	
	for(i=0; i<=10; i++){
		printf("\n %d * %2d = %3d",n,i,n*i);
	}
	
	printf("\n\n");
	
	// Multiplos de 0.5
	printf("\n Multiplos de 0.5");
	for (i=0; i<=20; i++){
		printf("\n %.1f * %d = %.1f", x, i, x*i);
	}	
	
	// Contagem regressiva
	printf("\n\n");
	printf("\n Contagem regressiva de 10 a 0 \n");
	for(i=10;i>=0;i--){
		printf(" %d     ", i);
	}
	
	return 0;
}
