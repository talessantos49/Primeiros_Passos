#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, var_numeros[]= {1,2,3,4,5,6,7,8,9,10};
	
	char nomecompleto[] = "Tales Almeida Santos";
	char nome[] = {'E', 'L', 'I', 'A', 'N','E'};
	char sobrenome[10]="SANTIAGO";
	
	puts(nome);
	puts(sobrenome);
	
	printf("\n Tamanho do nome completo = %d", strlen(nomecompleto));
	
	for (i=0; i<strlen(nomecompleto); i++){
		printf("\n%5u caracter %c = %d \n", &nomecompleto[i], nomecompleto[i], i);
	}
	
	return 0;
}
