#include <stdio.h>
#include <stdlib.h>


int main() {
	int n, soma, i;
	
	printf("\n Digite o Valor que quer o numero termial:  ");
	scanf("%d", &n);
	
	
	for(i=1;i<=n;i++){
		soma += i;		
	}
	
	printf("O valor de %d com numero termial eh %d", n, soma);
	
	return 0;
}
