/* 
  Faça um programa que identifica se uma matriz quadrada (de qualquer tamanho)
  é um quadrado mágico. Um quadrado mágico é uma matriz composta de números não 
  repetidos, onde a soma das linhas, das colunas e das diagonais é o mesmo valor.

  Etapas: 
  1. verificar se a matriz é quadrada
    * verifica se as dimensões são iguais
    * retorna 1, se as dimensões forem iguais
    * retorna 0, se não forem iguais

  2. Verificar se há números repetidos
    * pecorrer toda a matriz verificando se a valores repetidos
    * retorna 1 se não houver números repetidos
    * retorna 0 se hover números repetidos
  
  3. Verificar se as somas das linhas da matriz são iguais
    * pecorrer todos os elementos de uma linha
    * somando todos os seus elementos e guaradando cada soma no array
    * depois verificar se todos os valores no array são iguais
    * posso fazer uma função generica que verifica se todos os elementos de uma array são iguais
      * retorna 1 para sim, são iguais
      * retorna 0 para não, não são iguais
  
  4. Verificar se as somas das colunas da matriz são iguais
    * Basiamente repetir o mesmo processo da etapa 3
  
  5. Fazer função que soma os elementos da diagonal principal
    * Pecorrer a diagonal principal e somar seus elementos
    * Retornar a soma resultante
    
  6. Fazer uma função que soma os elementos da diagoral secundária
    * Pecorrer a diagonal secundária e somar seus elementos
    * Retornar a soma resultante
  
  7. Verificar se a soma das linhas, das colunas, da diagonal principal e secundária são iguais
    * comparar os valores em todos esses casos
*/

#include <stdio.h>
#include <stdlib.h>

// Inicializando matriz com dados aleatórios
void initMatrix(int qntLinhas, int qntColunas, int m[][qntColunas]) {
  int i, j;

  for(i = 0; i < qntLinhas; i++) {
    for(j = 0; j < qntColunas; j++) {
      printf("Informe o elemento da posicao(%d,%d): ", i, j);
      scanf("%d", &m[i][j]);
    }
  }

  printf("\n");
}

// Imprimindo matriz na tela
void printMatrix(int qntLinhas, int qntColunas, int m[][qntColunas]) {
  int i, j;

  for(i = 0; i < qntLinhas; i++) {
    for(j = 0; j < qntColunas; j++) {
     printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  printf("\n");
}

// Pegando dimensões da matriz
int dimensions(void) {
  int value;
  scanf("%d", &value);
  printf("\n");

  return value;
}

// Verifica se os elementos dos vetores são iguais
int verificaElementosIguais(int v[], int size) {
  int i, iguais = 1;

  for(i = 0; i < size; i++) {
    if(v[0] != v[i]) {
      iguais = 0;
      break;
    }
  }

  return iguais;
}

// Verifica se a matriz fornecida é quadrada (qntLinhas == qntColunas) - Etapa 01
int verificaSeMatrizQuadrada(int qntLinhas, int qntColunas) {
  if(qntLinhas == qntColunas) {
    return 1;
  }
  else {
    printf("informe os valores da quantidade de linhas e colunas validos!!!\n");
    return 0;
  }
}

// Verifica se um numero esta dentro da matriz
int presente(int qntLinhas, int qntColunas, int m[][qntColunas], int num) {
  int i, j, qnt = 0;

  for(i = 0; i < qntLinhas; i++) {
    for(j = 0; j < qntColunas; j++) {
      // printf("%d == %d\n", num, m[i][j]);
      if(num == m[i][j]) {
        qnt++;
        // printf("%d == %d : qnt = %d\n", num, m[i][j], qnt);
      }
    }
  }

  return (qnt > 1) ? 1 : 0;
}

// Verificando de a numeros repetidos - Etapa 02
int verificaNumerosRepetidos(int qntLinhas, int qntColunas, int m[][qntColunas]) {
  int i, j, state, executou = 0;

  for(i = 0; i < qntLinhas; i++) {
    for(j = 0; j < qntColunas; j++) {
      state = presente(qntLinhas, qntColunas, m, m[i][j]);

      if(state == 1) break; // saindo do laço mais interno
        
      executou++; // variável de teste
    }

    if(state == 1) break; // saindo do laço mais externo
  }

  if(state == 1) {
    printf("ha numeros repetidos!!!\n");
    return 0;
  }
  
  else {
    printf("nao ha numeros repetidos\n");
    return 1;
  }
  
}

// Verificando se as somas das Linhas são iguais - Etapa 03
int verificaSomaLinhas(int qntLinhas, int qntColunas, int m[][qntColunas], int somasL[]) {
  int i, j, soma;

  for(i = 0; i < qntLinhas; i++) {
    soma = 0;

    for(j = 0; j < qntColunas; j++) {
      soma += m[i][j];
    }
    
    somasL[i] = soma;
    printf("soma da linha %d e igual a %d\n", i + 1, somasL[i]);
  }

  if(verificaElementosIguais(somasL, qntColunas) == 1) {
    printf("A soma das linhas sao iguais, e sao %d\n", somasL[0]);
    return 1;
  }
  else {
    printf("A soma das linhas nao sao iguais.\n");
    return 0;
  }
}

// Verificando se as somas das Colunas são iguais - Etapa 04
int verificaSomaColunas(int qntLinhas, int qntColunas, int m[][qntColunas], int somasC[]) {
  int i, j, soma;

  for(j = 0; j < qntLinhas; j++) {
    soma = 0;

    for(i = 0; i < qntColunas; i++) {
      soma += m[i][j];
    }
    
    somasC[j] = soma;
    printf("soma da coluna %d e igual a %d\n", j + 1, somasC[j]);
  }

  if(verificaElementosIguais(somasC, qntColunas) == 1) {
    printf("A soma das colunas sao iguais, e sao %d\n", somasC[0]);
    return 1;
  }
  else {
    printf("A soma das colunas nao sao iguais.\n");
    return 0;
  }
}

// Somando os elementos da diagonal principal
int verificaSomaDiagonalPrincipal(int qntLinhas, int qntColunas, int m[][qntColunas]) {
  int i, somasD = 0;

  for(i = 0; i < qntLinhas; i++) {
    somasD += m[i][i];
  }

  printf("A soma dos elementos da diagonal principal e %d\n", somasD);

  return somasD;
}

// Somando os elementos da diagonal secundaria
int verificaSomaDiagonalSecundaria(int qntLinhas, int qntColunas, int m[][qntColunas]) {
  int i, somasD = 0;
  
  int ultimaLinha = qntLinhas - 1;
  for(i = 0; i < qntLinhas; i++) {
    somasD += m[ultimaLinha - i][i];
  }

  printf("A soma dos elementos da diagonal secundaria e %d\n", somasD);

  return somasD;
}

int main() {
  int qntLinhas, qntColunas;

  do {
    printf("Informe a quantidade de linhas: \n> ");
    qntLinhas = dimensions();

    printf("Informe a quantidade de colunas: \n> ");
    qntColunas = dimensions();
  } while(verificaSeMatrizQuadrada(qntLinhas, qntColunas) == 0);
 
  int m[qntLinhas][qntColunas];
  int somaLinhas[qntLinhas], somaColunas[qntColunas], somaDiagPrinc, somaDiagSec;

  initMatrix(qntLinhas, qntColunas, m);
  
  printMatrix(qntLinhas, qntColunas, m);

  int stateRepetidos = verificaNumerosRepetidos(qntLinhas, qntColunas, m);

  int stateSomaLinhas = verificaSomaLinhas(qntLinhas, qntColunas, m, somaLinhas);

  int stateSomaColunas = verificaSomaColunas(qntLinhas, qntColunas, m, somaColunas);

  somaDiagPrinc = verificaSomaDiagonalPrincipal(qntLinhas, qntColunas, m);

  somaDiagSec = verificaSomaDiagonalSecundaria(qntLinhas, qntColunas, m);

  // printf("%d %d", qntLinhas, qntColunas);

  if((stateSomaLinhas == 1) && (stateSomaColunas == 1) && (stateRepetidos == 1) && (somaLinhas[0] == somaColunas[0]) && (somaDiagPrinc == somaDiagSec) && (somaDiagPrinc == somaLinhas[0]) && (somaDiagPrinc == somaColunas[0])) {
    printf("Matriz quadrado perfeito");
  }
  else {
    printf("Matriz nao e quadrado perfeito");
  }

  getchar();
  return 0;
}


