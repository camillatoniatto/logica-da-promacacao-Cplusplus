/*Receber um nome e imprimir as 4 primeiras letras do nome.*/

#include <stdio.h>
#include <string.h>
int main(){
    char nome[30];
 	int i;
    printf("Digite um nome:");
    gets(nome);
    for(i=0;i<=3;i++){
        printf("\%c",nome[i]);
	}
}
