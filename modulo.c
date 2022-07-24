#include <stdio.h>
int bla(){
	return 12;
}

int main(){
	
	int chave, senha, n, score;
    int *chaveA, *senhaA;
	
	n = 4;
    
    scanf("%d", &chave);
    scanf("%d", &senha);
    
    chaveA = &chave;
    senhaA = &senha;

	
	printf("\n%d", &chave);
	printf("\n%d", chave);//this
	printf("\n%d", *chaveA);//this
	printf("\n%d", chaveA);
	
	score = chave % 1000;
	printf("\n%d", score);
	
	if(bla() == 12){
		printf("ufa");
	}else{
		printf("fudeu");
	}
}