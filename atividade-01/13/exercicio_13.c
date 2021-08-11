#include <stdio.h>
#include <math.h>

int main() {
  float saldo, reajuste = 0.02, saldoFinal;
  
  printf("Digite seu saldo: ");
  scanf("%f", &saldo);

  saldoFinal = saldo + (saldo * reajuste);

  // printf("Seu novo saldo e %f", saldoFinal);
  printf("%2.2f", saldoFinal);

  return 0;
}