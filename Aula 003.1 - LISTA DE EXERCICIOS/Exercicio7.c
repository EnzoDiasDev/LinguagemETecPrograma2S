#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int N1, Antes, Depois;
	
	printf("Digite um número: ");
	scanf("%d", &N1);
	
	Antes = N1 - 1;
	Depois = N1 + 1;
	printf("O antecessor de %d é %d, e o sucessor é %d", N1, Antes, Depois);
}
