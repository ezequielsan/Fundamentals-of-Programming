#include <stdio.h>
#include <stdlib.h>

int main() {
  float numberOne;

  printf("Digite um numero: ");
  scanf("%f", &numberOne);

  printf("1/4 desse numero e %2.2f", numberOne / 4);
 
  return 0;
}