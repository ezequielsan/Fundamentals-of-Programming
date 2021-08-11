/* Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
*/

#include <stdio.h>

void calculaTabelaAritmetica(int num) {
  int contador = 0;

  printf("%d * %d = %d\t", num, contador, num * contador);

  contador++;
  printf("%d * %d = %d\t", num, contador, num * contador);

  contador++;
  printf("%d * %d = %d\n", num, contador, num * contador);

  contador++;
  printf("%d * %d = %d\t", num, contador, num * contador);

  contador++;
  printf("%d * %d = %d\t", num, contador, num * contador);

  contador++;
  printf("%d * %d = %d\n", num, contador, num * contador);

  contador++;
  printf("%d * %d = %d\t", num, contador, num * contador);

  contador++;
  printf("%d * %d = %d\t", num, contador, num * contador);

  contador++;
  printf("%d * %d = %d\n", num, contador, num * contador);

  contador++;
  printf("%d * %d = %d\t", num, contador, num * contador);

  contador++;
  printf("%d * %d = %d\t", num, contador, num * contador);
}

void calculaTabelaAritmeticaRefatorada(int num) {
  int contador = 0;

  for(;contador <= 10; contador++) {
    printf("%d * %d = %d\n", num, contador, num * contador);
  }
}

int main() {
  int num;

  printf("Informe um numero: ");
  scanf("%d", &num);

  // calculaTabelaAritmetica(num);
  calculaTabelaAritmeticaRefatorada(num);

  getchar();
  return 0;
}
