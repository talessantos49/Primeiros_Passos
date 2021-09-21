#include <stdio.h>
#include <stdlib.h>


int main() {
	int fatorial=1, n, i;
	printf("\n\n Digite o numero que deseja saber o fatorial:  ");
	scanf("%d", &n);
	printf("%d",n);
	
	for(i=n; i>1; i--){
		fatorial*= i;
	}
	
	printf("O valor do fatorial de %d eh igual a %d", n, fatorial);
	return 0;
}
