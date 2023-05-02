#include <stdio.h>

int main() {
   float vetor_original[10];
   float vetor_quadrado[10];
   int i;

  
   printf("Digite 10 valores para preencher o vetor:\n");
   for (i = 0; i < 10; i++) {
      scanf("%f", &vetor_original[i]);
   }

   for (i = 0; i < 10; i++) {
      vetor_quadrado[i] = vetor_original[i] * vetor_original[i];
   }

   printf("Vetor original: ");
   for (i = 0; i < 10; i++) {
      printf("%f ", vetor_original[i]);
   }
   printf("\n");

   printf("Vetor ao quadrado: ");
   for (i = 0; i < 10; i++) {
      printf("%f ", vetor_quadrado[i]);
   }
   printf("\n");

   return 0;
}

