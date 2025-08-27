#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	printf("Digite outro número: ");
	scanf("%d", &n2);
	
	if(n1 - n2 > 0 && n1 - n2 < 10){
		printf("A diferença entre os dois valores é positivo e menor que 10!");
	}else{
		printf("A diferença entre os dois valores pode não ser positivo ou não ser menor ou igual a 10!");
	}
}
