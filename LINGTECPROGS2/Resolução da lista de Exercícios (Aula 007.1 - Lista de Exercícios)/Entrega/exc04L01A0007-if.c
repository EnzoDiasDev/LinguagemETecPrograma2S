#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    
    float num, raiz;
    
    printf("Informe um n�mero para verificar se � um quadrado perfeito:\n");
	scanf("%f", &num);
	
	num = num^2;
	raiz= numQuad^1/2;
	
	if(raiz^2==num){
		printf("O n�mero %.1f � um quadrado perfeito", num);
	} else {
		printf("O n�mero %.1f N�O � um quadrado perfeito", num);
	}
    return 0;
}

