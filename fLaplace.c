#include <stdio.h>
#include <math.h>

float laplace(float x, float mi, float beta)
{
	return (1 / (2*beta)) * exp((-fabs(x-mi)/beta));
}

void main()
{
	printf("Laplace: f(-6, -5, 4) = %f", laplace(-6, -5, 4));
}