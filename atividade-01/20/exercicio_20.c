/* Conversão de dolars(US$) em reais(R$) */
// Ler: Valor em dolar
// Ler: Valor cotação do dolar em reais
// Fazer conversão para reais
// Imprimir: Valor em reais

#include <stdio.h>

int main() {
  float valorDolar, cotacao, valorReais;

  printf("Informe o valor em dolares: ");
  scanf("%f", &valorDolar);
  printf("Informe o da cotacao atual: ");
  scanf("%f", &cotacao);

  valorReais = valorDolar * cotacao;

  printf("O valor %1.1f US$ em reais e %1.1f R$", valorDolar, valorReais);

  return 0;
}