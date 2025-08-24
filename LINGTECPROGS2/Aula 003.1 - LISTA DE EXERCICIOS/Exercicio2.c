#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, soma;
	float media;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	printf("Digite o terceiro número: ");
	scanf("%d", &n3);
	
	soma = n1 + n2 + n3;
	media = soma / 3;
	
	printf("A média entre %d, %d e %d é: %f", n1, n2, n3, media);
}
