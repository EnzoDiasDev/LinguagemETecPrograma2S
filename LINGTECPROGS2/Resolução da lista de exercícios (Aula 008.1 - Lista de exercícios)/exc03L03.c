#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n % 7 == 0){
		printf("O n�mero � multiplo de 7!");
	}else{
		printf("O n�mero n�o � multiplo de 7!");
	}
}
