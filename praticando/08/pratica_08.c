/* 
  Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
  a) a idade dessa pessoa em anos;
  b) a idade dessa pessoa em meses;
  c) a idade dessa pessoa em dias;
  d) a idade dessa pessoa em semanas.
*/

#include <stdio.h>

int idade(int anoN, int anoA) {
  return anoA - anoN;
}

int idadeM(int idadeA) {
  return idadeA * 12;
}

int idadeS(int idadeM) {
  return idadeM * 4;
}

int idadeD(int idadeS) {
  return idadeS * 7;
}

int main() {
  int anoNasc, anoAtual, idadeAnos, idadeMeses, idadeSemanas, idadeDias;

  printf("Informe seu ano de nascimento: ");
  scanf("%d", &anoNasc);
  printf("Informe o ano atual: ");
  scanf("%d", &anoAtual);

  idadeAnos = idade(anoNasc, anoAtual);
  idadeMeses = idadeM(idadeAnos);
  idadeSemanas = idadeS(idadeMeses);
  idadeDias = idadeD(idadeSemanas);

  printf("Idade em anos e %d \nIdade em meses e %d \nIdade em semanas e %d \nIdade em dias e %d\n", idadeAnos, idadeMeses, idadeSemanas, idadeDias);

  getchar();
  return 0;
}