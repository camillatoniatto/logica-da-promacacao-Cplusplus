/*Apresentar o total da soma obtida dos 20 primeiros números inteiros*/

#include <stdio.h>
main() {
  int valor[20], soma, i;
  soma = 0;
  for(i=0; i<20; i++) {
  	printf("Informe um valor: ");
    scanf("%d", &valor[i]);
    soma = soma + valor[i];
  }
  printf("\n");
  printf("Soma dos valores: %d\n", soma);
}
