#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Largura, Altura, Comprimento, Volume;
	
	printf("Digite a largura do retângulo: ");
	scanf("%f", &Largura);
	printf("Digite a altura do retângulo: ");
	scanf("%f", &Altura);
	printf("Digite a altura do retângulo: ");
	scanf("%f", &Comprimento);
	
	Volume = Comprimento * Largura * Altura;
	printf("O volume do retângulo é %.4f", Volume);
}
