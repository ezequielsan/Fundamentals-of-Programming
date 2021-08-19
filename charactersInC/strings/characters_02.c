/* === Introdução a caracteres em C === */
// O compuatador não consegue processar caracteres
// Os caracteres são interpretados pela máquina em números correspondentes
// Essas correspondências numéricas estão todas listadas na tabela ASCII
// O correspodência numérica do 'a' é o 97
// Já a do 'A' é 65
// Ou seja, o computador diferencia maiúsculas de minúsculas

#include <stdio.h>
#include <stdlib.h>

void tabelaASCII() {
  int i;

  for(i = 1; i < 255; i++) {
    printf("Caractere: %c , Corespondecia Numerica: %d\n", i, i);

    if(i == 'a') {
      printf("A correspondecia do 'a' e %d\n", i);
      break;
    }
  }
}

void getsString(char string[], int size) {
  int i = 0;
  char c = 'a';
  
  printf("informe seu nome: \n");

  while(i < size) {
    scanf("%c ", &c);
    string[i] = c;
    i++;
  }

  string[i] =  '\0';

  printf("\n");
}

void imprimiString(char string[]) {
  int i;

  printf("Nome: ");
  for(i = 0; string[i] != '\0'; i++) {
    printf("%c", string[i]);
  }
}

int main() {
  char nome[10];
  // nome[0] = 'C';
  // nome[1] = 'h';
  // nome[2] = 'i';
  // nome[3] = 'c';
  // nome[4] = 'o';
  // nome[5] = '\0';

  getsString(nome, 10);
  imprimiString(nome);

  return 0;
}