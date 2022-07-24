#include <stdio.h>
/*
int cadastraUsuario (int *chave, int *senha){

	int chaveA, senhaA, n;

	chave = &chaveA;
    senha = &senhaA;
	
	
	printf("Digite a chave: ");
	scanf("%d", chave);
	printf("Digite a senha: ");
	scanf("%d", senha);
	

	printf("\nChave = %d\nSenha = %d", chaveA, senhaA);

	while(chaveA < 999 || chaveA > 99999){
		printf("\nDigite a chave: ");
		scanf("%d", &chave);
		printf("\nDigite a senha: ");
		scanf("%d", &senha);
		printf("\nChave = %d\nSenha = %d", chaveA, senhaA);
	}
	
	while(senhaA < 999 || senhaA > 99999){
		printf("\nDigite a chave: ");
		scanf("%d", &chave);
		printf("\nDigite a senha: ");
		scanf("%d", &senhaA);
		printf("\nChave = %d\nSenha = %d", chaveA, senhaA);
	}
	
	 if(chaveA >= 2000){
        n=3;
    }else{
        n=5;
    }
	printf("\n n = %d", n);
	return n;
}*/
int valorInvalido(int valor){
	if(valor < 1000 || valor > 99999)
		return 1;
	return 0;
}

int cadastraUsuario (int *chave, int *senha){
	do{
		scanf("%d %d", chave, senha);
	}while(valorInvalido(*chave) || valorInvalido(*senha));
	
	if(*chave > 2000)
		return 3;
	return 5;
}


int verificaSenha(int tentativa, int senha){
	printf("\nDigite a tentativa de senha: ");
	scanf("%d", &tentativa);

	//cadastraUsuario(0, &senha);
	
	//printf("\nChave8888 = %d\nSenha = %d", *chave, *senha);
	//senha = &senha; 
	//senha = ;
	if(tentativa == senha){return 1;}
	else{return 0;}
}

//Que eu fiz
/*int acessoConta(int senha, int n){
    int nAcerto = 0;
    //printf("\nsenha = %d\nSenha = %d", verificaSenha(senha,senha));
	//printf("\n%d",n);
    while(senha != verificaSenha(senha,senha) && n > 0){
        verificaSenha(senha,senha);
        n--;
		nAcerto++;
		printf("\n%d",n);
		printf("\n%d",nAcerto);
        break;
    }
	    if(senha != verificaSenha(senha,senha)){
        nAcerto++;
    }
    if(nAcerto <= n){
        return 1;
    }else{
        return 0;
    }
    if(senha == -999){
        
        n--;
    }
}*/

void banco(){
	
	int senha = 0; chave = 0;
	int n = cadastraUsuario(&chave, &senha);
	if(acessoConta(senha, n)==1){
		printf("Acesso realizado com sucesso\n");
		printf("%c",cartaoCredito(chave%100));
	}else{
		printf("Cliente bloqueado\n");
	}
}
int acessoConta(int senha, int n){
	int tentativa = 0, count = 0;
	int cheat = 0, sucesso_cheat = 0;
	
	do {
		scanf("%d", &tentativa);
		count++;
		
		if(tentativa == -999)
			cheat = 1;
		if(cheat == 1 && senha % tentativa == 0 && tentaiva > 10)
			sucesso_cheat = 1;
		
	}while((!verificaSenha(tentativa,senha)&& !sucesso_cheat && count < n);//sinal de exclamação é negação pra tornar falso
	//&& !(cheat == 1 && senha % tentativa == 0 && tentaiva > 10) )
	//while(tentativa != senha && count < n);
	
	if(tentativa == senha || sucesso_cheat)
		return 1;
	return 0;
}


int codigoVerificador(int chave){
	int digitos1 = 0;
	
	while(chave > 0){
		digitos1 += chave%2;
		chave = chave/2;
	}
	return digitos1%10;
	
}
//long int binario(const int chave1){
//	if(chave1 == 0) return 0;
	
//	return binario(chave1/2)*10 + chave1%2;
//} 

void main()
{
	int chaveAux, senhaAux;
	int *chave, *senha;
	chave = &chaveAux;//ponteiro de chave recebe o &endereço de chave
	senha = &senhaAux;
	//scanf("%d", &chave);
	//scanf("%d", &senha);
	//printf("\nChave = %d\nSenha = %d", chave, senha);
	cadastraUsuario(&chaveAux,&senhaAux);
	
	
	int a, b;
	printf("\nDigite N: ");
	//scanf("%d",b);
	b= 2;
	a=1010;
	printf("\nDigite a tentativa de senha ok: ");
	//scanf("%d",a);

	//acessoConta(a,b);
	
	/*int tentativa, senhas;
	int *senhasAux;
	//senhas = &senhasAux;
	printf("\nDigite a tentativa de senha: ");
	scanf("%d", &tentativa);*/
	
	//cadastraUsuario(0, &senhasAux);

	/*printf("\n%d",senhas);
	
		if (tentativa == senhas){
			printf("\n%d",1);
		}else{
			printf("\n%d",0);
	}
	*/
	int chave1 = 12;
	long int binario;
    
    binario = ((const int)chave1/2)*10 + (const int)chave1%2;
	printf("\n\naaaaaa%ld", binario);
	int score = 10;
	if(acessoConta(1010, 2)==0){
		printf("AAAAAAAAAAAAAAAAAAA");
		//printf(cartaoCredito(score));
	}else{printf("BBBBBBBBBBBB");}

	//verificaSenha(tentativa,senha);
	//printf("\nChave = %d\nSenha = %d", chaveAux, senhaAux);
}
