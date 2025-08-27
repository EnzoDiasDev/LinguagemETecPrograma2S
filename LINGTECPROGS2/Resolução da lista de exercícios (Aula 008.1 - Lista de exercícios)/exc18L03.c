#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n % 4 == 0 && n % 6 != 0){
		printf("O valor digitado é divisível por 4 e não é por 6!");
	}else{
		printf("O valor digitado pode não ser divisível por 4 ou ser divisível por 6!");
	}
}
