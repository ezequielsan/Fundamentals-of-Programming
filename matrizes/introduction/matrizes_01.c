#include <stdio.h>
#include <stdlib.h>
#define DIM 3

int main() {
  // Jeito tradicional de inicializa um vetor de duas posições, "mas não é correto!!"
  char Velha[DIM][DIM] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',};

  // 3 linhas, cada uma com 3 posições
  char Velha2[DIM][DIM] = { {' ', ' ', ' '}, 
                            {' ', ' ', ' '}, 
                            {' ', ' ', ' '} }; 
  
  Velha2[0][0] = 'X';
  Velha2[1][1] = 'X';
  Velha2[0][2] = 'O';
  Velha2[2][2] = 'X';
  Velha2[2][0] = 'O';

  int i, j;

  for(i = 0; i < DIM; i++) {
    for(j = 0; j < DIM; j++) {
      printf(" %c %c", Velha2[i][j], j == DIM - 1? ' ': '|');
      
      if(j == DIM - 1)
        printf("\n-----------\n");
    }
  }

  // Ao inicializarmos um vetor de vetores podemos omitir a dimensaão mais a esquerda
  int nums[][3] = { {' ', ' ', ' '}, 
                    {' ', ' ', ' '}, 
                    {' ', ' ', ' '} };

  // É a mesma coisa de: 
  /* int nums[3][3] = { {' ', ' ', ' '}, 
                        {' ', ' ', ' '}, 
                        {' ', ' ', ' '} }
  */
  return 0;
}


