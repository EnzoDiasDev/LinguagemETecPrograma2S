#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite outro n�mero: ");
	scanf("%d", &n2);
	
	printf("Digite mais um n�mero: ");
	scanf("%d", &n3);
	
	if(n1 + n2 + n3 >= 50){
		printf("A soma entre os tr�s valores � igual a 50!");
	}else{
		printf("A soma entre os tr�s valores n�o � igual a 50!");
	}
}
