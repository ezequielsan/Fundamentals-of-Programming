#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y, count = 1;

  printf("Informe dois numeros: ");
  scanf("%d %d", &x, &y);

  printf("1 até %d de %d em %d: \n", y, x, x);
  printf("> %d", count);
  while(count < (y - x)) {
    count += x;
    printf(", %d", count);
  }

  getchar();
  return 0;
}