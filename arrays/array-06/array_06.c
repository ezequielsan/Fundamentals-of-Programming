/* === Usando constantes e vetores === */

#include <stdio.h>
#include <stdlib.h>
#define NUM 10

void init(int s[])
{
  for (int i = 0; i < NUM; i++)
    s[i] = 0;
}

int main()
{
  int v[NUM];

  init(v);

  for (int i = 0; i < NUM; i++)
    v[i] = i;

  for (int i = NUM - 1; i >= 0; i--)
    printf("%d\n", v[i]);

  // getchar();
  return 0;
}