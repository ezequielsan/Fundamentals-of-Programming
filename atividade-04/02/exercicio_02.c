/* Função que recebe um numero inteiro e retorna 1 se for primo e 0 se não for
 *
 * 1. Ler um numero
 * 2. Declarar uma função com passando o numero lido como parametro
 * 3. Se numero for primo, retorn 1
 * 4. Se não for retorne 0
 * 
*/

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num, value;

  int validatingValue(void);
  num = validatingValue();

  int verificarSePrimoOuNao(int num);
  value = verificarSePrimoOuNao(num);

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

int verificarSePrimoOuNao(int num) {
  int div = 0;

  for(int i = 1; i <= num; i++) {
    (num % i == 0)? div++ : div += 0;
  }

  return (div == 2)? 1 : 0;
}