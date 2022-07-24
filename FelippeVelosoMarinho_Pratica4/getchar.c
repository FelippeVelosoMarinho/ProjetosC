#include <stdio.h>

int main() {
	
	int aux = 0;
	scanf("%d", &aux);
	
	fflush(stdin);//limpa a memória 
	
	int char1, char2;
	char1 = getchar();
	char2 = getchar();
	
	printf("\n-> %c %c\n", char1, char2);
	
	return 0;
}