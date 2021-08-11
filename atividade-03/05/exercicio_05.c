#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num, cont = 1, primo, accExt = 0, accInt = 0; 
  // as variáveis acc's são os acumuladores externos e internos

  printf("Informe um numero: ");
  scanf("%d", &num);

  while(cont <= num) {
    if((num % cont == 0)) {
      accExt++;

      if((cont == 1) || (cont == num)) {
        primo = num;
        accInt++;
      }

      printf("Os divisores por ele são %d\n", cont);
    }
    cont++;
  }

  if(accExt == accInt) {
    printf("O numero %d é primo\n", primo);
  } 
  else {
    printf("O numero %d não é primo\n", primo);
  }

  // printf("AccExt: %d, accInt: %d\n", accExt, accInt);

  getchar();
  return 0;
}