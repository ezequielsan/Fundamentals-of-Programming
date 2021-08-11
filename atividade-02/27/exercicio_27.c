// 1 - Ler o valor do salário mínimo, o numero de horas trabalhadas, o numero de dependentes e o numero de horas extras trabalhadas
// 2 - valorHoraTrabalhada = valorSalarioMinimo / 2
// 3 - valorSalarioMes = numeroHorasTrabalhadas * valorHoraTrabalhada
// 4 - valorDependentes = 32 * numeroDependentes
// 5 - valorHorasExtras = (valorHoraTrabalhada + (0.5 * valorHoraTrabalhada)) * numeroHorasExtras
// 6 - valorSalarioBruto = valorSalarioMes + valorDependentes + valorHorasExtras
// 7 - Se valorSalarioBruto < 200: IRRF isento
// 8 - Se valorSalarioBruto >= 200 && valorSalarioBruto <= 500: IRRF = 0.1 * valorSalarioBruto
// 9 - Se valorSalarioBruto > 500: IRRF = 0.2 * valorSalarioBruto
// 10 - valorSalarioLiquido = valorSalarioBruto - IRRF
// 11 - Se valorSalarioLiquido <= 350: gratificacao = 100
// 12 - Se valorSalarioLiquido > 350: gratificacao = 50
// 13 - salarioReceberFuncionario = valorSalarioLiquido + gratificacao

#include <stdio.h>

float valorImpostoRenda(float valorSalarioBruto) {
  return (valorSalarioBruto < 200) ? 0 : (valorSalarioBruto >= 200 && valorSalarioBruto <= 500) ? 0.1 * valorSalarioBruto : 0.2 * valorSalarioBruto;
}

float valorGratificacao(float valorSalarioLiquido) {
  return (valorSalarioLiquido <= 350) ? 100 : 50;
}

int main() {
  float valorSalarioMinimo, numeroHorasTrabalhadas, numeroDependentes, numeroHorasExtras, 
        valorHoraTrabalhada, valorSalarioMes, valorDependentes, valorHorasExtras, valorSalarioBruto, impostoRenda, valorSalarioLiquido, gratificacao, salarioReceberFuncionario;

  printf("Informe o valor do salario mínimo: ");
  scanf("%f", &valorSalarioMinimo);
  
  printf("Informe o numero de horas trabalhadas: ");
  scanf("%f", &numeroHorasTrabalhadas);

  printf("Informe o numero de dependentes: ");
  scanf("%f", &numeroDependentes);

  printf("Informe o numero de horas extras trabalhadas: ");
  scanf("%f", &numeroHorasExtras);

  valorHoraTrabalhada = valorSalarioMinimo / 2;
  valorSalarioMes = valorHoraTrabalhada * numeroHorasTrabalhadas;
  valorDependentes = 32 * numeroDependentes;
  valorHorasExtras = (valorHoraTrabalhada + (0.5 * valorHoraTrabalhada)) * numeroHorasExtras;
  valorSalarioBruto = valorSalarioMes + valorDependentes + valorHorasExtras;

  impostoRenda = valorImpostoRenda(valorSalarioBruto);

  valorSalarioLiquido = valorSalarioBruto - impostoRenda;

  gratificacao = valorGratificacao(valorSalarioLiquido);

  salarioReceberFuncionario = valorSalarioLiquido + gratificacao;

  printf("O salario desse mes a receber e %.2f \n", salarioReceberFuncionario);

  getchar();
  return 0;
}