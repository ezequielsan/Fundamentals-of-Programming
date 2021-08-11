/* Determinar se um numero é divisivel por outro ou não*/
// 1 - Ler dois numeros
// 2 - Verificar se um numero e divisivel por outro (num1 % num2 == 0)
// 3 - Imprimir se é ou não divisivel

#include <stdio.h>

int main() {
  int num1, num2;

  printf("Informe dois numeros: \n");
  scanf("%d %d", &num1, &num2);

  if(num1 % num2 == 0) {
    printf("%d e divisivel por %d. ", num1, num2);
  }
  else {
    printf("%d nao e divisivel por %d. ", num1, num2);
  }
  return 0;
}