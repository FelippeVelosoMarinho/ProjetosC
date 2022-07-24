#include <stdio.h>
#include "redesocial.h"

void main(){
	popularRedeSocialAleatoriamente(0.6);
	imprimirRedeSocial();
	int n = numAmigosEmComum(2,4);
	printf("\nNumero de amigos em comum entre 2 e 4: %d\n", n);
	printf("\nCoef. de aglomeracao da pessoa 2 eh: %.2f\n", coeficienteAglomeracao(2));
}