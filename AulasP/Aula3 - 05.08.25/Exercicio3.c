#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, soma;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &n1); //%d serve para guardar na memória, já o &n1 é para referenciar a variável lida.
	
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("A soma de %d e %d é: %d", n1, n2, soma);
	
}
