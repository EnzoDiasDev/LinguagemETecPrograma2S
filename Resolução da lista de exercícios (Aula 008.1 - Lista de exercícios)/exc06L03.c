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

	if(n1 * n2 * n3 == 150){
		printf("A multiplica��o entre os tr�s n�meros � igual a 150!");
	}else{
		printf("A multiplica��o entre os tr�s n�meros n�o � igual a 150!");
	}
}
