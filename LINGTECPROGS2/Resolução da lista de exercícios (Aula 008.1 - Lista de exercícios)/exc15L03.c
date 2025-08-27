#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	printf("Digite um número: ");
	scanf("%d", &n2);
	
	if(n1 != n2 && (n1 + n2) % 2 == 0){
		printf("Os valores são diferentes e a soma entre eles gera um valor par!");
	}else{
		printf("Os valores podem não ser diferentes e ou a soma entre eles pode não gerar um valor par!");
	}
}
