#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));

	int sorteados[26];//vetor
	int i = 0;
	int bilhete[15];
	int count = 0, x=0;
	
	for(i=0; i<26; i++)
		sorteados[i] = 0;
	
	while(count < 15){
		x = 1 + rand()%25;
		if(sorteados[x] == 0){
			bilhete[count] = x;
			sorteados[x] = 1;
			count++;
		}
	}
 
	for(i=0; i<15; i++)
		printf("%d ", bilhete[i]);
	
	return 0;
}