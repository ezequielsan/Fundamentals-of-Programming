#include <stdio.h>

int main() {
  float nota, maiorNota, menorNota, sumTotal, media;
  int cont, quantJuizes;

  sumTotal = 0;
  maiorNota = 0;
  menorNota = 10;
  cont = 1;

  printf("Informe a quantidade de juízes: ");
  scanf("%d", &quantJuizes);

  while(cont <= quantJuizes) {
    
    // lendo as notas
    printf("Informe a nota do juiz %d : \n", cont);
    scanf("%f", &nota);

    // procurando a maior nota
    if(nota > maiorNota) maiorNota = nota;
     
    // procurando a menor nota
    if(nota < menorNota) menorNota = nota;
    
    // acumulando as notas
    sumTotal += nota;
    cont++;
  }
  
  // calculando a media
  media = (sumTotal - (maiorNota + menorNota)) / (quantJuizes - 2);

  printf("Maior nota %.2f \nMenor nota %.2f \nmedia e %.2f \n", maiorNota, menorNota, media);
  
  getchar();
  return 0;
}