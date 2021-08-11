/* Solução 02 - Usando laço for*/

#include <stdio.h>

int main() {
  int num = 0, menor = 0, maior = 0;

  printf("Informe 5 numeros: \n");
  scanf("%d", &num);

  menor = num;
  maior = num;

  for(int i = 1; i < 5; i++) {
    scanf(" %d", &num);
    
    // Achando o maior numero
    if(num > maior) {
      maior = num;
    }

    // Achando o menor numero
    if(num < menor) {
      menor = num;
    }
  }

  printf("O maior e menor numero sao respectivamente '%d' e '%d' \n", maior, menor);

  return 0;
}