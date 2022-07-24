#include <stdio.h>
#include <stdlib.h>
//Passagem por referência

void alterar(int *x, int *y, int *z){
	printf("Valores recebidos ... %d, %d, e %d\n", *x, *y, *z);
	*x++;
	*y++;
	*z++;
	printf("Valores alterados ... %d, %d e %d\n", *x, *y, *z);
}

void main(){
	int a = 1, b = 2, c = 3;

	alterar(&a, &b, &c);
	printf("Valores finais ...... %d, %d e %d\n", a, b, c);
}