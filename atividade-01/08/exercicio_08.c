#include <stdio.h>
#include <stdlib.h>

int main() {
  int numberOne = 0;
  int numberTwo = 0;

  printf("Informe dois numeros: \n");
  scanf("%d%d", &numberOne, &numberTwo);

  if (numberTwo < 0) {
    printf("%d - (%d) = %d", numberOne, numberTwo, numberOne - numberTwo);
    return 0;
  }

  printf("%d - %d = %d", numberOne, numberTwo, numberOne - numberTwo);

  return 0;
}