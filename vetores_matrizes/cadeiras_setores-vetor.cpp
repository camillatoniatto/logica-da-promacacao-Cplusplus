#include <stdio.h>
#include <stdlib.h>
int numb[4][200];
int main(){
	int i,j,cadeira;
	for(i=0;i<4;i++){ //posição de linha
		cadeira=1; //reseta a variavel para ela entrar no for novamente
		for(j=0;j<200;j++){ //posição de coluna
			numb[i][j]=cadeira;
			cadeira++;
			printf("[%d]x[%d]=[%d]\n",i,j,numb[i][j]);
		}
 	}
}

