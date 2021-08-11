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

int elementoPresente(int v[], int size, int num) {
  int presente = 0, i = 0;

  for(; i < size; i++) {
    if(num == v[i]) {
      presente = 1;
      break;
    }
  }

  return presente;
}

void arrayUniao(int v1[], int v2[], int vetorU[], int size[]) {
  int i, indiceUniao = 0;
  // A: 1 2 3 3
  // B: 3 4 5

  for(i = 0; i < size[0]; i++) { 
      if(elementoPresente(vetorU, indiceUniao, v1[i]) == 0) {
        vetorU[indiceUniao] = v1[i];
        indiceUniao++;
      }
  }

  for(i = 0; i < size[1]; i++) { 
      if(elementoPresente(vetorU, indiceUniao, v2[i]) == 0) {
        vetorU[indiceUniao] = v2[i];
        indiceUniao++;
      }
  }

  printf("Vetor Uniao: ");
  printArray(vetorU, indiceUniao);
}

int main() {
  int tamanho[3];

  printf("Informe o tamanho do primeiro vetor: ");
  tamanho[0] = getSize();

  printf("\n");

  printf("Informe o tamanho do segundo vetor: ");
  tamanho[1] = getSize();

  // tamanho[2] é o tamanho maximo do vetor união
  tamanho[2] = tamanho[0] + tamanho[1];
  int vetorUniao[tamanho[2]];

  printf("\n");

  int array1[tamanho[0]], array2[tamanho[1]];

  printf("Informe os elementos do primeiro vetor: \n");
  initArray(array1, tamanho[0]);
  
  printf("\n");

  printf("Informe os elementos do segundo vetor: \n");
  initArray(array2, tamanho[1]);

  printf("\n");

  printf("Os elementos do primeiro vetor sao: ");
  printArray(array1, tamanho[0]);

  printf("\n");

  printf("Os elementos do segundo vetor sao: ");
  printArray(array2, tamanho[1]);

  printf("\n");

  arrayUniao(array1, array2, vetorUniao, tamanho);

  getchar();
  return 0;
}


