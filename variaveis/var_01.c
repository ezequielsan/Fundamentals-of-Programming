#include <stdio.h>

int main() {
  int num;
  char caracteres;
  float pontoFlutuante;
  double pontoFlutuanteMaisPreciso;

  printf("O tipo inteiro ocupa %ld bytes de memoria \n", sizeof(int));
  printf("O tipo char ocupa %ld bytes de memoria \n", sizeof(char));
  printf("O tipo float ocupa %ld bytes de memoria \n", sizeof(float));
  printf("O tipo double ocupa %ld bytes de memoria \n", sizeof(double));

  //As varaveis do tipo inteira podem receber numeros positivos e negativos
  int num2 = 1;
  int num3 = -3;
  printf("num2 = %d  e num3 = %d \n", num2, num3);
  /*Para explicitar que a variavel interia so receba numeros positivos usa-se o prefixo unsigned e o formato de leitura é %u*/
  unsigned int x = 20;
  printf("x = %u \n", x);

  //podemos trabalhar com notação científica usando o sinal'e'
  float notacaoC = 12.45e3;
  printf("notacaoC = %E \n", notacaoC);

  //uma caratere em c nad mas é do que um conjutos de valores interios guardados em um unico byte
  char a = 'a';
  printf("O caractere '%c' tem como ASCII n° %d \n", a, a);

  //A outro metodo para pegar um caractere que é o getchar();
  char lyric;
  printf("Informe um caractere: ");
  lyric = getchar();
  printf("o caractere informado foi %c \n", lyric);

  getchar();
  //Esse getchar esta aq para ñ fechar o console de imediato apos copilar o programa.

}