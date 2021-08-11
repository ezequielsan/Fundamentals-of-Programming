// 1 - Ler um numero
// 2 - Verificar se é par(x % 2 == 0) ou impar
// 3 - Imprimir se é par ou impar

#include <stdio.h>

int main() {
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if(num % 2 == 0) {
    printf("O numero %d e par.", num);
  }
  else {
    printf("O numero %d e impar.", num);
  }
  return 0;
}