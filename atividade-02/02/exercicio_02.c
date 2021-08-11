/* Soluçõa 01 - Usando if-else*/

// 1 - Ler 5 numeros inteiros
// 2 - Verificar o maior e menor dentre eles
// 3 - imprimi o maior e menor

#include <stdio.h>

int main() {
  int num1, num2, num3, num4, num5, maiorNum, menorNum;

  printf("Informe 5 numeros interios: \n");
  scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

  // Maior Numero
  if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
    maiorNum = num1;
  }
  if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5) {
    maiorNum = num2;
  }
  if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5) {
    maiorNum = num3;
  }
  if(num4 > num2 && num4 > num3 && num4 > num1 && num4 > num5) {
    maiorNum = num4;
  }
  if(num5 > num2 && num5 > num3 && num5 > num4 && num5 > num1) {
    maiorNum = num5;
  }

  // Menor numero
  if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
    menorNum = num1;
  }
  if(num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5) {
    menorNum = num2;
  }
  if(num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5) {
    menorNum = num3;
  }
  if(num4 < num2 && num4 < num3 && num4 < num1 && num4 < num5) {
    menorNum = num4;
  }
  if(num5 < num2 && num5 < num3 && num5 < num4 && num5 < num1) {
    menorNum = num5;
  }

  printf("O maior e menor numero sao respectivamente '%d' e '%d' \n", maiorNum, menorNum);
  return 0;
}