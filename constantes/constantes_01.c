/* === Constantes === 
 *
 * As constantes em C podem ser declaradas usando #define ou cont
 * Exemplos: 
 *   #define PI 3.14
 *   const int PHI = 1.618;
 * 
 * A principal diferença entre elas é que as constantes #define é uma diretiva e não existe  
 * fisicamente na memória e funciona de maneira simbólica
 * Já as const faz parte das palavras reservadas da linguagem C e existe fisicamente na memória
 * 
*/


#include <stdio.h>
#include <stdlib.h>
#define NUM 10
const float PI = 3.14;

void init(int s[]) {
  for(int i = 0; i < NUM; i++)
    s[i] = 0;
}

void areaCircu(float r) {
  float area;
  area = PI * (r * r);

  printf("Area do circulo é %.2f\n", area);
} 

int main() {
  int v[NUM];

  init(v);
  
  for(int i = 0; i < NUM; i++) 
    v[i] = i;

  for(int i = NUM - 1; i >= 0; i--) 
    printf("%d\n", v[i]);


  areaCircu(2.00);
  
  // getchar();
  return 0;
}