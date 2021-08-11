// 1 - Ler duas notas, total de presença e o numero de aulas ministradas
// 2 - Se media < 4 : imprimir reprovado, media e precentual de presença
// 3 - se media >= 7 : imprimir aprovado na media, a media e precentual de presença
// 4 - Se estiver entre 4 e 7, pedir nota AF
// 5 - Refazer média(M = notaAF + mediaAnterior / 2)
// 6 - Se nova media < 5 : imprimir reprovado, a media e precentual de presença
// 7 - Se não : imprimir aprovado, a media e precentual de presença
// 8 - Se presença menor 75%: imprimir reprovado, a media e precentual de presença

#include <stdio.h>

float media(float nota1, float nota2) {
  return (nota1 + nota2) / 2;
}

float percentPresenca(int totalPresenca, int totalAulasMinistradas) {
  return (float) totalPresenca / totalAulasMinistradas;
}

int main() {
  int totalPresenca, totalAulasMinistradas;
  float nota1, nota2, notaAF, m, mediaFinal, percentagemPresenca;

  printf("Digite duas notas: \n");
  scanf("%f %f", &nota1, &nota2);

  printf("Informe o total de aulas ministradas e quantas aulas voce participou: \n");
  scanf("%d %d", &totalAulasMinistradas, &totalPresenca);

  // chamndos as funções e pegando a media e porcentagem de presença
  m = media(nota1, nota2);
  percentagemPresenca = percentPresenca(totalPresenca, totalAulasMinistradas) * 100;

  if(percentagemPresenca < 75) {
    printf("Aluno Reprovado por causa de faltas, com procentagem de presenca %.0f%%\n", percentagemPresenca);

    return 0; // Encerra a execução do programa
  }

  if(m <= 4) {
    printf("Aluno Reprovado, com media %.1f e procentagem de presenca %.0f%%\n", m, percentagemPresenca);
  }

  if(m >= 7) {
    printf("Aluno Aprovado, com media %.1f e procentagem de presenca %.0f%%\n", m, percentagemPresenca);
  }

  if(m > 4 && m < 7) {
    printf("Informe sua nota da avaliação final(AF): ");
    scanf("%f", &notaAF);

    mediaFinal = media(notaAF, m);

    if(mediaFinal < 5) {
      printf("Aluno Reprovado, com media %.1f e procentagem de presenca %.0f%%\n", mediaFinal, percentagemPresenca);
    }
    else {
      printf("Aluno Aprovado com conceito B, com media %.1f e procentagem de presenca %.0f%%\n", mediaFinal, percentagemPresenca);
    }
  }

  getchar();
  return 0;
}