/* Faça uma função que incremte dois inteiros passados como parameto 
 *
 * 1. Ler dois valores inteiros
 * 2. Decalrar uma função passando os valores lidos como parametro
 * 3. Detro fa função incrementamos os dois valores 
 * 
*/
#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num1, num2;

  int validatingValue(void);
  num1 = validatingValue();
  num2 = validatingValue();

  int incrementaValores(int num);
  num1 = incrementaValores(num1);
  num2 = incrementaValores(num2);

  printf("O numeros digitados incrementados são: %d e %d\n", num1, num2);

  getchar();
  return 0;
}

int validatingValue() {
  float num;
  int count = 0;
  
  while(count == 0) {
    printf("Informe um valor inteiro: ");
    scanf("%f", &num);

    if(num == (int) num) {
      printf("Valor válido.\n");
      break;
    }
    else {
      printf("Por favor, informe um numero inteiro.\n");
    }
  }
  
  return num;
}

int incrementaValores(int num) {
  return ++num;
}