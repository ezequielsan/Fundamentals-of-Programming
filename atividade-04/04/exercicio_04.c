/*Criar um função MM que rebece dois parametros, 
  retornar o menor em A e o maior em B 
  *
  * 1. Ler dois valor
  * 2. Criar uma função em recebe dois parametros
  * 3. verificar qual o menor e maior numero
  * 4. A = menor e B = maior
  * 
*/

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float num1, num2;

  printf("Informe dois valores: ");
  scanf("%f %f", &num1, &num2);

  void verificarMaiorEMenor(float valor1, float valor2);
  verificarMaiorEMenor(num1, num2);

  getchar();
  return 0;
}

void verificarMaiorEMenor(float value1, float value2) {
  float A = 0.0, B = 0.0;
  if(value1 > value2) {
    B = value1;
    A = value2;
  } 
  else {
    B = value2;
    A = value1;
  }

  printf("A = %.2f, B = %.2f\n", A, B);
}