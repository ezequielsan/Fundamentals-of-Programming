// https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html#print-address

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *v = NULL;
  v = malloc(sizeof(int) * 10);
  int i;

  for(i = 0; i < 10; i++) {
    scanf("%d", v + i);
  }

  for(i = 0; i < 10; i++) {
    printf("%d ", *(v + i));
  }

  return 0;
}