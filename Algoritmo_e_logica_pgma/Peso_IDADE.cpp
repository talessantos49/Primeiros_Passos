#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int idade, peso;
	printf("\n Qual e a sua idade? ");
	scanf("%d", &idade);
	
	printf("\n Qual e seu peso? ");
	scanf("%d", &peso);
	
	switch(idade){
		case 0 ... 17:{
			switch(peso){
				case 0 ... 60 :
					printf("\n Grupo A");
					break;
				case 61 ... 90:
					printf("\n Grupo B");
					break;
				default:
					printf("\n Grupo C");
					break;
			}
		break;
		}
		case 18 ... 59 :{
			switch(peso){
				case 0 ... 60 :
					printf("\n Grupo D");
					break;
				case 61 ... 90:
					printf("\n Grupo E");
					break;
				default:
					printf("\n Grupo F");
					break;
			}
		break;
		}
		default :{
			switch(peso){
				case 0 ... 60 :
					printf("\n Grupo G");
					break;
				case 61 ... 90:
					printf("\n Grupo H");
					break;
				default:
					printf("\n Grupo I");
					break;		
			}
		break;
		}
	}
	
}
