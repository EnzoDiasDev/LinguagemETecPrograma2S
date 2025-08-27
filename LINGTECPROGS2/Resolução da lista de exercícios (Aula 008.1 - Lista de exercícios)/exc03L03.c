#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n % 7 == 0){
		printf("O número é multiplo de 7!");
	}else{
		printf("O número não é multiplo de 7!");
	}
}
