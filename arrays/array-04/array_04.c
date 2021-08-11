/* Fazer um programa que duplica os valores do array */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void duplicaValorArray(float v1[], int size)
{
  for (int i = 0; i < size; i++)
    v1[i] *= 2;
}

void imprimiArray(float v1[], int size)
{
  printf("os precos duplicados sao: \n");

  for (int i = 0; i < size; i++)
    printf("> preco %d: %.2f R$\n", i + 1, v1[i]);
}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float precos[] = {10, 12.5, 78.21, 4, 3.5};
  int tamanho = 5;

  duplicaValorArray(precos, tamanho);

  imprimiArray(precos, tamanho);

  // getchar();
  return 0;
}