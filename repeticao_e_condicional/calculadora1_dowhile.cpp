#include <stdio.h>
#include <stdlib.h>

float val1,val2,resultado;
int opcao;

int main(){
//la�o de repeti��o
	do{
		system("cls"); //comando de limpar a tela
		
		printf("Digite o primeiro valor: ");
		scanf("%f",&val1);
		printf("Digite o segundo valor: ");
		scanf("%f",&val2);
		
		if(val1!=0 || val2!=0){ //ele coloca diferente de zero para poder abranger todos os numeros, diferentes de zero
			printf("Escolha qual opcao desejada\n 1- Soma\n 2- Subtracao\n 3- Multiplicacao\n 4- Divisao\n");
			scanf("%d",&opcao);
			
			if(opcao==1){
				resultado= val1 + val2;
			}else if(opcao==2){
				resultado= val1 - val2;
			}else if(opcao==3){
				resultado= val1 * val2;
			}else if(opcao==4){
				resultado= val1 / val2;
			}
			printf("O resultado da operacao sera %.2f\n",resultado);
			system("pause"); //comando para pausar e n�o voltar direto no inicio do la�o
		}
	}while(val1!=0 || val2!=0); //ele vai continuar repetindo o la�o se os valores foram diferentes de zero
return 0;
}

