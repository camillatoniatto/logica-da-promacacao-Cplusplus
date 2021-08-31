#include <stdio.h>
#include <stdlib.h>
float nota[4][2],media[4];
int i,j,soma;
int main(){
	for(i=0;i<4;i++){ //alunos
		soma=0; //zerar soma para entrar no laço
		for(j=0;j<2;j++){ //notas
			printf("Digite a nota %d do aluno %d: ",j+1,i+1);
			scanf("%f",&nota[i][j]);
			soma+=nota[i][j];
		}
		media[i]=soma/2;
	}
	for(i=0;i<4;i++){ //laço para aprovado ou reprovado
		if(media[i]>=7){
			printf("Aluno %d - Media %.1f - Aprovado!\n",i+1,media[i]);
		}
		else{
			printf("Aluno %d - Media %.1f - Reprovado!\n",i+1,media[i]);
		}		
	}
}

