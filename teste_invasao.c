#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i=0,j=0;
	int vec[] = {10, 20, 30, 40};
	
	for(i=0; i<5; i++){
		vec[i] = 1;
		printf("vec[%d] = %d\n", i, vec[i]);
		printf("&vec[%d] = %d\n", i, &vec[i]);
		getchar();
	}
	
	printf("\nj = %d", j);
}