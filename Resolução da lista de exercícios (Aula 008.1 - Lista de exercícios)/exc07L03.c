#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n >= 30 && n <= 50){
		printf("O n�mero est� num intervalo entre 30 e 50!");
	}else{
		printf("O n�mero n�o est� entre o intervalo de 30 e 50!");
	}
}
