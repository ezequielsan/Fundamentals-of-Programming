/* 
  O comando scanf armazena em um buffer o conteúdo digitado pelo usuário e armazena também a tecla enter utilizada pelo usuário para encerrar a entrada de dados. Para que o buffer seja esvaziado depois da atribuição do conteúdo à variável, utiliza-se %*c.
*/

#include <stdio.h>

int main() {
  // char nome[51];
  // char phone[21];
  char x, y;

  printf("Informe duas letras: ");
  scanf("%c%*c %c%*c", &x, &y);

  printf("x = %c e y = %c", x, y);

  


  // printf("Informe seu nome: ");
  // scanf("%s", nome);
  // printf("Informe seu telefone: ");
  // scanf(" %s", phone);

  // printf("seu nome e %s, e seu telefone e %s", nome, phone);
  // // printf("%s", phone);
  
  getchar();
  return 0;
}