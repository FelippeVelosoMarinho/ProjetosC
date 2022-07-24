#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include "pratica4.h"

int main(int argc, char const *argv[]){
	
	char sexo;
	float altura, patual, pideal;
	
	do{
		printf("\nDigite seu sexo(M ou F): ");
		scanf(" %c", &sexo);
		sexo = toupper(sexo);
		if(sexo != 'M' && sexo != 'F')
			printf("Valor invalido.");
	}while (sexo != 'M' && sexo != 'F');
	printf("\nDigite sua altura(em M): ");
	scanf(" %f",&altura);
	printf("\nDigite seu peso atual(em kg): ");
	scanf(" %f",&patual);
	pideal = pesoIdeal(altura, sexo);
	if(fabs(pideal - patual) <= 0.001)
		printf("Voce esta no seu peso ideal. \n");
	else if (pideal > patual)
		printf("Voce precisa engoradar %.2f kg\n", pideal - patual);
	else
		printf("Voce precisa emagrecer %.2f kg\n", patual - pideal);
	
	return 0;
}