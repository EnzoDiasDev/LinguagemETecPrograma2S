#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int l1, l2, l3;
	
	printf("Digite o valor do primeiro lado: ");
	scanf("%d", &l1);
	
	printf("Digite o valor do segundo lado: ");
	scanf("%d", &l2);
	
	printf("Digite o valor do terceiro lado: ");
	scanf("%d", &l3);
	
	if(l1 + l2 > l3){
		printf("A partir dos valores digitados � possivel concluir que � um tri�ngulo v�lido!");
	}else{
		printf("A partir dos valores digitados � possivel concluir que n�o � um tri�ngulo v�lido!");
	}
}
