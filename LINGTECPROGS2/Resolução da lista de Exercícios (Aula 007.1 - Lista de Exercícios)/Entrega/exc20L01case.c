#include <stdio.h>
#include <locale.h>

/* Contexto: Um programa deve verificar se um ano � bissexto ou n�o. Anos
bissextos s�o divis�veis por 4, mas n�o por 100, a menos que sejam divis�veis
por 400.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano; 
	
	printf("----------------------------------\n");
	printf("        O ANO � BISSEXTO?         \n");
	printf("----------------------------------\n");
	printf("Informe um ano: ");
	scanf("%d", &ano);
	printf("----------------------------------\n");	
	
	switch (ano % 4 == 0){
		case 1:
			printf("O ano %d � um ano bissexto!", ano); 
			
			break;	
		case 0:
			switch(ano % 100 == 0){
				case 1:
					printf("O ano %d n�o � um ano bissexto!", ano);
					
					break;  	
				case 0:
					switch(ano % 400 == 0){
						case 1:
							printf("O ano %d � um ano bissexto!", ano); 
							
							break;
						case 0:
							printf("O ano %d n�o � um ano bissexto!", ano); 
							
							break; 
					break;					
					}
			break;			
			}
			
	}
}
