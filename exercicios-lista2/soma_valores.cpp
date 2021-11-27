//Ler 2 valores e somar os dois. Caso a soma seja maior que 10, mostrar a soma.

#include <stdio.h>
int v1, v2;
main (){
	printf("Valor 1: ");
	scanf("%d",&v1);
	printf("Valor 2: ");
	scanf("%d",&v2);
   	if(v1+v2 >= 10){
   		printf("Soma dos valores: %d",v1+v2);
	}
	else{
		printf("Soma dos valores abaixo de 10");
	}
}
