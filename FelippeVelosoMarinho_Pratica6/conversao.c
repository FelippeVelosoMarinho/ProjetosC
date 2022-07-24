#include <stdio.h>

int main(int argc, char const *argv[]){
	char string[128];
	char letra;
	int j, meio; 
	int i = 0; 
	int palindromo = 1;
	printf("Digite uma linha: ");
	do{
		scanf("%c", &letra);
		if(letra >= 97 && letra <= 122)
			letra -= 32;
		string[i] = letra;
		i++;
	}while ( letra != '\0' && letra != '\n');
	j = i -2;
	meio = j/2;
	i = 0;
	while (j >= meio){
		if(string[j] != string[i]){
			printf("Nao eh um palindromo.");
			palindromo = 0;
			break;
		}
		j--;
		i++;
	}
	
	if(palindromo == 1){
		printf("Eh um palindromo.");
	}else{
		printf("Nao eh um palindromo.");
	}
	//printf("Linha em maiusculo: %s", string);
	return 0;
}
