/* Passagem de matrizes para funções */

#include <stdio.h>
#include <stdlib.h>
#define DIM 3
const char espaco = ' ';

void inic(char s[ ][DIM]) {
  int i, j;

  for(i = 0; i < DIM; i++) {
    for(j = 0; j < DIM; j++) {
      s[i][j] = espaco;
    }
  }
}

void mostra(char s[DIM][DIM]) {
  int i, j;

  for(i = 0; i < DIM; i++) {
    for(j = 0; j < DIM; j++) {
      printf(" %c %c", s[i][j], j == DIM - 1? ' ': '|');
      
      if(j == DIM - 1)
        printf("\n-----------\n");
    }
  }
}

int main() {
  int posX, posY;
  char Velha[DIM][DIM];
  char ch = 'O'; // Caractere para jogar
  int numeroJogadas = 0;

  inic(Velha);
  
  while(1) {
    mostra(Velha);
    
    printf("\nIntroduza a Posicao que quer colocar: Formato(Linha, Coluna): ");
    scanf("%d %d", &posX, &posY);

    posX--; // os indíces começam em zero
    posY--;

    if(Velha[posX][posY] == espaco) { // Caso espaço
      Velha[posX][posY] = ch = (ch == 'O')? 'X' : 'O';
      numeroJogadas++;
    }
    else {
      // Se o numero de jogadas for igual a quantidade de casa do tabuleiro, acaba o jogo
      if(numeroJogadas == DIM * DIM) {
        printf("Fim da partida.");
        break; // Acabar o jogo
      }

      printf("\nPosicao ja ocupada \nJogue Novamente!!!\n\n");
    }
  }
  
  return 0;
}


