#include <stdio.h>

#define TAM_MAX 100

int main(int argc, char const *argv[])
{
	double u[TAM_MAX], v[TAM_MAX];
	double produto;
	unsigned int n;
	do{
		printf("\nDigite a dimensao dos vetores(ate 100): ");
		scanf("%d", &n);
		if(n > TAM_MAX)
			printf("Dimensao invalida.\n");
	}while (n > TAM_MAX);
	printf("Digite os valores de u entre espacoes(Ex: 1, 2, 3 ... 100): ");
	for(int i = 0; i<n; i++){
		scanf("%lf", &u[i]);
	}
	printf("Digite os valores de v entre espacoes(Ex: 1, 2, 3 ... 100): ");
	for(int i = 0; i<n; i++){
	scanf("%lf", &v[i]);
	}
	for(int i = 0; i < n; i++){
		produto = produto + (u[i] * v[i]);//produto += (u[i] * v[i]);
	printf("O produto escalar entre u e v eh %.2lf\n", produto);
	}
	
	return 0;
}