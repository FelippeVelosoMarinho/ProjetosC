#include <stdio.h>
#include <math.h>

#define pi 3.141592

float cauchy(float x)
{
	return 1 / (pi *(1 + pow(x,2)));
}

void main()
{
	printf("Cauchy: f(-2) = %f", cauchy(-2));
}