#include <stdio.h>

// Protótipos
double fatorial(int n);

int main() {
  int n;

  printf("Informe o valor de n: ");
  scanf("%d", &n);

  double f = fatorial(n);

  printf("!%d = %.0f\n", n, f);
  
  return 0;
}

double fatorial(int n) { 
  double result = 1;

  while(n > 1) { 
    result *= n; 
    n--;
  }

  return result;
}