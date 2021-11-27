//Receber 4 números e imprimi-los em ordem crescente.

#include <stdio.h>
int numb[4],i,x,aux;
main (){
	for (i=0; i<4; i++){
		printf("Digite um valor: ");
		scanf("%d",&numb[i]);
	}
	
	for(i=0; i<4; i++){
        for(x=i; x<4; x++){
            if(numb[i] > numb[x]){
            	aux = numb[i];
                numb[x] = numb[x];
                numb[x] = aux;
            }
        }
	}
		
	for(x=0; x<4; x++){
		printf("\n%d",numb[x]);
    }	 
}
