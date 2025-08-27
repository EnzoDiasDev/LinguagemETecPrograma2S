#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n < 0 || n >= 10 && n <= 20){
		printf("O valor digitado é menor que 0 ou está em um intervalo entre 10 e 20!");
	}else{
		printf("O valor digitado pode ser maior que 0 ou não está em um intervalo entre 10 e 20!");
	}
}
