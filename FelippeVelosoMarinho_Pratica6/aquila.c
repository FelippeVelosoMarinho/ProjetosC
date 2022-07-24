#include <stdio.h>
#include<stdlib.h>

#define TAM_MAX 1000

int solution(int number) {
  
  int soma=0;
  printf("\nnumvber%d",number);
  for (int i = 1; i <= number; i++){
	  
	  	if (number <= 0){
			return 0;
		}
	  
		if((i % 3 == 0) || (i % 5 == 0)){
			soma = soma + i;
			printf("\ncreushakusu%d", i);
			printf("\nsoma %d", soma);
			return soma;
		}
			
		while((i % 3 == 0) && (i % 5 == 0)){
			soma+= i;
			printf("\nshakusu%d", i);
			return soma;
		}  
          
    }
}

int solutione(int number) {
	int soma=0, i = 0;
	
	  	if (number <= 0){
			return 0;
		}
	  while(i<=number){

		if((i % 3 == 0) || (i % 5 == 0)){
			i++;	
			soma = soma + i;
			printf("\ncreushakusu%d", i);
			printf("\nsoma %d", soma);
			break;
			printf("\nsoma %d", soma);
			return soma;
		}
			
		if((i % 3 == 0) && (i % 5 == 0)){
			i++;
			soma+= i;
			printf("\nshakusu%d", i);
			return soma;
		}
			
			
}		  
	  }
	  
/*int main() {
    float Valor =0, aux=0;
    int not100, not50,  not20 ,  not10, not5,  not2 , moed100, moed50, moed25, moed10, moed5, moed1;
    printf("\nDigite o valor ponto flutuante :");
    
    //ENTRADA
	scanf("%f", &Valor);
	
	aux = Valor;
	
	if(Valor < 4.00)
		Valor = Valor + 500;
	
	
	not100 = Valor/100.00;
	Valor = Valor - (not100*100.00);
	
	not50 = Valor/50.00;
	Valor = Valor - (not50*50);
	
	not20 = Valor/20.00;
	Valor = Valor - (not20*20.00);
	
	not10 = Valor/10.00;
	Valor = Valor - (not10*10.00);
	
	not5 = Valor/5.00;
	Valor = Valor - (not5*5.00);
	
	not2 = Valor/2.00;
	Valor = Valor - (not2*2.00);
	
	moed100 = Valor/1.00;
	Valor = Valor - (moed100*1.00);
	
	moed50 = Valor/0.50;
	Valor = Valor - (moed50*0.50);
	
	moed25 = Valor/0.25;
	Valor = Valor - (moed25*0.25);
	
	moed10 = Valor/0.10;
	Valor = Valor - (moed10*0.10);
	
	moed5 = Valor/0.05;
	Valor = Valor - (moed5*0.05);
	
	moed1 = Valor/0.01;
	Valor = Valor - (moed1*0.01);
	
	if(aux < 4){
		not100 = not100-5;

	}
	
	//SAÍDA
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", not100);
	printf("%d nota(s) de R$ 50.00\n", not50);
	printf("%d nota(s) de R$ 20.00\n", not20);
	printf("%d nota(s) de R$ 10.00\n", not10);
	printf("%d nota(s) de R$ 5.00\n", not5);
	printf("%d nota(s) de R$ 2.00\n", not2);
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moed100);
	printf("%d moeda(s) de R$ 0.50\n", moed50);
	printf("%d moeda(s) de R$ 0.25\n", moed25);
	printf("%d moeda(s) de R$ 0.10\n", moed10);
	printf("%d moeda(s) de R$ 0.05\n", moed5);
	printf("%d moeda(s) de R$ 0.01\n", moed1);

    return 0;
}*/
	  


int main(){
	/*int A, B, X;
	printf("Digite A: ");
	scanf("%d", &A);
	printf("Digite B: ");
	scanf("%d", &B);
	X = A+B;
	printf("X = %d",X)
	*///printf("\naaaaaaa%d",solutione(10));
	//int n, i;
	int vet[TAM_MAX];
	//printf("Digite o numero: ");
	//scanf("%d", &n);
		int i, j, NC, n, k, cont=0;
	NC = 1;
	n = 5;
	k = 2;
	for(i = 1; i <= n; ++i){
		vet[i] = i;
		printf("vetor[%d] = %d\n",i, vet[i]);
		printf("%d\n",k);
		if(k<=n){
			k+=2;
			if(k<=n){
				k = k - n +1;
			}
		}else{k-=2;}
		/*while(!(cont=!k)){
			printf("vetor[%d] = %d\n",j, vet[i]);
		}*/
		/*for(j = 0; j <= k; ++j){
			printf("vetor[%d] = %d\n",j, vet[i]);
		}*/
	}
	
	
	//a cada k tira o valor que cont parou	
	
}
