/* recber 3 notas de cada um dos dois alunos e retorna o aluno com maior rendimento*/

// 1 - Pegar as notas do primeiro aluno
// 2 - Pegar as notas do segund aluno
// 3 - Fazer a media dos dois alunos
// 4 - Imprimir o aluno com maior media(rendimento)

#include <stdio.h>

float media(void) {
  float acc = 0.0, nota;

  for(int i = 0; i < 3; i++) {
      scanf(" %f", &nota);
      acc += nota;
  }

  return acc / 3;
}

int main() {
  float media1, media2;

  printf("Informe a notas no aluno 01 \n");
  media1 = media();

  printf("Informe a notas no aluno 02 \n");
  media2 = media();

  if(media1 > media2) {
    printf("Aluno 1 teve mais rendimento. \n");
  }
  else {
    if(media2 > media1) {
      printf("Aluno 2 teve mais rendimento. \n");
    }
    else {
      printf("Ambos os alunos estão com rendimentos iguais. \n");
    }
  }

  getchar();
  return 0;
}

