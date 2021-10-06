#include <stdio.h>
#include <stdlib.h>
float n1,n2;
int opcao;
void Hello(){
	printf("Insira um valor: ");
	scanf("%f",&n1);
	printf("Insira um valor: ");
	scanf("%f",&n2);
	printf("Escolha uma opcao:\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
	scanf("%d",&opcao);
}
float Soma(float n1, float n2){
	float resultado;
	resultado=n1+n2;
	printf("A soma dos valores eh %.1f",resultado);
	return resultado;
}
float Subtracao(float n1, float n2){
	float resultado;
	resultado=n1-n2;
	printf("A subtracao dos valores eh %.1f",resultado);
	return resultado;
}
float Multi(float n1, float n2){
	float resultado;
	resultado=n1*n2;
	printf("A multiplicacao dos valores eh %.1f",resultado);
	return resultado;
}
float Div(float n1, float n2){
	float resultado;
	resultado=n1/n2;
	printf("A divisao dos valores eh %.1f",resultado);
	return resultado;
}

int main (){
	Hello();
	switch(opcao){
		case 1:
			Soma(n1,n2);
		break;
		case 2:
			Subtracao(n1,n2);
		break;
		case 3:
			Multi(n1,n2);
		break;
		case 4:
			Div(n1,n2);
		break;
	}		
}

