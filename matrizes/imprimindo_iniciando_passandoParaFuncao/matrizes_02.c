#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMatriz(int dim[], int m[ ][dim[1]]) {
  int i, j;
  for(i = 0; i < dim[0]; i++) {
    for(j = 0; j < dim[1]; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

void initMatriz(int dim[], int m[ ][dim[1]]) {
  srand(time(NULL));

  int i, j, num = 0;

  for(i = 0; i < dim[0]; i++) {
    for(j = 0; j < dim[1]; j++) {
      m[i][j] = rand() % 10;
      num++;
    }
  }
}

void getDimensao(int v[], int size) {
  printf("Informe o tamanho e largura da Matriz: ");
  scanf("%d %d", &v[0], &v[1]);
  printf("\n");
}

int main() {
  int dimM1[2];
  getDimensao(dimM1, 2);
  int matrizPar[dimM1[0]][dimM1[1]];

  int dimM2[2];
  getDimensao(dimM2, 2);
  int matrizPar2[dimM2[0]][dimM2[1]];
  
  initMatriz(dimM1, matrizPar);
  printf("Matriz 1: \n");
  printMatriz(dimM1, matrizPar);

  initMatriz(dimM2, matrizPar2);
  printf("Matriz 2: \n");
  printMatriz(dimM2, matrizPar2);

  return 0;
}