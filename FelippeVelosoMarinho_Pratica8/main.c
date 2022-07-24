#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

#define TAM_MAX 100

int main(int argc, char const *argv[])
{
	int matriz[TAM_MAX][TAM_MAX];
	int m, n, k;
	int zeros = 0, comp_zeros = 0;
	do{
		printf("\nDigite m e n que representam as dimensoes da matriz(ate 100): ");
		scanf("%d %d", &m, &n);
		if(m < 0 || m > TAM_MAX || n < 0 || n > TAM_MAX)
			printf("Dimensao invalida.\n");
	}while(m < 0 || m > TAM_MAX || n < 0 || n > TAM_MAX);
	do{
		printf("\nDigite o valor de k(o valor minimo eh 2):");
		scanf("%d", &k);
		if(k < 2)
			printf("Valor invalido.\n");
	}while (k < 2);
	for (int i =0; i < m; i++){
		for (int j = 0; j < n; j++){//percorrendo
			do{
				matriz[i][j] = rand();
			} while (matriz[i][j] < 1 || matriz[i][j] > k);
		}
	}
	
	printf("\nMatriz preenchida\n");
	imprime_matriz(matriz, m, n);
	
	while(1){
		comp_zeros = zeros;
		zeros = zera_3consec(matriz, m, n);
		if(comp_zeros == zeros)
			break;
		printf("\nMatriz zerada\n");
		imprime_matriz(matriz, m, n);
		translada_zeros(matriz, m, n);
		printf("\nMatriz transladada\n");
		imprime_matriz(matriz, m, n);
		printf("A matriz possui %d zeros.\n", zeros);
	}
	printf("\nMatriz Final\n");
	imprime_matriz(matriz, m, n);
	printf("A matriz possui %d zeros.\n", zeros);
	
	return 0;
}