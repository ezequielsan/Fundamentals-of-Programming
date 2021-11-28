# include <stdio.h>

void staircase(int h) {
  int i, j, k;

  for(i = 0; i < h; i++) {
    for(j = 0; j < (h - 1 - i); j++) {
      printf(" ");
    }

    for(k = 0; k < i + 1; k++) {
      printf("#");
    }

    printf("\n");
  }
}

int main() {
  int n = 0;

  printf("Informe a altura da torre: ");
  scanf("%d", &n);

  staircase(n);

  return 0;
}