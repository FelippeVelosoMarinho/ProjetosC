#include <stdio.h>
#include <math.h>

float rebotes(float altura, float peso){
	return 5 * altura + sqrt(peso);
}

float pontos(float altura){
	return 10 * altura * altura;
}

float energia(float hora) {
	return sin(hora/24 * 3.141592);
}

float eficiencia(float hora, float altura, float peso){
	float e = energia(hora);
	float pts = pontos(altura);
	float rebs = rebotes(altura, peso);
	return e * (pts + rebs);
}

int main() {
	
	float h = 12;
	float a =  2;
	float p = 100;
	
	float ef = eficiencia(h, a, p);
	
	printf("eficiencia: %f", ef);
	
	return 0;
}