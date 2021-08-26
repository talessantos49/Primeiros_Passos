#include <stdio.h>

int main (){
	float numero1, numero2, numero3;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &numero3);
	
	if((numero1>numero2) && (numero1>numero3)){
		if (numero2>numero3){
			printf("A ordem crescente e : %f, %f e %f", &numero1, &numero2, &numero3);
		}
		else {
			printf("A ordem crescente e : %d, %d e %d ", &numero1, &numero3, &numero2);
		}
	}
	if ((numero2>numero1) && (numero2>numero3)){
		if(numero1>numero3){
			printf("A ordem crescente e : %d, %d e %d", &numero2, &numero1, &numero3);
		}
		else {
			printf("A ordem crescente e : %d , %d e %d", &numero2, &numero3, &numero1);
		}	
	}
	if((numero3>numero1) && (numero3>numero2)){
		if(numero1>numero2){
			printf("A ordem crescente e : %d, %d e %d.", &numero3, &numero1, &numero2);
		}
		else
			printf("A ordem crescente e : %d, %d e %d.", &numero3, &numero2, &numero3);
		}
	else{
		printf("Os numeros digitados foram: %d, %d e %d.", &numero1, &numero2, &numero3);
	}
	return 0;
	}
