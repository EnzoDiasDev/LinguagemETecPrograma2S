#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite um n�mero: ");
	scanf("%d", &n2);
	
	if(n1 - n2 < 20){
		printf("A diferen�a entre dois n�meros � menor que 20!");
	}else{
		printf("A diferen�a entre dois n�meros n�o � menor que 20!");
	}
}
