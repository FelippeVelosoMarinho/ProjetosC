#include <stdio.h>
#include "estatistica.h"

int main(){//pra executar gcc -c estatistica.c -> gcc pratica2.c estatistica.o -o estatistica
	printf("Cauchy: f(-2) = %f\n", cauchy(-2));//[resultado para conferência: 0.063662]
	printf("Gumbel: f(0, 0.5, 2) = %f\n", gumbel(0, 0.5, 2));//[resultado para conferência: 0.177786]
	printf("Laplace: f(-6, -5, 4) = %f\n", laplace(-6, -5, 4));//[resultado para conferência: 0.097350]
}