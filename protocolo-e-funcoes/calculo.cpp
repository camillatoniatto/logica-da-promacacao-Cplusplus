#include <stdio.h>
#include <stdlib.h>
calcular(int x){
	int calculo = x*2;
	return calculo;	
}
int main(){
	int numero, calculo;
	scanf("%d",&numero);
	//calcular(numero);
	calculo=calcular(numero);
	printf("%d",calculo);
	return 0;
}

