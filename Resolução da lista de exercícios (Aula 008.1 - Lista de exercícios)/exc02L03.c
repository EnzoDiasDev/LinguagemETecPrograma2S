#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n % 2 != 0){
		printf("O n�mero � �mpar!");
	}else{
		printf("O n�mero � par!");
	}
}
