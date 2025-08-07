#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float ValorHTrabalhada, Salario;
	int QHoras;
	
	printf("Quanto você ganha por hora trabalhada? \n");
	scanf("%f", &ValorHTrabalhada);
	printf("Quantas horas você trabalha por mês? \n");
	scanf("%d", &QHoras);
	
	Salario = ValorHTrabalhada * QHoras;
	printf("O valor do seu salário é de: %.2f", Salario);
}
