/*Ler a idade de uma pessoa e informar a sua classe eleitoral.  
a. Não-eleitor (abaixo de 16 anos)  
b. Eleitor obrigatório (entre 18 e 65 anos)  
c. Eleitor facultativo (entre 16 e 18 e maior de 65anos)*/

#include <stdio.h>
int idade;
main (){
	printf("Digite sua idade: ");
	scanf("%d",&idade);
   	if(idade>18 && idade<=65){
        printf("Eleitor obrigatorio\n");
    }
    else if(idade>=16 && idade<=18 || idade>65){
        printf("Eleitor facultativo\n");
    }
    else
    {
        printf("Nao eleitor\n");
    }
}
