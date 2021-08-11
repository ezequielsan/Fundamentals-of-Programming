#include <stdio.h>

int main() {
  float salario, reajuste, novoSalario;

  printf("Informe seu salario atual: ");
  scanf("%f", &salario);
  printf("Informe o percentual de reajuste: ");
  scanf("%f", &reajuste);

  novoSalario = salario + ((salario * reajuste) / 100);

  printf("O reajuste foi de %1.1lf e seu novo salario e de %2.2lf \n", reajuste, novoSalario);

  getchar();
  
  return 0;
}