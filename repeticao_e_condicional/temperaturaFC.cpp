#include <stdio.h>
#include <stdlib.h>
float F,C;
int opcao;
int main(){
	do{
		system("cls");
		printf("Digite:\n 1-Converter Celsius para Fahrenheit\n 2-Converter Fahrenheit para Celsius\n 3- Sair\n");
		scanf("%d",&opcao);
		switch (opcao){
			case 1:
				printf("Insira uma temperatura em Celsius: ");
				scanf("%f",&C);
				F = C * 1.8 + 32;
				printf("A temperatura em Fahrenheit eh %.1f F\n\n",F);
				system("pause");
			break;
			case 2:
				printf("Insira uma temperatura em Fahrenheit: ");
				scanf("%f",&F);
				C = (F-32) * 5/9;
				printf("A temperatura em Celsius eh %.1f C\n\n",C);
				system("pause");
			break;
			case 3:
				printf("Fim do programa.");
			break;
			default:
				printf("Digite um numero valido\n\n");
				system("pause");
		printf("------------------------\n\n");
		}
	}while (opcao!=3);
}

