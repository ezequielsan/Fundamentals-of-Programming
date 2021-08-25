/* 
 *
 * # Struct em C
 *
 * ## Tipos primitivos
 *   int, float, char
 *   vetor de int, float e char
 * 
 * ## Agenda Contatos: Lista de contatos
 * 
 *   ### Contato:
 *     - identificador
 *     - nome
 *     - endereco 
 *     - telefone
 * 
 *   ### Aluno:
 *     - matricula
 *     - nome 
 *     - nota1 
 *     - nota2
 *
*/

#include <stdio.h>

// Cabeçalhos das funções
void imprimiAluno(int matricula, char nome[], float nota1, float nota2);

typedef struct {
  int matricula;
  char nome[100];
  float nota1;
  float nota2;
} Aluno;
  
int main() {
  // Declarando variável do tipo Aluno
  Aluno aluno1;

  // Atribuido valores a nossa variável aluno1
  aluno1.matricula = 510950;
  aluno1.nota1 = 4;
  aluno1.nota2 = 5;

  // Lendo valores e guardando na varivel de tipo aluno1
  printf("Informe o nome do aluno 01: \n> ");
  scanf("%s", aluno1.nome);

  // Acessando os valores da variavel do tipo Aluno e imprimindo
  printf("--------- Imprimindo Aluno ---------\n");
  printf("\t Matricula: %d\n", aluno1.matricula);
  printf("\t Nome: %s\n", aluno1.nome);
  printf("\t Nota 1: %.2f\n", aluno1.nota1);
  printf("\t Nota 2: %.2f\n", aluno1.nota2);
  printf("------------------------------------\n");
  printf("\n");

  return 0;
}
