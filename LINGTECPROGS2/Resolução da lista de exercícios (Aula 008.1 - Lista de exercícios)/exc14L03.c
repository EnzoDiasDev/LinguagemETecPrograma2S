#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n > 0 || n * n > 5){
		printf("O valor é positivo ou sua raiz quadrada é maior que 5!");
	}else{
		printf("O valor pode não ser positivo ou sua raiz quadrada não é maior que 5!");
	}
}
