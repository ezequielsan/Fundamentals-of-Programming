/* Escreva uma função que inicie os vetores com zero */
#include <stdio.h>
#include <stdlib.h>

void init1(int v1[10])
{
  for (int i = 0; i < 10; i++)
    v1[i] = 0;

  for (int j = 0; j < 10; j++)
    printf("v1[%d] = %d \n", j, v1[j]);
}

void init2(int v2[25])
{
  for (int i = 0; i < 25; i++)
    v2[i] = 0;

  for (int j = 0; j < 25; j++)
    printf("v2[%d] = %d \n", j, v2[j]);
}

// Refatorando funções
void initRefat(int v[], int n)
{
  for (int i = 0; i < n; i++)
    v[i] = 0;

  for (int j = 0; j < n; j++)
    printf("v[%d] = %d \n", j, v[j]);
}

int main()
{
  int v1[10];
  int v2[25];

  // init1(v1);
  // printf("\n\n");
  // init2(v2);

  // função initRefat recebe um vetor e seu tamnho e inicializa ele com 0
  initRefat(v1, 10);
  printf("\n\n");
  initRefat(v2, 25);

  getchar();
  return 0;
}