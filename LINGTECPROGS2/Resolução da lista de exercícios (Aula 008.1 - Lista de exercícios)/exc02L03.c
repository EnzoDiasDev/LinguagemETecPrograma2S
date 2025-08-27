#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n % 2 != 0){
		printf("O número é ímpar!");
	}else{
		printf("O número é par!");
	}
}
