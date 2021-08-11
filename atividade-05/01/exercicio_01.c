#include <stdio.h>
#include <stdlib.h>
const int size = 10;

void inserirDadosPessoas(char sexo[], char corOlho[], char corCabelo[], int idade[]) {
  int i = 0;

  while(i < size) {
    printf("Informes os dados da pessoa %d\n", i + 1);
    printf("Sexo (Digite M: Masculino ou F: Feminino): ");
    scanf(" %c", &sexo[i]);
    printf("Cor dos Olhos (Digite V: Verde, A: Azul ou C: Castanho): ");
    scanf(" %c", &corOlho[i]);
    printf("Cor dos Cabelos (Digite L: Louros, P: Pretos ou C: Castanhos): ");
    scanf(" %c", &corCabelo[i]);
    printf("Idade: ");
    scanf("%d", &idade[i]);

    printf("\n");

    i++;
  }
}

void imprimirDados(char sexo[], char corOlho[], char corCabelo[], int idade[]) {
  int i = 0;

  while(i < size) {
    printf("Dados da pessoa %d: \n", i + 1);
    printf("Sexo: %c \tCor dos olhos: %c \tCor dos cabelos: %c \tIdade: %d\n", sexo[i], corOlho[i], corCabelo[i], idade[i]);
    printf("\n");
    i++;
  }
}

void mediaIdadesLouros(char corCabelo[], int idade[]) {
  int i, soma = 0, media, qnt = 0;

  for(i = 0; i < size; i++) {
    if(corCabelo[i] == 'L' || corCabelo[i] == 'l') {
      soma += idade[i];
      qnt++;
    }
  }

  media = soma / qnt;

  printf("A media das idades das pessoas Louras e %d.\n", media);
}

void qntHomensMaiorTrinta(int idade[]) {
  int i, qnt = 0;

  for(i = 0; i < size; i++) {
    qnt = (idade[i] > 30)? qnt + 1: qnt + 0;
  }

  printf("A quantidade de homens maiores que 30 anos e %d.\n", qnt);
}

void qntMulheresCabeloPreto(char corCabelo[]) {
  int i = 0, qnt = 0;

  for(; i < size; i++) {
    qnt = (corCabelo[i] == 'P' || corCabelo[i] == 'p')? qnt + 1: qnt + 0;
  }
  
  printf("A quantidade de mulheres com cabelo preto e %d.\n", qnt);
}

int main() {
  char sexo[size]; // M: masculino, F: feminino
  char corOlhos[size]; // A: azul, V: verde, C: castanho
  char corCabelos[size]; // L: louros, P: pretos, C: castanhos
  int idade[size];

  inserirDadosPessoas(sexo, corOlhos, corCabelos, idade);

  printf("\n");

  imprimirDados(sexo, corOlhos, corCabelos, idade);

  printf("\n");

  mediaIdadesLouros(corCabelos, idade);

  printf("\n");
  
  qntHomensMaiorTrinta(idade);

  printf("\n");

  qntMulheresCabeloPreto(corCabelos);

  getchar();
  return 0;
}