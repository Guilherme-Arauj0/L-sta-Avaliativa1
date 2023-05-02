#include <stdio.h>
#include <locale.h>

#define N 5 

int main() {
	setlocale(LC_ALL, "");
	
   int vetor[N];
   int i, posicao_maior, posicao_menor;
   int maior, menor;


   printf("Digite 5 numeros inteiros para preencher o vetor:\n");
   for (i = 0; i < N; i++) {
      scanf("%d", &vetor[i]);
   }


   maior = vetor[0];
   menor = vetor[0];
   posicao_maior = posicao_menor = 0;
   for (i = 1; i < N; i++) {
      if (vetor[i] > maior) {
         maior = vetor[i];
         posicao_maior = i;
      }
      if (vetor[i] < menor) {
         menor = vetor[i];
         posicao_menor = i;
      }
   }

   printf("O maior valor esta na posicao %d do vetor.\n", posicao_maior);
   printf("O menor valor esta na posicao %d do vetor.\n", posicao_menor);

   return 0;
}

