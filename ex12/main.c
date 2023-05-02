#include <locale.h>
#include <stdio.h>

#define N 5 

int main() {
	setlocale(LC_ALL, "");
	
   int vetor[N];
   int i, maior, menor, soma = 0;
   float media;


   printf("Digite 5 numeros inteiros para preencher o vetor:\n");
   for (i = 0; i < N; i++) {
      scanf("%d", &vetor[i]);
   }


   maior = vetor[0];
   menor = vetor[0];
   for (i = 0; i < N; i++) {
      if (vetor[i] > maior) {
         maior = vetor[i];
      }
      if (vetor[i] < menor) {
         menor = vetor[i];
      }
      soma += vetor[i];
   }


   media = (float)soma / N;


   printf("Valores lidos: ");
   for (i = 0; i < N; i++) {
      printf("%d ", vetor[i]);
   }
   printf("\n");
   printf("Maior valor: %d\n", maior);
   printf("Menor valor: %d\n", menor);
   printf("Media dos valores: %.2f\n", media);

   return 0;
}

