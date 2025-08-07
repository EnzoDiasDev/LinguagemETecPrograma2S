#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int AnoAtual, AnoNasc, Idade;
	
	printf("Qual é o ano atual? \n");
	scanf("%d", &AnoAtual);
	printf("Em que ano você nasceu? \n");
	scanf("%d", &AnoNasc);
	
	Idade = AnoAtual - AnoNasc;
	printf("Você tem %d anos", Idade);
}
