#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n < 0 || n > 100){
		printf("O valor digitado � negativo ou � maior que 100!");
	}else{
		printf("O valor digitado pode n�o ser negativo ou n�o � maior que 100!");
	}
}
