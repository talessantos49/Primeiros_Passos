#include <stdio.h>
#include <stdlib.h>


int main() {
	int n, quad, i;
	
	printf("\n Digite o Valor que quer descobrir o quadrado:  ");
	scanf("%d", &n);
	
	
	for(i=1;i<(2*n);i=i+2){
		quad += i;		
	}
	
	printf("O valor de %d ao quadrado eh %d", n, quad);
	
	return 0;
}
