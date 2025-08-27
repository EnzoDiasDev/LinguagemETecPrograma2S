#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	printf("Digite um número: ");
	scanf("%d", &n2);
	
	if(n1 - n2 < 20){
		printf("A diferença entre dois números é menor que 20!");
	}else{
		printf("A diferença entre dois números não é menor que 20!");
	}
}
