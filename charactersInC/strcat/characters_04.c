/* 
 * Função que concatena strings
 * strcat: char *strcat(char *dest, const char *src); 
 * 
 * 1. Implementação da função strcat
 *   Recebe duas strings que serão concatenadas
 *   A concatenção ocorrer na string do primeiro parametro
 * 
*/


#include <stdio.h>
#include <string.h>

void concatString(char stringDest[], char stringOrig[]) {
  int sizeString1 = strlen(stringDest), i;

  for(i = 0; stringOrig[i] != '\0'; i++) {
    stringDest[sizeString1 + i] = stringOrig[i];
  }

  stringDest[sizeString1 + i] = '\0';
}

int main() {
  char nome1[100], nome2[100];

  printf("Informe um nome1: ");
  scanf("%s", nome1);

  printf("Informe um nome2: ");
  scanf("%s", nome2); 

  printf("nome1: %s \n", nome1);
  printf("nome2: %s \n", nome2);

  concatString(nome1, nome2);

  printf("Nome Concatenado: %s \n", nome1);

  return 0;
}