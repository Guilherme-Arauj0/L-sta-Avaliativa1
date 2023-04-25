#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define mod(m) (m + 100)

int main() {
	setlocale(LC_ALL, "");
	
	
	int vetor[6] = {1, 0, 5, -2, -5, 7};
	int soma, x;
	
	soma = vetor[0] + vetor[1] + vetor[5];	
	
	printf("                Dados do vetor:\n\n\n");
	for(x=0;x<6;x++){
		printf("%d ", vetor[x]);
	
	}
	
	printf("\n\n\n         Soma dos dados Linha[0], Linha[1], Linha[5]:\n\n\n");
	printf("%d", soma);
	
	printf("\n\n\n Modificação na posição 4:\n\n %d ", mod(-5));
	
	
	
	
	
	
	
	
	return 0;
}
