/*
 * Descrição do problema
 * Considere o seguinte tipo estruturado Ponto que deve ser usado em seu programa
 *   typedef struct {
 *    float x;
 *    float y;
 *   } Ponto;
 * 
 * Implemente um programa que recebe n pontos distintos  e encontre o ponto mais próximo 
 * de um outro ponto fornecido.
 * 
 * Para isso, implemente uma função que recebe dois pontos e calcule a distância entre eles.
 *   -> float distancia(Ponto p1, Ponto p2);
 * 
 * E uma outra função que recebe um vetor de pontos e um outro ponto pp e retorne o ponto
 * do vetor mais próximo do ponto pp.
 *   -> Ponto proximo(Ponto vetor[], int n, Ponto pp){}
 * 
 * A entrada de dados será da seguinte forma: Primeiro é fornecido o inteiro 
 * n(tamanho do vetor) e logo após os n pontos. Depois será fornecido o ponto pp.
 * 
 * Imprima as cordenadas do ponto mais próximo de pp.
 * 
 * Entrada:
 * 5
 * 3 6
 * 1 6
 * 5 7
 * 3 9
 * 4 9
 * 2 4
 * 
 * Saída:
 * 3 6
 *  
*/

#include <stdio.h>
#include <math.h>

typedef struct {
  float x;
  float y;
} Ponto;

float distancia(Ponto p1, Ponto p2) {
  return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

Ponto maisProximo(Ponto v[], int n, Ponto pp) {
  Ponto p;
  int i, indexMenor;
  float sizes[n];
  
  float menorD = distancia(pp, v[0]);
  
  printf("menorD = %.2f\n", menorD);

  for(i = 0; i < n; i++) {
    float d = distancia(pp, v[i]);
    
    if(d <= menorD) {
      p = v[i];
      menorD = d;
    }
  }
  
  printf("(%.2f, %.2f) \n", p.x, p.y);

  return p;
} 

Ponto lerPonto() {
  Ponto p;
  scanf("%f %f", &p.x, &p.y);
  return p;
}

void lerListaPontos(Ponto v[], int size) {
  int i;

  for(i = 0; i < size; i++) {
    v[i] = lerPonto();
  }
}

int main() {
  int size; 
  scanf("%d", &size); // ler o tamanho da lista de pontos

  Ponto pontos[size];

  lerListaPontos(pontos, size); // lendo a lista de pontos

  Ponto pp, pontoProx;
  scanf("%f %f", &pp.x, &pp.y); // lendo o ponto de referencia

  pontoProx = maisProximo(pontos, size, pp); // calculado o ponto mais próximo

  printf("Ponto mais Proximo: (%.2f, %.2f)\n", pontoProx.x, pontoProx.y);

  return 0;
}