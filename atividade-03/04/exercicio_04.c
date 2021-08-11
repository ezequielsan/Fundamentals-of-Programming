#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int sumValores = 0;

  for(int i = 0; i <= 200; i++) {
    if((i % 3 == 0) && (i % 7 != 0)) {
      sumValores += i;
    }
  }

  printf("A soma é %d\n", sumValores);

  getchar();
  return 0;
}