#include <stdio.h>

int main() {

  float precoProduto, percentDesconto, novoPreco;

  printf("Informe o preco do produto: ");
  scanf("%f", &precoProduto);
  printf("Informe o percentual de desconto desejado: ");
  scanf("%f", &percentDesconto);

  novoPreco = precoProduto - ((percentDesconto * precoProduto) / 100);

  printf("O desconto foi de %2.2f%% e o preco do produto com o desconto e %2.2f", percentDesconto, novoPreco);

  /*É uma boa prática não usar o system("pause") por que ele não funciona no linux/ubuntu, a getchar() é mais conveniente e ele faz a mesma coisa que o system e não aloca muita memoria.
  */

 getchar();

  return 0;
}