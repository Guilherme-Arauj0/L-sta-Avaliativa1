#include <stdio.h>
#include <locale.h>

#define N 10 

int main() {
	setlocale(LC_ALL, "");
	
   float vetor[N];
   int i, negativos = 0;
   float soma_positivos = 0;


   printf("Digite 10 numeros reais para preencher o vetor:\n");
   for (i = 0; i < N; i++) {
      scanf("%f", &vetor[i]);
   }

   
   for (i = 0; i < N; i++) {
      if (vetor[i] < 0) {
         negativos++;
      } else {
         soma_positivos += vetor[i];
      }
   }


   printf("Quantidade de numeros negativos: %d\n", negativos);
   printf("Soma dos numeros positivos: %.2f\n", soma_positivos);

   return 0;
}

