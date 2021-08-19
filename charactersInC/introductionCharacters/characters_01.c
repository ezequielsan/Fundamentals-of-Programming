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

void getsChar() {
  char c;

  printf("Informe um caractere: \n> ");
  scanf("%c", &c);

  printf("\n");

  printf("Caracteres informado: %c\nNumerico correspondente: %d", c, c);

  printf("\n");
}

int main() {
  char c1 = 'a'; // variável do tipo char
  char c2 = 'A'; // uma variável pode receber um caractere entre aspas simples

  printf("Caractere: %c \n", c1);
  printf("Correspondencia numerica: %d \n", c1);
  
  getsChar();

  // tabelaASCII();
  return 0;
}