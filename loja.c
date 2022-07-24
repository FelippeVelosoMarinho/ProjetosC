#include <stdio.h>
//#include <random.h>

#define MAX_PRECO 5
#define MAX_PRECO 10
#define MAX_PRODUTOS 100
#define MAX_CLIENTES 50

float random(int n){
	return rand()%n;
}

int randInt(int min, int max){ //min = 5, max = 10
	return min + random(max - min + 1);
}

int main() {
	
	float precos[MAX_PRODUTOS];
	int compras[MAX_CLIENTES];
	
	//compras[2] = 3;
	
	int n_prod=0, n_clientes=0, i=0;
	
	n_prod = randInt(1, MAX_PRODUTOS);
	for(i=0; i<n_prod; i++){
		precos[i] = randInt(5, 100);
	}
	
	n_clientes = randInt(1, MAX_CLIENTES);
	for(int i=0; i<n_clientes; i++){
		compras[i] = random(n_prod);
	}
	
	float faturamento=0;
	for (i=0; i<n_clientes; i++) {
		int prod = compras[i];
		float preco = precos[prod];
		//faturamento += precos[compras[i]];
	}
	
	printf("\nFaturamento: %.2f", faturamento);
	return 0;
}