#include <stdio.h>

int calculaFatorial(int num) {
  int cont = num - 1; // cont é variável contador
  int acc = num; // acc é o acumulador

  for(; cont > 1; cont--) acc *= cont;

  return acc;
} 

void mostraMensagem(int num, int fatorialNum) {
  printf("O fatoria do numero %d e %d\n", num, fatorialNum);
}

int main() {
  int num, fatorialNum;

  printf("Informe um numero maior que 0(zero): ");
  scanf("%d", &num);

  fatorialNum = calculaFatorial(num);
  mostraMensagem(num, fatorialNum);

  return 0;
  getchar();
}