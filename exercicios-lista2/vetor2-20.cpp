/*Preencher um vetor com os números pares do número 2 a 20.*/

#include<stdio.h>
main(){
	int arr[10],i, j=0;
	for(i=0;i<=9;i++){
		arr[i]=j+2;
		j=j+2;
	}
	for(i=0;i<=9;i++){
		printf(" %d ",arr[i]);
	}
}
