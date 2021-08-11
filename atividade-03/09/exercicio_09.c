/* === Verificar se um numero N é perfeito === 
 * Um número N é perfeito se lel for igual a soma de seus divisores menors que ele
 * Ex: 6 = 1 + 2 + 3
 *
 * 1. Ler num numero N inteiro positivo
 * 2. Encontrar os divisores desse numero menore que ele
 * 3. somar os divisores encontrados e verificar se a soma deles é igual ao próprio numero
 * Mostra ao usuário se o numro N é ou não é perfeito
 * Perfeitos: 6, 28, 496, 8128
*/

#include <stdio.h>
#include <locale.h>

int main() {
  int num = 0, acc = 0;

  int validatingInput();
  num = validatingInput();

  int sumNumbersDividers(int num);
  acc = sumNumbersDividers(num);
  
  void checkIfPerfect(int num, int acc);
  checkIfPerfect(num, acc);

  getchar();
  return 0;
}

int validatingInput(void) {
  int num;
  do {
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);
  }
  while(num <= 0);
  return num;
}

int sumNumbersDividers(int num) {
  int acc = 0, divisor = 1;

  while(divisor < num) { 
    acc = (num % divisor == 0) ? acc + divisor : acc + 0;
    // printf("divisor: %d\tacc: %d\n", divisor, acc);
    divisor++;
  }

  return acc;
}

void checkIfPerfect(int num, int acc) {
  if(acc == num) printf("O número %d é um número perfeito.\n", num);
  else printf("O numero %d não é um número perfeito.\n", num);
}