/* Dado um vetor A crie um vetor B com os valores de A ao quadrado */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int quadrado(int num) {
  return num * num;
}

int cubo(int num) {
  return num * num * num;
}

void initVetorA(int vA[], int tamanho) {
  int i = 0;

  while (i < tamanho)
  {
    printf("Informe o elemento %d: ", i + 1);
    scanf("%d", &vA[i]);
    i++;
  }
}

void initVetorB(int vA[], int vB[], int tamanho) {
  int i = 0;
  
  while(i < tamanho) {
    vB[i] = quadrado(vA[i]);
    i++;
  }
}

void initVetorC(int vA[], int V3[], int tamanho) {
  int i = 0;

  while(i < tamanho) {
    V3[i] = cubo(vA[i]);
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

int getTamanho(void) {
  int valor;

  printf("Informe o tamanho do vetor: \n> ");
  scanf("%d", &valor);

  return valor;
}

int main() {
  int size, num;

  size = getTamanho();

  int vetorA[size];
  int vetorB[size];
  int vetorC[size];

  initVetorA(vetorA, size);
  initVetorB(vetorA, vetorB, size);
  initVetorC(vetorA, vetorC, size);

  printf("\n");
  printf("Vetor A: \n");
  imprimirVetor(vetorA, size);

  printf("\n\n");
  printf("Vetor B: \n");
  imprimirVetor(vetorB, size);

  printf("\n\n");
  printf("Vetor C: \n");
  imprimirVetor(vetorC, size);

  getchar();
  return 0;
}