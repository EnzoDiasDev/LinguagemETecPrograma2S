#include <stdio.h>
#include <locale.h>

//\n ||
//Exerc�cio 19:
//Contexto: Um sistema de previs�o do tempo atribui um valor num�rico para a
//temperatura e um valor para a umidade. Escreva um programa que
//determine a sensa��o t�rmica, levando em considera��o esses valores.

float humidade, temp, indicec, tipo, Celcius, exp;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("informe a temperatuda: ");
	scanf("%f", &temp);
	
	printf("informe a humidade relativa em porcentagem: ");
	scanf("%f", &humidade);
	
	printf("A temperatura apresentada � em 1-Celcius(C) ou 2-Fahrenheit(F)? ");
	scanf("%f", &tipo);
	
	exp = (5417.7530 * (1.0/273.16 - 1.0/(temp + 273.16)));
	
	Celcius = temp + (0.5555 * (6.11 * exp - 10) * (0.5555)
         + 0.5555 * (21.94169 - 0.51567 * temp)) * (humidade / 100.0);
         
	if (tipo == 1 ){
	  indicec = Celcius;
	} else if(tipo == 2 ) {
	  indicec = Celcius * 9/5 + 32;
	} else {
	  printf("Tipo de temperatura inv�lido!");  
	}
	
	if (tipo == 1 ) {
	 printf("\nA sensa��o t�rmica de acordo com os dados apresentados �: %.2f�C", indicec);
	} else if (tipo == 2) {
	 printf("\nA sensa��o t�rmica de acordo com os dados apresentados �: %.2f�F", indicec);
	}
	return 0;
}


