#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float kmR, aluguel; 
	int taxaAd;
	int taxaBase=300;
	
	
	printf("Informe o quilom�tro rodado: ");
	scanf("%f", &kmR);
	
	if(kmR > 2500){
		taxaAd = 2;
	} else {
		taxaAd = 5;
	}
	
	aluguel= (kmR * taxaAd) + taxaBase;
	
	printf("\nO valor do aluguel a ser pago � R$%.2f", aluguel );
	
	return 0;
}
