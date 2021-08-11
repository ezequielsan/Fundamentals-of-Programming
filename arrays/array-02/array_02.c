/* === Percorrendo vetores em C === */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int idades[] = {18, 12, 25, 10};
  for (int i = 0; i < 4; i++)
    printf("idades[%d] = %d\n", i, idades[i]);

  printf("\n\n");

  char alfabeto[5] = {0};
  for (int i = 0; i < 5; i++)
    printf("alfabeto[%d] = %d\n", i, alfabeto[i]);

  printf("\n\n");

  char vogais[5] = {'a', 'b', 'c', 'd', 'e'};
  for (int i = 0; i < 5; i++)
    printf("vogais[%d] = %c\n", i, vogais[i]);

  printf("\n\n");

  int a = 19, b = 8, c = 4;
  int valores2[] = {a, b, c};
  for (int i = 0; i < 3; i++)
    printf("valores2[%d] = %d\n", i, valores2[i]);

  // getchar();
  return 0;
}