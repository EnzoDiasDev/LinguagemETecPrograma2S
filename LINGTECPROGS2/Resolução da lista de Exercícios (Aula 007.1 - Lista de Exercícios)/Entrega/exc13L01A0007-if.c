#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float pontos;
	
	printf("Informe seus pontos conquistados: ");
	scanf("%f", &pontos);
	
	if(pontos >= 1000){
		printf("\nNivel de premima��o alta!");
	} else if(pontos>=500){
		printf("\nN�vel de premia��o m�dio!");
	} else if(pontos<=0) {
		printf("\nPontos zerados! Se esforce mais ");
	} else {
		printf("\nN�vel de premia��o baixo!");
	}
	
	return 0;
}

