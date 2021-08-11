/*Determinar o maior de 3 numeros de entrada*/
// 1 - Ler tres numeros
// 2 - Determnar o maior
// 3 - Imprimir o maior

#include <stdio.h>

int main() {
  int num1, num2, num3, maior;

  printf("Informe 3 numeros \n");
  scanf("%d %d %d", &num1, &num2, &num3);

  if(num1 > num2 && num1 > num3) maior = num1;
  
  if(num2 > num1 && num2 > num3) maior = num2;

  if(num3 > num2 && num3 > num1) maior = num3;

  printf("O maior numero e '%d'", maior);
  
  return 0;
}