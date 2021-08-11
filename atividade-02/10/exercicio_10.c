// 1 - Ler 3 numeros inteiros
// 2 - Ordena-los em ordem crescente

#include <stdio.h>

int main() {
  int num1, num2, num3, tmp;

  printf("Informe tres numeros \n");
  scanf("%d %d %d", &num1, &num2, &num3);

  if(num1 > num2) {
    if(num2 > num3) {
      // num3 < num2 < num1
      tmp = num1;
      num1 = num3;
      num3 = tmp;
    }
    else if(num3 > num1){
      // num2 < num1 < num3
      tmp = num2;
      num2 = num1;
      num1 = tmp;
    }
    else {
      // num2 < num3 < num1
      tmp = num1;
      num1 = num2;
      num2 = num3;
      num3 = tmp;
    }
  }
  else if(num1 > num3){ // num2 > num1
    // num3 < num1 < num2
    tmp = num1;
    num1 = num3;
    num3 = num2;
    num2 = tmp;
  }
  else {
    // num1 < num3 < num2
    tmp = num3;
    num3 = num2;
    num2 = tmp;
  }
  
  printf("%d, %d, %d \n", num1, num2, num3);

  getchar();
  return 0;
}