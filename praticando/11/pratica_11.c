/* Faça um programa que some os números ímpares de 1 a 1000 e imprima a resposta */
#include <stdio.h>
#include <stdlib.h>

int somaImpares() {
  int count = 1, sum = 0;
  for(; count <= 1000; count += 2) {
    sum += count;
  }

  return sum;
}

int main() {
  int sum;

  sum = somaImpares();

  printf("A soma dos numeros impares de 1 a 1000 e %d", sum);

  getchar();
  return 0;
}