#include <stdio.h>
#include "estatistica.h"

void main()
{
	printf("Cauchy: f(-2) = %f", cauchy(-2));//[resultado para conferência: 0.063662]
	printf("Gumbel: f(0, 0.5, 2) = %f", gumbel(0, 0.5, 2));//[resultado para conferência: 0.177786]
	printf("Laplace: f(-6, -5, 4) = %f", laplace(-6, -5, 4));// [resultado para conferência: 0.097350]
}