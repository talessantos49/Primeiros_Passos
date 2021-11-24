#include <stdio.h>
#include <stdlib.h>

void main() {
	float base, altura;
	
	printf("\n Entre com o valor da base (em cm por favor) :  ");
	scanf("%f", &base);
	printf("\n Entre com o valor da altura (em CM por favor) : ");
	scanf("%f", &altura);
	printf("\n\n O valor da area eh: %.2f cm \n\n", base*altura);	
}
