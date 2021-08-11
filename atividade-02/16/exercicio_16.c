/* Fazer um programa que calcula IMC*/
// 1 - Ler peso e altura
// 2 - Fazer o calculo de IMC (peso / altura * altura)
// 3 - Se IMC < 20, então ta magro 
// 4 - Se IMC > 25, então ta obeso
// 5 - Se estiver entre 20 e 25, então ta normal.

#include <stdio.h>
#include <math.h>

float indiceMassaCorp(float weight, float height) {
  float imc;

  imc = weight / (pow(height, 2));

  return imc;
}

int main() {
  float weight, height, IMC;

  printf("Informe o pesso(kilogramas) e a altura(metros): \n");
  scanf("%f %f", &weight, &height);

  IMC = indiceMassaCorp(weight, height);

  if(IMC < 20) printf("IMC de %.2f , situacao: Magro", IMC);
  if(IMC > 25) printf("IMC de %.2f , situacao: Obeso", IMC);
  if(IMC >= 20 && IMC <= 25) printf("IMC de %.2f , situacao: Normal", IMC);

  getchar();
  return 0;
}