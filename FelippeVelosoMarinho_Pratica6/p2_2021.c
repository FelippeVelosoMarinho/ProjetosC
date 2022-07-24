#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

typedef struct Xis {
    int linha, coluna, tam;
} Xis;

typedef struct Ponto {
    float x, y;
} Ponto;


typedef struct Circulo {
    Ponto centro;
    float raio;
} Circulo;

typedef struct Triangulo {
    Ponto sup, base_esq, base_dir;
} Triangulo;


#define MAX_TAM 100

//1)

void matrizIdentidade(int M[][MAX_TAM], int n) {//quando a linha é = a coluna, estou na diagonal princiapl
	int i=0, int j=0;
	
	if(n<=0 || n>=MAX_TAM)
		return;
	
	for(i=0; i<n; i++){
		for(j=0; i<n; j++){
			if(i==j) M[i][j] = 1;
			else M[i][j]= 0;
		}
	}
}//caso n seja inválido??

//2)

int xisValido(Xis x, int n){
	int i, j;
	int linha_ini, col_ini;
	if(x.tam <= 0) return 0;
	if(x.tam % 2 == 0) return 0;
	
	linha_ini = x.linha - x.tam/2;
	col_ini = x.coluna - x.tam/2;	
	
	if(linha_ini < 0 || col_ini < 0) return 0;
	
	if(linha_ini + x.tam > n || col_ini + x.tam > n) return 0;
	
	return 1;
}

int insereXis(int M[][MAX_TAM], int n, Xis x){
	int i,j;
	int linha_ini, col_ini;
	
	if(!xisValido(x, n))
		return 0;
	
	linha_ini = x.linha - x.tam/2;
	col_ini = x.coluna - x.tam/2;
	
	for(i=linha_ini; i<linha_ini + x.tam; i++){
		for(j=col_ini; j<col_ini + x.tam; j++){
			if(i - linha_ini == j) M[i][j] = 1;
			else if(i-linha_ini+ j-col_ini == x.tam-1) M[i][j] = 1;
			else M[i][j] = 0;
		}
	}
	return 1;
}

//3)
Xis maiorXis(int M[][MAX_TAM], int n, int i, int j){
	//Verificar se a cédula central é 1
	//Sen não, retorna X de tamanho 0
	//Se sim, X tem pelo menos tamanho 1
	//loop:
		//Verificar o quadrado externo, analisando se as 4 pontas são 1
			//as 4 pontas são 1
			//o resto é 0
		//Se sim, aumenta 2 o tamanho do xisValido
		//Se nao, termina o loop	
	
	Xis x;
	
	if(M[i][j] == 1)
		x.tam = 1;
	
	x.linha = i;
	x.coluna = j;
	x.tam = 1;
	// Xi x =  {.linha = i,.coluna = j, 0};
	
	while(existeXis(x, M, n))
		x.tam += 2;
	
	x.tam -= 2;
	
	return x;
}

//4)
int lerXis(Xis *x, int n){
	
}