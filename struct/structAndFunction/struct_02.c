#include <stdio.h>

// Definindo um tipo struct Student
// Um student é difinido por um nome e por duas notas
typedef struct {
  char name[100];
  float score1;
  float score2;
} Student;

// cabeçalhos das funções
void printStudent(Student student);
Student readStudent(void);

int main() {
  // Criando uma variavel do tipo Student
  Student a1;

  a1 = readStudent();

  printStudent(a1);

  return 0;
}

// Ler o nome e as notas do aluno
Student readStudent(void) {
  Student student;

  printf("Informe o nome do aluno: \n> ");
  scanf("%s", student.name);

  printf("\n");

  printf("Informe a nota 1 do aluno: \n> ");
  scanf("%f", &student.score1);

  printf("\n");

  printf("Informe a nota 2 do aluno: \n> ");
  scanf("%f", &student.score2);

  printf("\n");

  return student;
}

// Funçaõ que imprimi aluno
// Recebe uma variavel do tipo aluno
// E imprimi nome, nota 1 e nota 2 do aluno
void printStudent(Student student) {
  printf("------- Imprimindo Aluno -------\n");
  printf("\tNome: %s\n", student.name);
  printf("\tNota 1: %.2f\n", student.score1);
  printf("\tNota 2:  %.2f\n", student.score2);
  printf("--------------------------------\n");
  printf("\n");
}