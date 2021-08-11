/* === Faça um algoritmo que verifica de um vetor A está contido no vetor B === 
 *
 * # ALGORITMO
 * ## Verificar se A está contido em B
 * 
 * Para todo elemento de A, verificar se está contido em B
 * Se existir pelo menos um elemento de A que NÃO está contido em B
 *   A não está contido em B
 * 
*/

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

  printf("Os valores do vetor sao: ");
  while(i < tamanho) {
    printf("%d, ", v[i]);
    i++;
  }
}

// Lendo tamanho do Array
int getSize(void) {
  int valor;

  printf("> ");
  scanf("%d", &valor);

  return valor;
}

// Verificando de B contém A, ou A está contido em B
// Se A está contido em B, retorna 1
// Se não retorn 0
int verificaBcontemA(int VA[], int VB[], int tamanhoA, int tamanhoB) {
  int contido = 1;

  // Se o vetor A for maior que o vetor B, A não está contido em B e retorna 0
  if(tamanhoA > tamanhoB) {
    return 0;
  }

  for(int i = 0; i < tamanhoA; i++) {
    // Vamos partir de que o elemento de A não está em B
    int presente = 0;

    for(int j = 0; j < tamanhoB; j++) {
      if(VA[i] == VB[j]) {
        presente = 1;
      }
    }

    // Se o elemento de A não estiver presente em B, logo A não está contido em B
    if(presente == 0) {
      contido = 0;
      break;
    }
  }

  return contido;
}

int verificaSeAEstaEmB(int va[], int vb[], int tamA, int tamB) {
  int i, j, contido = 1;
  
  if(tamA > tamB) {
    return 0;
  }
  // A: 1 2 5
  // B: 1 4 2 3 7
  
  // 1 == 1 -> presente = 1 e break

  // 2 == 1 -> presente = 0
  // 2 == 4 -> presente = 0
  // 2 == 2 -> presente = 1 e break

  // 5 == 1 -> presente = 0
  // 5 == 4 -> presente = 0
  // 5 == 2 -> presente = 0
  // 5 == 3 -> presente = 0
  // 5 == 7 -> presente = 0

  for(i = 0; i < tamA; i++) { // 1
    int presente = 0;

    for(j = 0; j < tamB; j++) { // 1
      if(va[i] == vb[j]) { // 1 == 1
        presente = 1;
        break;
      }
    }

    if(presente == 0) {
      contido = 0;
      break;
    }
  }

  return contido;
}
// Recebe o estado da função acima e imprima se está ou não está contido
void verificaSeContido(int state) {
  
  if(state == 0) 
    printf("O primeiro vetor nao esta contido em B\n");
  
  else  
    printf("O primeiro vetor esta contido em B\n");
}

int main() {
  int tamanhoA, tamanhoB, contido;

  printf("Informe o tamanho do primeiro vetor\n");
  tamanhoA = getSize();

  printf("\n");

  printf("Informe o tamanho do segundo vetor\n");
  tamanhoB = getSize();

  printf("\n");

  int arrayA[tamanhoA], arrayB[tamanhoB];

  printf("Informe os elementos do primeiro vetor\n");
  initArray(arrayA, tamanhoA);

  printf("\n");

  printf("Informe os elementos do segundo vetor\n");
  initArray(arrayB, tamanhoB);

  printf("\n");

  // contido = verificaBcontemA(arrayA, arrayB, tamanhoA, tamanhoB);
  contido = verificaSeAEstaEmB(arrayA, arrayB, tamanhoA, tamanhoB);
  
  verificaSeContido(contido);

  printf("\n");

  printArray(arrayA, tamanhoA);

  printf("\n");

  printArray(arrayB, tamanhoB);
  
  getchar();
  return 0;
}