#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char nome[81];
	puts("Nome:  ");
	gets(nome);
	
	puts("Saudacoes");
	puts(nome);
	puts(" ");
	puts(&nome[6]);
	return 0;
}
