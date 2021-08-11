/* === Algoritmo que imprimir o vetor união de N vetores dados ===
 * OBS: O vetor união não deve ter elementos repetidos
 *
 * Criar 2 vetores e inicializalos
 * Fazer a união deles
 *   1. Pecorrer o vetor A, para cada elemento de A verificar se ele ja está no vetor união
 *   2. Se já estiver presente não add
 *   3. Se não estiver add
 *   4. Pecorrer o vetor B e repetir o mesmo processo
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

  while(i < tamanho) {
    printf("%d ", v[i]);
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

// Função verifica de um determinado elemento esta presente em um determinado vetor
// Se estiver presente retorna 1 (true)
// Se não estiver presente retorna 0 (false)
int elementoPresente(int v[], int tamanho, int num) {
  int presente = 0;
  
  for(int i = 0; i < tamanho; i++) {
    if(v[i] == num) {
      presente = 1;
      break;
    }
  }

  return presente;
}
// Função que imprimir a União de dois vetores
void arrayUniao(int v1[], int v2[], int tam1, int tam2) {
  // o tamanho máx do vetor união é a soma dos tamanhos dos vetores que o compõem
  int arrayUniao[tam1 + tam2]; 
  int i;

  int inidiceUniao = 0;
  
  for(i = 0; i < tam1; i++) {
    if(elementoPresente(arrayUniao, inidiceUniao, v1[i]) == 0) {
      arrayUniao[inidiceUniao] = v1[i];
      inidiceUniao++;
    }
  }
  
  for(i = 0; i < tam2; i++) {
    if(elementoPresente(arrayUniao, inidiceUniao, v2[i]) == 0) {
      arrayUniao[inidiceUniao] = v2[i];
      inidiceUniao++;
    }
  }

  printArray(arrayUniao, inidiceUniao);
}

int main() {
  int tamanhoA, tamanhoB;

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

  printf("Os valores do vetor A sao: ");
  printArray(arrayA, tamanhoA);

  printf("\n");

  printf("Os valores do vetor B sao: ");
  printArray(arrayB, tamanhoB);

  printf("\n");

  printf("O vetor uniao e: ");
  arrayUniao(arrayA, arrayB, tamanhoA, tamanhoB);
  
  getchar();
  return 0;
}