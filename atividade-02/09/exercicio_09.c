/* Faça um programa que ordene 3 numeros informados pelo usuário*/
// 1 - Ler 3 numeros e o tipo de ordenação, crescente(c), descrecente(d)
// 2 - Se 'c' Ordena-los em ordem crescente
// 4 - Se 'd' Ordena-los em ordem decrescente
// 5 - Imprimir os numeros ordenados

#include <stdio.h>

// Função que ordena de forma drecescente 
void decrescente(int num1, int num2, int num3) {
  if(num1 > num2) {
    if(num2 > num3) {
      printf("%d %d %d\n", num1, num2, num3);
    }
    else {
      if(num1 > num3) {
        printf("%d %d %d\n", num1, num3, num2);
      }
      else {
        printf("%d %d %d\n", num3, num1, num2);
      }
    }

  }
  else {
    if(num2 > num3) {
      if(num1 > num3) {
        printf("%d %d %d\n", num2, num1, num3);
      }
      else {
        printf("%d %d %d\n", num2, num3, num1);
      }
    }
    else {
      printf("%d %d %d\n", num3, num2, num1);
    }
  }

  return;
}

// Função que ordena em forma crescente
void crescente(int num1, int num2, int num3) {
  if(num1 > num2) {
    if(num2 > num3) {
      printf("%d %d %d\n", num3, num2, num1);
    }
    else {
      if(num1 > num3) {
        printf("%d %d %d\n", num2, num3, num1);
      }
      else {
        printf("%d %d %d\n", num2, num1, num3);
      }
    }

  }
  else {
    if(num2 > num3) {
      if(num1 > num3) {
        printf("%d %d %d\n", num3, num1, num2);
      }
      else {
        printf("%d %d %d\n", num1, num3, num2);
      }
    }
    else {
      printf("%d %d %d\n", num1, num2, num3);
    }
  }

  return;
}

int main() {
  int num1, num2, num3, tmp;
  char tipoOrdenacao;

  printf("Informe 3 numeros: \n");
  scanf("%d %d %d", &num1, &num2, &num3);

  printf("Informe o tipo de ordenação: 'c' para crescente ou 'd' para decrescente: \n");
  scanf(" %c", &tipoOrdenacao);

  // Verificando o tipo de ordenção e fazendo a chamada da função crescente
  if(tipoOrdenacao == 'c' || tipoOrdenacao == 'C') crescente(num1, num2, num3);

  // Verificando o tipo de ordenção e fazendo a chamada da função decrescente
  if(tipoOrdenacao == 'd' || tipoOrdenacao == 'D') decrescente(num1, num2, num3);
  else printf("Tipo de Ordencao Inválida !!!");
  
  getchar();
  return 0;
}

