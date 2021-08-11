/* === Introdução a vetores em C === */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* === Variáveis em C - armazenam um único tipo de dado === */
  int idade = 18;
  char sexo = 'M';
  float nota = 9.8;

  /* === Array em C - Armazenam um conjuto de valores de mesmo tipo === */

  // Cria um vetor do tipo inteiro de 10 posições
  int notas[10];

  // criando um vetor que recebe 4 valores, logo o vetor tem 4 posições
  int idades[] = {18, 12, 25, 10};

  // criando um vetor com 5 posições onde as 3 primeiras são informadas a as outro como não são informadas, por padrão recebem zero
  int values[5] = {4, 6, 8}; // {4, 6, 8, 0, 0}

  // array do tipo caractere com 26 posições
  char alfabeto[26];

  // array do tipo char que recebe 5 valores
  char vogais[5] = {'a', 'b', 'c', 'd', 'e'};

  int a = 19, b = 8, c = 4;
  int valores2[] = {a, b, c};
  printf("valores2[0] = %d\n", valores2[0]); // 19
  printf("valores2[1] = %d\n", valores2[1]); // 8
  printf("valores2[2] = %d\n", valores2[2]); // 4

  // getchar();
  return 0;
}