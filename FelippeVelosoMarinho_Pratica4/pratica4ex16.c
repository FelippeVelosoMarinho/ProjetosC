#include <stdio.h>
#include "pratica4.h"

int main(int argc, char const *argv[]){
	int primeiro, segundo;
	do{
		printf("\nDigite o primeiro numero: ");
		scanf("%d", &primeiro);
		if(primeiro < 1)
			printf("Numero invalido, digite novamente.");
	}while(primeiro <1);;
	do{
		printf("\nDigite o segundo numero: ");
		scanf("%d", &segundo);
		if(segundo < 1)
			printf("Numero invalido, digite novamente.");
	}while (segundo < 1);
	printf("MDC entre %d e %d eh %d\n", primeiro, segundo, mdc(primeiro, segundo));
	printf("MMC entre %d e %d eh %d\n", primeiro, segundo, mmc(primeiro, segundo));

		return 0;
}