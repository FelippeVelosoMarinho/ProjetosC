#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]){
	float **matriz;
	int n;
	//alocando
	printf("\nDigite a dimensao da matriz quadrada: ");
	scanf("%d", &n);
	matriz = (float **) malloc(n * sizeof(float *));
	for (int i = 0; i < n; i++)
		matriz[i] = (float *) malloc(n * sizeof(float));
		
		for (int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				matriz[i][j] = 0.0;
			
		//desalocando	
		printf("\nMatriz\n");
		for (int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				printf("%.1f", matriz[i][j]);
			printf("\n");
		}
		for (int i = 0; i < n; i++)
			free(matriz[i]);
		free(matriz);
	return 0;
}