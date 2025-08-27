#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n < 0 || n > 100){
		printf("O valor digitado é negativo ou é maior que 100!");
	}else{
		printf("O valor digitado pode não ser negativo ou não é maior que 100!");
	}
}
