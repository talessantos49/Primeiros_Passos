#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
	float a, b, c,delta,x1,x2;
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	delta=((pow(b,2)) - (4*a*c));
	
		if (delta>=0){
			x1 = (-1*b+sqrt(delta))/(2*a);
			x2 = (-1*b-sqrt(delta))/(2*a);
			printf("O valor dos X são respectivamente \n x1 = %.2f e x2 = %.2f", x1, x2);
		}
		else{
			printf("Nao existem raizes reais.");
		}
		 
	}
