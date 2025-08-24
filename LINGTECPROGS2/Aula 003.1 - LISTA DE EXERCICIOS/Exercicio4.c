#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Raio, Area;
	
	printf("Digite o raio do círculo: ");
	scanf("%f", &Raio);
	
	Area = 3.14 * (Raio * Raio);
	printf("A área total do cículo é: %f", Area);
}
