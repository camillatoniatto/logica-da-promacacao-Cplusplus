#include <stdio.h>
#include <stdlib.h>
struct funcionarios{
	char nome[100];
	float salario;
	float reajuste;
	float salariofinal;
};

struct funcionarios funcionario[2];

int main (){
	int i;
	float percentual[2];
	for (i=0;i<2;i++){
		printf("Nome do funcionario: ");
		fflush(stdin);
		gets(funcionario[i].nome);
		printf("Salario: ");
		scanf("%f",&funcionario[i].salario);
		printf("Percentual de reajuste: ");
		scanf("%f",&funcionario[i].reajuste);
		percentual[i]=funcionario[i].salario * (funcionario[i].reajuste/100);
		funcionario[i].salariofinal= funcionario[i].salario + percentual[i];
	}	
	for (i=0;i<2;i++){
		printf("\n\nFuncionario %s:\nSalario antigo R$ %.2f\nSalario com reajuste R$ %.2f",funcionario[i].nome,funcionario[i].salario,funcionario[i].salariofinal);
	}
	return 0;
}
