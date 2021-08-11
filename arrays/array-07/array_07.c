/* Calcular a media de um vetor de notas */
#include <stdio.h>
#include <stdlib.h>

float pegaNotas(float notas[], int quantNotas)
{
  float sum = 0.0;
  for (int j = 0; j < quantNotas; j++)
  {
    printf("Informe a nota %d \n", j + 1);
    scanf("%f", &notas[j]);
    sum += notas[j];
  }

  printf("soma: %f \tquantNotas: %d\n", sum, quantNotas);

  return sum;
}

float calcMedia(float soma, int qnt)
{
  return soma / qnt;
}

int main()
{
  int quantNotas, size;
  float notas[quantNotas], soma, media;

  printf("Informe a quantidade de notas: ");
  scanf("%d", &quantNotas);

  printf("quantNotas = %d\n", quantNotas);

  soma = pegaNotas(notas, quantNotas);

  printf("quantNotas = %d\n", quantNotas);

  media = calcMedia(soma, quantNotas);

  printf("A media e %.2f", media);

  getchar();
  return 0;
}