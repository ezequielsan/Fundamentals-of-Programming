/* Utilizando recursão para calcular o mdc utilizando o algoritmo de euclides */

#include <stdio.h>

/* Protótipos */
int maxDivisorComum(int a, int b);

int main() {
  int a, b, mdc;

  printf("Informe os dois numeros a calcular o mdc: ");
  scanf("%d %d", &a, &b);

  mdc = maxDivisorComum(a, b);

  printf("mdc(%d, %d) = %d\n", a, b, mdc);

  return 0;
}

int maxDivisorComum(int a, int b) {
  int r;
  r = a % b;  

  if(r == 0) 
    return b;
  
  else 
    maxDivisorComum(b, r); 
}