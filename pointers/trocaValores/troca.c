#include <stdio.h>

void troca(int *pA, int *pB) {
  int tmp;

  tmp = *pA;
  *pA = *pB;
  *pB = tmp;
}

int main() {
  int a, b;
  a = 10, b = 5;

  printf("a = %d, address = %p\n", a, &a);
  printf("b = %d, address = %p\n", b, &b);
  
  printf("\n");

  int *pA, *pB;
  pA = &a;
  pB = &b;

  troca(pA, pB);
  
  printf("a = %d, address = %p\n", a, pA);
  printf("b = %d, address = %p\n", b, pB);

  return 0;
}