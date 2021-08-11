/* Dado um vetor encontrar o maior e menor elemento dele */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initVatorValoresAleatorios(int v[], int size)
{
  for (int i = 0; i < size; i++)
  {
    v[i] = rand() % 100; // rand() gera números aleatórios
    printf("arry[%d] = %d\n", i, v[i]);
  }
}

int maiorValorArray(int v[], int size)
{
  int maior = 0;
  for (int i = 0; i < size; i++)
  {
    if (v[i] > maior)
      maior = v[i];
  }

  return maior;
}

int menorValorArray(int v[], int size)
{
  int menor = __INT_MAX__;
  for (int i = 0; i < size; i++)
  {
    if (v[i] < menor)
      menor = v[i];
  }

  return menor;
}
 
int main()
{
  int tamanho, maior, menor;

  srand(time(NULL)); // definindo a hora no PC como semente(valor padrão) para gerar números aleatórios

  printf("Informe a quantidade de valores do vetor: \n> ");
  scanf("%d", &tamanho);

  int arry[tamanho];

  initVatorValoresAleatorios(arry, tamanho);

  maior = maiorValorArray(arry, tamanho);
  menor = menorValorArray(arry, tamanho);

  printf("O maior valor do array e %d \n", maior);
  printf("o menor valor do array e %d \n", menor);

  getchar();
  return 0;
}