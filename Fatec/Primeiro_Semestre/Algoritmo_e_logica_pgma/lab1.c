#include<stdio.h>

int main(){
	char res,ref,res2, nome;
	int resultado,ordem,retorno, soma_a, soma_b, soma_c,soma_d,a1,a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5;
	retorno=0;
	
	
	printf("\n\n\n************************************************************************************************************************");
	printf("\n*                                               Vestibular e Voce                                                      *");
	printf("\n************************************************************************************************************************");

	while (retorno==0){
	a1=0;
	a2=0;
	a3=0;
	a4=0;
	a5=0;
	b1=0;
	b2=0;
	b3=0;
	b4=0;
	b5=0;
	c1=0;
	c2=0;
	c3=0;
	c4=0;
	c5=0;
	d1=0;
	d2=0;
	d3=0;
	d4=0;
	d5=0;
	resultado=0;
	
	ordem=0;
		
		switch (ordem){
			
			case 0:
				while (ordem==0){
					printf("\n\n\n************************************************************************************************************************");
					printf("\n (1) - Voce estudou o ensino medio em escola publica ou particular? ");
					
					printf("\n [a] Totalmente em escola particular. \n [b] Maior parte em escola particular. \n [c] Menor parte em escola particular. \n [d] Totalmente em escola publica.\n\n Resposta:  ");
					
					scanf("%c", &res);				
					scanf("%c", &res2);	
					
					switch (res){
						case 'a':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+10;
							ordem+=1;
							a1+=1;
							break;
						case 'b':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+5;
							ordem+=1;
							b1+=1;
							break;
						case 'c':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+3;
							ordem+=1;
							c1+=1;	
							break;
						case 'd':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+1;
							ordem+=1;
							d1+=1;
							break;
						default:
							printf("\n\nDigite uma resposta valida.");
						}
				}
			case 1:
				while(ordem==1){
					printf("\n\n\n************************************************************************************************************************");
					printf("\n (2) - Voce realizou algum curso pre-vestibular? ");
					
					printf("\n [a] Sim, entre um ano e dois anos. \n [b] Sim, por tres anos ou mais. \n [c] Sim, por ate um ano. \n [d] Nao, nenhum. \n\n Resposta:  ");
					
					scanf("%c", &res);
					scanf("%c", &res2);	
								
						switch (res){
							case 'a':
								printf("\nOkay, sua resposta eh %c.", res);
								resultado = resultado+10;
								ordem+=1;
								a2+=1;
								break;
							case 'b':
								printf("\nOkay, sua resposta eh %c.", res);
								resultado = resultado+5;
								ordem+=1;
								b2+=1;
								break;
							case 'c':
								printf("\nOkay, sua resposta eh %c.", res);
								resultado = resultado+3;
								ordem+=1;
								c2+=1;	
								break;
							case 'd':
								printf("\nOkay, sua resposta eh %c.", res);
								resultado = resultado+1;
								ordem+=1;
								d2+=1;
								break;
							default:
								printf("\n\nDigite uma resposta valida.");
						}
			}
			case 2:
				while(ordem==2){
					printf("\n\n\n************************************************************************************************************************");
					printf("\n (3) -  Voce realizou algum outro vestibular? ");
					printf("\n [a] Sim, passei em outras faculdades publicas. \n [b] Prestei apenas o vestibular da FATEC. \n [c] Sim, passei em outras faculdades particulares. \n [d] Sim, passei em outras faculdades particulas e publicas.\n\n Resposta:  ");
					
					scanf("%c", &res);
					scanf("%c", &res2);
					
					switch (res){
						case 'a':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+10;
							ordem+=1;
							a3+=1;
							break;
						case 'b':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+5;
							ordem+=1;
							b3+=1;
							break;
						case 'c':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+3;
							ordem+=1;
							c3+=1;	
							break;
						case 'd':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+1;
							ordem+=1;
							d3+=1;
							break;
						default:
							printf("\n\nDigite uma resposta valida.");
					}
				}
					
			case 3:
				while(ordem==3){				
					printf("\n\n\n************************************************************************************************************************");
					printf("\n (4) -  Voce possui alguma outra graduacao? ");
					printf("\n [a] Sim, sou formado em outra instituicao particular \n [b] Sim, sou formado em outra instituicao publica. \n [c] Nao sou formado, porem cursei. \n [d] Nao sou formado e nem cursei outra graduacao.\n\n Resposta:  ");
					
					scanf("%c", &res);	
					scanf("%c", &res2);			
					
					switch (res){
						case 'a':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+10;
							ordem+=1;
							a4+=1;
							break;
						case 'b':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+5;
							ordem+=1;
							b4+=1;
							break;
						case 'c':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+3;
							ordem+=1;
							c4+=1;	
							break;
						case 'd':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+1;
							ordem+=1;
							d4+=1;
							break;
						default:
							printf("\n\nDigite uma resposta valida.");
					}
				}
				
			case 4:
				while(ordem==4){
					printf("\n\n\n************************************************************************************************************************");	
					printf("\n (5) - Voce se formou em algum curso tecnico? ");
					printf("\n [a] Sim, estudei e me formei na ETEC \n [b] Sim, realizei curso tecnico em outra instituicao \n [c] Sim, porem nao me formei \n [d] Nao, nunca realizei curso tecnico.\n\n Resposta:  ");
								
					scanf("%c", &res);				
					scanf("%c", &res2);	
					
					switch (res){
						case 'a':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+10;
							ordem+=1;
							a5+=1;	
							break;
						case 'b':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+5;
							ordem+=1;
							b5+=1;
							break;
						case 'c':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+3;
							ordem+=1;	
							c5+=1;
							break;
						case 'd':
							printf("\nOkay, sua resposta eh %c.", res);
							resultado = resultado+1;
							ordem+=1;
							d5+=1;
							break;
						default:
							printf("\n\nDigite uma resposta valida.");
						}
			}
			printf("\n\n\n************************************************************************************************************************");
			printf("\n\n\n Seu resultado foi: %d", resultado);
			
			soma_a=a1+a2+a3+a4+a5;
			
			soma_b=b1+b2+b3+b4+b5;
			
			soma_c=c1+c2+c3+c4+c5;
			
			soma_d=d1+d2+d3+d4+d5;
			
				
			if (soma_a==0){
				printf("\n Alternativa 'a' (vale 10 Pontos) - Nenhuma vez.");
			}
			if (soma_a==1){
				printf("\n Alternativa 'a' (Vale 10 Pontos) - 1 vez.");
			}
			if((soma_a!=0) && (soma_a!=1)){
				printf("\n Alternativa 'a' (Vale 10 Pontos) - %d Vezes", soma_a);
			}
			
			if (soma_b==0){
				printf("\n Alternativa 'b' (vale 5 Pontos) - Nenhuma vez.");
			}
			if (soma_b==1){
				printf("\n Alternativa 'b' (Vale 5 Pontos) - 1 vez.");
			}
			if((soma_b!=0) && (soma_b!=1)){
				printf("\n Alternativa 'b' (Vale 5 Pontos) - %d Vezes", soma_b);
			}
			
			if (soma_c==0){
				printf("\n Alternativa 'c' (vale 3 Pontos) - Nenhuma vez.");
			}
			if (soma_c==1){
				printf("\n Alternativa 'c' (Vale 3 Pontos) - 1 vez.");
			}
			if ((soma_c!=0) && (soma_c!=1)){
				printf("\n Alternativa 'c' (Vale 3 Pontos) - %d Vezes", soma_c);
			}			
			
			if (soma_d==0){
				printf("\n Alternativa 'd' (vale 1 Pontos) - Nenhuma vez.");
			}
			if (soma_d==1){
				printf("\n Alternativa 'd' (Vale 1 Pontos) - 1 vez.");
			}
			if((soma_d!=0) && (soma_d!=1)){
				printf("\n Alternativa 'd' (Vale 1 Pontos) - %d Vezes", soma_d);
			}
			
		}
		
		if (resultado>=50){
			printf("\n\n\n Provavelmente voce teve uma estrutura familiar mais privilegiada e conseguiu estudar em melhores escolas e ter mais chances pra poder adentrar em uma universidade publica renomada.");
		}
		else if (resultado>=30){
			printf("\n\n\n Provavelmente voce teve alguns privilegios ao estudar para poder passar no vestibular. Ou experiencias realmente boas que lhe trouxeram ate aqui.");
		}
		else if (resultado>=20){
			printf("\n\n\n Provavelmente voce precisou se esforcar mais do que a maioria para poder cursar uma universidade publica.");
		}
		else if (resultado<20){
			printf("\n\n\n Parabens, voce e um vencedor por estar cursando uma faculdade publica. Pois nao teve muitos ou nenhum privilegio e precisou se esforcar bastante para chegar ate aqui!!!!");
		}
		
		
		
		printf("\n\n\nDeseja refazer? [s] Para sim e [n] Para nao.\n\n Resposta: ");
		scanf("%c", &ref);
		if (ref=='n'){
			retorno+=1;		
		}
		else{
			retorno=0;
		}
		printf("%c", &retorno);
	}
}
