#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
	int numero1, resultado1, resultado2;
	printf("Digite a primeira numero: ");
	scanf("%d", &numero1);
	
	resultado1= numero1 %2;
	resultado2= numero1 %3;
	
	if((resultado1==0)&& (resultado2==0)){
		printf("O numero %d eh um numero inteiro divisivel por 2 e 3.", numero1);
	} 
	if((resultado1!=0) && (resultado2!=0)){
		printf("O numero %d nao eh um numero divisivel por 2 e nem por 3.", numero1);
	}
	if((resultado1==0) && (resultado2!=0)){
		printf("O numero %d e divisivel por 2 e nao por 3.", numero1);
	}
	if((resultado1!=0) && (resultado2==0)){
		printf("O numero %d e divisivel por 3 e nao por 2.", numero1);
	}
}

