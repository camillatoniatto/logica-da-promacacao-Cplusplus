/*Receber um número do teclado e informar se ele é divisível 
por 10, por 5, por 2 ou se  não é divisível por nenhum destes.*/

#include <stdio.h>
int numb;
main (){
	printf("Digite um valor: ");
	scanf("%d",&numb);
	if (numb %10==0){
		printf("Divisivel por 10\n");
	}
	else if(numb %5==0){
		printf("Divisivel por 5\n");
	}
	else if(numb %2==0){
		printf("Divisivel por 2\n");
	}
	else{
		printf("Valor nao eh divisivel por 10, 5 e 2\n");
	}
}
