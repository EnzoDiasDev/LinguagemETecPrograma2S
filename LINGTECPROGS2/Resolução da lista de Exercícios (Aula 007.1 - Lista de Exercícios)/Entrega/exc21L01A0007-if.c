#include <stdio.h>
#include <locale.h>

//\n ||
//Exerc�cio 21:
//Contexto: Uma calculadora de empr�stimos deve calcular o valor das
//presta��es mensais, levando em considera��o o valor do empr�stimo, a taxa
//de juros e o n�mero de parcelas.

float juros, valor, parcelas, banco, preco;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe o banco 1-Caixa Econ�mica federal, 2- Bradesco: ");
	scanf("%f", &banco);
	
	printf("Informe o valor do empr�stimo: ");
	scanf("%f", &valor);
	
	printf("Informe a quantidade de parcelas do empr�stimo: ");
	scanf("%f", &parcelas);
	
	if (banco == 1) {
		juros = 1.49 / 100;
	} else { 
		juros = 2,91 / 100;
	}
	preco = (valor + (juros * valor)) / parcelas;
		
	printf("O valor das presta��es ser�: %.2f", preco);
	
	return 0;
}	
