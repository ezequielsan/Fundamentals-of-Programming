// 01 - Ler valorHora, valorHoraExtra, valorDependente, matricula, nome, numeroHorasTrabalhadas, numeroHorasExtrasTrabalhadas, numeroDependentes
// 02 - valorTotalHorasTrabalhadas = valorHora + numeroHorasTrabalhadas
// 03 - valorTotalHorasExtras = valorHoraExtra + numeroHorasExtrasTrabalhadas
// 04 - valorTotalDependentes = valorDependente + numeroDependentes
// 05 - valorSalarioBruto = valorTotalHorasTrabalhadas + valorTotalHorasExtras + valorTotalDependentes
/* 06 - Se valorSalarioBruto >= 100 && valorSalarioBruto <= 500 
          descontoImpostoRenda = isento, descontoINSS = 0.05 * valorSalarioBruto, descontoConvenioMedico = 30
*/
/* 07 - Se valorSalarioBruto >= 501 && valorSalarioBruto <= 1300 
          descontoImpostoRenda = 0.08 * valorSalarioBruto, descontoINSS = 0.08 * valorSalarioBruto, descontoConvenioMedico = 80
*/
/* 08 - Se valorSalarioBruto >= 1301 && valorSalarioBruto <= 2700 
          descontoImpostoRenda = 0.15 * valorSalarioBruto, descontoINSS = 0.10 * valorSalarioBruto, descontoConvenioMedico = 150
*/
/* 09 - Se valorSalarioBruto > 2701
          descontoImpostoRenda = 0.25 * valorSalarioBruto, descontoINSS = 0.12 * valorSalarioBruto, descontoConvenioMedico = 320
*/
// 10 - descontos = descontoImpostoRenda + descontoINSS + descontoConvenioMedico
// 11 - valorSalarioLiquido = valorSalarioBruto - descontos
// 12 - Imprimir matricula, nome, valorSalarioBruto, descontos, valorSalarioLiquido

#include <stdio.h>

float calcDescontos(float valorSalarioBruto) {
  float descontoImpostoRenda = 0, descontoINSS = 0, descontoConvenioMedico = 0;

  if(valorSalarioBruto >= 100 && valorSalarioBruto <= 500) {
    descontoImpostoRenda = 0.0;
    descontoINSS = 0.05 * valorSalarioBruto;
    descontoConvenioMedico = 30.0;
  }

  if(valorSalarioBruto >= 501 && valorSalarioBruto <= 1300) {
    descontoImpostoRenda = 0.08 * valorSalarioBruto;
    descontoINSS = 0.08 * valorSalarioBruto;
    descontoConvenioMedico = 80.0;
  }

  if(valorSalarioBruto >= 1301 && valorSalarioBruto <= 2700) {
    descontoImpostoRenda = 0.15 * valorSalarioBruto;
    descontoINSS = 0.10 * valorSalarioBruto;
    descontoConvenioMedico = 150.0;
  }
  
  if(valorSalarioBruto > 2701) {
    descontoImpostoRenda = 0.25 * valorSalarioBruto;
    descontoINSS = 0.12 * valorSalarioBruto;
    descontoConvenioMedico = 320.0;
  }
  
  return descontoImpostoRenda + descontoINSS + descontoConvenioMedico;
}

int main() {
  int numeroHorasTrabalhadas = 0, numeroHorasExtrasTrabalhadas = 0, numeroDependentes = 0;
  float valorHora = 0.0, valorHoraExtra = 0.0, valorDependente = 0.0, 
        valorTotalHorasTrabalhadas = 0.0, valorTotalHorasExtras = 0.0, 
        valorTotalDependentes = 0.0, valorSalarioBruto = 0.0, valorSalarioLiquido = 0.0, 
        descontos;        
  char nome[51], matricula[51];

  printf("Informe seu nome: ");
  scanf("%s", nome);

  printf("Informe sua matricula Formato(xxxx-xxxx): ");
  scanf(" %s", matricula);

  printf("Informe o valor da hora trabalhada, o valor da hora extra e o valor de cada dependente\n");
  scanf(" %f %f %f", &valorHora, &valorHoraExtra, &valorDependente);

  printf("Informe o numero de horas normais trabalhadas, o numero de horas extras trabalhadas e o numero de dependentes\n");
  scanf(" %d %d %d", &numeroHorasTrabalhadas, &numeroHorasExtrasTrabalhadas, &numeroDependentes);

  valorTotalHorasTrabalhadas = valorHora * numeroHorasTrabalhadas;
  valorTotalHorasExtras = valorHoraExtra * numeroHorasExtrasTrabalhadas;
  valorTotalDependentes = valorDependente * numeroDependentes;
  valorSalarioBruto = valorTotalHorasTrabalhadas + valorTotalHorasExtras + valorTotalDependentes;

  descontos = calcDescontos(valorSalarioBruto);

  valorSalarioLiquido = valorSalarioBruto - descontos;
  
  printf("Matrícula: %s \n", matricula);
  printf("Nome: %s \n", nome);
  printf("Valor Salario Bruto: %.2f \n", valorSalarioBruto);
  printf("Descontos: %.2f \n", descontos);
  printf("Valor Salario Liquido: %.2f \n", valorSalarioLiquido);

  getchar();
  return 0;
}
