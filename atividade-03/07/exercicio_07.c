/* === Determinar se um número é um quadrado perfeito === 
 *
 * 1. Ler um número
 * 2. Se o ((numero / 2) * (numero / 2)) == numero

*/

# include <stdio.h>
# include <locale.h>
# include <limits.h>

int main() {
  int num, cont = 1;

  do {
    printf("Digite um numero: ");
    scanf("%d", &num);
  }
  while(num <= 0);
  
  while(cont <= 100) {
    if(cont * cont == num) {
      printf("%d é um quadrado perfeito: %d * %d = %d\n", num, cont, cont, num);
      break;
    }
    cont++;
  }

  getchar();
  return 0;
}