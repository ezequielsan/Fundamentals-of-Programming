#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y, count = 1;

  printf("Informe dois numeros: ");
  scanf("%d %d", &x, &y);

  while(count <= y) {
    printf("%d ", count);
    if(count % x == 0) printf("\n"); 
    count++;
  }

  getchar();
  return 0;
}