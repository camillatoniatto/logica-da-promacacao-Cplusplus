/*Ler nome, sexo e idade. Se sexo for masculino e 
idade maior que 18. Imprimir o nome  da pessoa e a 
palavra ALISTAMENTO. Caso contrário imprimir NÃO ESTA APTO.*/

#include <stdio.h>
char nome[15], sexo;
int idade;
main (){
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite seu sexo \nF-Feminino M-Masculino: ");
	scanf("%c",&sexo);
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	if (sexo == 'M' || sexo == 'm' && idade >=18){
		printf("%s - ALISTAMENTO",&nome);
	}
	else{
		printf("%s - NAO ESTA APTO",&nome);
	}
}
