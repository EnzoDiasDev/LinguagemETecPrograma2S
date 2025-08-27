#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);

	if(n > 0 && n % 2 == 0){
		printf("O número é positivo e par!");
	}else{
		printf("O número pode não ser positivo ou não ser par!");
	}
}
