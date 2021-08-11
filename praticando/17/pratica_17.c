/* Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  float heightChico = 1.5, heightZe = 1.1;
  int years = 0;

  while(heightChico >= heightZe) {
    heightChico += .02;
    heightZe += .03;
    years++;
    printf("chico: %.2f \tze: %.2f \tano: %d \n", heightChico, heightZe, years);
  }

  printf("Daqui a %d anos Zé será maior que Chico \n", years);

  getchar();
  return 0;
}