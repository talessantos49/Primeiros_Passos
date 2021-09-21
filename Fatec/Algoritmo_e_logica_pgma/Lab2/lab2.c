#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
	char zona, repetir='s', voto1[2], voto2[2];
	int eleitores, identificacao, candc1=0, candc2=0, candc3=0, candc4=0, candvb=0, candvn=0, computados=0, totalcomp;
	int candv1=0, candv2=0, candv3=0, candv4=0, vb=0, vn=0, validacao, resultado, votospdb, votospsb, totalpref, totalpref_branco,totalver, totalver_branco; 
	
	
printf("\n\n\n/************************************************/\n");
printf("/* Aluno1: Fabio Florencio de Mendonca		*/\n");
printf("/* Aluno2: Fernando Jose da Silva  		*/\n");
printf("/* Aluno3: Fernando Morais Bonfim 		*/\n");
printf("/* Aluno4: Tales Almeida Santos 		*/\n");
printf("/* TURMA: DSM - 1  Semestre 			*/\n");
printf("/* Profa. Eliane 				*/\n");
printf("/************************************************/\n");	

printf("\n\n Identificacao da secao e zona eleitoral......:  ");
scanf("%s", &zona);
printf("\n\n Total dos eleitores que podem votar..........:  ");
scanf("%d", &eleitores);
printf("\n\n Codigo de identificacao da urna eletronica...:  ");
scanf("%d", &identificacao);


while ((repetir=='s') || (repetir=='S')) {
	
	printf("\n------------------------------------------------------------------");
	printf("\n\n                 CANDIDATOS A PREFEITO");
	printf("\n*****  PARTIDO  ********   CANDIDATOS    ********   SIGLA *****");
	printf("\n*****    PDB    ********   CANDIDATO 1   ********    C1   *****");
	printf("\n*****    PDB    ********   CANDIDATO 2   ********    C2   *****");
	printf("\n*****    PSB    ********   CANDIDATO 3   ********    C3   *****");
	printf("\n*****    PSB    ********   CANDIDATO 4   ********    C4   *****");
	printf("\n*****    ---    ********     BRANCO      ********    VB   *****");
	printf("\n*****    ---    ********      NULO       ********    VN   *****");
	printf("\n\n------------------------------------------------------------------");
	printf("\n\n                 CANDIDATOS A VEREADOR");
	printf("\n*****  PARTIDO  ********   CANDIDATOS    ********   SIGLA *****");
	printf("\n*****    PDB    ********   CANDIDATO 1   ********    V1   *****");
	printf("\n*****    PDB    ********   CANDIDATO 2   ********    V2   *****");
	printf("\n*****    PSB    ********   CANDIDATO 3   ********    V3   *****");
	printf("\n*****    PSB    ********   CANDIDATO 4   ********    V4   *****");
	printf("\n*****    ---    ********     BRANCO      ********    VB   *****");
	printf("\n*****    ---    ********      NULO       ********    VN   *****");
	printf("\n-----------------------------------------------------------------");

	computados +=1;	

	printf("\n\n Eleitor %d", computados);
	printf("\n\n Voto ao Candidato a Prefeitura..:  ");
	scanf("%s", &voto1);
	resultado=(strupr(voto1));	
	
	if (strcmp(resultado,"C1")==0){
		candc1 +=1;
		validacao=0;
	}
	else if (strcmp(resultado,"C2")==0){
			candc2 +=1;
			validacao=0;
		}
		else if (strcmp(resultado,"C3")==0){
			candc3 +=1;
			validacao=0;
		}
			else if (strcmp(resultado,"C4")==0){
				candc4 +=1;
				validacao=0;
			}
				else if (strcmp(resultado,"VB")==0){
					candvb+=1;
					validacao=0;
				}
					else if (strcmp(resultado,"VN")==0){
						candvn +=1;
						validacao=0;
					}
					else {
						validacao=1;
					}	
	while (validacao==1){
		printf("\n\n VOTO INVALIDO!!! TENTE NOVAMENTE!!");
		printf("\n\n Eleitor %d", computados);
		printf("\n\n Voto ao Candidato a Prefeitura..:  ");
		scanf("%s", &voto1);
		resultado=(strupr(voto1));	
		
		if (strcmp(resultado,"C1")==0){
			candc1 +=1;
			validacao=0;
		}
		else if (strcmp(resultado,"C2")==0){
				candc2 +=1;
				validacao=0;
			}
			else if (strcmp(resultado,"C3")==0){
				candc3 +=1;
				validacao=0;
			}
				else if (strcmp(resultado,"C4")==0){
					candc4 +=1;
					validacao=0;
				}
					else if (strcmp(resultado,"VB")==0){
						candvb+=1;
						validacao=0;
					}
						else if (strcmp(resultado,"VN")==0){
							candvn +=1;
							validacao=0;
						}
						else {
							validacao=1;
					}	
	}
	
	printf("\nSeu voto foi no candidato : %s", voto1);
	
	printf("\n\n Eleitor %d", computados);
	printf("\n\n Voto ao Candidato a Vereador..:  ");
	scanf("%s", &voto2);
	resultado=(strupr(voto2));	
	
	if (strcmp(resultado,"V1")==0){
		candv1 +=1;
		validacao=0;
	}
	else if (strcmp(resultado,"V2")==0){
			candv2 +=1;
			validacao=0;
		}
		else if (strcmp(resultado,"V3")==0){
			candv3 +=1;
			validacao=0;
		}
			else if (strcmp(resultado,"V4")==0){
				candv4 +=1;
				validacao=0;
			}
				else if (strcmp(resultado,"VB")==0){
					vb+=1;
					validacao=0;
				}
					else if (strcmp(resultado,"VN")==0){
						vn +=1;
						validacao=0;
					}
					else {
						validacao=1;
					}	
					

	printf("\nSeu voto foi no candidato : %s", voto2);

	while (validacao==1){
		printf("\n\n VOTO INVALIDO!!! TENTE NOVAMENTE!!");
		printf("\n\n Eleitor %d", computados);
		printf("\n\n Voto ao Candidato a Prefeitura..:  ");
		scanf("%s", &voto2);
		resultado=(strupr(voto2));	
		
		if (strcmp(resultado,"V1")==0){
			candv1 +=1;
			validacao=0;
		}
		else if (strcmp(resultado,"V2")==0){
				candv2 +=1;
				validacao=0;
			}
			else if (strcmp(resultado,"V3")==0){
				candv3 +=1;
				validacao=0;
			}
				else if (strcmp(resultado,"V4")==0){
					candv4 +=1;
					validacao=0;
				}
					else if (strcmp(resultado,"VB")==0){
						vb+=1;
						validacao=0;
					}
						else if (strcmp(resultado,"VN")==0){
							vn +=1;
							validacao=0;
						}
						else {
							validacao=1;
					}	
	}

	if (eleitores!=computados){
		printf("\n\n\nDeseja repetir? [s] e [n] \n Resposta: ");
		scanf("%s",&repetir);
	}	
	else{
		repetir='n';
	}
	
	while ((repetir!='s') && (repetir!='S') && (repetir!='n') &&(repetir!='N')){
			printf("\n\nDigite uma opcao valida!!");
			printf("\n\n\nDeseja repetir? [s] e [n] \n Resposta: ");
			scanf("%s",&repetir);		
	}
}
	totalcomp=(eleitores-computados);
	totalpref_branco=(candvb+candvn);
	totalpref=(candc1+candc2+candc3+candc4);
	totalver_branco=(vb+vn);
	totalver=(candv1+candv2+candv3+candv4);
	votospdb=(candc1+candc2+candv1+candv2);
	votospsb=(candc3+candc4+candv3+candv4);
	
	printf("\nIdentificacao da secao e da zona eleitoral:  %s ", &zona);
	printf("\nTotal de eleitores que podem votar:  %d ", eleitores);
	printf("\nTotal de eleitores que votaram:  %d ",computados);
	printf("\nTotal de eleitores que faltaram:  %d ",totalcomp);
	printf("\nCodigo de identificacao da urna eletronica:  %d ", identificacao);
	printf("\nTotal de votos brancos e nulos para Prefeito:  %d ", totalpref_branco);
	printf("\nTotal de votos para Prefeito:  %d ", totalpref);
	printf("\nTotal de votos brancos e nulos para Vereador:  %d ", totalver_branco);
	printf("\nTotal de votos para Vereador:  %d ", totalver);
	
	
	printf("\nNumero de votos para o partido PDB:  %d ", votospdb);
	printf("\nNumero de votos para o partido PSB:  %d ", votospsb);
	printf("\nNumero de votos para o candidato C1:  %d ", candc1);
	printf("\nNumero de votos para o candidado C2:  %d ", candc2);
	printf("\nNumero de votos para o candidato C3:  %d ", candc3);
	printf("\nNumero de votos para o candidato C4:  %d ", candc4);
	printf("\nNumero de votos brancos:  %d ", candvb);
	printf("\nNumero de votos nulos:  %d ", candvn);
	printf("\nNumero de votos para o candidado V1:  %d ", candv1);
	printf("\nNumero de votos para o candidado V2:  %d ", candv2);
	printf("\nNumero de votos para o candidato V3:  %d ", candv3);
	printf("\nNumero de votos para o candidato V4:  %d ", candv4);
	printf("\nNumero de votos brancos:  %d ",vb);
	printf("\nNumero de votos nulos:  %d ", vn);
	
	if ((candc1>candc2) && (candc1>candc3) && (candc1>candc4)){
		printf("\nCandidato a Prefeito mais votado: Candidato 1 com %d Votos", candc1);
	}
	else if ((candc2>candc1) && (candc2>candc3) && (candc2>candc4)){
		printf("\nCandidato a Prefeito mais votado: Candidato 2 com %d Votos", candc2);		
	}
	else if ((candc3>candc1) && (candc3>candc2) && (candc3>candc4)){
		printf("\nCandidato a Prefeito mais votado: Candidato 3 com %d Votos", candc3);		
	}
	else if ((candc4>candc1) && (candc4>candc3) && (candc4>candc2)){
		printf("\nCandidato a Prefeito mais votado: Candidato 4  com %d Votos", candc4);		
	}
	
	else if ((candc1==candc2) && (candc1>candc3) && (candc1>candc4)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 1 e Candidato 2 com %d votos", candc1);
	}
	else if ((candc1==candc3) && (candc1>candc2) && (candc1>candc4)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 1 e Candidato 3 com %d votos", candc1);
	}
	else if ((candc1==candc4) && (candc1>candc2) && (candc1>candc3)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 1 e Candidato 4 com %d votos", candc1);
	}
	else if ((candc2==candc3) && (candc2>candc1) && (candc2>candc4)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 2 e Candidato 3 com %d votos", candc2);
	}
	else if ((candc2==candc4) && (candc2>candc1) && (candc2>candc3)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 2 e Candidato 4 com %d votos", candc2);
	}
	else if ((candc3==candc4) && (candc3>candc1) && (candc3>candc2)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 3 e Candidato 4 com %d votos", candc3);
	}
	else if ((candc3==candc4) && (candc3==candc2) && (candc3>candc1)){
		printf("\n Temos um empate entre os Tres primeiros colocados: Candidato 2, Candidato 3 e Candidato 4 com %d votos", candc3);
	}
	else if ((candc1==candc4) && (candc1==candc2) && (candc1>candc3)){
		printf("\n Temos um empate entre os Tres primeiros colocados: Candidato 1, Candidato 2 e Candidato 4 com %d votos", candc1);
	}
	else if ((candc1==candc2) && (candc1==candc3) && (candc1>candc4)){
		printf("\n Temos um empate entre os Tres primeiros colocados: Candidato 1, Candidato 2 e Candidato 3 com %d votos", candc1);
	}
	else if ((candc1==candc3) && (candc1==candc4) && (candc1>candc2)){
		printf("\n Temos um empate entre os Tres primeiros colocados: Candidato 1, Candidato 3 e Candidato 4 com %d votos", candc1);
	}
	else if ((candc1==candc4) && (candc1==candc2) && (candc1==candc3)){
		printf("\n Temos um empate entre os todos os candidatos com um total de %d votos", candc1);
	}
	
	if ((candv1>candv2) && (candv1>candv3) && (candv1>candv4)){
		printf("\nCandidato a Vereador mais votado: Candidato 1 com %d Votos", candv1);
	}
	else if ((candv2>candv1) && (candv2>candv3) && (candv2>candv4)){
		printf("\nCandidato a Vereador mais votado: Candidato 2 com %d Votos", candv2);		
	}
	else if ((candv3>candv1) && (candv3>candv2) && (candv3>candv4)){
		printf("\nCandidato a Vereador mais votado: Candidato 3 com %d Votos", candv3);		
	}
	else if ((candv4>candv1) && (candv4>candv3) && (candv4>candv2)){
		printf("\nCandidato a Vereador mais votado: Candidato 4  com %d Votos", candv4);		
	}
	
	else if ((candv1==candv2) && (candv1>candv3) && (candv1>candv4)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 1 e Candidato 2 com %d votos", candv1);
	}
	else if ((candv1==candv3) && (candv1>candv2) && (candv1>candv4)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 1 e Candidato 3 com %d votos", candv1);
	}
	else if ((candv1==candv4) && (candv1>candv2) && (candv1>candv3)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 1 e Candidato 4 com %d votos", candv1);
	}
	else if ((candv2==candv3) && (candv2>candv1) && (candv2>candv4)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 2 e Candidato 3 com %d votos", candv2);
	}
	else if ((candv2==candv4) && (candv2>candv1) && (candv2>candv3)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 2 e Candidato 4 com %d votos", candv2);
	}
	else if ((candv3==candv4) && (candv3>candv1) && (candv3>candv2)){
		printf("\nTemos um empate entre o Primeiro e o segundo colocado: Candidato 3 e Candidato 4 com %d votos", candv3);
	}
	else if ((candv3==candv4) && (candv3==candv2) && (candv3>candv1)){
		printf("\n Temos um empate entre os Tres primeiros colocados: Candidato 2, Candidato 3 e Candidato 4 com %d votos", candv3);
	}
	else if ((candv1==candv4) && (candv1==candv2) && (candv1>candv3)){
		printf("\n Temos um empate entre os Tres primeiros colocados: Candidato 1, Candidato 2 e Candidato 4 com %d votos", candv1);
	}
	else if ((candv1==candv2) && (candv1==candv3) && (candv1>candv4)){
		printf("\n Temos um empate entre os Tres primeiros colocados: Candidato 1, Candidato 2 e Candidato 3 com %d votos", candv1);
	}
	else if ((candv1==candv3) && (candv1==candv4) && (candv1>candv2)){
		printf("\n Temos um empate entre os Tres primeiros colocados: Candidato 1, Candidato 3 e Candidato 4 com %d votos", candv1);
	}
	else if ((candv1==candv4) && (candv1==candv2) && (candv1==candv3)){
		printf("\n Temos um empate entre os todos os candidatos com um total de %d votos", candv1);
	}

	return 0;
}
