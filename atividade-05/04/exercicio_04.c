#include <stdio.h>
#include <stdlib.h>

// Inicializando o Array com dados do usuário
void initArray(int v[], int tamanho) {
  int i = 0;
  
  printf("Informe os elementos do vetor: \n");
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
  
  printf("Os elementos do vetor sao: ");
  while(i < tamanho) {
    printf("%d ", v[i]);
    i++;
  }
}

// Lendo tamanho do Array
int getSize(void) {
  int valor;
  
  printf("Informe o tamanho do vetor: ");
  scanf("%d", &valor);

  return valor;
}

void filtraPar(int v[], int tamanho) {
  int i, acc = 0;

  for(i = 0; i < tamanho; i++) {
    if(v[i] % 2 == 0) {
      acc++;
    } 
  }

  printf("A quantidade de numeros pares e %d.\n", acc);
}

int main() {
  int tamanho;

  tamanho = getSize();

  int array[tamanho];

  initArray(array, tamanho);

  filtraPar(array, tamanho);

  printArray(array, tamanho);

  getchar();
  return 0;
}


