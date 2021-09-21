#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i, j;
	
	for(i=2; i<=10; i++){
		for(j=1;j<=10;j++){
			printf("\n %d * %d = %d", i, j, i*j);
		}
		printf("\n\n");
	}
	return 0;
}
