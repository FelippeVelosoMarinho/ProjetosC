#include <stdio.h>
#include <math.h>

#define INF 2000000000

int main(int argc, char const *argv[])
{
	int nota;
	char conceito;
	do
	{
		printf("\nDigite sua nota(numero inteiro)");
		scanf("%d", &nota);
		switch (nota)
		{
			case 0 ... 4:
				conceito = 'F';
				break;
			
			case 5:
				conceito = 'E';
				break;
				
			case 6:
				conceito = 'D';
				break;
				
			case 7:
				conceito = 'C';
				break;
				
			case 8:
				conceito = 'B';
				break;
			
			case 9 ... INF:
				conceito = 'A';
				break;
			
			default:
				printf("Numero invalido.\n");
				break;
		}
	}while(nota <0);
	printf("Conceito: \n%c", conceito);
	return 0;
} 