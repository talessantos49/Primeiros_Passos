#include <stdio.h>
#include <stdlib.h>

//Bloco Principal
void main() {
	char sexo, diabetes, fumante, colesterol, hdl, pas, Msexo, Mdiabetes, Mfumante;
	int idade, pontuacao;
	while (sexo!='f'&&sexo!='F'&&sexo!='m'&&sexo!='M'){
		printf("\n 1) Qual seu sexo (F/M)? \n ");
		sexo = getche(sexo);
		Msexo= toupper(sexo);
		if (sexo!='f'&&sexo!='F'&&sexo!='m'&&sexo!='M')	printf("\n Digite uma opcao Valida!");		
	}
		switch (Msexo){
		case 'M':
			printf("\n 2) Qual sua idade? \n");
			scanf("%d",&idade);
			switch (idade){
				case 30 ... 34:
					pontuacao = pontuacao - 1;		
					break;
				case 35 ... 39:
					break;
				case 40 ... 44:
					pontuacao = pontuacao+1;
					break;
				case 45 ... 49:
					pontuacao = pontuacao+2;
					break;
				case 50 ... 54:
					pontuacao = pontuacao+3;
					break;
				case 55 ... 59:
					pontuacao = pontuacao+4;
					break;
				case 60 ... 64:
					pontuacao = pontuacao+5;
					break;
				case 65 ... 69:
					pontuacao = pontuacao+6;
					break;
				case 70 ... 74:
					pontuacao = pontuacao+7;
					break;
				default:
					printf("\n Opcao Invalida!!");	
			}
			break;
		case 'F':
			printf("\n 2) Qual sua idade? \n");
			scanf("%d",&idade);
			printf("\n Idade: %d", idade);
			switch (idade){
				case 30 ... 34:
					pontuacao = pontuacao - 9;		
					break;
				case 35 ... 39:
					pontuacao = pontuacao - 4;
					break;
				case 40 ... 44:
					break;
				case 45 ... 49:
					pontuacao = pontuacao + 3;
					break;
				case 50 ... 54:
					pontuacao = pontuacao + 6;
					break;
				case 55 ... 59:
					pontuacao = pontuacao + 7;
					break;
				case 60 ... 64:
					pontuacao = pontuacao + 8;
					break;
				case 65 ... 69:
					pontuacao = pontuacao + 8;
					break;
				case 70 ... 74:
					pontuacao = pontuacao + 8;
					break;
				default:
					printf("\n Opcao Invalida!!");	
			}
			break;
		default: 
			printf("\n Opcao invalida!");
			return;
		}
	while (diabetes!='S'&&diabetes!='N'&&diabetes!='n'&&diabetes!='s'){
		printf("\n 3) Voce eh diabetico (S/N)? ");
		diabetes = getche(diabetes);
		Mdiabetes = toupper(diabetes);
		printf("\n Diabetes? %c", Mdiabetes);
		if (Msexo=='M'&&Mdiabetes=='S') pontuacao = pontuacao + 2;
		if (Msexo=='F'&&Mdiabetes=='S') pontuacao = pontuacao + 4;
		if (diabetes!='S'&&diabetes!='s'&&diabetes!='N'&&diabetes!='n') printf("\n Digite uma opcao Valida!");
	}
	while (fumante!='S'&&fumante!='N'&&fumante!='n'&&fumante!='s'){
		printf("\n 4) Voce eh fumante (S/N)? ");
		fumante = getche(fumante);
		Mfumante = toupper(fumante);
		printf("\n Fumante? %c", Mfumante);
		if (Msexo=='M'&&Mfumante=='S') pontuacao = pontuacao + 2;
		if (Msexo=='F'&&Mfumante=='S') pontuacao = pontuacao + 2;
		if (fumante!='S'&&fumante!='s'&&fumante!='N'&&fumante!='n') printf("\n Digite uma opcao Valida!");
	}	
	while (colesterol!='A'&&colesterol!='a'&&colesterol!='B'&&colesterol!='b'&&colesterol!='C'&&colesterol!='c'&&colesterol!='D'&&colesterol!='d'&&colesterol!='E'&&colesterol!='e'){
		printf("\n 5) Indique o seu colesterol total, usando a legenda:");
		printf("\n a) < 160");
		printf("\n b) 160 - 199");
		printf("\n c) 200 - 239");
		printf("\n d) 240 - 279");
		printf("\n e) >=280");
		printf("\n Resposta:  ");
		colesterol = toupper(getche(colesterol));
		if (Msexo=='M') {
			switch (colesterol){
				case 'A' :
					pontuacao = pontuacao -3;
					break;
				case 'B' :
					break;
				case 'C' :
					pontuacao = pontuacao+1;
					break;
				case 'D' :
					pontuacao = pontuacao+2;
					break;
				case 'E' :
					pontuacao = pontuacao+3;
					break;	
				default:
					printf("\n Opcao invalida!");
			}
		}
		if (Msexo=='F') {
			switch (colesterol){
				case 'A' :
					pontuacao = pontuacao - 2;
					break;
				case 'B' :
					break;
				case 'C' :
					pontuacao = pontuacao + 1;
					break;
				case 'D' :
					pontuacao = pontuacao + 1;
					break;
				case 'E' :
					pontuacao = pontuacao +3;
					break;	
				default:
					printf("\n Opcao invalida!");
			}
		}
	}
	while (hdl!='A'&&hdl!='a'&&hdl!='B'&&hdl!='b'&&hdl!='C'&&hdl!='c'&&hdl!='D'&&hdl!='d'&&hdl!='E'&&hdl!='e'){
		printf("\n 6) Indique o seu HDL colesterol, usando a legenda:");
		printf("\n a) < 35");
		printf("\n b) 35 - 44");
		printf("\n c) 45 - 49");
		printf("\n d) 50 - 59");
		printf("\n e) >=60");
		printf("\n Resposta:  ");
		hdl = toupper(getche(hdl));
		if (Msexo=='M') {
			switch (hdl){
				case 'A' :
					pontuacao = pontuacao+2;
					break;
				case 'B' :
					pontuacao = pontuacao+1;
					break;
				case 'C' :
					break;
				case 'D' :
					break;
				case 'E' :
					pontuacao = pontuacao - 1;
					break;	
				default:
					printf("\n Opcao invalida!");
			}
		}
		if (Msexo=='F') {
			switch (hdl){
				case 'A' :
					pontuacao = pontuacao+5;
					break;
				case 'B' :
					pontuacao = pontuacao+2;
					break;
				case 'C' :
					pontuacao = pontuacao+1;
					break;
				case 'D' :
					break;
				case 'E' :
					pontuacao = pontuacao - 3;
					break;	
				default:
					printf("\n Opcao invalida!");
			}
		}
	}
	while (pas!='A'&&pas!='a'&&pas!='B'&&pas!='b'&&pas!='C'&&pas!='c'&&pas!='D'&&pas!='d'&&pas!='E'&&pas!='e'){
		printf("\n 7) Indique o seu PAS e PAD, usando a legenda:");
		printf("\n	PAS		PAD");
		printf("\n a) < 120		<80");
		printf("\n b) 120-129		80-84");
		printf("\n c) 130-139		85-89");
		printf("\n d) 140-159		90-99");
		printf("\n e) >=160		>=100");
		printf("\n Resposta:  ");
		pas = toupper(getche(pas));
		if (Msexo=='M') {
			switch (pas){
				case 'A' :
					break;
				case 'B' :
					break;
				case 'C' :
					pontuacao = pontuacao +1;
					break;
				case 'D' :
					pontuacao = pontuacao +2;
					break;
				case 'E' :
					pontuacao = pontuacao +3;
					break;	
				default:
					printf("\n Opcao invalida!");
			}
		}
		if (Msexo=='F') {
			switch (pas){
				case 'A' :
					pontuacao = pontuacao - 3;
					break;
				case 'B' :
					break;
				case 'C' :
					break;
				case 'D' :
					pontuacao = pontuacao+2;
					break;
				case 'E' :
					pontuacao = pontuacao+3;
					break;	
				default:
					printf("\n Opcao invalida!");
			}
		}
	}
	switch (Msexo){
		case 'M':
			switch (pontuacao){
				case -18 ... -1:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 2%");
					break;				
				case 0:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 3%");
					break;
				case 1:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 3%");
					break;
				case 2:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 4%");
					break;
				case 3:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 5%");
					break;
				case 4:
					printf("\n Hmm, eh necessario um pouco de atencao, seu risco de infarto eh de 7% nos proximos 10 anos, seria bom ter um acompanhamento medico.");
					break;
				case 5:
					printf("\n Hmm, eh necessario um pouco de atencao, seu risco de infarto eh de 8% nos proximos 10 anos, seria bom ter um acompanhamento medico.");
					break;
				case 6:
					printf("\n Hmm, eh necessario um pouco de atencao, seu risco de infarto eh de 10% nos proximos 10 anos, seria bom ter um acompanhamento medico.");
					break;
				case 7: 
					printf("\n Hmm, eh necessario um pouco de atencao, seu risco de infarto eh de 13% nos proximos 10 anos, seria bom ter um acompanhamento medico.");
					break;
				case 8:
					printf("\n Hmm, eh necessario um pouco de atencao, seu risco de infarto eh de 16% nos proximos 10 anos, seria bom ter um acompanhamento medico.");
					break;
				case 9:
					printf("\n Hmm, eh necessario um pouco de atencao, seu risco de infarto eh de 20% nos proximos 10 anos, seria bom ter um acompanhamento medico.");
					break;
				case 10:
					printf("\n Eh necessario muita atencao seu risco de infarto eh de 25% nos proximos 10 anos,Extremamente necessario acompanhamento medico.");
					break;
				case 11:
					printf("\n Eh necessario muita atencao seu risco de infarto eh de 31% nos proximos 10 anos,Extremamente necessario acompanhamento medico.");
					break;
				case 12:
					printf("\n Eh necessario muita atencao seu risco de infarto eh de 37% nos proximos 10 anos,Extremamente necessario acompanhamento medico.");
					break;
				case 13:
					printf("\n Eh necessario muita atencao seu risco de infarto eh de 45% nos proximos 10 anos,Extremamente necessario acompanhamento medico.");
					break;
				default:
					printf("\n Eh necessario muita atencao seu risco de infarto eh de 53% nos proximos 10 anos,Extremamente necessario acompanhamento medico.");
					break;
			}
			break;
		case 'F':
			switch (pontuacao){
				case -18 ... -2:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos é baixo.\n Seu risco eh de 1%");
					break;
				case -1:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 2%");
					break;
				case 0:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 2%");
					break;
				case 1:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 2%");
					break;
				case 2:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 3%");
					break;
				case 3:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 3%");
					break;
				case 4:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 4%");
					break;
				case 5:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 4%");
					break;
				case 6: 
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 5%");
					break;
				case 7:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 6%");
					break;
				case 8:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 7%");
					break;
				case 9:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 8%");
					break;
				case 10:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 10%");
					break;
				case 11:
					printf("\n Parabens, continue se cuidando seu risco de Infarto nos proximos 10 anos e baixo.\n Seu risco eh de 11%");
					break;
				case 12:
					printf("\n Hmm, eh necessario um pouco de atencao, seu risco de infarto eh de 13% nos proximos 10 anos, seria bom ter um acompanhamento medico.");
					break;
				case 13:
					printf("\n Hmm, eh necessario um pouco de atencao, seu risco de infarto eh de 15% nos proximos 10 anos, seria bom ter um acompanhamento medico.");
					break;
				case 14:
					printf("\n Hmm, eh necessario um pouco de atencao, seu risco de infarto eh de 18% nos proximos 10 anos, seria bom ter um acompanhamento medico.");
					break;
				case 15:
					printf("\n Hmm, eh necessario um pouco de atencao, seu risco de infarto eh de 20% nos proximos 10 anos, seria bom ter um acompanhamento medico.");
					break;
				case 16:
					printf("\n Eh necessario muita atencao seu risco de infarto eh de 24% nos proximos 10 anos,Extremamente necessario acompanhamento medico.");
					break;
				default:
					printf("\n Eh necessario muita atencao seu risco de infarto eh de 27% nos proximos 10 anos,Extremamente necessario acompanhamento medico.");
					break;
			}
			break;
	}
	printf("\n \n \n Pontuacao : %d", pontuacao);
	return;
}

