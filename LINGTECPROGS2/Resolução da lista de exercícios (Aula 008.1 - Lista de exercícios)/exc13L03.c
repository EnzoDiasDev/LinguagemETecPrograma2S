#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n > 5 && n < 15 || n > 30){
		printf("O valor est� entre 5 e 15 ou � maior que 30!");
	}else{
		printf("O valor n�o est� entre 5 e 15 ou n�o � maior que 30!");
	}
}
