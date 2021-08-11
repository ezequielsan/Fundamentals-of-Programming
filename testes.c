#include<stdio.h>
#include<locale.h>

// Imprindo o Array na tela
void printArray(int v[], int tamanho) {
  int i = 0;

  while(i < tamanho) {
    printf("%d ", v[i]);
    i++;
  }

  printf("\n");
}

void primo(int v[], int tam) {
  int div = 0, num2 = 2;

  for(int j = 0; j < tam; ) {
    div = 0;

    for(int i = 1; i <= num2; i++) {
      if(num2 % i == 0) {
        div++;
      }
    }

    if(div == 2) {
      v[j] = num2;
      j++;
    }

    num2++;
  }
}

void verificandoSeSomaDaPrimo(int v[], int tam) {
  int sum, i = 0, div;

  while(i < 20) {
    for(int j = 0; j < tam; j++) {
      sum = 2 + v[j];

      printf("sum: %d\n", sum);

      div = 0;
      for(int l = 1; l < sum; l++) {
        printf("entrou do for mais interno. sum = %d\n", sum);

        if(sum % l == 0) {
          div++;
        }
      }

      if(div == 2) {
        printf("%d é primo.\n", sum);
      }
    }

    i++;
  }
}

int main()
{
  setlocale(LC_ALL,"Portuguese");

  int tam = 30, num;
  int primos[tam];

  primo(primos, tam);

  printArray(primos, tam);

  verificandoSeSomaDaPrimo(primos, tam);

  return 0;
}

