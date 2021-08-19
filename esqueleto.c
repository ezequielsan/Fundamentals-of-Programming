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

// Inicializando matriz com dados aleatórios
void initMatrix(int d[], int m[][d[1]]) {
  srand(time(NULL));

  int i, j;

  for(i = 0; i < d[0]; i++) {
    for(j = 0; j < d[1]; j++) {
      m[i][j] = rand() % 10;
    }
  }
}

// Imprimindo matriz na tela
void printMatrix(int d[], int m[][d[1]]) {
  int i, j;

  for(i = 0; i < d[0]; i++) {
    for(j = 0; j < d[1]; j++) {
     printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

// Pegando dimensões da matriz
void dimensions(int v[]) {
  printf("Informe a altura e largura da matriz: ");
  scanf("%d %d", &v[0], &v[1]);
}

int main() {

  getchar();
  return 0;
}


