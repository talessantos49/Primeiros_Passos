#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
	
	int QtdSkol, QtdItaipava, QtdImperio, QtdOriginal, resposta, temperatura, ml;
	bool unidade, caixa, gelada, garrafa, congelada; 
	
	printf("\n\n\nOla, Digite a quantidade de cervejas que temos:");
	printf("\nSkol:  ");
	scanf("%d",&QtdSkol);
	printf("\nItaipava:   ");
	scanf("%d",&QtdItaipava);
	printf("\nImperio:   ");
	scanf("%d",&QtdImperio);
	printf("\nOriginal:   ");
	scanf("%d",&QtdOriginal);
	printf("\nDigite a temperatura das cervejas(Em Graus Celsius):  ");
	scanf("%d",&temperatura);
	printf("\nDigite as ml que estao divididas as cervejas: ");
	scanf("%d",&ml);
	printf("\n A quantidade de skols foram: %d. \n A quantidade de Itaipavas foram: %d. \n A quantidade de Imperios foram: %d. \n A quantidade de Originais foram: %d.", QtdSkol, QtdItaipava, QtdImperio, QtdOriginal);
	printf("\n\nEscolha uma das opcoes de cerveja:\n[1]Skol. \n[2]Itaipava. \n[3]Imperio. \n[4]Original. \n\n Resposta:  ");
	scanf("%d",&resposta);
	switch (resposta){
		case 1:
			if (QtdSkol>=15) (caixa=true);
			if (caixa) printf("\n Verdadeiro, Eh possivel ter pelo menos uma caixa de skol!!! =)");
			if (caixa==false) printf("\n Falso, Que pena, nao temos nem uma caixinha se quer. =( ");
			if (ml>473) (garrafa=true);
			if (ml==600 || ml==1000) printf("\n Verdadeiro, a cerveja esta em uma garrafa de 600ml ou eh um litrao!");
			if (garrafa && (ml!=600 && ml!=1000)) printf("\n Verdadeiro, Eh uma garrafa de Cerveja!!!! Beba com moderacao!");
			if (garrafa==false) printf("\n Falso, Que pena, voce so tem latinhas. Beba com moderacao!");
			if (temperatura<= 4) (gelada=true);
			if (temperatura< (4*(-1)) && garrafa==false) (congelada==true);
			if (temperatura<= 4 && temperatura>-4 && garrafa==false) (congelada==false);
			if (temperatura = (4*(-1)) && garrafa==true) (congelada==false);
			if (temperatura<= (6*(-1)) && garrafa==true) (congelada==true); 
			if (gelada && !congelada && garrafa) printf("\n A sua cerveja de garrafa esta na temperatura ideal para ser tomada!!!.");
			else if (gelada && congelada && garrafa) printf("\n A sua cerveja de garrafa provavelmente congelou =(. ");
			else if (gelada && !garrafa && !congelada) printf("\n Verdadeiro, A sua cerveja de latinha esta na temperatura ideal para ser tomada!!!");
			else if (gelada && congelada && !garrafa) printf("\n Verdadeiro, a sua cerveja de latinha congelou!!");
			else if (!gelada && garrafa) printf("\n A sua cerveja de garrafa esta quente, coloque no freezer por pelo menos 30 min.");
			else if (!gelada && !garrafa) printf("\n A sua cerveja de latinha esta quente, coloco no freezer por 15 minutos.");
			if (gelada==false) printf("\n Falso, a cerveja esta quente. =( ");
			break;
		case 2:
			if (QtdItaipava>=15) (caixa=true);
			if (caixa) printf("\n Verdadeiro, Eh possivel ter pelo menos uma caixa de Itaipava!!! =)");
			if (caixa==false) printf("\n Falso, Que pena, nao temos nem uma caixinha se quer. =( ");
			if (ml>473) (garrafa=true);
			if (ml==600 || ml==1000) printf("\n Verdadeiro, a cerveja esta em uma garrafa de 600ml ou eh um litrao!");
			if (garrafa && (ml!=600 && ml!=1000)) printf("\n Verdadeiro, Eh uma garrafa de Cerveja!!!! Beba com moderacao!");
			if (garrafa==false) printf("\n Falso, Que pena, voce so tem latinhas. Beba com moderacao!");
			if (temperatura<= 4) (gelada=true);
			if (temperatura< (4*(-1)) && garrafa==false) (congelada==true);
			if (temperatura<= 4 && temperatura>-4 && garrafa==false) (congelada==false);
			if (temperatura = (4*(-1)) && garrafa==true) (congelada==false);
			if (temperatura<= (6*(-1)) && garrafa==true) (congelada==true); 
			if (gelada && !congelada && garrafa) printf("\n A sua cerveja de garrafa esta na temperatura ideal para ser tomada!!!.");
			else if (gelada && congelada && garrafa) printf("\n A sua cerveja de garrafa provavelmente congelou =(. ");
			else if (gelada && !garrafa && !congelada) printf("\n Verdadeiro, A sua cerveja de latinha esta na temperatura ideal para ser tomada!!!");
			else if (gelada && congelada && !garrafa) printf("\n Verdadeiro, a sua cerveja de latinha congelou!!");
			else if (!gelada && garrafa) printf("\n A sua cerveja de garrafa esta quente, coloque no freezer por pelo menos 30 min.");
			else if (!gelada && !garrafa) printf("\n A sua cerveja de latinha esta quente, coloco no freezer por 15 minutos.");
			if (gelada==false) printf("\n Falso, a cerveja esta quente. =( ");
			break;
		case 3:
			if (QtdImperio>=12) (caixa=true);
			if (caixa) printf("\n Verdadeiro, Eh possivel ter pelo menos uma caixa de Imperio!!! =)");
			if (caixa==false) printf("\n Falso, Que pena, nao temos nem uma caixinha se quer. =( ");
			if (ml>473) (garrafa=true);
			if (ml==600 || ml==1000) printf("\n Verdadeiro, a cerveja esta em uma garrafa de 600ml ou eh um litrao!");
			if (garrafa && (ml!=600 && ml!=1000)) printf("\n Verdadeiro, Eh uma garrafa de Cerveja!!!! Beba com moderacao!");
			if (garrafa==false) printf("\n Falso, Que pena, voce so tem latinhas. Beba com moderacao!");
			if (temperatura<= 4) (gelada=true);
			if (temperatura< (4*(-1)) && garrafa==false) (congelada==true);
			if (temperatura<= 4 && temperatura>-4 && garrafa==false) (congelada==false);
			if (temperatura = (4*(-1)) && garrafa==true) (congelada==false);
			if (temperatura<= (6*(-1)) && garrafa==true) (congelada==true); 
			if (gelada && !congelada && garrafa) printf("\n A sua cerveja de garrafa esta na temperatura ideal para ser tomada!!!.");
			else if (gelada && congelada && garrafa) printf("\n A sua cerveja de garrafa provavelmente congelou =(. ");
			else if (gelada && !garrafa && !congelada) printf("\n Verdadeiro, A sua cerveja de latinha esta na temperatura ideal para ser tomada!!!");
			else if (gelada && congelada && !garrafa) printf("\n Verdadeiro, a sua cerveja de latinha congelou!!");
			else if (!gelada && garrafa) printf("\n A sua cerveja de garrafa esta quente, coloque no freezer por pelo menos 30 min.");
			else if (!gelada && !garrafa) printf("\n A sua cerveja de latinha esta quente, coloco no freezer por 15 minutos.");
			if (gelada==false) printf("\n Falso, a cerveja esta quente. =( ");
			break;
		case 4:
			if (QtdOriginal>=8) (caixa=true);
			if (caixa) printf("\n Verdadeiro, Eh possivel ter pelo menos uma caixa de Original!!! =)");
			if (caixa==false) printf("\n Falso, Que pena, nao temos nem uma caixinha se quer. =( ");
			if (ml>473) (garrafa=true);
			if (ml==600 || ml==1000) printf("\n Verdadeiro, a cerveja esta em uma garrafa de 600ml ou eh um litrao!");
			if (garrafa && (ml!=600 && ml!=1000)) printf("\n Verdadeiro, Eh uma garrafa de Cerveja!!!! Beba com moderacao!");
			if (garrafa==false) printf("\n Falso, Que pena, voce so tem latinhas. Beba com moderacao!");
			if (temperatura<= 4) (gelada=true);
			if (temperatura< (4*(-1)) && garrafa==false) (congelada==true);
			if (temperatura<= 4 && temperatura>-4 && garrafa==false) (congelada==false);
			if (temperatura = (4*(-1)) && garrafa==true) (congelada==false);
			if (temperatura<= (6*(-1)) && garrafa==true) (congelada==true); 
			if (gelada && !congelada && garrafa) printf("\n A sua cerveja de garrafa esta na temperatura ideal para ser tomada!!!.");
			else if (gelada && congelada && garrafa) printf("\n A sua cerveja de garrafa provavelmente congelou =(. ");
			else if (gelada && !garrafa && !congelada) printf("\n Verdadeiro, A sua cerveja de latinha esta na temperatura ideal para ser tomada!!!");
			else if (gelada && congelada && !garrafa) printf("\n Verdadeiro, a sua cerveja de latinha congelou!!");
			else if (!gelada && garrafa) printf("\n A sua cerveja de garrafa esta quente, coloque no freezer por pelo menos 30 min.");
			else if (!gelada && !garrafa) printf("\n A sua cerveja de latinha esta quente, coloco no freezer por 15 minutos.");
			if (gelada==false) printf("\n Falso, a cerveja esta quente. =( ");
			break;
		default: 
			printf("\nEscolha uma opcao Valida!");
			break;
	}	
	return 0;
}
