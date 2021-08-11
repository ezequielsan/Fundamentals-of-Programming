#include <stdio.h>

int main() {
  int num, maior, contador = 0;

  printf("Informe 3 numeros: \n");
  scanf("%d", &num);

  maior = num;

  while(contador < 2) {
    scanf(" %d", &num);

    if(num > maior) maior = num;

    contador++;
  }

  printf("O maior numero e '%d' \n", maior);
  return 0;
}