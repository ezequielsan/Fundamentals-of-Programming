// 1 - Ler dois numeros inteiros
// 1 - Ler dois numeros inteiros
// 2 - Verificar o maior
// 3 - Fazer a divisão do maior pelo menor
// 4 - Imprimir o resto da divisão

#include <stdio.h>

int main() {
  int maior, menor, tmp;

  printf("Informe 2 numeros: \n");
  scanf("%d %d", &maior, &menor);

  if(menor > maior) {
    tmp = menor;
    menor = maior;
    maior = tmp;
  }

  printf("o resto da divisao de %d/%d e %d", maior, menor, maior % menor);
  return 0;
}