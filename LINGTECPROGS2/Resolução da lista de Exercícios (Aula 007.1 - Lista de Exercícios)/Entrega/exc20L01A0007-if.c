#include <stdio.h>
#include <locale.h>

//\n ||
//Exerc�cio 20:
//Contexto: Um programa deve verificar se um ano � bissexto ou n�o. Anos
//bissextos s�o divis�veis por 4, mas n�o por 100, a menos que sejam divis�veis
//por 400.

int ano;

main(){
	setlocale(LC_ALL, "Portuguese");

	printf("Informe um ano: ");
	scanf("%d", &ano);	
		
	if (ano%4 == 0 || ano%400 == 0){
	  printf("O ano � bissexto!");
	} else {
	  printf("\nN�o � um ano bissexto!");
	}
	return 0;
}
