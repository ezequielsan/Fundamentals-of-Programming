#include <stdio.h>

int main() {
  int neg = 0, pos = 0, num;

  do {
    printf("Digite um valor: ");
    scanf("%d", &num);

    (num > 0)? pos++ : (num < 0)? neg++ : num;
  } 
  while(num != 0);

  printf("Quantidade de positivos: %d \nQuantidade de negativos: %d \n", pos, neg);

  getchar();
  return 0;
}