#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num, fatorial;

  int validatingValue(void);
  num = validatingValue();

  int calcFatorial(int num);
  fatorial = calcFatorial(num);

  printf("Fatorial de %d é %d\n", num, fatorial);

}

int validatingValue() {
  int n = 0;
  
  while(n <= 0) {
    printf("Informe um numero natural não nulo: ");
    scanf("%d", &n);
  }
  
  return n;
}


int calcFatorial(int num) { 
  int count = num - 1;  
  int fatorial = num; 

  while(count > 1) { 
    fatorial = fatorial * count;  
    count--;  
  }
  
  return fatorial;
}