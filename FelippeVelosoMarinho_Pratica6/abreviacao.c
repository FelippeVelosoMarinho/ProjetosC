#include <stdio.h>

int main(int argc, char const *argv[]){
	char nome[128];
	char caractere;
	printf("\nNome completo(terminada em ponto final): ");
	do{
		caractere = getc(stdin);
		nome[pos]= caractere;
		if(caractere >= 65 && caractere <= 90)//olhar isso
			printf("%c.", caractere);
			//pos++;
		//original[i] = c;
	}while (caractere != '.');
	printf("\n");
	return 0;
}