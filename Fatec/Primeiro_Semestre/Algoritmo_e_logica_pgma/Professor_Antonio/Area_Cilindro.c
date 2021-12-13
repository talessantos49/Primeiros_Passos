#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main() {
	float area, raio, pi, volume, altura;
	
	printf("\n\n Digite o raio do cilindro(em Cm por favor):   ");
	scanf("%f", &raio);
	area=raio*raio*3.14;
	printf("\n\n A area do cilindro eh de : %.2f", area);
	printf("\n\n Digite a altura do cilindro (Em cm por favor):   ");
	scanf("%f", &altura);
	volume=area*altura;
	printf("\n\n O valor do volume do cilindro eh de: %.2f \n\n\n", volume);
	
	
}
