#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
   int vetor[10];
   int i, maior, posicao;


   printf("Digite 10 valores para preencher o vetor:\n");
   for (i = 0; i < 10; i++) {
      scanf("%d", &vetor[i]);
   }


   maior = vetor[0];
   posicao = 0;


   for (i = 1; i < 10; i++) {
      if (vetor[i] > maior) {
         maior = vetor[i];
         posicao = i;
      }
   }

   printf("Vetor: ");
   for (i = 0; i < 10; i++) {
      printf("%d ", vetor[i]);
   }
   printf("\n");

   printf("Maior valor do vetor: %d\n", maior);
   printf("Posição do maior valor no vetor: %d\n", posicao);

   return 0;
}

