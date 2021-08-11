/* Senha válida: 12345 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int senha, senhaValida = 12345;

  printf("Informe a sua senha: ");
  scanf("%d", &senha);

  while(senha != senhaValida) {
    system("tput reset");
    printf("Senha Inválida \n");
    printf("Informe sua senha: ");
    scanf("%d", &senha);
  }

  printf("Acesso Permitido \n");

  getchar();
  return 0;
}