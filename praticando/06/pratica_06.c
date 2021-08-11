/* Escrever um prgrama que receba uma data e verifica se é valida ou não*/
// 1 - Ler data no formato (dd/mm/aaaa)
// 2 - Verificar se a data é valida
//     - dia < 31 e mês < 12 e ano < 2080
//     - ano poderia ser maior
// 3 - Imprimir se a data é valida ou não  

#include <stdio.h>

int main() {
  int day, month, year;
  printf("Informe um data no formato (dd/mm/aaaa): ");
  scanf("%d/%d/%d", &day, &month, &year);

  if(day <= 31 && month <=12 && year <= 2080) {
    printf("Data %d/%d/%d Valida !!!\n", day, month, year);
  }
  else {
    printf("Data %d/%d/%d Invalida !!!", day, month, year);
  }
  getchar();
  return 0;
}