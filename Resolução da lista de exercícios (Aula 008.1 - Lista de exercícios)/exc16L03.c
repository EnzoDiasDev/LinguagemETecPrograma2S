#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n % 2 != 0 && n * 3 != 0){
		printf("O valor digitado é ímpar e não é multiplo de 3!");
	}else{
		printf("O valor digitado pode não ser ímpar ou ele pode ser multiplo de 3!");
	}
}
