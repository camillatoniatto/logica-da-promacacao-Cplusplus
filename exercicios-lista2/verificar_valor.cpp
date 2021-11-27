/*Ler um número inteiro e verificar se está compreendido entre 20 e 80. 
Se tiver,  imprimir “parabéns”, senão imprimir “tente outra vez” */

#include <stdio.h>
int valor;
main (){
	printf("Digite um valor: ");
	scanf("%d",&valor);
	if (valor >= 20 && valor <= 80){
		printf("Parabens");
	}
	else{
		printf("Tente novamente");
	}
}
