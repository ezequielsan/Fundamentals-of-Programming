/* === Determinar o mdc de dois números === 
 *
 * 1. Ler dois numeros
 * 2. 
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int maxDivisorComum(int num1, int num2) {
  int mdc = 0, divisor = 1;

  // vai parar quando o divisor for maior que o menor valor digitado pelo usuário
  while(divisor <= num2) {
    if((num1 % divisor == 0) && (num2 % divisor == 0)) {
      if(divisor > mdc) { // descobrindo o maior divisor do dois valores
        mdc = divisor;
      }
    }
    divisor++;
  }

  return mdc;
}

int main() {
  int num1, num2, divisor = 1, mdc = 0;

  // validando se os numeros inseridos são naturais 
  do {
    printf("Informe dois numeros: ");
    scanf("%d %d", &num1, &num2);  
    
    // verifica se os dois numeros são positivos, se sim, a comparação da true e para o loop
    // OBS: abs() é uma função que retorna o módulo de um número
    if((num1 + num2 == abs(num1) + abs(num2)) && (num1 + num2 != 0)) {
      break;
    }
  }
  while(-1 <= 0);
  
  // setando o num2 como o menor valor
  int tmp;
  if(num2 > num1) { 
    tmp = num1;
    num1 = num2;
    num2 = tmp;
  } 

  mdc = maxDivisorComum(num1, num2);

  printf("O MDC de %d e %d é %d.\n", num1, num2, mdc);

  getchar();
  return 0;
}