#include <stdio.h>
#include <stdlib.h>

int main (){
	int numero1, numero2, numero3;
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &numero3);
	
	if((numero1>numero2) && (numero1>numero3){
		if (numero2>numero3){
			printf("A ordem crescente e : %d, %d e %d", numero1, numero2, numero3);
		}
		else {
			printf("A ordem crescente e : %d, %d e %d ", numero1, numero3, numero2);
		}
	}
	if ((numero2>numero1) && (numero2>numero3)){
		if(numero1>numero3){
			printf("A ordem crescente e : %d, %d e %d", numero2, numero1, numero3);
		}
		else {
			printf("A ordem crescente e : %d , %d e %d", numero2, numero3, numero1);
		}	
	}
	if((numero3>numero1) && (numero3>numero2)){
		if(numero1>numero2){
			printf("A ordem crescente e : %d, %d e %d.", numero3, numero1, numero2);
		}
		else
			printf("A ordem crescente e : %d, %d e %d.", numero3, numero2, numero1);
		} 
	}
