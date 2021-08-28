#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
	float altura, resultadoH, resultadoM;
	int sexo;
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	resultadoH= ((72.7*altura)-58);
	resultadoM= ((62.1*altura)-44.7);
	
	printf("Digite a opçao referente ao seu sexo sendo: \n[0] para Homem \n[1] para mulher\n");
	scanf("%d",&sexo);
	
	if(sexo==0){
		printf("O seu peso ideal deveria ser %2.f",resultadoH);
	}
	
	if(sexo==1){
		printf("O seu peso ideal deveria ser %2.f",resultadoM);
	}
}

