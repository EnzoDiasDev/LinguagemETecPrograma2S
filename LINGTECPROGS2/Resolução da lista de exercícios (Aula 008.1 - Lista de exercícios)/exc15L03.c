#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite um n�mero: ");
	scanf("%d", &n2);
	
	if(n1 != n2 && (n1 + n2) % 2 == 0){
		printf("Os valores s�o diferentes e a soma entre eles gera um valor par!");
	}else{
		printf("Os valores podem n�o ser diferentes e ou a soma entre eles pode n�o gerar um valor par!");
	}
}
