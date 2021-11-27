/*Receber um nome no teclado e imprimir quantas letras "A" tem o nome. */

#include<stdio.h>
#include<string.h>
main(){
	char nome[30];
	int x,t, i=0;
	printf("Digite um nome: ");
	gets(nome);
	t=strlen(nome);
	for (x=1; x <= t-1; x++){
		if (nome[x] == 'a' || nome[x] == 'A')
		i++;
	}
	printf("\n O nome %s ",(nome));
	printf("tem %d letra a.",i);
}
