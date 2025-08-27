#include <stdio.h>
#include <locale.h>

/* Contexto: Uma calculadora de empr�stimos deve calcular o valor das
presta��es mensais, levando em considera��o o valor do empr�stimo, a taxa
de juros e o n�mero de parcelas.
*/

float juros, valor, preco;
int parcelas, banco;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("---------------------------------------------------------\n");
	printf("              CALCULADORA DE EMPR�STIMO!!!               \n");
	printf("---------------------------------------------------------\n");
	
	printf("INFORME O BANCO: \n"); 
	printf("1. CAIXA ECONOMICA FEDERAL; \n");
	printf("2. BRADESCO; \n");
	printf("---------------------------------------------------------\n");
	printf("Digite aqui: ");
	scanf("%f", &banco);
	printf("---------------------------------------------------------\n");
	printf("Informe o valor do empr�stimo: R$ ");
	scanf("%f", &valor);
	printf("---------------------------------------------------------\n");
	printf("Informe a quantidade de parcelas do empr�stimo: ");
	scanf("%d", &parcelas);
	printf("---------------------------------------------------------\n");
	
	switch(banco){
		case 1:
			juros = 1.49 / 100;
			
			break;
		case 2:
			juros = 2.91 / 100;
			
			break;
	}
	
	preco = (valor + (juros * valor)) / parcelas;
		
	printf("O valor das presta��es ser�: %.2f", preco);
}	
