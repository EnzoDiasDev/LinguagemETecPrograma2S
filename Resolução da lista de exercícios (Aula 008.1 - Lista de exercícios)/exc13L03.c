#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n > 5 && n < 15 || n > 30){
		printf("O valor está entre 5 e 15 ou é maior que 30!");
	}else{
		printf("O valor não está entre 5 e 15 ou não é maior que 30!");
	}
}
