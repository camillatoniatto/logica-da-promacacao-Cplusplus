/*Solicitar um n�mero entre 1 e 4. Se a pessoas digitar um n�mero diferente, 
mostrar a  mensagem "entrada inv�lida" e solicitar o n�mero novamente. 
Se digitar correto  mostrar o n�mero digitado. */

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
