/* === Funções ===
 *
 * 1. Organização de código e modularização
 * 2. Reuso
 * 3. Maior facilidade de testes
 * 
 * 4. Conceitos
 *   I. Nome
 *     a) Fazer referência para o comportamento da função
 *     b) Seguir as regras da linguagem
 * 
 *   II. Tipo de Retorno
 *     a) Resultado da execução da função, através de uma variável de determinado tipo
 *     b) Deve se colocada no final da função a palavra reservada return
 * 
 *   III. Variáveis de Entrada
 *     a) possuem tipo
 *     b) possui um nome
 *     c) sã decleradas em uma ordem definda pelo progamador
 *     d) podem ter 0 ou mais parâmetros de entrada
 *  
 * 5. Existem dois momentos no ciclo de vida da função
 *   I. A criação da função (declaração) 
 *   II. A chamada da função(o seu uso)
 * 
 */

#include <stdio.h>
#include <locale.h>

// criando uma função que imprimi mensagens na tela e não retorna nada e não tem nenhum parâmetro (void)
void loading(void) {
  printf("Calculando nota....\n");
  printf("Calculando nota....\n");
  printf("Calculando nota....\n");
}

// criando ua função que calcula a media e retorna um valo do tipo float
float calcMedia(float n1, float n2) {
  float media = 0;
  media = (n1 + n2) / 2;
  return media;
}

int main() {
  float media, nota1, nota2;

  printf("Informe a nota um e a nota dois: \n");
  scanf("%f %f", &nota1, &nota2);

  // chamando a função
  media = calcMedia(nota1, nota2);
  
  // chamando a função
  loading();

  printf("A média é %.2f \n", media);
  
  getchar();
  return 0;
}