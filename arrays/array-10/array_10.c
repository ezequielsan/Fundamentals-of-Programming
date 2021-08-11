/* Faça um programa que verifique quantas vezes um certo numero aparece em um dado vetor */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initVetor(int v[], int tamanho) {
  int i = 0;

  while (i < tamanho)
  {
    printf("Informe o elemento %d: ", i + 1);
    scanf("%d", &v[i]);
    i++;
  }
}

void imprimirVetor(int v[], int tamanho) {
  int i = 0;

  printf("Os valores do vetor sao: ");
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

int quantidadeVezesAparece(int n, int v[], int tamanho) {
  int i = 0, acc = 0;

  while(i < tamanho) {
    if(n == v[i])
      acc++;

    i++;
  }
  return acc;
}

void imprimi(int qntd) {
  printf("\nO numero que você digitou aparece %d vezes no vetor.\n", qntd);
}

int main() {
  int size, num, qntd;

  printf("Informe o tamanho do vetor:\n> ");
  scanf("%d", &size);

  int arry[size];

  initVetor(arry, size);
  num = getNumero();
  qntd = quantidadeVezesAparece(num, arry, size);
  imprimi(qntd);
  imprimirVetor(arry, size);

  getchar();
  return 0;
}