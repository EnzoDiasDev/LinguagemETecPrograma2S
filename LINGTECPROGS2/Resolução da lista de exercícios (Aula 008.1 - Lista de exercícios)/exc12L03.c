#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite outro n�mero: ");
	scanf("%d", &n2);
	
	if(n1 - n2 > 0 && n1 - n2 < 10){
		printf("A diferen�a entre os dois valores � positivo e menor que 10!");
	}else{
		printf("A diferen�a entre os dois valores pode n�o ser positivo ou n�o ser menor ou igual a 10!");
	}
}
