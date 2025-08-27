#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	printf("Digite outro número: ");
	scanf("%d", &n2);
	 
	printf("Digite mais um número: ");
	scanf("%d", &n3);

	if(n1 * n2 * n3 == 150){
		printf("A multiplicação entre os três números é igual a 150!");
	}else{
		printf("A multiplicação entre os três números não é igual a 150!");
	}
}
