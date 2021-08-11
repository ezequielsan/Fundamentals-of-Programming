#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int num;

  int validatingInput(void);
  num = validatingInput();

  int enesimoTermoFibonacci(int enesimoTermo);
  enesimoTermoFibonacci(num);

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
int enesimoTermoFibonacci(int enesimoTermo) {
  int previousTerm = 0, middleTerm = 1, nextTerm, cont = 1;

  if(enesimoTermo == 1) {
    return 1;
  }
  else {
    while(cont < enesimoTermo) { 
      nextTerm = previousTerm + middleTerm; 
      previousTerm = middleTerm; 
      middleTerm = nextTerm; 
      
      cont++;
    }

    printf("O %d termo da sequência é %d.\n", enesimoTermo, nextTerm);
  }
}