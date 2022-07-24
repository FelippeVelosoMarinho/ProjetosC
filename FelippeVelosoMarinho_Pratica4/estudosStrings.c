#include <stdio.h>
#include <string.h>



#define MAX_TAM 100000

int main() { //Jeito mais simples de fazer uma string
	
	char str[] = "Bom Dia";
	char texto[1000];
	char texto2[293];
	
	int i;
	for(i=0; i<1000-1; i++) {
		//scanf("%c", &texto+i);
		//scanf("%[\n]s", &texto[i]);
		scanf("%c", &texto[i]);
		if(texto[i] == '#'){ //para de ler a partir do caractere #
			break;
		}
		texto[i] = '\0';
	}
	
	printf("\ntexto lido: %s", texto);
	
	//fgets(str, MAX_TAM, stdin);//leituras de string 
	
	//printf("%s", str);//Vai imprimir a primeira cadeia de caracteres somente, por exemplo "bom dia" imprimiria somente "bom" quando inserido por scanf
	
	return 0;
}