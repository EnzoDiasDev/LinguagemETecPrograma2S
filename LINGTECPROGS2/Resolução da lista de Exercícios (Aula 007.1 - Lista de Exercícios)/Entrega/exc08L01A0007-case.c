#include <stdio.h>
#include <locale.h>

//\n ||
//Exerc�cio 8:
//Contexto: Um programa de gerenciamento de viagens precisa calcular o custo
//total de uma viagem baseado na dist�ncia percorrida e no consumo m�dio de
//combust�vel do ve�culo. O pre�o da gasolina tamb�m � vari�vel. Escreva um
//programa que calcule o custo da viagem.




main(){
	
float precot, dist, consumom, gasol;
int veiculo; 
	
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe o seu ve�culo: ");
	printf("1-Carro, 2-Moto: ");
	scanf("%d", &veiculo);
	
	printf("Informe a dist�ncia percorrida em km: ");
	scanf("%f", &dist);

	printf("Informe o pre�o do litro da gasolina: ");
	scanf("%f", &gasol);
	
	switch (veiculo){
		case 1:
		consumom = 8;
		break;
		case 2:
		consumom = 32.5;
		break;	
	}
	
	precot = (dist / consumom) * gasol;

	printf("O custo total da viagem �: %f", precot );
	
	return 0;
}


