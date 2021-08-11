#include <stdio.h>

int main() {
  int num;
  printf("Informe um numero entre 0 e 255: ");
  scanf("%d", &num);

  printf("Foi introduzindo %d cujo caractere e '%c' \n", num, (char) num);
  printf("O caractere seguinte a o '%c' e o '%c' e tem ASCII n° %d", (char) num, (char) num+1, num+1);
}