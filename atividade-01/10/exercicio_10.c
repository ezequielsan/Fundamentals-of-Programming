#include <stdio.h>

int main() {
  float numberOne, numberTwo, numberThree, media;

  printf("Informe tres numeros:\n");
  scanf("%f%f%f", &numberOne, &numberTwo, &numberThree);

  media = (numberOne + numberTwo + numberThree) / 3;

  printf("A media e %2.2f", media);
  
  return 0;
}