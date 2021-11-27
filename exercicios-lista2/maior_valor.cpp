/*Fazer um programa que receba N valores no teclado e determine o maior. 
A condição  de término do programa é quando o usuário digitar zero*/

#include <stdio.h>
main() {
  int valor, maior;
  printf("Informe um valor por linha, o valor 0 encerra:\n");
  while (1) {
    scanf("%d", &valor);
    if (valor == 0)
    	break;
    if (maior < valor)
    	maior = valor;	
  }
  printf("\nO maior valor informado foi: %d", maior);
}
