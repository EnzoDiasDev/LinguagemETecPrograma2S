#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float L1, L2, L3;
	
	printf("Informe o lado 1 do tri�ngulo: ");
	scanf("%f", &L1);
	printf("Informe o lado 2 do tri�ngulo: ");
	scanf("%f", &L2);
	printf("Informe o lado 3 do tri�ngulo: ");
	scanf("%f", &L3);
	
	if(L1==L2 && L1==L3){
		printf("\nTri�ngulo equil�tero ");
	} else if(L1==L2 && L1!=L3){
		printf("\nTri�ngulo is�leceles ");
	} else {
		printf("\nTri�ngulo escaleno ");
	}
	
	return 0;
}
