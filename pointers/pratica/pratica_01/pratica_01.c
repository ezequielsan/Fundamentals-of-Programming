/*  
 * Um ponteiro pode ser usado para dizer a uma função onde ela deve depositar o 
 * resultado de seus cálculos. Escreva uma função hm que converta minutos em horas-e-minutos. 
 * A função recebe um inteiro mnts e os endereços de duas variáveis inteiras, digamos h e m, 
 * e atribui valores a essas variáveis de modo que m seja menor que 60 e que 60*h + m seja 
 * igual a mnts. Escreva também uma função main que use a função hm.
 *
*/

#include <stdio.h>
#include <stdlib.h>

void hm(int mnts, int *h, int *m) {
  *h = mnts / 60;
  *m = mnts % 60;
}

int main() {
  int mnts, h, m;

  printf("Informe o numero de minutos \n> ");
  scanf("%d", &mnts);

  hm(mnts, &h, &m);

  printf("O valor informado equivale a %d horas e %d minutos\n", h, m);

  return EXIT_SUCCESS;
}