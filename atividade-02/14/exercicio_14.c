// 1 - Ler 4 valores, um inteiro entre 1 e 3, e 3 valores reais
// 2 - Se o valor inteiro = 1, então ordenar os valores reais em ordem crescente
// 3 - Se o valor inteiro = 2, então ordenar os valores reais em ordem decrescente
// 4 - Se o valor inteiro = 3, então colocar o maior dos valores reais no centro
// 5 - Imprimir um dos casos.

#include <stdio.h>

void decrescente(float value1, float value2, float value3) {
  float tmp = 0;

  if(value1 > value2) {
    if(value2 > value3) {
      // v1 > v2 > v3
    }
    else { 
      if(value3 > value1) {
        // v3 > v1 > v2
        tmp = value1;
        value1 = value3;
        value3 = value2;
        value2 = tmp;
      }
      else {
        // v1 > v3 > v2  
        tmp = value2;
        value2 = value3;
        value3 = tmp;
      }
    }
  }
  else { 
    if(value1 > value3) {
      // v2 > v1 > v3
      tmp = value1;
      value1 = value2;
      value2 = tmp;
    }
    else { 
      if(value3 > value2) {
        // v3 > v2 > v1
        tmp = value1;
        value1 = value3;
        value3 = tmp;
      }
      else { 
        // v2 > v3 > v1
        tmp = value1;
        value1 = value2;
        value2 = value3;
        value3 = tmp; 
      }
    }
  }

  printf(" A ordem Decrescente e %.1f %.1f %.1f \n", value1, value2, value3);

  return;
}

void crescente(float value1, float value2, float value3) {
  float tmp = 0;

  if(value1 > value2) {
    if(value2 > value3) {
      // v1 > v2 > v3
    }
    else { 
      if(value3 > value1) {
        // v3 > v1 > v2
        tmp = value1;
        value1 = value3;
        value3 = value2;
        value2 = tmp;
      }
      else {
        // v1 > v3 > v2  
        tmp = value2;
        value2 = value3;
        value3 = tmp;
      }
    }
  }
  else { 
    if(value1 > value3) {
      // v2 > v1 > v3
      tmp = value1;
      value1 = value2;
      value2 = tmp;
    }
    else { 
      if(value3 > value2) {
        // v3 > v2 > v1
        tmp = value1;
        value1 = value3;
        value3 = tmp;
      }
      else {
        // v2 > v3 > v1
        tmp = value1;
        value1 = value2;
        value2 = value3;
        value3 = tmp; 
      }
    }

  }

  printf("A ordem Crescente e %.1f %.1f %.1f \n", value3, value2, value1);

  return;
}

void maiorMeio(float value1, float value2, float value3) {
  float tmp = 0.0;

  if(value1 > value2) {
    if(value1 > value3) {
      // M = v1
      tmp = value1;
      value1 = value2;
      value2 = tmp;
    }
    else {
      // M = v3
      tmp = value3;
      value3 = value2;
      value2 = tmp;
    }
  }
  else {
    if(value2 > value3) {
      // M = v2
    }
    else {
      // M = v3
      tmp = value3;
      value3 = value2;
      value2 = tmp;
    }
  } 

  printf("%.1f '%.1f' %.1f \n", value1, value2, value3);

  return;
}

int main() {
  int integer;
  float value1, value2, value3;

  printf("Informes 3 valores reais quisquer \n");
  scanf("%f %f %f", &value1, &value2, &value3);

  printf("Informe um valor para inteiro entre 1 e 3 , incluindo-os: ");
  scanf("%d", &integer);

  switch(integer) {
    case 1 : crescente(value1, value2, value3); break;
    case 2 : decrescente(value1, value2, value3); break;
    case 3 : maiorMeio(value1, value2, value3); break;
    default: printf("Valor para o inteiro Invalido !!!");
  }
  getchar();
  return 0;
}
