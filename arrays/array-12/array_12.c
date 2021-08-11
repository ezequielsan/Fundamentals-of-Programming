/* Crie um algorimo que verifica se dois arrays são estritamente iguais */

#include <stdio.h>
#include <stdlib.h>

void initVetor(int V1[], int tamanho) {
  int i = 0;

  while (i < tamanho)
  {
    printf("> ");
    scanf("%d", &V1[i]);
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

  printf("Informe o tamanho dos vetores: \n> ");
  scanf("%d", &valor);

  return valor;
}

void compareVetores(int v1[], int v2[], int tamanho) {
  int i = 0, iguais = 1;

  while(i < tamanho) {
    if(v1[i] != v2[i]) {
      iguais = 0;
      break;
    }
    i++;
  }

  if(iguais == 0)
    printf("\nOs vetores nao sao iguais.\n"); 
  
  else 
    printf("\nOs vetores sao iguais.\n"); 
    
}

int main() {
  int size, num;

  size = getTamanho();

  int vetor[size];
  int vetor2[size];
  
  printf("Informe os elementos do vetor 1: \n");
  initVetor(vetor, size);

  printf("Informe os elementos do vetor 2: \n");
  initVetor(vetor2, size);
  
  printf("\n");
  printf("Vetor 1: \n");
  imprimirVetor(vetor, size);

  printf("\n");
  printf("Vetor 2: \n");
  imprimirVetor(vetor2, size);

  compareVetores(vetor, vetor2, size);

  getchar();
  return 0;
}