#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n % 2 == 0 && n % 3 == 0){
		printf("O número é divisível por 2 e 3 ao mesmo tempo!");
	}else{
		printf("O número não é divisível por 2 e 3 ao mesmo tempo!");
	}
}
