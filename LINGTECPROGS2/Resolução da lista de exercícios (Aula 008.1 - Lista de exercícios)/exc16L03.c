#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n % 2 != 0 && n * 3 != 0){
		printf("O valor digitado � �mpar e n�o � multiplo de 3!");
	}else{
		printf("O valor digitado pode n�o ser �mpar ou ele pode ser multiplo de 3!");
	}
}
