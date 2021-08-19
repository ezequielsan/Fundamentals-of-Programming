#include <stdio.h>
#include <time.h>
// Cabeçalhos das funções
int srand();
int rand();
void initMatrix(int d[], int m[][d[1]]);
void printMatrix(int d[], int m[][d[1]]);
void dimensions(int v[]);
void averageMatrix(int d[], int m[][d[1]]);
void takeAveragePerLine(int d[], float averages[], int m[][d[1]]);
void printArray(int size, float v[]);


int main() {
  int size[2];
  dimensions(size);

  int matrix[size[0]][size[1]];
  float averages[size[1]];

  initMatrix(size, matrix);
  printMatrix(size, matrix);

  averageMatrix(size, matrix);

  takeAveragePerLine(size, averages, matrix);

  printArray(size[1], averages);

  return 0;
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

  printf("\n");
}

// Pegando dimensões da matriz
void dimensions(int v[]) {
  printf("Informe a altura e largura da matriz: ");
  scanf("%d %d", &v[0], &v[1]);
  printf("\n");
}

// Calculando media da matriz
void averageMatrix(int d[], int m[][d[1]]) {
  int i, j, sum = 0;
  float media;

  for(i = 0; i < d[0]; i++) {
    for(j = 0; j < d[1]; j++) {
      sum += m[i][j];
    }
  }

  media = (float)sum / (d[0] * d[1]);
  printf("A media da matriz e %.2f\n", media);
}

// Calculando media por Linha e armazenando no vetor
void takeAveragePerLine(int d[], float averages[], int m[][d[1]]) {
  int i, j, sum;
  float media = 0.0;

  for(i = 0; i < d[0]; i++) {
    sum = 0;

    for(j = 0; j < d[1]; j++) {
      sum += m[i][j];
    }

    media = (float)sum / d[1];
    averages[i] = media;
  }
}

void printArray(int size, float v[]) {
  int i;

  for(i = 0; i < size; i++) {
    printf("%.2f ", v[i]);
  }

  printf("\n");
}