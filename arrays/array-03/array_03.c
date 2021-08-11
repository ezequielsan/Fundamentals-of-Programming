/* Fazer um programa que recebe 5 idades e armazene ela no vetor e a imprimi-as */

/* OBS: um vetor se comporta como uma varável global, ou seja, eu posso inicializa-lo em uma função e posso acessar esses valores em outra função, o que não ocorre como uma variável primitiva */

#include <stdio.h>
#include <stdlib.h>

void initVetor(int idades[5], int size)
{
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &idades[i]);
  }

  size = 777;
}

void pecorreVetor(int idades[5])
{
  printf("As idades informadas foram: \n");

  for (int j = 0; j < 5; j++)
  {
    printf("> %d\n", idades[j]);
  }
}

int main()
{
  int idades[5], tamanho;

  printf("Informe 5 idades: ");

  initVetor(idades, tamanho);

  printf("%d\n", tamanho); // saida: lixo de memória

  pecorreVetor(idades);

  getchar();
  return 0;
}