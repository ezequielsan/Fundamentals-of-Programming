#include <stdio.h>
#include <stdlib.h>

int main() {
  int count = 0, tempoFinal;
  float massa;

  printf("Informe a massa do mateiral radioativo em gramas: ");
  scanf("%f", &massa);

  while(massa >= 0.05) {
    massa /= 2;
    count++;
  }

  tempoFinal = 50 * count;

  printf("Massa final: %.2f \n", massa);
  printf("O tempo foi de %d segundos\n", tempoFinal);

  getchar();
  return 0;
}