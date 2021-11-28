/* -> Conteúdo
  1. Introducao/definicao ponteiros
      Toda variavel tem 2 caracteristicas
        -tipo, reprensenta a quantidade de bytes em memoria
        -nome, que é sempre traduzido em um local na memoria de execucao

        -> endereço de memoria 

        Toda variavel tem um endereco para acessar o conteudo
        Toda variavel guarda um conteudo representado pelo tipo da variavel(valor davariável)

        definicao ponteiros: variavel que guarda o endereco de memoria de outra variavel
            -> apontar para uma outra variavel
  
  2. Uso com variaveis primitivas
  3. Uso de ponteiros com funcoes e passagem por referencia
  4. Entender um pouco sobre vetor e ponteiros
*/

#include <stdio.h>

int main() {
  int i;
  int soma = 0;

  for(i = 0; i <= 10; i++) {
    soma = soma + i;
  }

  printf("Soma: %d\n", soma);
  printf("O endereco de memoria da variavel soma: %p \n", &soma);
  printf("O endereco de memoria da variavel i: %p \n", &i);

  int* pointer;

  // Operador (&) retorna o endereço de uma determinada variável
  pointer = &soma;

  printf("\n");

  // Variável ponteiro -> Variável soma
  printf("Endereco de memoria onde o ponteiro aponta: %p\n", pointer);

  // Operador (*) acessa o conteúdo para onde um ponteiro aponta
  // ponteiro -> para a variável soma
  // impressão do conteúdo da variável soma
  printf("Conteudo da variavel soma atraves do ponteiro: %d\n", *pointer);

  // É possivel manipular o valor de uma variável sem ser necessário acessa-la
  // Podemos criar um ponteiro que aponta para tal variável e assim manipula-la
  // Estamos mudando o valor da variavel soma sem acessa-la diretamente
  *pointer = 2;

  printf("Soma: %d\n", soma);

  return 0;
}