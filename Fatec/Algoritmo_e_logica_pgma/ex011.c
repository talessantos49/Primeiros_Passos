#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
	float numero1, numero2, numero3, resultado;
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &numero3);
	
	resultado = (((2*numero1)+(3*numero2)+(5*numero3))/10);
	printf("O resultado dessa conta e : %2.f", resultado);
}

