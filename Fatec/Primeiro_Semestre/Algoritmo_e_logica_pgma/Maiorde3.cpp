#include <stdio.h>
// Desenvolva um programa em linguagem C para informar o maior de 3 números
int main()
{ //inicio

	int A, B, C, maior;
	
	printf("\n A: ");
	scanf("%d", &A);
	
	printf("\n B: ");
	scanf("%d", &B);
	
	printf("\n C: ");
	scanf("%d", &C);
	
	if ((A>B)&&(A>C))				//se ((A>B) e (A>C)) então
		maior=A;					//		maior <-A
									//senão
	else							//  	se ((B>A) e (B>C)) entao
		if ((B>A) && (B>C))		//
			maior=B;
		else
			maior = C;
		
	printf("O maior numero entre %d, %d e %d : %d", A, B, C, maior);
	
}
