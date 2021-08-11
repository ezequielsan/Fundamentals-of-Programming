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

  printf("\n");
}

// Lendo tamanho do Array
int getSize(void) {
  int valor;

  scanf("%d", &valor);

  return valor;
}

// Ordenando array em forma crescente
void ordenaArrayCres(int v[], int tamanho) {
  int i, j, aux, trocou = 0;
  int trocas = 0, execExt = 0, execInt = 0;

  for(i = 0; i < tamanho - 1; i++) {
    // Esse for mais interno tem a seguinte lógica:
    // A cada a  execução do laço mais externo 
    // temos que um elemento vai para sua ordem correta
    // Não sendo necessário pecorrer todo o array novamente
    // Por isso subtrairmos i abaixo. 
    for(j = 0; j < tamanho - 1 - i; j++) {
      if(v[j] > v[j + 1]) { // para ordenar o vetor em forma DESC basta mudar o sinal de maior para menor
        aux = v[j];
        v[j] = v[j + 1];
        v[j + 1] = aux;
        trocas++;
        trocou = 1;
      }
      execInt++;
    }
    
    // Esse if verifica se o array passado pelo usuário já não estar ordenado.
    // Lógica:
    // Se ao fazer a primeria execução e não hover nenhuma troca
    // Logo esse array ja esta ordenado, então eu saio do for
    if(trocou == 0) {
        i = tamanho;
      }
    execExt++;
  } 
  
  printf("O array ordenado em forma crescente e: ");
  printArray(v, tamanho);

  printf("O numero de trocas e %d\n", trocas);
  printf("O numero de execExt e %d\n", execExt);
  printf("O numero de execInt e %d\n", execInt);

}

void ordenaArrayDesc(int v[], int tamanho) {
  int i, j, aux;

  for(i = 0; i < (tamanho - 1); i++) {
    for(j = 0; j < (tamanho - 1); j++) {
      if(v[j] < v[j + 1]) {
        aux = v[j];
        v[j] = v[j + 1];
        v[j + 1] = aux;
      }
    }
  }

  printf("O array em forma decrescente e: ");
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

  ordenaArrayCres(array, tamanho);

  printf("\n");

  ordenaArrayDesc(array, tamanho);

  getchar();
  return 0;
}


