/*Fazer um programa que mostra quantos segundos tem um determinado numero de horas*/
// 1 - Ler as horas e que tipo de coversão(para minutos, segundos ou decimos de segundos)
// 2 - tranformar as horas dadas em 
//     minutos (horas * 60) ou
//     segundos (horas * 3600) ou
//     decimos de segundo (horas * 36000)
// 3 - Imprimir a pção escolhida

#include <stdio.h>

int main() {
  int horas; 
  long res;
  char tipo;

  printf("Informe o numero de horas: ");
  scanf("%d", &horas);
  printf("o que mostrar (m/s/d): ");
  scanf(" %c", &tipo);

  /* Usando if/else*/

  // if(tipo == 'm' || tipo == 'M') {
  //   res = (horas < 0) ? 0 : horas * 60L; 
  // } 
  // else {
  //   if(tipo == 's' || tipo == 'S') {
  //     res = (horas < 0) ? 0 : horas * 3600L; 
  //   }
  //   else {
  //     if(tipo == 'd' || tipo == 'D') {
  //       res = (horas < 0) ? 0 : horas * 36000L; 
  //     }
  //     else {
  //       printf("Tipo inválido !!");
  //     }
  //   }
  // }

  /* Usando switch e break*/
  // switch (tipo) {
  //   case 'm':
  //   case 'M': {
  //     res = (horas < 0) ? 0 : horas * 60L; 
  //     break;
  //   }
  //   case 's':
  //   case 'S': {
  //     res = (horas < 0) ? 0 : horas * 3600L; 
  //     break;
  //   }
  //   case 'd':
  //   case 'D': {
  //     res = (horas < 0) ? 0 : horas * 36000L; 
  //     break;
  //   }
  //   default: {
  //     printf("Tipo inválido !!");
  //   }
  // }

  /* Usando switch sem break*/
  res = horas;
  switch (tipo) {
    case 'd':
    case 'D': {
      res *= 10;
    }
    case 's':
    case 'S': {
      res *= 60;
    }
    case 'm':
    case 'M': {
       res *= 60;
    }
  }

  printf("%dh --> %ld%c\n", horas, res, tipo);
  getchar();
  
  return 0;
}