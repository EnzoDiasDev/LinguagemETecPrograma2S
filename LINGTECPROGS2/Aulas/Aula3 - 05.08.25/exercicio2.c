#include <stdio.h>
#include <locale.h>

main(){
	setlocate(LC_ALL, "Portuguese");
	printf("Caminhão!");
}
