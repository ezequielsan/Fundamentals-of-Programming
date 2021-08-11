// OBS: Estou fazendo em outro arquivo o algoritmo em pseudocódigo para organizar melhor minhas ideias
#include <stdio.h>

int calculoPow(int base, int exp) {
  int result = 1;

  for(int i = 1; i <= exp; i++){
    result *= base;
  }

  return result;
}

int main() {
  int base = 0, exp = 0, resultPow;

  printf("Informe a base e expoente da potencia: ");
  scanf("%d %d", &base, &exp);

  resultPow = calculoPow(base, exp);

  printf("%d elevado a %d e igual a %d", base, exp, resultPow);

  getchar();
  return 0;
}