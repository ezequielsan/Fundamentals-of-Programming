#include <stdio.h> 
int main() {
  int numberOne;

  printf("Digite um numero: ");
  scanf("%d", &numberOne);
  

  printf("O numero digitado foi %d\n", numberOne);

  printf("O seu antecessor e %d\n", numberOne - 1);
  printf("O seu sucessor e %d\n", numberOne + 1);
  // Também podia usar o incremento(++) e decremento(--)

}