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
		printf("A partir dos valores digitados é possivel concluir que é um triângulo válido!");
	}else{
		printf("A partir dos valores digitados é possivel concluir que não é um triângulo válido!");
	}
}
