/* pedi ao usuário uma data e imprimir no formato dd/mm/aa*/
// Ler uma data
// formata data
// Imprimir data no formato dd/mm/aa

#include <stdio.h>

int
main ()
{
  int dia, mes, ano;
  
  printf("Ano: ");
  scanf("%d", &ano);
  printf("Mes: ");
  scanf(" %d", &mes);
  printf("Dia: ");
  scanf(" %d", &dia);

  printf("%d/%d/%d\n", dia, mes, ano);
  getchar();
  
  return 0;


}
