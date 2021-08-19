/*   
 * Desafio
 * 1. Implementar a função strcpy
 *   Recebe como entrada duas strings
 *  
 * strcpy: char *strcpy(char *dest, char *src);
 *
*/

#include <stdio.h>
#include <string.h>

void copyString(char dest[], char string[]) {
  int i;

  for(i = 0; string[i] != '\0'; i++) {
    printf("dest[%d] = %c\n", i, string[i]);
    dest[i] = string[i];
  }

  string[i] = '\0';
}

int main() {
  char nome1[100], nome2[100];

  printf("Informe um nome1: ");
  scanf("%s", nome1);

  // strcpy(nome2, nome1);

  copyString(nome2, nome1);

  printf("nome2: %s \n", nome2);

  for(int i = 0; nome2[i] != '\0'; i++) {
    printf("%c ", nome2[i]);
  }

  return 0;
}