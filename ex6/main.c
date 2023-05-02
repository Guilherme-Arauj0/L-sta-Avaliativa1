#include <stdio.h>
#include <locale.h>

int main() {
   int vetor[10];
   int i, maior, menor;

  
   printf("Digite 10 valores para preencher o vetor:\n");
   for (i = 0; i < 10; i++) {
      scanf("%d", &vetor[i]);
   }

   maior = vetor[0];
   menor = vetor[0];

   for (i = 1; i < 10; i++) {
      if (vetor[i] > maior) {
         maior = vetor[i];
      }
      if (vetor[i] < menor) {
         menor = vetor[i];
      }
   }


   printf("Maior valor do vetor: %d\n", maior);
   printf("Menor valor do vetor: %d\n", menor);

   return 0;
}

