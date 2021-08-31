#include <stdio.h>
#include <stdlib.h>

int main() {
	int tabuada, multiplicador, resultado, n;
	
	multiplicador=0;
	printf("Escolha o numero que deseja ver a tabuada: ");
	scanf("%d", &tabuada);
	
	printf("Escolha ate que numero deseja ver a multiplicacao: ");
	scanf("%d", &n);
	
	while (multiplicador<=n){
		resultado = tabuada * multiplicador;
		printf("\n %d x %d = %d", tabuada, multiplicador, resultado);
		multiplicador+=1;
	}	
	
	return 0;
}
