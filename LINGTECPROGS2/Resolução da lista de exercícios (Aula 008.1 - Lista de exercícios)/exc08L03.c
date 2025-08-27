#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n / 5 > 10){
		printf("A divisão do número por 5 resulta em um valor maior que 10!");
	}else{
		printf("A divisão do número por 5 não resulta em um valor maior que 10!");
	}
}
