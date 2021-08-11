#include <stdio.h>
#include <math.h>

int main() {
  float numberOne;

  printf("Digite um numero: ");
  scanf("%f", &numberOne);
  
  // Usando a função pow da biblioteca math.h
  printf("O quadrado desse numero e %2.2f\n", pow(numberOne, 2));

  // Metodo normal
  printf("O quadrado desse numero e %2.2f\n", numberOne * numberOne);

  return 0;
}