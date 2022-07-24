#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#define TAM 8

#define MAX_TAM 100

typedef struct Jogador {
	int id;          //número identificador do jogador
	int num_blocos;  //número de blocos disponíveis para o jogador
	int num_navios;  //número de navios do jogador no tabuleiro
	int T[TAM][TAM]; //TAM == N

} Jogador;

void initJogador(Jogador *jogador, int id, int num_blocos){
	int i=0, j=0;
	
	
	if(num_blocos <= 0 || num_blocos > TAM){
		num_blocos = 20;
	}
	
	jogador->id = id;
	//printf("\n%d", jogador->id);
	jogador->num_blocos = num_blocos;
	//printf("\nnum blocos= %d", jogador->num_blocos);
	jogador->num_navios= 0;
	//printf("\nAqui: %d\n", jogador->num_navios);
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			jogador->T[i][j] = 0;
			//printf("%d ", jogador->T[i][j]);
		}	
	}
}
/*int cabeNaMatriz(Jogador *j, int linha, int col_ini, int tam){
	if(tam>jogador->num_blocos || tam>TAM){return 0;}
	else{return 1;}
	//há navios já ocupando alguma das posições do navio a ser inserido.
}*/
/*int cabe(Jogador *jogador, int linha, int col_ini, int tam){
	int i=0, j=0;
	//Se o a posição do navio a ser inserido já tá ocupado por outro
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			if(jogador->T[i][j] != 0){
			//printf("%d ", jogador->T[i][j]);
			return 0;
			}else{
				return 1;
			}
		}	
	}
}
*/
int temNavioNaPosicao(Jogador *jogador, int linha, int col_ini, int tam){
	int i = 0, j =0;
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			if(jogador->T[linha][col_ini] != 0){
				return 1;
			//printf("%d ", jogador->T[i][j]);
			}else{return 0;}
		}	
	}
}
	//printf("\n tamo: %d\n", tam);
	/*
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			jogador->T[i][j] = 0;
			while(tam > 0){
				linha++;
				jogador->T[linha][col_ini] = 2;
				
				tam--;
			}
			
			printf("%d ", jogador->T[i][j]);
		}	
	}*/

	//printf("\n tamo: %d\n", tam);
	//printf("%d ", jogador->num_blocos);
	//printf("aux: %d ", aux);
int insereNavio(Jogador *jogador, int linha, int col_ini, int tam){
	int i = 0, j =0, cont = 0;
	printf("\nnUOUumero bloco: %d ", jogador->num_blocos);	
	//tam=0;		
	
	printf("\ntam %d", tam);	
	printf("\nblocos %d", jogador->num_blocos);
	printf("\nTAM %d", TAM);
	if(tam>jogador->num_blocos || tam>TAM ){// || !(temNavioNaPosicao(jogador, linha, col_ini, tam))
		printf("blablableco");
		printf("\n tamanos: %d", tam);
		return 0;
		}else{
			//printf("blablablecodoleleco");
			printf("\nbe %d", jogador->num_blocos);
			jogador->num_blocos -= tam;
			printf("\nba %d", jogador->num_blocos);
			jogador->num_navios++; 
			/*for(i=0; i<TAM; i++){
				printf("\n");
				for(j=0; j<TAM; j++){
					while(tam >= 0){
						printf("\n%d ", linha);
						printf("%d \n", col_ini);
						jogador->T[linha][col_ini+tam-1] = 1;	
						tam--;
					}
					printf("%d ", jogador->T[i][j]);
				}	
			}*/					
			return 1;
		}
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			while(cont > 0){
				if(jogador->T[linha][col_ini] != 0){
					cont--;	
					return 0;
				}
			}
		}
	}		
}
int random(int n){
 return rand() %n;
}
int randInt(int min, int max) {//min = 1, max = 6
    return min + random(max - min + 1);

}
void preencheTabuleiro(Jogador *jogador, int modo){
	int linha=0, col_ini=0, tamanho=0, i=0, j=0, t =0;
	//jogador->num_blocos = 20;
	//tamanho -= 1;
	printf("\nnUOUumero bloco: %d ", jogador->num_blocos);	
	//srand(time(NULL));
	/*printf("\nPREENCHE \n");
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			jogador->T[i][j] = 0;
		}	
	}*/
	if(modo == 0){
		while(jogador->num_blocos>0 && tamanho<jogador->num_blocos && tamanho<TAM ){
			scanf("%d %d %d", &linha, &col_ini, &tamanho);	
			printf("\nnumero bloco: %d ", jogador->num_blocos);	
			//tamanho -= 1;
			if(insereNavio(jogador, linha, col_ini, tamanho)){
				for(i=0; i<TAM; i++){
					printf("\n");
								for(j=0; j<TAM; j++){
									while(tamanho != 0){
										//t = tamanho+t;
										t = tamanho - 1;
										jogador->T[linha][col_ini+t] = 1;	
										tamanho--;
										//break;
									}
									printf("%d ", jogador->T[i][j]);
								}	
							}					
			}else{
				break;
			}
		
			/*for(i=0; i<TAM; i++){
							printf("\n");
							for(j=0; j<TAM; j++){
								while(tamanho >= 0){
									//printf("\n%d ", linha);
									//printf("%d \n", col_ini);
									jogador->T[linha][col_ini+(tamanho-1)] = 1;	
									if(insereNavio(jogador, linha, col_ini, tamanho)){
										scanf("%d %d %d", &linha, &col_ini, &tamanho);
										insereNavio(jogador, linha, col_ini, tamanho);
									}else{
										printf("Porra");
									}
									tamanho--;
								}
								printf("%d ", jogador->T[i][j]);
							}	
						}	*/	
	
		}		
	}else if (modo != 0){
		while(jogador->num_blocos>0 && tamanho<jogador->num_blocos && tamanho<TAM ){
			linha = randInt(0,TAM);//rand()%TAM-1;
			printf("\n linha: %d ", linha);
			col_ini = randInt(0,TAM);//rand()%TAM-1;
			printf("\n coluna: %d ", col_ini);
			tamanho = randInt(1,jogador->num_blocos);
			printf("\n tamanho: %d \n", tamanho);
			printf("\nnumero bloco: %d ", jogador->num_blocos);	
			if(insereNavio(jogador, linha, col_ini, tamanho)){
				for(i=0; i<TAM; i++){
					printf("\n");
								for(j=0; j<TAM; j++){
									while(tamanho != 0){
										//t = tamanho+t;
										t = tamanho - 1;
										jogador->T[linha][col_ini+t] = 1;	
										tamanho--;
										//break;
									}
									printf("%d ", jogador->T[i][j]);
								}	
							}					
			}else{
				break;
			}
		}					
	}		
	printf("\nnb: %d ", jogador->num_blocos);
	//int aux = insereNavio(jogador, linha, col_ini, tamanho);
	//printf("\n aux: %d ", aux);


	printf("\nPREENCHE \n");
}
/*
int ataca(Jogador *defensor, int modo){
	int linha=0, col_ini=0, tam=0, t=0;
	int i = 0, j = 0;
	defensor->num_blocos = 20;
	printf("\nnumr blc: %d", defensor->num_blocos);
	if(modo==0){
		printf("\nnumr blcp: %d", defensor->num_blocos);
		// se houver navio nas coordenadas de ataque - navio das coordenadas indicadas , atualiza o tabuleiro e retorna 1
		while(defensor->num_blocos>0 && tam<defensor->num_blocos && tam<TAM && linha<TAM && col_ini<TAM && linha>=0 && col_ini>=0){
			scanf("%d %d %d", &linha, &col_ini, &tam);// 0 0 8
			printf("\nnumr blcpp: %d", defensor->num_blocos);
			if(insereNavio(defensor, linha, col_ini, tam)){
				printf("\nnumr blcppp: %d", defensor->num_blocos);
				for(i=0; i<TAM; i++){
					printf("\n");
					for(j=0; j<TAM; j++){
						while(tam != 0){
							if(defensor->T[linha][col_ini+t] == 0){
							t = tam - 1;
							tam--;
								//defensor->T[linha][col_ini] = 0;
							}else{
								t = tam - 1;
								tam--;						
								defensor->T[linha][col_ini+t] = 0;
							}
							//printf("%d ", defensor->T[i][j]);
						}
					}	
				}
			}			
			//return 1;
		}/*else{
			//Ataque mal sucedido
			return 0;
		}*/	
/*	}else if(modo!=0){
		linha = randInt(0,TAM);
		col_ini = randInt(0,TAM);		
	}
	// se não for bem sucedido, retorna 0
		
}*/
int ataca(Jogador *defensor, int modo){
	int linha=0, col_ini=0, tam=0, t=0;
	int i = 0, j =0;
	
	if(modo == 0){
		scanf("%d %d %d", &linha, &col_ini, &tam);
		if(linha<TAM && col_ini<TAM && linha>=0 && col_ini>=0){		
		for(i=0; i<TAM; i++){
			for(j=0; j<TAM; j++){
				while(defensor->T[linha][col_ini+t] == 1){
					defensor->T[linha][col_ini+t] = 0;
					t = tam - 1;
					tam--;
					//return 1;
				}/*else{	
					return 0;
					}*/
			}	
		}
		//printf("%d ", defensor->T[i][j]);
		}
	}else if(modo != 0){
			linha = randInt(0,TAM);
			col_ini = randInt(0,TAM);
	}
	
}


int classificaFrase(char *frase){
	//se uma frase não tiver todas as letras do alfabeto contidas ou pelo menos metade ela é mal elaborada
	//frase == 26 letras do alfabeto, retorna 0
	//frase >= 13 letras do alfabeto, retorna 1
	//frase < 13 letras do alfabeto, retorna -1
    char c;
    int i=0;
	int cont =0;
    
    //vetor de 26 posições, inicializado com 0
    int letras[26]={}; 

    //enquanto não chega no fim da frase
    /*while ((c=frase[i++]) != '\0')
    {
        //converte pra caixa alta pra facilitar
        c=toupper(c);
        //checa se é uma letra e, se for, soma ao contador
        if (c>='A' && c<='Z')
            //letras[c-'A']++;
			//palavra[i]=c;
			c = frase[i];
			//i++; 
			//printf("Quantas letras do alfabeto: %d ", i);
    }*/
	size_t tam = strlen(frase);

	for (i = 0; i < tam; i++) {
		// Just in order that we don't shout ourselves in the foot
		c = frase[i];
		if (!isalpha(c)) continue;

		letras[(int)(tolower(c) - 'a')]++;
	}	
	for(i = 0; i < 26; i++){
		 printf("'%c' tem %2d ocorrencias.\n", i + 'a', letras[i]);
		 if(letras[i]>0){
			 cont++;
			 printf("%d conta\n", cont);
		 }
	}
	//printf("Quantas letras do alfabeto: %d ", i);
	if(letras[i] == 26){
		return 0;
	}else if(letras[i] >= 13){
		return 1;
	}else if(letras[i] < 13){
		return -1;
	}
    /*palavra[i] = '\0';

    i = 0;

    while (palavra[i]!= '\0'){                  
        if(palavra[i]==palavra[i]){
            contador++;
        }                              

        printf ("%c = %d \n", palavra[i], contador);  
        i++;
    }*/	
}
int calculaOperacao(char str1[], char str2[]){
    char c, g;
    int i=0, j=0;
	int cont =0;
    int letras[26]={0}; 
    
	//size_t tam = strlen(str1);
	size_t tam = strlen(str1);
	size_t tam2 = strlen(str2);
	
	printf("\n tam: %d",tam);
	printf("\n tam2: %d",tam2);
	
	/*char x[] = "500"; 
	size_t len=strlen(x);
	if(len>2)
	  printf("\n%.*s,%s", len-2, x, x+len-2);
	else if(len==2)
	  printf("0,%s", x);
	else
	  printf("0,0%s", len!=0? x: "0"); */
	while(tam<tam2){

		printf("\n string1 %s",str1);
		printf("\n string2 %s",str2);
		tam++;
		printf("\n tam: %d",tam);
		printf("\n tam2: %d",tam2);		
	}

	for (i = 0; i < tam; i++) {
		c = str1[i];
		g = str2[i];

		printf("\nla%c",str1[i]);
		printf("\nle%c",str2[i]);	
		printf("\ncont: %d",cont);
		if(!(c==g)){
			//printf("\nhere%c",c);
			//c++;
			c=g;
			printf("\nhere%c",c);
			printf("\nhere%c",g);
			cont++;
		}		
		if (!isalpha(c)) continue;//se não estier no alfabeto
		if (!isalpha(g)) continue;
		

		letras[(int)(tolower(c) - 'a')]++;
		letras[(int)(tolower(g) - 'a')]++;
	}
	printf("\nconta: %d",cont);
	/*for (j = 0; j < tam; j++) {	
		g = str2[j];
		//printf("\n%c",str2[j]);	
		if (!isalpha(g)) continue;//se não estier no alfabeto

		letras[(int)(tolower(g) - 'a')]++;
	}*/
	//se a letra não for igual a do str 
	/*for(i = 0; i < 26; i++){
		 if(letras[i]>0){
			 cont++;
		 }
	}	*/
}
int main(){
	/*Jogador jogador;
	Jogador defensor;
	int id = 1;
	int num_blocos = -3;
	initJogador(&jogador, id, num_blocos);
	
	int linha = 0;
	int col_ini = 0;
	/*int tam = 5;
	insereNavio(&jogador, linha, col_ini, tam);

	int modo = 0;
	
	preencheTabuleiro(&jogador, modo);
	int tamanho = 0;
	printf("\nInsere Navio\n");
	//insereNavio(&jogador, linha, col_ini, tamanho);
	
	
	/*char frase[128];
	printf("\ndigite uma linha: ");
	fgets(frase, 128, stdin); 
	
	//printf("\nFRASE: %c", frase);
	
	classificaFrase(frase);
	printf("\nATACA\n");
	printf("\nnumr blco: %d", defensor.num_blocos);
	ataca(&defensor, modo);
	//int tamanho = 0;
	printf("\nnumr blco: %d", defensor.num_blocos);*/
	char str1[2], str2[3];
	printf("\ndigite os trecos 1: ");
	fgets(str1, 26, stdin);
	printf("\ndigite os trecos 2: ");
	fgets(str2, 26, stdin);
	calculaOperacao(str1, str2);
}