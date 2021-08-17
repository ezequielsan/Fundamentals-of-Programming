#include <stdio.h>
#include <time.h>

void initMatrix(int d[], int m[][d[1]]) {
  srand(time(NULL));

  int i, j;

  for(i = 0; i < d[0]; i++) {
    for(j = 0; j < d[1]; j++) {
      m[i][j] = rand() % 10;
    }
  }
}

void printMatrix(int d[], int m[][d[1]]) {
  int i, j;

  for(i = 0; i < d[0]; i++) {
    for(j = 0; j < d[1]; j++) {
     printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

void dimensions(int v[]) {
  printf("Informe a altura e largura da matriz: ");
  scanf("%d %d", &v[0], &v[1]);
}

void biggestElement(int d[], int m[][d[1]]) {
  int i, j, maior = m[0][0];

  for(i = 0; i < d[0]; i++) {
    for(j = 0; j < d[1]; j++) {
      if(m[i][j] > maior) maior = m[i][j];
    }
  }

  printf("O maior elemento da matriz e %d\n", maior);
}

void smallestElement(int d[], int m[][d[1]]) {
  int i, j, menor = m[0][0];

  for(i = 0; i < d[0]; i++) {
    for(j = 0; j < d[1]; j++) {
      if(m[i][j] < menor) menor = m[i][j];
    }
  }

  printf("O menor elemento da matriz e %d\n", menor);
}

void biggestElementPerLine(int d[], int m[][d[1]]) {
  int i, j, biggestPerLine;

  for(i = 0; i < d[0]; i++) {
    biggestPerLine = m[i][0];

    for(j = 0; j < d[1]; j++) {
      if(m[i][j] > biggestPerLine) biggestPerLine = m[i][j];
    }
    
    printf("O maior elemento da linha %d da matriz e %d\n", i + 1, biggestPerLine);
  }

  printf("\n");
}

void smallestElementPerLine(int d[], int m[][d[1]]) {
  int i, j, smallestPerLine;

  for(i = 0; i < d[0]; i++) {
    smallestPerLine = m[i][0];

    for(j = 0; j < d[1]; j++) {
      if(m[i][j] < smallestPerLine) smallestPerLine = m[i][j];
    }

    printf("O menor elemento da linha %d da matriz e %d\n", i + 1, smallestPerLine);
  }

}

int main() {
  int size[2];
  dimensions(size);

  int matrix[size[0]][size[1]];

  initMatrix(size, matrix);

  biggestElement(size, matrix);

  smallestElement(size, matrix);

  biggestElementPerLine(size, matrix);

  smallestElementPerLine(size, matrix);

  printMatrix(size, matrix);

  return 0;
}