#include <stdio.h>
#include <locale.h>

#define N 15 

int main() {
	setlocale(LC_ALL, "");
	
   int notas[N];
   int i;
   float media = 0;


   printf("Digite as notas dos 15 alunos:\n");
   for (i = 0; i < N; i++) {
      scanf("%d", &notas[i]);
   }


   for (i = 0; i < N; i++) {
      media += notas[i];
   }
   media /= N;


   printf("A media geral das notas dos alunos e: %.2f\n", media);

   return 0;
}

