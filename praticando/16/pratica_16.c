#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1° casa: 1 +
// 2° casa: 2 +
// 3° casa: 4 +
// 4° casa: 8 +
// .
// .
// .
// 64° casa: ? 

int main() {
  setlocale(LC_ALL, "Portuguese");
  int i = 2;
  long double somatorio = 1, inicio = 1;
  

  while(i <= 64) {  
    inicio = inicio * 2;
    somatorio += inicio;
    i++;
  } 

  printf("A quantidade de grãos é %.0Lf\n", somatorio);

  getchar();
  return 0;
}