#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite um n�mero: ");
	scanf("%d", &n2);
	
	if((n1 + n2) > 100){
		printf("A soma entre os dois n�meros � maior que 100");		
	}else{
		printf("A soma entre os dois n�meros n�o � maior que 100");
	}
	
	
}
