#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

struct projeto{
	int id;
	char titulo[99];
	char descricao[99];
	char responsavel[99];
	int status;
};
struct projeto projetos[200];
int opcao, count=0;
const int A=1, F=2, C=3;

void cadastrar(){	
	bool cadastro=true;
	char continuar;
	do{
		system("cls");
		projetos[count].id=count+1;
		printf("\nDigite titulo do projeto: ");
		fflush(stdin);
		gets(projetos[count].titulo);
		printf("\nDescrição: ");
		fflush(stdin);
		gets(projetos[count].descricao);
		printf("\nResponsável: ");
		fflush(stdin);
		gets(projetos[count].responsavel);
		printf("\nStatus: ");
		fflush(stdin);
		scanf("%d",&projetos[count].status);
		printf("Cadastro realizado com sucesso! Deseja realizar um novo cadastro?\nS- Sim N- Não\n");
		fflush(stdin);
		scanf("%c",&continuar);
		
		if((continuar=='N') || (continuar=='n')){
			cadastro=false;
		}
		count++;
	}while(cadastro==true);
}

void getall(){
	system("cls");
	int i;
	if (projetos[0].id>0){
		for (i=0;i<count;i++){
			printf("\nId: %d",projetos[i].id);
			printf("\nTitulo: %s",projetos[i].titulo);
			printf("\nDescrição: %s",projetos[i].descricao);
			printf("\nResponsável: %s",projetos[i].responsavel);
			printf("\nStatus: %d",projetos[i].status);
			printf("\n********************************\n");
		}
	}
	else {
		printf("\nNenhum projeto cadastrado");
	}	
	system("pause");
}

void getstatus(int s){
	system("cls");
	int i;
	bool find;
	if (projetos[0].id>0){
		for (i=0;i<count;i++){
			if (projetos[i].status==s){
				printf("\nId: %d",projetos[i].id);
				printf("\nTitulo: %s",projetos[i].titulo);
				printf("\nDescrição: %s",projetos[i].descricao);
				printf("\nResponsável: %s",projetos[i].responsavel);
				printf("\nStatus: %d",projetos[i].status);
				printf("\n********************************\n");
				find=true;
			}
			else{
				find=false;
			}				
		}
		if (find==false){
			printf("\nNão existe projeto com esse status");	
		}
	}
	else{
		printf("\nNenhum projeto cadastrado");
	}	
	system("pause");
}

getid(){
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	do{
		system("cls");
		opcao=9;
		printf("\nSelecione uma opção... \n1- Cadastrar projetos \n2- Imprimir todos os projetos \n3- Buscar por projetos com status A FAZER \n4- Buscar por projetos com status FAZENDO \n5- Buscar por projetos com status CONCLUIDO \n6- Buscar projetos pelo id \n0- Sair\n");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				cadastrar();
			break;
			case 2:
				getall();
			break;
			case 3:
				getstatus(A); //a fazer
			break;
			case 4:
				getstatus(F); //fazendo
			break;
			case 5:
				getstatus(C); //concluido
			break;
			case 6:
				
			break;
			default:
				printf("\nDigite uma opção válida...");
				system("pause");
		}
	}while(opcao!=0);
	return 0;
}










