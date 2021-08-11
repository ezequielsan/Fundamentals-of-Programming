/* Função que recebe um numero inteiro e retorna 1 para par e 0 para impar 
 *
 * 1. Ler um numero
 * 2. Declarar uma função com passando o numero lido como parametro
 * 3. Se numero for par, retorn 1
 * 4. Se não retorne 0
 * 
*/

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int num, value;

  int validatingValue(void);
  num = validatingValue();

  int verificarSeParOuImpar(int num);
  value = verificarSeParOuImpar(num);

  printf("O retorno é %d\n", value);

  getchar();
  return 0;
}

int validatingValue() {
  int n = 0;
  
  while(n <= 0) {
    printf("Informe um numero natural não nulo: ");
    scanf("%d", &n);
  }
  
  return n;
}

int verificarSeParOuImpar(int num) {
  return (num % 2 == 0)? 1 : 0;
}