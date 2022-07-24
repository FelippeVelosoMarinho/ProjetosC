#include <stdio.h>

int main(){

	int i, cpf,cpfaux, resto, peso, soma, dezena, unidade;
	printf("Digite o seu cpf: ");
	scanf("%d", &cpf);
	cpfaux = cpf;
	soma = 0;
	peso = 2;
	
	for(i = 0; i < 9; i++){
		resto = cpfaux % 10;
		soma += resto * peso;
		cpfaux /= 10;
		peso++;
	}
	if(soma % 11 == 0 || soma % 11 == 1)
		dezena = 0;
	else
		dezena = 11 - (soma % 11);
	cpfaux = cpf;
	soma = 2*dezena;
	peso = 3;
	for(i = 0; i < 9; i++){
		resto = cpfaux % 10;
		soma += resto * peso;
		cpfaux /= 10;
		peso++;
	}

	if(soma % 11 == 0 || soma % 11 == 1)
		unidade = 0;
	else
		unidade = 11 - (soma % 11);
	
	printf("Seu cpf: %d-%d%d", cpf, dezena, unidade);
	
	return 0;
}