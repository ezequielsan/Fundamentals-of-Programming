#include <stdio.h>

void functionWithoutPointer(int soma) {
  int i;

  for(i = 0; i <= 10; i++) {
    soma = soma + i;
  }
}

// Espera como parâmetro um endereço de memória para inteiros
void functionWithPointer(int* pSoma) {
  int i;

  for(i = 0; i <= 10; i++) {
    // Alterando o conteúdo para onde pSoma aponta
    // pSoma aponta para a variável soma
    *pSoma = *pSoma + i;
  }
}

int main() {
  int soma = 0;

  // Passando parametros por valor
  // Nesse caso não há mudanças, pois as 
  // variaveis soma da função functionWithoutPointer(), e a da função main são diferentes
  // No caso estamos passando uma cópia do valor da variável soma para a função functionWithoutPointer()
  functionWithoutPointer(soma);
  printf("Conteudo da varivel soma na funcao sem ponteiro: %d\n", soma);
  printf("Endereco da variavel soma: %p \n\n", &soma);

  // Passando o valor por referência, ou seja, passando o endereço da variável
  // Nesse caso se for modificado o valor da variavel soma
  // Esse valor é refletido em qualquer parte do código
  functionWithPointer(&soma);
  printf("Conteudo da varivel soma na funcao com ponteiro: %d\n", soma);
  printf("Endereco da variavel soma: %p \n\n", &soma);
  
  return 0;
}