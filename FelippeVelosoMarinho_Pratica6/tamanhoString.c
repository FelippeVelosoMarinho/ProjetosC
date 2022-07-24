#include <stdio.h>

int main(int argc, char const *argv[]){
	char linha[128];
	printf("\ndigite uma linha: ");
	fgets(linha, 128, stdin);
	int tam = 0;
	for (int i = 0; linha[i] != '\0' && linha[i] != '\n'; i++)
		tam++;
	printf("A linha possui %d caracteres. \n", tam);	
	return 0;
}

