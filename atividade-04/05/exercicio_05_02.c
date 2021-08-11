/* Utilizando Recursão */

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int fat, num;

  int validatingValue(void);
  num = validatingValue();

  int fatorial(int n);
  fat = fatorial(num);

  printf("!%d = %d\n", num, fat);

  getchar();
  return 0;
}

int validatingValue() {
  int n = 0;
  
  while(n <= 0) {
    printf("Informe um numero natural não nulo: ");
    scanf("%d", &n);
  }
  
  return n;
}

int fatorial(int n) {
  if(n == 0 || n == 1) return 1;
  else return n * fatorial(n - 1);
}