#include <stdio.h>
#include <stdlib.h>

void main() {
	int idade, ra;]
	float altura;
	char nome[50];
	
	printf("\nOla!");
	printf("\nPara prosseguirmos por favor digite: ");
	printf("\nSeu Nome: ");
	gets(nome);
	printf("\nSua Idade: ");
	scanf("%d", &idade);
	printf("\nSeu RA: ");
	scanf("%d",&ra);
	printf("\nSua Altura: ");
	scanf("%f",&altura);
	printf("\n\n\n Seja bem vindo %s, seu RA eh %d na nossa faculdade, voce esta matriculado com sucesso.\n\n\n\n", &nome, ra);
	
}
