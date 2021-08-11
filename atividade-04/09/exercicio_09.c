/* === Fazer uma função que funcione comom uma calculadora ===
 *
 * 1. Ler dois numeros, e uma carctere aritmético(+, -, /, *)
 * 2. Declarar uma função que receba dois numeros e um caractere airtmetico
 * 3. Dependendo do caractere informado realiza sua respectiva operação
 * 4. Retorna o resultado da operação
 * 
 */

#include <stdio.h>
#include <locale.h>

int main() {
  float num1, num2, resultado;
  char operacao;

  printf("Informe um numero: \n> ");
  scanf("%f", &num1);
  printf("Informe outro numero: \n> ");
  scanf("%f", &num2);

  int validatorOperacao(void);
  operacao = validatorOperacao();

  int calculadora(int n1, int n2, char op);
  resultado = calculadora(num1, num2, operacao);
  
  // printf("num1: %f\t num2: %f\toperacao: %c\n", num1, num2, operacao);
  printf("%.2f %c %.2f = %.2f\n", num1, operacao, num2, resultado);
  getchar();
  return 0;
}

int validatorOperacao(void) {
  char op;
  int validator = 0;

  while(validator < 1) {
    printf("Informe o operador aritmético desejado: \t\n(+) soma\t\n(-) subtração\t\n(/) divisão\t\n(*) multiplicação\n > ");
    scanf(" %c", &op);

    if(op == '+' || op == '-' || op == '*' || op == '/') {
      validator = 1;
    }
    else {
      printf("Operador inválido !!!\n");
    }
  }

  return op;
}

int calculadora(int n1, int n2, char op) {
  switch(op) {
    case '+': return n1 + n2; break;
    case '-': return n1 - n2; break;
    case '/': return n1 / n2; break;
    case '*': return n1 * n2; break;
  }
}
