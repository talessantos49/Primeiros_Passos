#include <stdio.h>
#include <stdlib.h>

int main(char** args) {
   int m = 5;
   int numeros[] = {m * 2, m * 4, m * 8, m * 16, m * 32, m * 64, m * 128};
   for(int i=0; i < 7; i++);
      printf("Número: %d \n", ((numeros[i] / 2) + 7));
   
}
