#include <stdio.h>
#include <stdlib.h>

int main() {
	char a, b, c, d, resposta[1];
	char nome[20];
	int resultado, pontosa=10, pontosb=5, pontosc=2, pontosd=1, ordem=0;
		
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("\n Ola, %s", nome);
	
	printf("\n Vamos comecar o teste para saber mais sobre voce: ");
	printf("\n Ordem %d", ordem);
	
	//while (ordem=0) {
		
		printf("\n\n\n Voce estudou o ensino medio em escola publica ou particular? ");
		printf("\n [a] Totalmente em escola particular. \n [b] Maior parte em escola particular. \n [c] Menor parte em escola particular. \n [d] Totalmente em escola publica.\n\n");
		scanf("%s", resposta);
		
	//	while((resposta!="a") || (resposta!="b") || (resposta!="c") || (resposta!="d"));{
	//		printf("\n\n Digite uma opcao valida : a, b, c ou d.");
	//		scanf("%s", resposta);
		//	if ((resposta=="a") || (resposta=="b") || (resposta=="c") || (resposta=="d")){
		//		break;
		//	}
	//	}
		
	//	while ((resposta=="a") || (resposta=="b") || (resposta=="c") || (resposta=="d")); {
	
			printf("Os valores dos pontos sao A: %d, B: %d, C: %d e D: %d \n", pontosa, pontosb, pontosc, pontosd);
		
			if(resposta=="a"){
				resultado= resultado+pontosa;
				printf("\nEsse foi a resposta escolhida. %s", resposta);		
				ordem=1;
			}
			printf("%d e %s",resultado, resposta);
			
			if (resposta=="b"){
				resultado= resultado+pontosb;
				ordem=1;
			}
			
			if (resposta=="c"){
				resultado=resultado+pontosc;
				ordem=1;
			}
			
			if (resposta =="d"){
				resultado=resultado+pontosd;
				ordem=1;
			}
			
			printf("\n A resposta ate o momento e %d.", resultado);
			printf("\n Ordem: %d",ordem);
		
		//}
//	printf("\n\n\n Voce realizou algum curso pre-vestibular? ");
//	printf("\n [a] Sim, entre um ano e dois anos. \n [b] Sim, por tres anos ou mais. \n [c] Sim, por ate um ano. \n [d] Nao, nenhum.");
//
//	printf("\n\n\n Voce realizou algum outro vestibular? ");
//	printf("\n [a] Sim, passei em outras faculdades publicas. \n [b] Prestei apenas o vestibular da FATEC. \n [c] Sim, passei em outras faculdades particulares. \n [d] Sim, passei em outras faculdades particulas e publicas.");
//
//	printf("\n\n\n Voce possui alguma outra graduacao? ");
//	printf("\n [a] Sim, sou formado em outra instituicao particular \n [b] Sim, sou formado em outra instituicao publica. \n [c] Nao sou formado, porem cursei. \n [d] Nao sou formado e nem cursei outra graduacao.");
//
//	printf("\n\n\n Voce se formou em algum curso tecnico? ");
//	printf("\n [a] Sim, estudei e me formei na ETEC \n [b] Sim, realizei curso tecnico em outra instituicao \n [c] Sim, porem nao me formei \n [d] Nao, nunca realizei curso tecnico.");

}

//}
