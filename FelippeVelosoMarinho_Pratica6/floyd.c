#include <stdio.h>

int main(int argc, char const *argv[]){

	int n, acum = 1;;
	printf("\nDigite o valor de n(inteiro positivo): ");
	scanf("%d", &n);
	
	printf("A %d linha eh: ", n);
	int inicial = (((n-1)*(n))/2)+1;
	for (int i = 1; i <= n; i++){
			printf("%d ", inicial);
			inicial++;
	}
	printf("\n");
	
	printf("Triangulo completo\n");
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			printf("%d ", acum);
			acum++;
		}
		printf("\n");
	}
}