#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int N1, Dobro, Triplo;
	
	printf("Digite um número: ");
	scanf("%d", &N1);
	
	Dobro = N1 * 2;
	Triplo = N1 * 3;
	printf("O dobro de %d é %d, e o triplo é %d", N1, Dobro, Triplo);
}
