/* Código para validação de Valores passados pelo usuário */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Primeira maneira de validação
void validation(void) {
  int num = -1;

  // Validação
  while(num < 0){
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num < 0) printf("%d é um número inválido !!!\n", num);
  }

  printf("O numero %d é valido\n", num);
}

// Segunda maneira de validação
void validationTwo() {
  int num;

  do{
    system("tput reset"); // limpa o console
    printf("Digite um número: ");
    scanf("%d", &num);
  } 
  while(num < 0);

  printf("O numero %d é valido\n", num);
}

int main() {   
  
  validation();
  validationTwo();

  getchar();
  return 0;
}