/* 
 * 1. Criar o vetor intersecção de dois vetores
 *   - Números comuns a dois outros vetores
 *   - O tamanho do vetor intersecção é até o menor dos dois vetores
 *   - Não pode haver elementos repetidos no vetor intersecção
 * 
 * 2. Estratégia
 *   - Criar um vetor intersecção que vai ser a intersecçaõ dos vetores A e B
 *   - Definir o tamanho do vetor intersecção através do tamanho de A e B
 *   - Pecorrer o vetor A e B, usar a função presente para verificar se o elemento esta nos dois vetores
 *   - Caso esteja, verifica se esse elemento já foi colocado no vetor intersecção
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Inicializando o Array com dados do usuário
void initArray(int v[], int tamanho) {
  // srand(time(NULL));

  int i = 0;

  while (i < tamanho)
  {
    printf("> ");
    scanf("%d", &v[i]);
    i++;
  }

  // for(i = 0; i < tamanho; i++)
  //   v[i] = rand() % baseAleatoria;
}

// Imprindo o Array na tela
void printArray(int v[], int tamanho) {
  int i = 0;

  while(i < tamanho) {
    printf("%d ", v[i]);
    i++;
  }

  printf("\n");
}

// Lendo tamanho do Array
int getSize(void) {
  int valor;

  scanf("%d", &valor);

  return valor;
}

// Verifica se um numero esta presente em um array
int presente(int v[], int tamanho, int numero) {
  int encontrado = 0, i;

  for(i = 0; i < tamanho; i++) {
    if(v[i] == numero) {
      encontrado = 1;
      break;
    }
  }

  return encontrado;
}

// Intersecçaõ de dois vetores
void arrayIntersec(int v1[], int v2[], int intersec[],int tamanhos[]) {
  int indiceMaxIntersec = -1, i;

  // for( i = 0; i < tamanhos[2]; i++) {
  //   intersec[i] = 0;
  // }

  for( i = 0; i < tamanhos[0]; i++) {
    int elementoComum = presente(v2, tamanhos[1], v1[i]);

    // Número presente nos dois vetores
    if(elementoComum == 1) {

      // Verificando se o elemento em comum já não esta no vetor intersecção
      if(presente(intersec, tamanhos[2], v1[i]) == 0) {
        indiceMaxIntersec++;
        intersec[indiceMaxIntersec] = v1[i];
      }
    }
  }

  printf("Os elementos do vetor Interseccao sao: ");
  printArray(intersec, indiceMaxIntersec + 1);
}

int main() {
  int tamanhos[3];

  printf("informe o tamanho do primeiro vetor: ");
  tamanhos[0] = getSize();

  printf("informe o tamanho do segundo vetor: ");
  tamanhos[1] = getSize();

  // O tamanho max. do vetor Intersecção é o tamanho do menor vetor dado
  if(tamanhos[0] <= tamanhos[1]) 
    tamanhos[2] = tamanhos[0];

  else 
    tamanhos[2] = tamanhos[1];

  int vetorA[tamanhos[0]], 
      vetorB[tamanhos[1]], 
      vetorInterseccao[tamanhos[2]];

  printf("Informe os elementos do vetor A: \n");
  initArray(vetorA, tamanhos[0]);

  printf("Informe os elementos do vetor B: \n");
  initArray(vetorB, tamanhos[1]);

  arrayIntersec(vetorA, vetorB, vetorInterseccao, tamanhos);

  printf("Os elementos do vetor A sao: ");
  printArray(vetorA, tamanhos[0]);

  printf("Os elementos do vetor B sao: ");
  printArray(vetorB, tamanhos[1]);

  getchar();
  return 0;
}


