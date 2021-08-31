#include <stdio.h>

int main ()
{
	int x, y, z;
    char c;
    float num_real1;
    double num_real2;
    
    printf("X: "); //escreva("X = ")
    scanf("%d", &x);  //leia (x)
    
    printf("\n Y: ");   //escreval("Y = ")
    scanf("%d", &y);    //leia(y)
    
    printf("\n C: ");   //escreval("C = ")
    scanf("%c", &c);    //leia(c)

    printf("\n Numero real 1: ");   //escreval("Numero real 1: ")
    scanf("%f", &num_real1);        //leia(num_real1)
    
	printf("\n Numero real 2: ");   //escreval("Numero real 1: ")
    scanf("%f", &num_real2);        //leia(num_real1)
    
    // Operador de atribuição
    z = x + y;
    printf("\n %d + %d = %d",x, y, z); 		//escreva(x, " + ", y, "=", z)
    
    num_real1 = 10.0;
    num_real2 = num_real1 *0.5;
    printf("\n %.2f * 0,5 = %.3f", num_real1, num_real2); 		//escreval(num_real1," *0,5 = ", num_real2)  
    return 0;
} //fim do bloco
