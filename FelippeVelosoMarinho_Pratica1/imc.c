#include <stdio.h>

int main(){

	float imc, altura, peso;

	
	peso = 122;
	altura = 1.84;
	imc = peso / (altura*altura);
	
	printf("O IMC de Brutos eh %.2f, ele precisa perder no mínimo(aproximadamente) 37kg", imc);

	peso = 45;
	altura = 1.76;	
	imc = peso / (altura*altura);	
	
	printf("\nO IMC de Olivia eh %.2f, ela precisa ganhar no mínimo(aproximadamente) 12kg", imc);
	
	return 0;
}