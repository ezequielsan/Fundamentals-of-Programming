/* 
 * 1. Encontrar os múltiplos de um número qualquer
 *   a) Ler um número
 *   b) imprimir os múltiplos desse número, lembrando que a quantidade 
 *   de múltiplos é inifinita. Portanto, deve existir algum critério de parada.
 * 
 * 2. Critérios de parada
 *   a) Limite superior. Ex: Os muúltiplos de 5 entre 0 e 100
 *   b) Encontrar os 10 primeiro múltiplos de um número
 *   c) Perguntar ao usuário se ele deseja continuar
*/

#include <stdio.h>
#include <locale.h>

void multiplos(int num) {
  int fator = 1, multiplos;
  
  while((multiplos + num) <= 100) {
    multiplos = fator * num;
    printf("%d, ", multiplos);
    fator++;
  }
}

void dezPrimeirosMultiplos(int num) {
  int fator = 1, multiplos;
  
  while(fator <= 10) {
    multiplos = fator * num;
    printf("%d, ", multiplos);
    fator++;
  }
} 

void perguntaUsuarioParaContinuar(int num) {
  int fator = 1, multiplos, continuar = 1;

  while(continuar == 1) {
    multiplos = fator * num;
    printf("%d \n", multiplos);

    printf("Deseja continuar(1 - Sim, qualquer caractere - Não): ");
    scanf("%d", &continuar);

    fator++;  
  }
}

int main() {
  int num;

  do {
    printf("Digiteu um número: ");
    scanf("%d", &num);
  }
  while(num <= 0);

  // multiplos(num);
  // dezPrimeirosMultiplos(num);
  perguntaUsuarioParaContinuar(num);
  
  getchar();
  return 0;
}