#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n / 5 > 10){
		printf("A divis�o do n�mero por 5 resulta em um valor maior que 10!");
	}else{
		printf("A divis�o do n�mero por 5 n�o resulta em um valor maior que 10!");
	}
}
