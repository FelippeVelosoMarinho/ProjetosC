#include <stdio.h>

int main(){
	
	double a;
	a = 789.54;	
	a *= 1.0056;
	//ou a = a+(1.0056);
	
	a += 303.20;
	//ou a = a + 303.20;
	a *= 1.0056;
	
	a -= 58.25;
	a *= 1.0056;
	
	
	
	printf("O saldo final foi: %.2f", a);
	
	return 0;
}