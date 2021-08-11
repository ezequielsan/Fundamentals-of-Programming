/*Insira um numero quebrado e informe sua parte interia e quebrada*/
// 1 - Ler um numero quebrado
// 2 - Pegar a parte interia desse numero
// 3 - Pegar a parte quebrada desse numero
// 4 - Imprimir essas partes

#include <stdio.h>

int main() {
  float num, partFrac;
  int partInt, var;

  printf("Informe um numero fracionario: ");
  scanf("%f", &num);

  partInt = (int) num;
  partFrac = num - ((int) num);

  printf("O numero %4.4f tem parte interia %d e parte fracionaria de %f\n", num, partInt, partFrac);
  printf("%d", var);
  
  return 0;
}