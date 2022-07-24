#include <stdio.h>
#include "pratica4.h"

int main(int argc, char const *argv[]){
	printf("\nTeste Ex 1\n");
	printf("180 km/h = %.2f m/s\n", paraMetrosPorSegundo(180));
	printf("3.6 km/h = %.2f m/s\n", paraMetrosPorSegundo(3.6));
	printf("60 km/h = %.2f m/s\n", paraMetrosPorSegundo(60));
	
	printf("\nTeste Ex 2\n");
	printf("Area do circulo de raio 0 = %.2f m/s\n", areaCirculo(0));
	printf("Area do circulo de raio 2 = %.2f m/s\n", areaCirculo(2));
	printf("Area do circulo de raio 2 = %.2f m/s\n", areaCirculo(5));
	
	printf("\nTeste Ex 3\n");
	printf("Entrada 2, 5 e 3 - Maior = %d\n", maior3(2, 5, 3));
	printf("Entrada 5, 5 e 5 - Maior = %d\n", maior3(5, 5, 5));
	printf("Entrada -5, -5 e 0 - Maior = %d\n", maior3(-5, -5, 0));
	
	printf("\nTeste Ex 4\n");
	printf("2 eh %s\n", ehPar(2) ? "Par" : "Impar");
	printf("0 eh %s\n", ehPar(0) ? "Par" : "Impar");
	printf("9 eh %s\n", ehPar(9) ? "Par" : "Impar");
	
	printf("\nTeste Ex 5\n");
	printf("2 %s\n", ehDivisivelPor3ou5(2) ? "eh divisivel" : "nao eh divisivel");
	printf("9 %s\n", ehDivisivelPor3ou5(9) ? "eh divisivel" : "nao eh divisivel");
	printf("15 %s\n", ehDivisivelPor3ou5(15) ? "eh divisivel" : "nao eh divisivel");
	printf("1 %s\n", ehDivisivelPor3ou5(1) ? "eh divisivel" : "nao eh divisivel");
	
	printf("\nTeste Ex 6\n");
	printf("O peso ideal de um homem de 1.70 m de altura eh %.2f kg\n", pesoIdeal(1.70, 'M'));
	printf("O peso ideal de um mulher de 1.70 m de altura eh %.2f kg\n", pesoIdeal(1.70, 'F'));
	printf("O peso ideal de um mulher de 1.60 m de altura eh %.2f kg\n", pesoIdeal(1.60, 'F'));
	
	printf("\nTeste Ex 8\n");
	printf("Soma ate 10(de numero impares): %d\n", somaImpares(10));
	printf("Soma ate 100(de numero impares): %d\n", somaImpares(100));
	printf("Soma ate 1000(de numero impares): %d\n", somaImpares(1000));

	printf("\nTeste Ex 9\n");
	printf("Fatorial de 1: %.0lf\n", fatorial(1));
	printf("Fatorial de 10: %.0lf\n", fatorial(10));
	printf("Fatorial de 170: %4.3e\n", fatorial(170));	
	
	printf("\nTeste Ex 10\n");
	printf("Soma ate 20 de numeros divisiveis(por 3 ou 5): %d\n", somaNumerosDiv3ou5(20));
	printf("Soma ate 100 de numeros divisiveis(por 3 ou 5): %d\n", somaNumerosDiv3ou5(100));	
	printf("Soma ate 1000 de numeros divisiveis(por 3 ou 5): %d\n", somaNumerosDiv3ou5(1000));
	
	printf("\nTeste Ex 11\n");
	printf("Media Geometrica de 1,1,1: %.2f\n", calculaMedia(1,1,1,1));
	printf("Media Ponderada de 1,1,1: %.2f\n", calculaMedia(1,1,1,2));
	printf("Media Harmonica de 1,1,1: %.2f\n", calculaMedia(1,1,1,3));
	printf("Media Aritmetica de 1,1,1: %.2f\n", calculaMedia(1,1,1,4));
	printf("Media Geometrica de 1,1,1: %.2f\n", calculaMedia(1,2,1,1));
	printf("Media Ponderada de 1,1,1: %.2f\n", calculaMedia(1,2,1,2));
	printf("Media Harmonica de 1,1,1: %.2f\n", calculaMedia(1,2,1,3));
	printf("Media Aritmetica de 1,1,1: %.2f\n", calculaMedia(1,2,1,4));	
	
	printf("\nTeste Ex 12\n");
	printf("1 tem  %d divisor(es)\n", numeroDivisores(1));
	printf("8 tem  %d divisor(es)\n", numeroDivisores(8));
	printf("66 tem  %d divisor(es)\n", numeroDivisores(66));
	
	printf("\nTeste Ex 13\n");
	printf("O 1 termo na sequencia de Fibonacci eh %d\n", enesimoFibonacci(1));
	printf("O 2 termo na sequencia de Fibonacci eh %d\n", enesimoFibonacci(2));
	printf("O 8 termo na sequencia de Fibonacci eh %d\n", enesimoFibonacci(8));
	
	printf("\nTeste Ex 14\n");
	printf("MDC entre 18 e 6 eh %d\n", mdc(18,6));
	printf("MDC entre 18 e 12 eh %d\n", mdc(18,12));
	printf("MDC entre 18 e 63 eh %d\n", mdc(18,63));
	
	printf("\nTeste Ex 15\n");
	printf("MMC entre 18 e 6 eh %d\n", mmc(18,6));
	printf("MMC entre 18 e 12 eh %d\n", mmc(18,12));
	printf("MMC entre 18 e 63 eh %d\n", mmc(18,63));
	
	return 0;
}