#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n % 4 == 0 && n % 6 != 0){
		printf("O valor digitado � divis�vel por 4 e n�o � por 6!");
	}else{
		printf("O valor digitado pode n�o ser divis�vel por 4 ou ser divis�vel por 6!");
	}
}
