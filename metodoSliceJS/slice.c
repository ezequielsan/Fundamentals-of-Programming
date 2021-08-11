#include <stdio.h>
#include <stdlib.h>

// Inicializando o Array com dados do usuário
void initArray(int v[], int tamanho) {
  int i = 0;

  while (i < tamanho)
  {
    printf("> ");
    scanf("%d", &v[i]);
    i++;
  }
}

// Imprindo o Array na tela
void printArray(int v[], int tamanho) {
  int i = 0;

  while(i < tamanho) {
    printf("%d ", v[i]);
    i++;
  }
}

// Lendo tamanho do Array
int getSize(void) {
  int valor;

  scanf("%d", &valor);

  return valor;
}

// Recorta determinada parte do array
int slice(int indiceInicio, int vetorA[], int tamA, int aux[], int tamAux) {
  int i;
  
  for(i = 0; i < tamAux; i++) {
    aux[i] = vetorA[indiceInicio + i];
  }
}

int main() {
  int tamanho;

  printf("Informe o tamanho do array: ");
  tamanho = getSize();
  
  int array[tamanho];
  printf("Informe os elementos do array: \n");
  initArray(array, tamanho);

  printf("\n");
  printf("os elementos do array sao: ");
  printArray(array, tamanho);

  int aux[2];
  slice(2, array, tamanho, aux, 2);

  printf("\n");

  printArray(aux, 2);

  getchar();
  return 0;
}


