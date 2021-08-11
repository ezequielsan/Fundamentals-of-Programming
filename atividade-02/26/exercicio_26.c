// 1 - Ler nota do projeto, média dos trabalhos das práticas, nota do teste e nota do exame final
// 2 - notaFinal = ((notaProjeto * 25) + (notaTrabalhosPratica * 10) + (notaTeste * 20) + (notaExameFinal * 45)) / 25 + 10 + 20 + 45
// 3 - Se nota notaExameFinal > 7.5 && notaProjeto > 9.5 && notaFinal > 8 : Aprovado
// 4 - Se não: Reprovado

#include <stdio.h>

float mediaPonderada(float notaProjeto, float notaTrabalhosPratica, float notaTeste, float notaExameFinal) {
  float media;
  media = ((notaProjeto * 25) + (notaTrabalhosPratica * 10) + (notaTeste * 20) + (notaExameFinal * 45)) / 100;

  return media;
}

int main() {
  float notaProjeto, notaTrabalhosPratica, notaTeste, notaExameFinal, mediaFinal;

  printf("Informe a nota do Projeto: ");
  scanf("%f", &notaProjeto);

  printf("Informe a nota dos Trabalhos Práticos: ");
  scanf(" %f", &notaTrabalhosPratica);

  printf("Informe a nota do Teste: ");
  scanf(" %f", &notaTeste);

  printf("Informe no Exame Final: ");
  scanf(" %f", &notaExameFinal);

  mediaFinal = mediaPonderada(notaProjeto, notaTrabalhosPratica, notaTeste, notaExameFinal);

  if(notaExameFinal > 7.5 && notaProjeto > 9.5 && mediaFinal > 8) printf("Media: %.2f --> Aprovado", mediaFinal);
  else printf("Media: %.2f --> Reprovado", mediaFinal);

  getchar();
  return 0;
}