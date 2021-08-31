#include <stdio.h>

int main() {
	int maior, numero1, numero2, resultado;
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	if(numero1>numero2){
		resultado= numero1 - numero2;
		printf("O resultado e %d", resultado);
	}
	else {
		resultado= numero2 - numero1;
		printf("O resultado e %d", resultado);
	}
}
