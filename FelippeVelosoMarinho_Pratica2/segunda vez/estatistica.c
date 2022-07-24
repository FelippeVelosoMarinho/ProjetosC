#include <math.h>
#include "estatistica.h"

#define pi 3.141592

float cauchy(float x){
	return 1/(M_PI*(1+pow(x,2)));
}
float gumbel(float x, float mi, float beta){
	float z = (x - mi) / beta;
	return  (1/beta)*exp(-(z+exp(-z)));
}
float laplace(float x, float mi, float beta)
{
	float z = -fabs(x-mi)/beta;
	return (1 / (2*beta)) * exp((z));
}
/*float laplace(float x, float mi, float beta){
	//float z = -fabs(x-mi)/beta;
	return (1 / (2*beta)) * exp((-fabs(x-mi)/beta));
}*/