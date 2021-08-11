/* Determinar o maior valor entre dois numeros*/
// 1 - Ler dois numeros
// 2 - Deterimaar o maior
// 3 - imprimir o maior numero

#include <stdio.h>

int main() {
  float num1, num2, res;

  printf("Informe dois numeros (reais): \n");
  scanf("%f %f", &num1, &num2);

  res = (num1 > num2) ? num1 : num2;

  printf("O maior numero e %.1f\n", res);

  return 0;
}