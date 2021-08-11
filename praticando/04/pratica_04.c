/* Leia uma data no formato aaaa-mm-dd e imprima do formato dd/mm/aaaa*/
// 1 - Ler data (aaaa-mm-dd)
// 2 - Formatar data para dd/mm/aaaa
// 3 - Imprimir data formatada
#include <stdio.h>

int main() {
  int dia, mes, ano; 

  printf("Data (Formato aaaa-mm-dd): ");
  scanf("%d-%d-%d", &ano, &mes, &dia);
  
  printf("%d/%d/%d", dia, mes, ano);
  return 0;

}