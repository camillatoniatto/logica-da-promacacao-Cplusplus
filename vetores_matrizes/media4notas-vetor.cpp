#include <stdio.h>
#include <stdlib.h>
int nota [4];
int main(){
	int i;
	float media,soma;
	for(i=0;i<4;i++){
		scanf("%d",&nota[i]);
		soma=soma+nota[i]; //media+=nota[i]
	}
	media=soma/4;	
	for(i=0;i<4;i++){
		printf("Nota %d: %.2d\n",i+1,nota[i]);
	}
	printf("Sua media foi %.2f",media);
	
	
	if(media>=7){
		printf("\tAprovado!",media);
	}
	else{
		printf("\tReprovado!",media);
	}	
}

