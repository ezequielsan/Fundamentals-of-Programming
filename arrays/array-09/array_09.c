/* Faça um programa que verifique se um certo numero pertence a um dado vetor */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initVetor(int v[], int tamanho) {
  int i = 0;
  srand(time(NULL));

  while (i < tamanho)
  {
    v[i] = rand() % 100;
    i++;
  }
}

void imprimirVetor(int v[], int tamanho) {
  int i = 0;

  printf("Os valores do vetor sao: \n");
  while(i < tamanho) {
    printf("%d, ", v[i]);
    i++;
  }
}

int getNumero(void) {
  int numero;

  printf("\nInforme um numero que voce acha que tem no vetor: \n> ");
  scanf("%d", &numero);

  return numero;
}

int verificaSeEstaNoArray(int n, int v[], int tamanho) {
  int i = 0, presente = 0;

  while(i < tamanho) {
    if(n == v[i]) {
      presente = 1;
      break;
    }

    i++;
  }
  return presente;
}

void imprimirSeEstaOuNao(int presente) {
  if(presente == 1) {
    printf("Esta no Array.\n");
  }
  else {
    printf("Nao esta no Array.\n");
  }
}

int main() {
  int size, num, presente;

  printf("Informe o tamanho do vetor:\n> ");
  scanf("%d", &size);

  int arry[size];

  initVetor(arry, size);
  imprimirVetor(arry, size);
  num = getNumero();
  imprimirSeEstaOuNao(verificaSeEstaNoArray(num, arry, size));

  getchar();
  return 0;
}