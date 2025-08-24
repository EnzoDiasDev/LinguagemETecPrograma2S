#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float DistPercorrida, TempGasto, VelocidadeMedia;
	
	printf("Digite a distância percorrida: ");
	scanf("%f", &DistPercorrida);
	printf("Digite o tempo gasto em horas: ");
	scanf("%f", &TempGasto);
	
	VelocidadeMedia = DistPercorrida / TempGasto;
	printf("A sua velocidade média foi de %.2f Km/h", VelocidadeMedia);
}
