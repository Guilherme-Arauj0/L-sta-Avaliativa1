#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	setlocale(LC_ALL, "");
	
	
	
   int vetor[10];
   int i, cont = 0;
   
   
   printf("Digite os 10 valores do vetor:\n");
   for (i = 0; i < 10; i++) {
      scanf("%d", &vetor[i]);
   }

   
   for (i = 0; i < 10; i++) {
      if (vetor[i] % 2 == 0) {
         cont++;
      }
   }

   
   
   printf("O vetor possui %d valores pares.\n", cont);
   
   return 0;
}

