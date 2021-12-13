#include <stdio.h>
#include <stdlib.h>


void main() {
	
	int opcao,n, i, soma, x, y, numero1, numero2, resultado, multiplicador, divisor, resto, quantidade;
	char resposta;
	
	resposta = 's';
	
	while (resposta=='s'){
	printf("\n\n\n************************************************************************************************************************");
	printf("\n Escolha a operacao matematica que deseja realizar: ");
	printf("\n [1] Somar \n [2] Subtrair  \n [3] Multiplicar. \n [4] Dividir.\n\n Resposta:  ");
	scanf("%d", &opcao);
	resultado=0;
	switch (opcao){
			case 1:
				printf("\nQuantos numeros deseja somar? ");
				scanf("%d", &(n));
				i = 1;
				soma = 0;
				while(i<= n){
					printf("\n %do. numero: ",i);
					scanf("%d", &x);
					soma=soma+x;
					i=i+1;
					}	
				printf("A soma dos %d numeros = %d", n, soma);
				break;
			case 2:
				printf("\nDigite o primeiro numero que sera subtraido: ");
				scanf("%d", &numero1);
				printf("\nDigite o segundo numero que deseja subtrair: ");
				scanf("%d", &numero2);
				resultado = numero1-numero2;
				printf("Sua resposta eh: %d", resultado);
				break;
			case 3:
				printf("\nDigite o primeiro numero que sera multiplicado: ");
				scanf("%d", &numero1);
				printf("\nDigite o segundo numero que deseja multiplicar: ");
				scanf("%d", &numero2);
				multiplicador=1;
				while (multiplicador<=numero2){
					resultado= resultado+numero1;
					multiplicador+=1;
					}
				printf("\nSua resposta eh: %d", resultado);
				break;
			case 4:
				printf("\n             DIVIDIR X POR Y           \n ");
				printf("\n X  :  "); scanf("%d", &x);
				printf("\n Y  :  "); scanf("%d", &y);
				i = x;
				n=0;
				while (x>=y){
					x = x-y;
					n = n+1; //n guarda a quantidade de subtrações realizas. n guarda o resultado da divisão;
				}
				printf("\n %d divido por %d = %d", i, y, n);
				if (x==0)
					printf("\n divisão exata!");
				else
					printf("\n o resto da divisao de %d por %d = %d", i, y, x);
				break;
//				scanf("%d", numero1);
//				printf("\nDigite o Divisor: ");
//				scanf("%d", numero2);
//				while (divisor>=numero2){
//					divisor+=1;
//					resultado=resultado-numero1;
//					printf(" Divisor: %d", divisor);
//					printf("\n Dividendo: %d", numero1);
//					if(resultado<numero1){
//						resto=resultado;	
//						break;
//						}
//				}
//			printf("\n O resultado: %d, e o resto: %d", resultado, resto);
//			printf("\n Sua resposta eh: %d, e o resto foi: %d", divisor, numero1);
			default:
				printf("\n\nDigite uma resposta valida.");
			}
	printf("\nDeseja realizar novamente a operacao? \n[s] Para sim \n[n] Para nao. \n\nResposta:  ");
	scanf("%s", &resposta);
	
	}
}
