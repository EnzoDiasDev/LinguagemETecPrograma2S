#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	float F, C;
	
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &F);
	
	C = (F-32)*5/9;
	printf("A temperatura em Cº será: %.2f", C);
	
}
