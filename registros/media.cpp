#include <stdio.h>
#include <stdlib.h>
struct alunos{
	char nome[100];
	float nota1;
	float nota2;
	float media;
};

struct aluno aluno;

int main (){
	printf("Digite nome: ");
	gets(aluno.nome);
	printf("Digite nota 1: ");
	scanf("%f",&aluno.nota1);
	printf("Digite nota 2: ");
	scanf("%f",&aluno.nota2);
	a.media=(aluno.nota1+aluno.nota2)/2;
	printf("A media do aluno %s eh: %.1f",aluno.nome,aluno.media);
	return 0;
}

