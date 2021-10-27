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
int opcao, valor, status, i, count=0, search=0;
bool find, cadastro=true;
const int A=1, F=2, C=3;

exibir(){
	printf("\nId: %d",projetos[i].id);
	printf("\nTitulo: %s",projetos[i].titulo);
	printf("\nDescrição: %s",projetos[i].descricao);
	printf("\nResponsável: %s",projetos[i].responsavel);
	printf("\nStatus: %d",projetos[i].status);
	printf("\n********************************\n");				
}

void validacao(){
	//do{
		scanf("%d",&valor);
		if (valor == 1 || 2 || 3){
			fflush(stdin);
			projetos[i].status = valor;
		}
		else{
			printf("Valor inválido");
		}	
	//}while(status != 1 || 2 || 3);
}

void cadastrar(){	
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
		printf("\nStatus: \t1- A FAZER 2- FAZENDO 3- CONCLUIDO ");
		//fflush(stdin);
		//scanf("%d",&projetos[i].status);
		//scanf("%d",&valor);
		validacao();
		
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
	if (projetos[0].id>0){
		for (i=0;i<count;i++){
			exibir();
		}
	}
	else {
		printf("\nNenhum projeto cadastrado");
	}	
	system("pause");
}

void getstatus(int s){
	system("cls");	
	if (projetos[0].id>0){
		for (i=0;i<count;i++){
			if (projetos[i].status==s){
				exibir();
				find=true;
				break;
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

int getid(){
	system("cls");
	printf("\nDigite o id do projeto: ");
	scanf("%d",&search);
	for(i=0; i<search; i++){
		if(projetos[i].id == search){
			exibir();
			find=true;
			break;
		}
		else{
			find=false;
		}			
	}
	if (find==false){
		printf("\nProjeto não encontrado.");	
	}
	system ("pause");
	return i;
}

void update(){	
	getid();
	for(i=0; i<search; i++){
		if(projetos[i].id == search){
			projetos[i].id=i+1;
			printf("\nDigite titulo do projeto: ");
			fflush(stdin);
			gets(projetos[i].titulo);
			printf("\nDescrição: ");
			fflush(stdin);
			gets(projetos[i].descricao);
			printf("\nResponsável: ");
			fflush(stdin);
			gets(projetos[i].responsavel);
			printf("\nStatus: \n1- A FAZER 2- FAZENDO 3- CONCLUIDO ");
			fflush(stdin);
			scanf("%d",&projetos[i].status);
			printf("\nUpdate realizado com sucesso.\n");
		}
	}
	system ("pause");				
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	do{
		system("cls");
		opcao=9;
		printf("\nSelecione uma opção... \n1- Cadastrar projetos \n2- Imprimir todos os projetos \n3- Buscar por projetos com status A FAZER \n4- Buscar por projetos com status FAZENDO \n5- Buscar por projetos com status CONCLUIDO \n6- Buscar projetos pelo ID \n7- Editar projeto \n0- Sair\n");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				cadastrar();
			break;
			case 2:
				getall();
			break;
			case 3:
				getstatus(A);
			break;
			case 4:
				getstatus(F);
			break;
			case 5:
				getstatus(C);
			break;
			case 6:
				getid();
			break;
			case 7:
				update();
			break;
			case 0:
				printf("\nTchau");
			break;
			default:
				printf("\nDigite uma opção válida...");
				system("pause");
		}
	}while(opcao!=0);
	return 0;
}
