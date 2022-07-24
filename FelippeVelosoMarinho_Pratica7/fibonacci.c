#include <stdio.h>

#define MAX_VALOR 1000

int main(int argc, char const *argv[]){
	int fib;
	double vetor[MAX_VALOR];
	vetor[0]=1;
	vetor[1]=1;
	
	do{
		printf("\nDigite o valor de x tal que fib(x) representa a sequencia de fibonacci: ");
		scanf("%d", &fib);
		if(fib >= 0 && fib <= MAX_VALOR)
		{
			for(int i = 2; i <= fib; i++)
			vetor[i] = vetor[i-1]+vetor[i-2];
			printf("Fib(%d) = %4.3e\n", fib, vetor[fib]);
		}	
		else
			printf("Fim da execusao.\n");
		
	}while(fib >= 0 && fib <= MAX_VALOR);
		
	return 0;
}