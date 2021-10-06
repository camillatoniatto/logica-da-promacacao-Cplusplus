#include <stdio.h>
#include <stdlib.h>
//declara que a função existe quando ela é escrita abaixo do main
float calculo_media(float n1, float n2);

int main (){
	float n1,n2,media;
	printf("Digite a nota 1: ");
	scanf("%f",&n1);
	printf("Digite a nota 2: ");
	scanf("%f",&n2);
	media=calculo_media(n1,n2);
	printf("\nA media do aluno eh: %.1f",media);
	return 0;
}

float calculo_media(float n1, float n2){
	float media=(n1+n2)/2;
	return media;
}

