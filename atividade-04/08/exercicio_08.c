/* === Faça uma função qe calcule o mdc de dois números === 
 *
 * 1. Ler dois numeros Inteiros
 * 2. Declarar uma função que calcule mdc
 * 3. retorna mdc
 * 4. Imprimir na tela o resultado
 * 
*/

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int num1, num2, mdc;

  printf("Informe dois numeros: ");
  scanf("%d %d", &num1, &num2);

  // Setando o num1 com maior numero
  if(num2 > num1) {
    num1 = num1 + num2; 
    num2 = num1 - num2; 
    num1 = num1 - num2; 
  }
  
  int calcMDC(int value1, int value2);
  mdc = calcMDC(num1, num2);

  printf("O mdc de %d e %d é %d.\n", num1, num2, mdc);

  getchar();
  return 0;
}

int calcMDC(int value1, int value2) {
  int mdc = 0, divisor = 1;

  while(divisor <= value2) {
    if((value1 % divisor == 0) && (value2 % divisor == 0)) {
      if(divisor > mdc) mdc = divisor;
    }
    divisor++;
  }

  return mdc;
}