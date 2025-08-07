#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2, SomaQuadrados;
	
	printf("Digite um número: ");
	scanf("%d", &N1);
	printf("Digite outro número: ");
	scanf("%d", &N2);
	
	SomaQuadrados = (N1 + N2) * (N1 + N2);
	printf("A soma dos quadrados de %d e %d é igual a %d", N1, N2, SomaQuadrados);
}
