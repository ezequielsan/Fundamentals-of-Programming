/* Calculando o enésimo termo usando recursão */

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int num, fibonacci;

  int validatingInput(void);
  num = validatingInput();

  int calcFibonacci(int n);
  fibonacci = calcFibonacci(num);

  printf("O %d termo da sequência é %d.\n", num, fibonacci);

  getchar();
  return 0;
}

int validatingInput(void) {
  int num;

  do {
    printf("Digite o enésimo termo da série de Fibonacci: ");
    scanf("%d", &num);
  }
  while(num <= 0);

  return num;
}

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
int calcFibonacci(int n) {
  if(n == 1) {
    return 1;
  }
  else {
    if(n == 2) {
      return 1;
    }
    else {
      return calcFibonacci(n - 1) + calcFibonacci(n - 2);  
    }
  }
}