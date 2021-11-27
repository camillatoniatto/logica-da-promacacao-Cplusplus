/*Escrever um programa, que leia valores inteiros até ser lido o valor -99. 
Quando isso  acontecer o programa deverá escrever a soma e a média dos valores lidos.*/

#include <stdio.h>
main() {
  int valor, conta, soma;
  float media = 0;
  conta = 0;
  soma = 0;
  printf("Informe um valor por linha, o valor -99 encerra:\n");
  while (1) {
    scanf("%d", &valor);
    if (valor == -99)
       break;
    conta = conta + 1;
    soma = soma + valor;
    media = soma / float(conta); 
  }

  printf("\n\n");
  printf("Soma dos valores: %d\n", soma);
  printf("Media dos valores: %.2f", media); 
}
