#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
	float numero1, numero2, numero3, numero4;
	printf("Digite a primeira numero: ");
	scanf("%f", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	
	while (numero1>=numero2){
		printf("Obs: A ordem dos numeros tem que ser crescentes. \nDigite novamente o segundo numero:  ");
		scanf("%f", &numero2);
		if (numero1<numero2){
			break;
		}	
	}
	
	printf("Digite o terceiro numero: ");
	scanf("%f", &numero3);

		while (numero2>=numero3){
		printf("Obs: A ordem dos numeros tem que ser crescentes. \nDigite novamente o terceiro numero: ");
		scanf("%f", &numero3);
		if (numero2<numero3){
			break;
		}	
	}

	printf("Digite o quarto numero: ");
	scanf("%f", &numero4);
	
	if ((numero4>=numero1) && (numero4<numero2) && (numero4<numero3)){
		printf("Os valores em ordem decrescente : %.2f, %.2f, %.2f e %.2f", numero1, numero4, numero2, numero3);
	}
	if ((numero4>=numero2) && (numero4<numero3)){
		printf("Os valores em ordem decrescente : %.2f, %.2f, %.2f e %.2f", numero1, numero2, numero4, numero3);
	}
	if (numero4<numero1){
		printf("Os valores em ordem decrescente : %.2f, %.2f, %.2f e %.2f", numero4, numero1, numero2, numero3);
	}
	if (numero4>=numero3){
		printf("Os valores em ordem decrescente : %.2f, %.2f, %.2f e %.2f", numero1, numero2, numero3, numero4);
	}

}
