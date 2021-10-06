#include <stdio.h>
#include <stdlib.h>
char nome[2][20];
float notas[2][2], media[2], soma;
int i,j;
int main (){
	for(i=0;i<2;i++){
		printf("Nome do aluno %d: ",i+1);
		fflush(stdin); //limpa cache do gets
		gets(nome[i]);				
		soma=0;
