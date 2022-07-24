#include <stdio.h>
#include <math.h>

float gumbel(float x, float mi, float beta)
{
	float z = (x - mi) / beta;
	return (1 / beta) * exp(-(z+exp(-z)));
}

void main()
{
	printf("Gumbel: f(0, 0.5, 2) = %f", gumbel(0, 0.5, 2));
}