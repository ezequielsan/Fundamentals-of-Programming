/*  
 * strlen: size_t strlen(const char *str);
 *   Recebe um vetor de caracteres
 *   Retorna um inteiro que representa a quantidade de cacacteres do vetor
 * 
 * strcmp: int strcmp(const char *Lhs, const char *rhs);
 *   Compara duas strings
 *   Retorna 0, se os dois parametros são iguais
 *   Retorna qualquer valor diferente de zero, se os dois paramentros não são iguais
 * 
 * strstr: char *strstr(const char* str, const char *substr);
 * Retorna um ponteiro que indica a primeira ocorrencia da string 'substr' na string 'str'.
 * 
*/

#include <stdio.h>
#include <string.h>

int lengthString(char string[]) {
  int length = 0, i;

  for(i = 0; string[i] != '\0'; i++) length++;
  
  return length;
}

// Retorna 0, se as strings forem iguais
// Retorna 1, se as strings forem diferentes
int compareStrings(char string1[], char string2[]) {
  int iguais = 0, i;

  // Faz o tratamento de strings de tamanhos diferentes
  // if(lengthString(string1) != lengthString(string2)) return 1;

  for(i = 0; (string1[i] != '\0' && string2[i] != '\0'); i++) {
    if(string1[i] != string2[i]) {
      iguais = 1;
      break;
    }
  }

  // Outra maneira de fazer o tratamento quando as strings tem tamanhos diferetes
  if(string1[i] != string2[i]) iguais = 1;

  return iguais;
}

int main() {
  // char nome[100];

  // printf("Digite seu nome: ");
  // scanf("%s", nome);

  // int length = strlen(nome);
  // int myLength = lengthString(nome);

  // printf("Quantidade de caracteres do nome e %d\n", length);
  // printf("Quantidade de caracteres do nome e %d\n", myLength);

  char nome1[100], nome2[100];

  printf("Informe o nome 1: ");
  scanf("%s", nome1);

  printf("Informe o nome 2: ");
  scanf("%s", nome2);

  // int iguais = strcmp(nome1, nome2);
  
  int iguais = compareStrings(nome1, nome2);
  printf("Sao iguais: %d\n", iguais);

  return 0;
}