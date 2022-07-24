#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int quadrante(float x, float y){
	//retornar 1 se a cordenada x e y > 0
	if(x > 0 && y > 0){
		return 1;
	}
	//retornar 2 se a cordenada x < 0 e y > 0
	if(x < 0 && y > 0){
		return 2;
	}	
	//retornar 3 se a cordenada x e y < 0
	if(x < 0 && y < 0){
		return 3;
	}	
	//retornar 4 se a cordenada x > 0 e y < 0
	if(x > 0 && y < 0){
		return 4;
	}	
	//retornar -1 se a cordenada x = 0
	if(x == 0){
		return -1;
	}	
	//retornar -2 se a cordenada y = 0
	if(y == 0){
		return -2;
	}	
	//retornar 0 se a cordenada x e y = 0
	if(x == 0 && y == 0){
		return 0;
	}	
}

void decompoe(float x, int *end_pint, int *end_pfrac){
	//Separar a parte inteira da parte fracionária e armazenar cada um em sua devida funcao
	//Se x for negativo, tanto a parte inteira quanto a parte fracionária devem ser negativas.
	*end_pint = floor(x);
	printf("hdahda %d",floor(x));
	printf("hdahda %d",x);
	
	if(x<0){
		*end_pfrac = x+*end_pint;
	}else{
		*end_pfrac = x-*end_pint;
	}
		
}
/*int primoMaisProx(int n){
	int i,o,v=0,add, count = 0, count2 = 0;
	if (n<0)
		return -1;
	
	for(i=2; i <= n / 2; i++){
		if(n%i==0){
			count++;
			break;
		}
	}
	if(count==0&&n!=1){
		printf("\n\n%d e primo", n);
		v=0;
		return n;
	}else{
		//enquanto n não for primo add +1 até que seja
		v++;
		while(v!=0){
			n++;
			for(i=2; i <= n / 2; i++){
				if(n%i==0){
					count++;
					printf("\n\n%d count", count);
					break;
				}
			}
			if(!(count==0)){
				n++;			
				v=0;
			}else{
				printf("\n\n%d e o primo mais proximo", n);
				v=0;
				return n;
			}			
		}
		
		printf("\n\n%d nao e primo", n);
		printf("\n\n%d = v ", v);
	}
	/*while(v!=0){
		n++;
		//quando v=0 ele deverá retornar o numero primo mais proximo
		//se for primo v=0
		for(o=2; o <= n / 2; o++){
			if(n%o==0){
				count2++;
				printf("\n\n%d count", count2);
				//v=0;
				break;
			}			
		}
		if(count2==0&&n!=1){
			break;
			printf("\n\n%d e o primo mais proximo", n);
			v=0;
			return n;
		}
	
				
		
		printf("\n\n%d n", n);
	}
	
	return 0;
}*/

int fibona(int n){
    int a, b, aux, n2, i, cont=0;
	a = 0;
	b = 1;
	n2 = n;

	if(n < 0){
		printf("\nAqui jaz" );
		return 0;
	}			
	for(i = 0; i < n; i++){
		aux = a + b;
		a=b;
		b = aux;

		cont++;
		if(n2==aux){
			//printf("Pertence a fibonacci%d ",cont);	
			break;
		}

		//printf("%d\n", aux);	
	}
	if(aux == n2){
		//printf("Pertence a fibonacci");	
		return 0;
	}else{
		//printf("Nao pertence a fibonacci");	
		return 1;
	}
}
int fibn(int n){
	int i, cont=1;
	int pertence;
	
	pertence = fibona(n);
	if(n==4){
		printf("\ncleber" );
		return 1;
	}
		
	if(pertence == 0){
		printf("\nAqui jaz" );
		return 0;
	}
	
	for(i=1; i<n ;i++){
		fibona(i);
		//printf("\ni: %d", i);
		if(fibona(i)==1){
			cont++;
			printf("\ncontita: %d", cont);
		}
	}

		
	//printf("\nCont: %d", cont);
	return cont;
}

/*int fibn(int n){
    int a, b, aux, n2, i,j, cont=0, cont2=1;
	a = 0;
	b = 1;
	n2 = n;
	printf("confe%d\n", n2);

	if(n < 0){//talvez colocar pra verificar se e inteiro
		return 0;
	}		
	
	for(i = 0; i < n; i++){
		while(n2!=aux){
			//printf("g");

			break;
		}

		aux = a + b;
		a=b;
		b = aux;

		cont++;
		if(n2==aux){
			printf("Nao pertece a fibonao");	
			return 0;
		}

		printf("%d\n", aux);	
	}
	printf("Contador: %d\n", cont);	
	printf("Contador2: %d\n", cont2);
	//printf("%d\n", aux);
    return 0;
}*/


/*int primoMaisProx(int n){
	int i,o,v=0,add, count = 0, count2 = 0;
	if (n<0)
		return -1;
	
	for(i=2; i <= n / 2; i++){
		if(n%i==0){
			count++;
			break;
		}
	}
	if(count==0&&n!=1){
		printf("\n\n%d e primo", n);
		v=0;
		return n;
	}else{
		//enquanto n não for primo add +1 até que seja
		v++;
		while(v!=0){
			n++;
			for(i=2; i <= n / 2; i++){
				if(n%i==0){
					count++;
					printf("\n\n%d count", count);
					break;
				}
			}
			if(!(count==0)){
				n++;			
				v=0;
			}else{
				printf("\n\n%d e o primo mais proximo", n);
				v=0;
				return n;
			}			
		}
		
		printf("\n\n%d nao e primo", n);
		printf("\n\n%d = v ", v);
	}
	
	return 0;
}*/
int primo(int n){
	int i, count = 0;
	
	if (n<0)
		return -1;
	
	for(i=2; i <= n / 2; i++){
		if(n%i==0){
			count++;
			break;
		}
	}
	if(count==0&&n!=1){
		printf("\n\n%d e primo", n);
		return 1;
	}else{
		printf("\n\n%d nao e primo", n);
		return 0;
	}
	
}
int primoMaisProx(int n){
	int var=0 , cont,bla, j, n2, sub1, sub2;
	j = n;
	n2 = n;
	var = primo(n);
	bla = primo(n);
	
	if(bla==1){
		printf("bagulho e primo memo %d", n);
		return n;
	}
	if(n<0){
		printf("bagulho negativo mano");
		return -1;
	}

	while(var == 0){
		printf("\nn: %d", n);
		printf("\nj: %d", j);
		//printf("\ncont: %d", cont);
		
		if(primo(n)==1 || primo(j)==1){
			break;
		}else{
			n++;
			j--;
			//cont++;
		}

	}
		if(primo(n)==1){
			printf("\nhere");
			return n;
		}
		if(primo(j)==1){
			printf("\nherehehe");
			return j;
		}		
		if(primo(n)==1 && primo(j)==1){
			sub1= n2-j;
			sub2= n-n2;
			printf("\nsub1: %d", sub1);
			printf("\nsub2: %d", sub2);

			if(sub1<sub2){
				printf("\nje do laco: %d", j);
				return j;
			}else{
				printf("\nne do lacoste: %d", n);
				return n;
			}			
		}

		printf("\nne: %d", n);
		printf("\nje: %d", j);	
		

}
void main()
{
	//fibn(4);
	//fibona(14);
	
	//primo(6);
	primoMaisProx(9);
	
	/*int *end_pint, *end_pfrac, conta2, conta3;
	float x = -3.141592;
	float aux, conta;
	
	//if(x<0)
	//	x++;
	if(x<0)
		x=x*(-1);	
	
	//printf("hehe %f",x);
	
	*end_pint = floor(x);
	aux = *end_pint;

	printf(" %d",*end_pint);
	
	//if(x>0){
		conta = (x-aux)*1000;
		
		conta2 = floor(conta);
		conta3 = (conta-conta2)*100;
		//*end_pfrac = conta2;
		
	/*}else if(x<0){
		conta = ((x-1)-aux)*1000;
		if(conta )
		conta2 = floor(conta);//resolver arredondamento do -141 pra -142
		conta3 = (conta+conta2)*100;
	//}*/
	

	//if(conta3 >= 50)
	//	conta2 = conta2+1;
	//*end_pfrac = conta;

	/*printf(" %f",x);
	printf(" %f",conta);
	printf(" %d",conta2);
	printf(" %d",conta3);
	
	*end_pfrac = conta2;
	printf("aqui vai %d",*end_pfrac);*/

	/*
	if(x>0){
		*end_pfrac = x+*end_pint;
		printf(" %f",*end_pfrac);
	}else{
		*end_pfrac = x-*end_pint;
		printf(" %f",*end_pfrac);
	}
	printf("hdahda ");*/
	//decompoe(3.141592, NULL, NULL);
}