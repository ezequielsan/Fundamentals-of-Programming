/*
 * 1. Continuidade do uso de ponteiros com tipos primitivos
 * 
*/

#include <stdio.h> 

void changeSum(int* pSum) {

  // Variável pSoma aponta para um endereço de memória da variável soma
  // *pSoma acessa o valor contido no endereço de memória para onde ela aponta
  *pSum = 0;
}

int main() {
  int* pSum;

  int sum = 10;
  sum = 20;

  printf("Endereco da variavel soma: %p \n", &sum);
  printf("O valor da variavel soma: %d\n", sum);

  pSum = &sum;

  printf("Endereco da variavel soma no ponteiro: %p\n", pSum);
  printf("O valor da variavel soma no ponteiro e: %d\n", *pSum);

  changeSum(pSum);
  // ou changeSum(&sum) os dois métodos são válidos

  printf("O endereco da variavel soma agora e %d\n", sum);

  return 0;
}