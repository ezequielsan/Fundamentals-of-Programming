/* Imprimir todos os divisores e um numero informadao pelo usuário */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  int num = 0, divisor = 1, resto = 0;

  // Validando (numero tem que ser um inteiro positivo não nulo)
  do {
    printf("Digite um número: ");
    scanf("%d", &num);
  }
  while(num <= 0); 

  while(divisor <= num) {
    resto = num % divisor;

    if(resto == 0) {
      printf("%d, ", divisor);
    }
    divisor++;
  }

  getchar();
  return 0;
}
