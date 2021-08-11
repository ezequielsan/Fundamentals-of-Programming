// 1 - Ler a idade do usuário
// 2 - Se idade = 0, criança
// 3 - Se idade = 10, adolecente
// 4 - Se idade = 20, jovem
// 5 - Se idade = 30, adulto
// 6 - Se idade = 40, melhor idade
// 7 - Se idade = diferente, aposentado (idade > 40 == aposentado)

#include <stdio.h>

int main() {
  int age;

  printf("Informe sua idade(em dezenas): ");
  scanf("%d", &age);

  switch(age) {
    case 0 : printf("Criança \n"); break;
    case 10 : printf("Adolescente \n"); break;
    case 20 : printf("Jovem \n"); break;
    case 30 : printf("Adulto \n"); break;
    case 40 : printf("Melhor Idade \n"); break;
    default: printf("Aposentado \n"); 

  }
  
  getchar();
  return 0;
}