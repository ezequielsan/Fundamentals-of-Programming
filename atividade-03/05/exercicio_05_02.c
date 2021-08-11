#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Primos: 2, 3, 5, 7, 11, ...

int main() {
  int num, div = 0, cont = 1;

  do {
    system("tput reset"); // limpa o console
    printf("Digite um numero: ");
    scanf(" %d", &num);
  }
  while(num <= 0);

  for(;cont <= num; cont++) {
    if(num % cont == 0) div++;
  }

  if(div == 2) printf("O número %d é primo\n", num);
  else printf("O número %d não é primo", num); 

  getchar();
  return 0;
}

