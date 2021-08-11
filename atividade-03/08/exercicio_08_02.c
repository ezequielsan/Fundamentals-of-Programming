#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese"); // permite caracteres especiais, como pontuação

  int num1, num2, mdc = 0; 

  printf("Digite dois numeros: \n");
  scanf("%d %d", &num1, &num2);
  
  // setando num1 como o maior numero informado
  num1 = num1 + num2; 
  num2 = num1 - num2; 
  num1 = num1 - num2; 

  /* estou redeclarando a função maxDivComum() por que ela 
  foi criada após a função main */
  int maxDivComum(int num1, int num2);
  mdc = maxDivComum(num1, num2);
  
  printf("O mdc de %d e %d é %d.\n", num1, num2, mdc);
  
  getchar();
  return 0;
}

int maxDivComum(int num1, int num2) {
  if(num1 % num2 == 0) {
    return num2;
  }
  else {
    return maxDivComum(num2, num1 % num2);
  }
}