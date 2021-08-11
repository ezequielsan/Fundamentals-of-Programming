#include <stdio.h>

int main() {
  double numberOne, numberTwo;

  printf("Informe dois numeros: \n");
  scanf("%lf%lf", &numberOne, &numberTwo);

  printf("%2.2lf + %2.2lf = %2.2lf\n", numberOne, numberTwo, numberOne + numberTwo);
  printf("%2.2lf - %2.2lf = %2.2lf\n", numberOne, numberTwo, numberOne - numberTwo);
  printf("%2.2lf * %2.2lf = %2.2lf\n", numberOne, numberTwo, numberOne * numberTwo);
  printf("%2.2lf / %2.2lf = %2.2lf\n", numberOne, numberTwo, numberOne / numberTwo);

  return 0;
}