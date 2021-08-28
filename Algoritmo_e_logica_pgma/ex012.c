#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
	float novo_salario;
	int salario;
	printf("Digite o salario atual: ");
	scanf("%d", salario);
	
	switch (salario){
		case 0 ... 500 :{
			novo_salario=salario+(salario*1);
			printf("O novo salario do funcionario e %.2f", &novo_salario);
			break;
		}
		case 501 ... 999:{
			novo_salario=salario+(salario*0.75);
			printf("O novo salario do funcionario e %2.f", &novo_salario);
			break;
		}
		case 1000 ... 1500:{
			novo_salario = salario+(salario*0.50);
			printf("O novo salario do funcionario e %.2f", novo_salario);
			break;
		}
		case 1501 ... 2000:{
			novo_salario=salario+(salario*0.25);
			printf("O novo salario do funcionario e %.2f", &novo_salario);
			break;
		}
		case 2001 ... 3000:{
			novo_salario=salario+(salario*0.10);
			printf("O novo salario do funcionario e %2.f", &novo_salario);
			break;
		}
		case 3001 ... 5000:{
			novo_salario=salario+(salario*0.05);	
			printf("O novo salario do funcionario e %2.f", &novo_salario);
			break;

		}
		default: 
			novo_salario=salario+(salario*0.02);	
			printf("O novo salario do funcionario e %2.f", &novo_salario);
	};
}

