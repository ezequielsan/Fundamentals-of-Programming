#include <stdio.h>
#include <stdlib.h>

typedef unsigned char byte;

int contaVogais(byte s[]) {
  byte *vogais;
  vogais = "aeiouAEIOU";
  int numVogais = 0;
  
  for(int i = 0; s[i] != '\0'; i++) {
    byte ch = s[i];

    for(int j = 0; vogais[j] != '\0'; j++) {
      if(ch == vogais[j]) {
        numVogais++;
        break;
      }
    }
  }
  
  return numVogais;
}

int main() {
  char str[100];

  scanf("%s", str);

  int n = contaVogais(str);

  printf("O numero de vogais e %d\n", n);
  return EXIT_SUCCESS;
}