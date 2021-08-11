/* Faça um programa para calcular o somatório de 1 até n */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, count = 1, soma = 0;

  printf("Digite um numero n: ");
  scanf("%d", &n);

  while(count <= n) {
    soma += count;
    count++;
  }

  printf("A soma de 1 até %d e %d", n, soma);

  getchar();
  return 0;
}