#include <stdio.h>

int main() {
  float litrosComb, distancia, velMedia, tempo;

  printf("Informe o tempo decorrido na viagem em horas: ");
  scanf("%f", &tempo);
  printf("Informe a velocidade media na viagem em km/h: ");
  scanf("%f", &velMedia);

  distancia = tempo * velMedia;
  litrosComb = distancia / 12;

  printf("A distancia pecorrida foi de %1.1fKm\n", distancia);
  printf("A quantidade de litros de gasolina consumidos na viagem foi de %1.1fL\n", litrosComb);

  return 0;
}