#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n / 7 == 3){
		printf("A divisão do valor digitado tem resultado 3!");
	}else{
		printf("A divisão do valor digitado não tem resultado 3!");
	}
}
