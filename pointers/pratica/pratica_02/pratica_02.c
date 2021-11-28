/*
 * Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de 
 * duas variáveis inteiras, digamos min e max, e deposite nessas variáveis o valor 
 * de um elemento mínimo e o valor de um elemento máximo do vetor. Escreva também 
 * uma função main que use a função mm.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5


void func(int v[], int *min, int *max) {
  int i;
  
  *min = v[0];
  *max = v[0];
  for(i = 1; i < SIZE; i++) {
    if(v[i] > *max) *max = v[i];
    
    if(v[i] < *min) *min = v[i];
  }
}

void initArray(int v[]) {
  srand(time(NULL));

  int i;

  for(i = 0; i < SIZE; i++) {
    v[i] = rand() % 100;
    printf("%d ", v[i]);
  }
}

int main() {
  int v[SIZE];

  int min, max;

  initArray(v);

  int *p, *q;
  p = &min;
  q = &max;

  func(v, p, q);

  printf("\nO maior e menor elemento do array e respectivamente %d e %d\n", max, min);

  return 0;
}