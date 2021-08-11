#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portugueses");

  int num, nTermo;

  int validatingInput(void);
  num = validatingInput();

  int enesimoTermoFibonacci(int n);
  nTermo = enesimoTermoFibonacci(num);
  
  printf("O enesimo termo de fibonacci é %d\n", nTermo);

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

int enesimoTermoFibonacci(int n) {
  int seqFibonacci[100] = {1, 1}; // 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
  int cont = 1, enesimoTermo;
  
  
  // subtrai 2 pois ja tem 2 elementos da sequencia no array
  while(cont <= n - 2) { 
    seqFibonacci[cont + 1] = seqFibonacci[cont] + seqFibonacci[cont - 1];
    cont++;
  }

  enesimoTermo = seqFibonacci[n - 1] ;

  return enesimoTermo;
}

/* OBS: Este algoritmo so calcula até o centésimo termo da sequeência */
/* Ire fazer outros programas para criar outro algoritmo */