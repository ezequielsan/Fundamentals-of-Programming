/*
 * 2. Ponteiros com Structs
*/
#include <stdio.h>

typedef struct {
  int matricula;
  char name[100];
  float score1;
  float score2;
} Student;

void printStudent(Student student) {
  printf("------- Imprimindo Aluno -------\n");
  printf("\tMatricula: %d\n", student.matricula);
  printf("\tNome: %s\n", student.name);
  printf("\tNota 1: %.2f\n", student.score1);
  printf("\tNota 2:  %.2f\n", student.score2);
  printf("--------------------------------\n");
  printf("\n");
}

void readStudent(Student* student) {
  printf("\nEndereco do aluno na funcao readStudent: %p\n", student);
  
  printf("==== Dados do aluno ====\n");

  printf("Informe a matricula: \n> ");
  scanf("%d", &student -> matricula);

  printf("Informe o nome do aluno: \n> ");
  scanf(" %[^\n]", student -> name); // o espaço antes do %[^\n] é para limbar o buffer

  printf("Informe a nota 1 do aluno: \n> ");
  scanf("%f", &student -> score1);

  printf("Informe a nota 2 do aluno: \n> ");
  scanf("%f", &student -> score2);

  printf("\n");
}

int main() {
  Student s;

  Student* pStudent;
  pStudent = &s;

  printf("Endereco do aluno na main: %p\n", &s);
  (*pStudent).matricula = 5; // também pode-se usar pStudent -> matricula = 5
  pStudent -> score1 = 3; // mesma coisa de (*pStudent).score1 = 3;
  pStudent -> score2 = 8;

  printStudent(s);


  readStudent(&s);
  printStudent(s);
  
  return 0;
}