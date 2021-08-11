/* Fazer uma função que calcule a potencia de uma base B elevado a um expoente E 
 *
 * 1. Ler a base e o expoente de uma potencia
 * 2. Declarar uma função que receba dois parametros, base e expoente
 * 3. Retornar o resultado da potência
 * 
*/

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int base, expoente, resultado;

  printf("Informe a base(inteiro) da potencia: \n> ");
  scanf("%d", &base);

  // não pode ser menor que zero
  int validaExpoente(void);
  expoente = validaExpoente();

  int calcPotencia(int base, int exp);
  resultado = calcPotencia(base, expoente);

  printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

  getchar();
  return 0;
}

int validaExpoente(void) {
  int exp;
  
  do {
    printf("Informe o exp (inteiro) da potencia: \n> ");
    scanf("%d", &exp);

    if(exp < 0) printf("Valor inválido !!!\n");
  }
  while(exp < 0) ;

  return exp;
}

int calcPotencia(int base, int exp) {
  int result = 1, count = 1;

  if(base == 0) {
    return 0;
  }

  if(exp == 0) {
    return 1;
  }

  while(count <= exp) {
    result = result * base;
    count++;
  }
  return result;
}

