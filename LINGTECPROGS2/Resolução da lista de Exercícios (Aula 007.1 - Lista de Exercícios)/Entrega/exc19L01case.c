#include <stdio.h>
#include <locale.h>

/* Contexto: Um sistema de previs�o do tempo atribui um valor num�rico para a
temperatura e um valor para a umidade. Escreva um programa que
determine a sensa��o t�rmica, levando em considera��o esses valores.
*/
float humidade, temp, indicec, Celcius, expo;
int tipo;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("------------------------------------------------------------------\n");
	printf("                        SENSA��O T�RMICA                          \n");
	printf("------------------------------------------------------------------\n");
	printf("informe a temperatura: ");
	scanf("%f", &temp);
	printf("------------------------------------------------------------------\n");
	printf("informe a humidade relativa em porcentagem: ");
	scanf("%f", &humidade);
	printf("------------------------------------------------------------------\n");
	printf("A Temperatura apresentada �: \n");
	printf("1. Celsius(C�); \n");
	printf("2. Fahrenheit(F); \n");
	printf("\nDigite aqui: ");
	scanf("%d", &tipo);
	printf("------------------------------------------------------------------\n");
	
	expo = (5417.7530 * (1.0/273.16 - 1.0/(temp + 273.16)));
	
	Celcius = temp + (0.5555 * (6.11 * expo - 10) * (0.5555) + 0.5555 * (21.94169 - 0.51567 * temp)) * (humidade / 100.0);
         
	switch(tipo == 1){
		case 1:
			indicec = Celcius;
			
			break;
		case 0:
			switch(tipo == 2){
				case 1:
					indicec = Celcius * 9/5 + 32;
					
					break;
				default:
					printf("Tipo de temperatura inv�lida!");
					
					break;
			}
	}
	
	switch(tipo == 1){
		case 1:
			printf("\nA sensa��o t�rmica de acordo com os dados apresentados �: %.2f�C", indicec);
			
			break;
		case 0:
			printf("\nA sensa��o t�rmica de acordo com os dados apresentados �: %.2f�F", indicec);
			
			break;
	}         
}
