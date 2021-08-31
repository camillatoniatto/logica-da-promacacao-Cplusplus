#include <stdio.h>
#include <stdlib.h>
float nota1[4],nota2[4],media[4];
int i;
int main(){
	for(i=0;i<4;i++){
		printf("Digite a nota 1 do aluno %d: ",i+1);
		scanf("%f",&nota1[i]);
		printf("Digite a nota 2 do aluno %d: ",i+1);
		scanf("%f",&nota2[i]);
		media[i]=nota1[i]+nota2[i];
	}
	for(i=0;i<4;i++){
		printf("Media do aluno %d: %.f\n",i+1,media[i]/2);
		if((media[i]/2)>=7){
			printf("Aluno aprovado!\n\n",media[i]/2);
		}
		else{
			printf("Aluno reprovado!\n\n",media[i]/2);
		}	
	}
}

