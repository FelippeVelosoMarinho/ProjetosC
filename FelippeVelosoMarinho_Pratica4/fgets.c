#include <stdio.h>

void main (){
	
	char msg[10];
	printf("\nDigite a mensagem: \n");
	fgets(msg, 10, stdin);

	int i=0;
	for(i=0; i<10; i++){
		printf("\n%c (%d)", msg[i], msg[i]);
	}
	
}