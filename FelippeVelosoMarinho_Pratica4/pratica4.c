#include "pratica4.h"
#include <math.h>

float paraMetrosPorSegundo(float v){

	return v / 3.6;
}

float areaCirculo(float raio){
	
	return 3.141592 * (raio*raio);
}

int maior3(int x, int y, int z){
	if(x >= y){
		if(x >= z)
			return x;
			else
				return z;
	}
	else
	{
		if(y >= z)
			return y;
			else
				return z;	
	}
}

int ehPar(int n){
	if(n%2 == 0){
		return 1;
	}else{
		return 0;
	}
}	

int ehDivisivelPor3ou5(int n){
	if(n % 3 == 0 || n % 5 == 0)
		if(n%3 != 0 || n%5 != 0)
			return 1;
		return 0;	
}

float pesoIdeal(float h, char sexo){
	if(sexo == 'M')
		return (72.7 * h) - 58;
	else
		return (62.1 * h) - 44.7;
}

int somaImpares(int N){
	int soma = 0;
	for(int i = 0; i <= N ; i++)
		if(!ehPar(i))
			soma += i;
	return soma;
	
}

double fatorial(int N){
	double fat = 1;
	for (int i = 2; i <= N; i++)
		fat *= i;
	return fat;
}

int somaNumerosDiv3ou5(int N){
	int soma =0;
	int i = 1;
	
	while (i <= N){
		if(ehDivisivelPor3ou5(i))
			soma += i;
		i++;
	}
	return soma;
}

float calculaMedia(int x, int y, int z, int operacao){
	switch(operacao){
	case 1:
		return pow(x*y*z, (float)1.0/3.0);
	case 2:
		return (float)(x + 2 * y + 3 * z)/6.0;
	case 3:
		return 3.0 / (float)(1.0 / x + 1.0 / y +1.0 / z);
	case 4:
		return (float)(x+y+z)/3.0;
	}
	return -1;
}

int numeroDivisores(int N){
	int div = 1;
	for(int i = 2; i <= N; i++)
		if(N % i == 0)
			div++;
		return div;
}

int enesimoFibonacci(int N){
	if(N == 1)
		return 0;
	if(N == 2)
		return 1;
	int a = 0, b = 1, enesimo;
	for(int i = 3; i<= N; i++){
		enesimo = a + b;
		a= b;
		b = enesimo;
	}
	return enesimo;		
}

int mdc(unsigned int x, unsigned int y){
	int menor, maximo;
	if(x<y)
		menor = x;
	else
		menor = y;
	for(int i = 2; i <= menor; i++)
		if(x % i == 0 && y % i == 0)
			maximo = i ;
		return maximo;
}

int mmc(unsigned int x, unsigned int y){
	int maior, minimo;
	if(x<y)
		maior = y;
	else
		maior = x;
	while(1){
		if(maior % x == 0 && maior % y == 0)
			break;
		maior++;
	}
	return maior;
}