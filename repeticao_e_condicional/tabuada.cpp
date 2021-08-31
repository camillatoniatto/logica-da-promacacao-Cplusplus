#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca

int valor,cont,result;
int main (){
	setlocale(LC_ALL,"Portuguese"); //precisa ter isso no codigo pra biblioteca funcionar...
	
	printf("Insira um numero de 1 a 10: ");
	scanf("%d",&valor);
	if(valor>=1 && valor<=10){ //valor que foi inserido
 		for(cont=1;cont<=10;cont++){ //tabuada
			result = cont*valor;
			printf("\t %d * %d = %d\n",valor,cont,result);
		}
	}else{
		printf("O número não está entre 1 e 10...\n");
	}

