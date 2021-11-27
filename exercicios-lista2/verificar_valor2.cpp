/*Solicitar um número entre 1 e 4. Se a pessoas digitar um número diferente, 
mostrar a  mensagem "entrada inválida" e solicitar o número novamente. 
Se digitar correto  mostrar o número digitado. */

#include <stdio.h>
int valor;
main (){
	printf("Digite um valor entre 1 e 4: ");
	scanf("%d",&valor);
	if (valor >= 1 && valor <= 4){
		printf("%d",valor);
	}
	else{
		printf("Entrada invalida");
	}
}
