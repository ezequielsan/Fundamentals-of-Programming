/* === Verificar se um vetor é parte de outro vetro === 
 *
 * Ser parte significa estar contido e manter a ordem
 * A: 3 1 3 7 6 3
 * B: 3 7 
 * 
 * Estrutura da solução
 * 1. Função que compara se dois vetores de mesmo tamanho são iguais
 * 2. Passar para função que compara, um subconjunto de A e o vetor B inteiro
 * 
*/

/* OBS: Ainda estou tentando fazer, por falta de tempo essa eu não fiz por completo */

#include <stdio.h>

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

// Receber dois vetores de tamanhos iguais
// Retorna 1, caso os vetores sejam iguais
// Retorna 0, caso os vetores não sejam iguais
int verificaIgual(int subVetorA[], int vetorB[], int size) {
  int iguais = 1, i;

  for(i = 0; i < size; i++) {
    if(subVetorA[i] != vetorB[i]) {
      iguais = 0;
      break;
    }
  }
  return iguais;
} 

int slice(int indiceInicio, int vetorA[], int aux[], int tamAux) {
  int i;
  
  for(i = 0; i < tamAux; i++) {
    aux[i] = vetorA[indiceInicio + i];
  }

  printArray(aux, tamAux);
  printf("\n");
}

int vetorParte(int v1[], int v2[], int size[]) {
  int i, parte = 0, qnt = 0;
  
  // Pecorre o vetor A procurando um subconjunto igual ao vetor B
  for(i = 0; i <= (size[0] - size[1]); i++) {
    int aux[size[1]];

    slice(i, v1, aux, size[1]);

    parte = verificaIgual(aux, v2, size[1]);

    if(parte == 1) {
      qnt++;
    }
  }

  if(qnt > 0) {
    printf("O vetor B faz parte de A %d vezes.\n", qnt);
  }
  else {
    printf("O vetor B nao faz parte de A.\n");
  }

  return parte;
}


int main() {
  int tamanho[2], state;
  
  printf("Informe o tamanho do primeiro array (OBS: O primeiro vetor tem que ser maior que o segundo): ");
  tamanho[0] = getSize();

  printf("Informe o tamanho do segundo array: ");
  tamanho[1] = getSize();
  
  int array[tamanho[0]];
  int array2[tamanho[1]];
  
  printf("Informe os elementos do primeiro array: \n");
  initArray(array, tamanho[0]);
  printf("\n");

  printf("Informe os elementos do segundo array: \n");
  initArray(array2, tamanho[1]);
  printf("\n");

  printf("Os elementos do primeiro array sao: ");
  printArray(array, tamanho[0]);
  printf("\n");

  printf("Os elementos do segundo array sao: ");
  printArray(array2, tamanho[1]);
  printf("\n");

  vetorParte(array, array2, tamanho);
  
  return 0;
}