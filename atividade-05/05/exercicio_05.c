/* === Ordenando um vetor ===
 *
 * Não é preciso ir até a ultima posição, basta ir até a penúltima (array.length - 1)
 * Pecorrer o vetor várias vezes fazendo trocas de elementos fora de posição
 * Quntaz vezes no máximo vou ter que pecorrer o vetor ?
 *   R: array.length - 1
 *   Cada vez que percorremos o vetor um elemento vai ficar na posição corretta
 * 
 * Solução raiz do problema:
 *   Vai ser preciso dois laços for:
 *   A mais internar vai trocar os elementos de posição
 *   A mais externa pecorre o vetor váriaz vezes fazendo trocas 
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

  scanf("%d", &valor);

  return valor;
}

void ordenaArrayDecres(int v[], int tamanho) {
  int i, j, aux;

  for(i = 0; i < tamanho - 1; i++) {
    for(j = 0; j < tamanho - 1; j++) {
      if(v[j] < v[j + 1]) {
        aux = v[j];
        v[j] = v[j + 1];
        v[j + 1] = aux;
      }
    }
  } 
  
  printf("O array ordenado em forma decrescente e: ");
  printArray(v, tamanho);

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

  ordenaArrayDecres(array, tamanho);

  getchar();
  return 0;
}


