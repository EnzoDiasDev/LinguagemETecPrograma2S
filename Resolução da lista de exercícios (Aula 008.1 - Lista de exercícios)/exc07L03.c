#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n >= 30 && n <= 50){
		printf("O número está num intervalo entre 30 e 50!");
	}else{
		printf("O número não está entre o intervalo de 30 e 50!");
	}
}
