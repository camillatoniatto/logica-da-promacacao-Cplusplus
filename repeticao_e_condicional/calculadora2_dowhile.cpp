#include <stdio.h>
#include <stdlib.h>

float val1,val2,resultado;
int opcao;
//const int soma=1,sub=2,multi=3,divisao=4;

int main(){

	do{
		system("cls"); 
		
		printf("Digite o primeiro valor: ");
		scanf("%f",&val1);
		printf("Digite o segundo valor: ");
		scanf("%f",&val2);
		
		if(val1!=0 || val2!=0){ 
			printf("Escolha qual opcao desejada\n 1- Soma\n 2- Subtracao\n 3- Multiplicacao\n 4- Divisao\n");
			//printf("Escolha qual opcao desejada\n %d- Soma\n %d- Subtracao\n %d- Multiplicacao\n %d- Divisao\n",soma,sub,multi,divisao);
			scanf("%d",&opcao);
			switch(opcao){
				case 1://case soma:
					resultado= val1 + val2;
				break;
				case 2://case sub:
					resultado= val1 - val2;
				break;
				case 3://case multi:
					resultado= val1 * val2;
				break;
				case 4://case divisao:
					resultado= val1 / val2;
				break;
			}
			printf("O resultado da operacao sera %.2f\n",resultado);
			system("pause"); 
		}
	}while(val1!=0 || val2!=0); 
return 0;
}

