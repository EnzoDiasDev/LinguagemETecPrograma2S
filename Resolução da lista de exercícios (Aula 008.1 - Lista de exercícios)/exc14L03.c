#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n > 0 || n * n > 5){
		printf("O valor � positivo ou sua raiz quadrada � maior que 5!");
	}else{
		printf("O valor pode n�o ser positivo ou sua raiz quadrada n�o � maior que 5!");
	}
}
