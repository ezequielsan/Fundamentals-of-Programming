#include <stdio.h>

int main() {
  int i;

  linha(20, '*');

  puts("Numero entre 1 e 5");

  linha(20, '+');

  for(i = 1; i <= 5; i++) {
    printf("%d\n", i);
  }

  linha(20, '-');

  return 0;
}


linha(int num, int ch) {
  for(int i = 0; i <= 20; i++) {
    putchar(ch);
  }
  putchar('\n');
}