#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n / 7 == 3){
		printf("A divis�o do valor digitado tem resultado 3!");
	}else{
		printf("A divis�o do valor digitado n�o tem resultado 3!");
	}
}
