#include <stdio.h>

float parteInteira(float X)
{
	int aux;
	aux = X;
	return aux;//return (int)X;
}

float parteFracionaria(float X)
{
	float frac;
	frac = X;
	int aux;
	aux = X;
	return frac - aux;//return X - (int)X;
}

float divInts(int x, int y)
{
	float xis;
	xis = x;
	
	float yis;
	yis = y;
	
	float div = xis / yis;
	
	return div;
}

void soma1(int *ponteiro){
	(*ponteiro)++; 
}

void troca(float *end_valor1, float *end_valor2){
	float aux;
	aux = *end_valor1;
	*end_valor1 = *end_valor2;
	*end_valor2 = aux;
	
	/*int aux=8;
	int *p = &aux;
	*p = 1;*/
}

unsigned long long int fast_pow_2(int expoente){
	return (unsigned long long int)1 << expoente;
}

int ddd(unsigned int number){
	return number / 100000000;
}

int soma1SePar(unsigned int number){
	return number | (unsigned int)1;
}

int parOuImpar(unsigned int number){
	return !(number & (unsigned int)1);
}

void main()
{
	printf("\nParte Inteira\n");
	printf("\nEntrada -32.092142\n Saida: %1.f", parteInteira(-32.092142));
	printf("\nEntrada 3.141592\n Saida: %1.f", parteInteira(3.141592));
	printf("\nEntrada 1.618\n Saida: %1.f\n", parteInteira(1.618));
	
	printf("\nParte Fracioaria\n");
	printf("\nEntrada -32.092142\n Saida: %f", parteFracionaria(-32.092142));
	printf("\nEntrada 3.141592\n Saida: %f", parteFracionaria(3.141592));
	printf("\nEntrada 1.618\n Saida: %f\n", parteFracionaria(1.618));
	
	printf("\nDivisao de Inteiros com resultado Float\n");
	printf("\nEntrada 66 dividdo por 8\n Saida: %f", divInts(66, 8));
	printf("\nEntrada 66 dividdo por 8\n Saida: %f", divInts(4, 8));
	printf("\nEntrada 66 dividdo por 8\n Saida: %f\n", divInts(666, 18));
	
	int x =0;
    float y;
	char z;
	
	soma1(&x);
	soma1(&x);
	soma1(&x);
	//int *ptr_x = &x;
	//*ptr_x = 3;
	
	// Exercício 3
	float xx, yy;
	float aux;
	float *ptr_x, *ptr_y;
	ptr_x = &xx;
	ptr_y = &yy;
	//scanf("%f %f", &xx, &yy);
	troca(&xx, &yy);
	*ptr_x;
	aux = xx;
	xx = yy;
	yy = aux;
	printf("\nx = %f\ny = %f", xx, yy);
	
	
	printf("\nSoma 1C = %d\n", x);
	
	printf("\nEndereco de x: %p Conteudo: %d\n", &x, x);
	printf("\nEndereco de y: %p\n", &y);
	printf("\nEndereco de z: %p\n", &z);
	
	//Exercicio 5
	printf("\nExp 0 \nSaida: %llu\n", fast_pow_2(0));
	printf("\nExp 1 \nSaida: %llu\n", fast_pow_2(1));
	printf("\nExp 10 \nSaida: %llu\n", fast_pow_2(10));
	printf("\nExp 32 \nSaida: %llu\n", fast_pow_2(32));
	
	//Teste DDD
	printf("ddd do telefone 3134095858: (%d)\n", ddd(3134095858));
	printf("ddd do telefone 1134595858: (%d)\n", ddd(1134595858));
	printf("ddd do telefone 2235095858: (%d)\n", ddd(2235095858));
	//Teste soma1SePar
	printf("\nEntrada 2 Saida: %d\n", soma1SePar(2));
	printf("\nEntrada 3 Saida: %d\n", soma1SePar(3));
	printf("\nEntrada 254 Saida: %d\n", soma1SePar(254));
	
		printf("\nEntrada 2 Saida: %d\n", parOuImpar(2));
	printf("\nEntrada 3 Saida: %d\n", parOuImpar(3));
	printf("\nEntrada 254 Saida: %d\n", parOuImpar(254));
}