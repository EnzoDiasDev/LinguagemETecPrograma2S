#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);

	if(n > 0 && n % 2 == 0){
		printf("O n�mero � positivo e par!");
	}else{
		printf("O n�mero pode n�o ser positivo ou n�o ser par!");
	}
}
