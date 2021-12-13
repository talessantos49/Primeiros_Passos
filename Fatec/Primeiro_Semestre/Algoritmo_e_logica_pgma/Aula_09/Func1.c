#include <stdio.h>
#include <stdlib.h>

//Procedimento
void escrevaMenu(){
	printf("\n *====================================*");
	printf("\n * [A] Adicao                         *");
	printf("\n * [B] Subtracao                      *");
	printf("\n * [C] Divisao                        *");
	printf("\n * [D] Multiplicacao                  *");
	printf("\n * [E] Decrementar X                  *");
	printf("\n *====================================*");
	printf("\n Resposta: 	");	
}

//Procedimento
void imprimirOperacao(int x, int y, char operacao){
		switch (operacao){
		case 'A':
			printf("\n Somar");
			printf("\n %d + %d = %d", x, y, x+y);
			break;
		case 'B':
			printf("\n Subtrair");
			printf("\n %d - %d = %d",x,y, x-y);
			break;
		case 'C':
			printf("\n Divisao");
			printf("\n %d / %d = %d", x, y, x/y);
			break;
		case 'D':
			printf("\n Multiplicacao");
			printf("\n %d * %d = %d", x, y, x*y);
			break;
		case 'E':
			printf("\n Decrementar X");
			printf("\n %d Decrementado = %d",x--, x);
			break;
		default: 
			printf("\n Opcao invalida!");
	}
}


//Bloco Principal
void main() {
	int opcao, a, b;
	
	printf("\n A: "); scanf("%d",&a);
	printf("\n B: "); scanf("%d",&b);
	
	escrevaMenu();
	opcao = getche();
//	scanf("%c", &opcao);
	
	imprimirOperacao(a, b, opcao);
	

}

