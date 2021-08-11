#include <stdio.h> 
int main() {
  float numberOne, numberTwo;

  printf("Digite um numero: ");
  scanf("%f", &numberOne);
  printf("Digite outro numero: ");
  scanf("%f", &numberTwo);

  printf("Os numeros digitados foram %2.2f e %2.2f \n", numberOne, numberTwo);



}