/* Como calcular uma multiplicação sem usar o operador de multiplicação */
  // 3 * 2 = 3 + 3
  // 5 * 8 = 5 + 5 + 5 + 5 + 5 + 5 + 5 + 5  

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, count = 1, result = 0;
  
  printf("Digite dois numeros: ");
  scanf("%d %d", &a, &b);

  while(count <= b) { 
    result += a; 
    count++;
  }

  printf("%d * %d = %d", a, b, result);

  getchar();
  return 0;
}