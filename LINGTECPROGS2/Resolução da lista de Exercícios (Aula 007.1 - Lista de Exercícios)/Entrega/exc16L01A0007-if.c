#include <stdio.h>
#include <locale.h>

//Exerc�cio 16:
//Contexto: Uma ag�ncia de viagens oferece pacotes de viagem com descontos
//para grupos grandes. Escreva um programa que calcule o custo total de um
//pacote de viagem, considerando o n�mero de pessoas e as op��es escolhidas.

int pacote1, pacote2, pacote;
int grupo, valor1, valor2; 

pacote1 = 800;
pacote2 = 1500;
main(){
	setlocale(LC_ALL, "Portuguese");
	printf("pacote 1: assento executivo, menu executivo e cadeira cama. \n");
	printf("pacote 2: assento de 1� classe, menu 1� classe, menu de vinhos, assistente pessoas, cadeira cama. \n\n");
	
	printf("informe a quantidade de membros do grupo: ");
	scanf("%d", &grupo);
	
	printf("informe qual pacote de viagem ser� escolhido: ");
	scanf("%d", &pacote);
	 if (pacote == 1 && grupo < 10) {
	   valor1 = pacote1 * grupo;
	} else if (pacote == 1 && grupo >= 10 && grupo <= 20) {
	   valor1 = (pacote1 * grupo) * 0.95;
	} else if (pacote == 1 && grupo > 20) {
	   valor1 = (pacote1 * grupo) * 0.90;	
	} 
	 if (pacote == 2 && grupo < 10) {
	   valor2 = pacote2 * grupo;
	} else if (pacote == 2 && grupo >= 10 && grupo <= 20) {
	   valor2 = (pacote2 * grupo) * 0.95;
	} else if (pacote == 2 && grupo > 20) {
	   valor2 = (pacote2 * grupo) * 0.90;	
	}
	 if (pacote == 1) {
	   printf("\nO valor da viagem j� com os descontos aplicados ser�: %d", valor1); 
	}  else {
	   printf("\nO valor da viagem j� com os descontos aplicados ser�: %d", valor2);   
	} 
}
