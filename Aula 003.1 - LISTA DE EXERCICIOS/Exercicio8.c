#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Reais, Dolares;
	
	printf("Quantos reais você irá trocar? R$");
	scanf("%f", &Reais);
	
	Dolares = Reais / 5.46;
	printf("Você terá US$%f", Dolares);
}
