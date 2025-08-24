#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int digiteValor(){
	int chute;
	
	printf("Digite um valor: ");
	scanf("%d", &chute);
	return chute;	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	int numero = rand() % 100 + 1;
	int chute = 0;
	
	printf("Tente acertar o número gerado!\n");
	printf("--------------------------------\n");
	
	
	// 1 tentativa
	chute = digiteValor();
	if(chute == numero){
		printf("Parabéns, você acertou o número!!!");
	}else{
		if(chute < numero){
			printf("Escreva novamente, valor menor que a resposta!\n");
		}else{
			printf("Escreva novamente, valor maior que a resposta!\n");
		}
		printf("---------------------------------------------------\n");
	}	
	
	// 2 tentativa
	chute = digiteValor();
	if(chute == numero){
		printf("Parabéns, você acertou o número!!!");
	}else{
		if(chute < numero){
			printf("Escreva novamente, valor menor que a resposta!\n");
		}else{
			printf("Escreva novamente, valor maior que a resposta!\n");
		}
		printf("---------------------------------------------------\n");
	}
	
	// 3 tentativa
	chute = digiteValor();
	if(chute == numero){
		printf("Parabéns, você acertou o número!!!");
	}else{
		if(chute < numero){
			printf("Escreva novamente, valor menor que a resposta!\n");
		}else{
			printf("Escreva novamente, valor maior que a resposta!\n");
		}
		printf("---------------------------------------------------\n");
	}
	
	// 4 tentativa
	chute = digiteValor();
	if(chute == numero){
		printf("Parabéns, você acertou o número!!!");
	}else{
		if(chute < numero){
			printf("Escreva novamente, valor menor que a resposta!\n");
		}else{
			printf("Escreva novamente, valor maior que a resposta!\n");
		}
		printf("---------------------------------------------------\n");
	}
	
	// 5 tentativa
	chute = digiteValor();
	if(chute == numero){
		printf("Parabéns, você acertou o número!!!");
	}else{
		if(chute < numero){
			printf("Escreva novamente, valor menor que a resposta!\n");
		}else{
			printf("Escreva novamente, valor maior que a resposta!\n");
		}
		printf("---------------------------------------------------\n");
	}
	
	// 6 tentativa
	chute = digiteValor();
	if(chute == numero){
		printf("Parabéns, você acertou o número!!!");
	}else{
		if(chute < numero){
			printf("Escreva novamente, valor menor que a resposta!\n");
		}else{
			printf("Escreva novamente, valor maior que a resposta!\n");
		}
		printf("---------------------------------------------------\n");
	}
	
	// 7 tentativa
	chute = digiteValor();
	if(chute == numero){
		printf("Parabéns, você acertou o número!!!");
	}else{
		if(chute < numero){
			printf("Escreva novamente, valor menor que a resposta!\n");
		}else{
			printf("Escreva novamente, valor maior que a resposta!\n");
		}
		printf("---------------------------------------------------\n");
	}
	
	// 8 tentativa
	chute = digiteValor();
	if(chute == numero){
		printf("Parabéns, você acertou o número!!!");
	}else{
		if(chute < numero){
			printf("Escreva novamente, valor menor que a resposta!\n");
		}else{
			printf("Escreva novamente, valor maior que a resposta!\n");
		}
		printf("---------------------------------------------------\n");
	}
	
	// 9 tentativa
	chute = digiteValor();
	if(chute == numero){
		printf("Parabéns, você acertou o número!!!");
	}else{
		if(chute < numero){
			printf("Escreva novamente, valor menor que a resposta!\n");
		}else{
			printf("Escreva novamente, valor maior que a resposta!\n");
		}
		printf("---------------------------------------------------\n");
	}
	
	// 10 tentativa
	chute = digiteValor();
	if(chute == numero){
		printf("Parabéns, você acertou o número!!!");
	}else{
		printf("Acabaram as tentativas!");
	}	
	
}
