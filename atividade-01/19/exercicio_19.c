/*Calcular o valor de uma pestação em atraso*/
// Ler: valor da prestação vencida(em reais R$)
// Ler: taxa perica de juros(%a.m - ao mês)
// Ler: Período de atraso(em meses)
// Imprimir: valor da prestação atrasada(em reais R$)
// Imprimir: período de atraso(em meses)
// Imprimir: juros que serão cobrados pelo período de atraso(R$)
// Imprimir: valor da prestação acrescido dos juros(R$)
// Fórmula de Juros Simples: J = c * i * t / 100

#include <stdio.h>

int main() {
  float valorPrestVenc, taxaJuros, juros, novoValorPest; 
  int tempoAtraso;

  printf("Informe o valor da prestação já vencida: ");
  scanf("%f", &valorPrestVenc);
  printf("Informe o periodo de atraso em meses: ");
  scanf("%d", &tempoAtraso);
  printf("Informe a taxa de juros ao mes em porcentagem: ");
  scanf("%f", &taxaJuros);

  juros = (valorPrestVenc * tempoAtraso * taxaJuros) / 100;
  novoValorPest = juros + valorPrestVenc;
  
  printf("O valor da prestação atrasada e %2.2f R$\n", valorPrestVenc);
  printf("O pedriodo de atraso e %d meses\n", tempoAtraso);
  printf("O juros que seram cobrados e %2.2f R$\n", juros);
  printf("O novo valor a ser cobrado ja acrescentando os juros e %2.2f R$\n", novoValorPest);

  return 0;
}