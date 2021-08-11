#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num = 0, quantPrimos = -1, contPrimos = 1, cont = 0;
  
  while(quantPrimos < 0) {
    printf("Informe a quantidade de números primos que quer ver: ");
    scanf("%d", &quantPrimos);

    if(quantPrimos < 0) {
      printf("valor digitado inválido !!!\n");
    }
  }

  while(contPrimos <= quantPrimos) {
    num++; 
    cont = 0;

    for(int i = 1; i <= num; i++) {
      if(num % i == 0) {
        cont++;
      }
    }

    if(cont == 2) {
      printf("O número %d é primo.\n", num);
      contPrimos++;
    }
  }

  getchar();
  return 0;
}