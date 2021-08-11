#include <stdio.h>
#include <stdlib.h>

// Inicializando o Array com dados do usuário
void initArray(int v[], int tamanho) {
  int i = 0;

  while (i < tamanho)
  {
    printf("> ");
    scanf("%d", &v[i]);
    i++;
  }
}

// Imprindo o Array na tela
void printArray(int v[], int tamanho) {
  int i = 0;

  while(i < tamanho) {
    printf("%d ", v[i]);
    i++;
  }
}

// Lendo tamanho do Array
int getSize(void) {
  int valor;

  scanf("%d", &valor);

  return valor;
}

int checkIfPrime(int num) {
  int primo = 1, i;

  for(i = 2; i < num; i++) {
      if(num % i == 0) primo = 0;
  }

  return primo;
}

void numberOfPrimes(int v[], int size) {
  int i, qnt = 0;

  for(i = 0; i < size; i++) {
    if(checkIfPrime(v[i]) == 1) {
      qnt++;
    }
  }

  printf("A quantidade de numeros primos sao %d\n", qnt);
}

int main() {
  int tamanho;

  printf("Informe o tamanho do array: ");
  tamanho = getSize();

  int array[tamanho];

  printf("Informe os elementos do array: \n");
  initArray(array, tamanho);

  printf("Os elementos do array sao: ");
  printArray(array, tamanho);
  
  printf("\n");
  
  numberOfPrimes(array, tamanho);

  getchar();
  return 0;
}


