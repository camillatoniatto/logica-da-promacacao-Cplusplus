/*Ler um n�mero inteiro e verificar se est� compreendido entre 20 e 80. 
Se tiver,  imprimir �parab�ns�, sen�o imprimir �tente outra vez� */

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
