/*Digite um nome , calcule e mostre quantas letras tem.*/

#include <stdio.h>
#include <string.h>
	main(){
	int tam;
	char nome[30];
	printf("Digite um nome: ");
	gets(nome);
	tam = strlen(nome);
	printf("Esse nome tem %d\ letras.\n",tam);
}
