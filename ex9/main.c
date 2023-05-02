#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
   int vetor[6];
   int i;


   printf("Digite 6 valores pares para preencher o vetor:\n");
   for (i = 0; i < 6; i++) {
      do {
         scanf("%d", &vetor[i]);
      } while (vetor[i] % 2 != 0); 
   }

   printf("Valores do vetor na ordem inversa: ");
   for (i = 5; i >= 0; i--) {
      printf("%d ", vetor[i]);
   }
   printf("\n");

   return 0;
}

