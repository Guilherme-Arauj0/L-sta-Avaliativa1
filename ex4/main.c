#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




int main(){
	setlocale(LC_ALL, "");
	
	int	vetor[8], x, y, z, soma;
	
	for(z=0; z<8; z++) {
      printf("Insira um valor por posição %d: ", z);
      scanf("%d", &vetor[z]);
   }
   
   printf("Digite a posição com o valor de x");
   scanf(" %d", &x);
   printf("Digite a posição com o valor de y");
   scanf(" %d", &y);
   
   soma = vetor[x] + vetor[y];
   
   printf("A soma dos valores indicados na posição %d e %d é igual a %d", x, y, soma);
   
   
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
