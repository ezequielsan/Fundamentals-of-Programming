// 1 - Ler as cordenadas P1(x1, y1) e P2(x2, y2) e o r(raio)
// 2 - P1 e P2 são centros cada um de uma circuferência, sendo r seus raios 
// 3 - Calcular a distância entre dois pontos:
//     D = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))
// 4 - distancia entre circuferencias = D - 2 * raio
// 5 - Se distancia entre circuferencias <= 0: Colidiram
// 6 - Se não: Não Colidiram

#include <stdio.h> 
#include <math.h>

float calcDistancia(float x1, float y1, float x2, float y2, float r) {
  float D;
  D = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  return D;
}

int main() {
  float x1, y1, x2, y2, distanciaEntrePontos, distanciaEntreCircuferencias, r;

  printf("Informes as cordenadas P1(x1, y1): ");
  scanf("%f %f", &x1, &y1);

  printf("Informes as cordenadas P2(x2, y2): ");
  scanf(" %f %f", &x2, &y2);

  printf("Informe o raio da circuferencia: ");
  scanf("%f", &r);

  printf("P1(%.1f, %.1f) e P2(%.1f, %.1f) e raio = %.1f \n", x1, y1, x2, y2, r);

  distanciaEntrePontos = calcDistancia(x1, y1, x2, y2, r);
  distanciaEntreCircuferencias = distanciaEntrePontos - (2 * r);

  printf("Distancia Entre as Circeferencias e %.1f \n", distanciaEntreCircuferencias);

  if(distanciaEntrePontos <= 0) {
    printf("Circuferencias Colidiram. \n");
  }
  else {
    printf("Circuferencias não Colidiram. \n");
  }

  getchar();
  return 0;
}