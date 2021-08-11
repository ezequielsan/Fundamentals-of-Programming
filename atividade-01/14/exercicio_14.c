#include <stdio.h>
#include <math.h>

int main() {

  float base, altura, perimetro, area;

  printf("Informe a base e altura do retangulo:\n");
  scanf("%f%f", &base, &altura);

  perimetro = 2 * (base + altura);
  area = base * altura;

  printf("O perimetro e %2.2f\n", perimetro);
  printf("A area e %2.2f\n", area);

  return 0;
}