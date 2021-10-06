#include <stdio.h>
#include <stdlib.h>
struct alunos{
	char nome[100];
	float nota1;
	float nota2;
	float media;
};

struct alunos aluno[2];

int main (){
	int i;
	for (i=0;i<2;i++){
		printf("Digite nome: ");
		fflush(stdin);
		gets(aluno[i].nome);
		printf("Digite nota 1: ");
		scanf("%f",&aluno[i].nota1);
		printf("Digite nota 2: ");
		scanf("%f",&aluno[i].nota2);
		aluno[i].media=(aluno[i].nota1+aluno[i].nota2)/2;		
	}	
	for (i=0;i<2;i++){
		printf("A media do aluno %s eh: %.1f",aluno[i].nome,aluno[i].media);
	}
	return 0;
}

