// 1 - Ler o numero de peças produzidas
// 2 - Se numero de peças <= 500, salario = 440
// 3 - Se numeros de peças > 500 e <=750, salario 440 + 0.5 por peça que ultrapasse 500
// 4 - Se numeros de peças > 750, salario 550 + 0.75 por peça que ultrapasse 750
// 5 - Imprimir o salrio total

#include <stdio.h>

int main() {
  float salario = 440.0;
  int pecas;

  printf("Informe a quantidade de pecas produzidas: ");
  scanf("%d", &pecas);
  
  /* Usando if */
  // if(pecas > 500 && pecas <= 750) salario += 0.5 * (pecas - 500);
  // if(pecas > 750) salario = 550 + (0.75 * (pecas - 750));
  
  /* Usando operador ternario */
  salario = (pecas > 500 && pecas <= 750) ? 440 + (0.5 * (pecas - 500)) : (pecas > 750) ? 550 + (0.75 * (pecas - 750)) : 440;

  printf("Salario e %.2f", salario);

  getchar();
  return 0;
}