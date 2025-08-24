#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Celsius, F;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &Celsius);
	
	F = (Celsius * 9 / 5) + 32;
	printf("A temperatura em Fahrenheit é: %f", F);
}
