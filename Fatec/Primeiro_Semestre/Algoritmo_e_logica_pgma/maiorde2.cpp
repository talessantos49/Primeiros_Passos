#include <stdio.h>
//Desenvolva um programa em liguagem C para informar o maior de 2 n�meros

int main(){
	int x, y, maior;
	
	printf("\n Digite o primeiro numero: ");
	scanf("%d", &x);
	
	printf("\n Digite o segundo numero: ");
	scanf("%d", &y);
	
	if (x>y){					//se (x>y) ent�o
		maior = x;				//maior <- x
	}
	else{
		maior = y;				//sen�o
								//maior<- y
	}							//fimse
	printf("O mairo entre %d e %d eh %d", x, y, maior);
}

