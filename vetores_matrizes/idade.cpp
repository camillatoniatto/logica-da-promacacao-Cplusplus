#include <stdio.h>
#include <stdlib.h>
int idade [4],i;
int main (){
	for (i=0;i<4;i++){
		printf("Insira uma idade: ");
		scanf("%d",&idade[i]);
	}	
	for (i=0;i<4;i++){
		if(idade[i]>=18){
			printf("\n%d anos: Maior de idade",idade[i]);
		}
		else{
			printf("\n%d anos: Menor de idade",idade[i]);	
		}
	}
}

