#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n % 2 == 0 && n % 3 == 0){
		printf("O n�mero � divis�vel por 2 e 3 ao mesmo tempo!");
	}else{
		printf("O n�mero n�o � divis�vel por 2 e 3 ao mesmo tempo!");
	}
}
