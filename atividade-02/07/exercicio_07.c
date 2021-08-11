/*Ler dois numeros e verificar se n1 esta entre 50 e 200 e n2 esta entre -1 e 9, siada 1 se satifaz a condição e 0 se não*/

#include <stdio.h>

int main() {
  float num1, num2;
  int saida = 0;

  printf("Informe dois numeros: \n");
  scanf("%f %f", &num1, &num2);

  if((num1 > 50 && num1 < 200) && (num2 > -1 && num2 < 9)) {
    saida = 1;
  }

  printf("%d\n", saida);

  return 0;
}