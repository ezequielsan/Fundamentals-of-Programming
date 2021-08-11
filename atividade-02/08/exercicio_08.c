/*Receber cordendas e imprimir se 1 se estiver e 0 se ñ*/
// 1 - Ler 2 numeros
// 2 - Verificar se estão no primeiro quadrante (+, +)
// 3 - Imprimir 1 ou 0

#include <stdio.h>

int main() {
  float x, y;
  int saida;

  printf("Informe as cordenadas no Formato x, y: ");
  scanf("%f, %f", &x, &y);

  saida = (x > 0 && y > 0) ? 1 : 0;

  printf("%d\n", saida);

  return  0;
}