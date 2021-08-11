#include <stdio.h>

int main() {
  float C, F;

  printf("Informe o valor de temperatura em Celsius: ");
  scanf("%f", &C);

  // Cálculo de transformação de unidade
  F = ((9 * C) + 160) / 5;

  printf("A temperatura %2.2f°C em Fahrenheit e %2.2f°F\n", C, F);

  return 0;
}