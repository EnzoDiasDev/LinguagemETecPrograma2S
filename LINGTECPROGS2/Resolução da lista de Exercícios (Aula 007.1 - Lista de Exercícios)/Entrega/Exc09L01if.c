#include<stdio.h>
#include <locale.h>
 
main() {
 setlocale(LC_ALL, "Portuguese");
 
 int num, i, resultado = 0;
 
 printf("Digite um n�mero: ");
 scanf("%d", &num);
 
 if(num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13 || num == 17 || num == 23 || num == 31){
	printf("O n�mero %d � um n�mero primo.", num); 	
 }else{
 	printf("O n�mero %d n�o � um n�mero primo.", num);
 }
}
