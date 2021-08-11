#include <stdio.h>

int main() {
  long int seconds, minutes, hours;

  printf("Informe a quantidade de segundos: ");
  scanf("%ld", &seconds);

  hours = seconds / 3600;
  minutes = seconds % 3600 / 60;
  seconds = seconds % 60;

  getchar();
  printf("A tempo é %ldh %ldmin %lds\n", hours, minutes, seconds);
}