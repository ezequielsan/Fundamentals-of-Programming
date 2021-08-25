#include <stdio.h>

// Criando estrutura Student
typedef struct {
  char name[100];
  float score1;
  float score2;
  float averageStudent;
} Student;

Student readStudent() {
  Student aluno;
  
  printf("Informe o nome do aluno: \n> ");
  scanf("%s", aluno.name);

  printf("Informe a nota 1 do aluno: \n> ");
  scanf("%f", &aluno.score1);

  printf("Informe o nota 2 do aluno: \n> ");
  scanf("%f", &aluno.score2);

  printf("\n");

  return aluno;
}

float average(float score1, float score2) {
  return (score1 + score2) / 2;
}

void printStudent(Student student) {
  printf("------- Imprimindo Aluno -------\n");
  printf("\tNome: %s\n", student.name);
  printf("\tNota 1: %.2f\n", student.score1);
  printf("\tNota 2:  %.2f\n", student.score2);
  printf("\tMedia: %.2f\n", student.averageStudent);
  printf("--------------------------------\n");
  printf("\n");
}

int main() {
  Student listStudent[3];

  int i;

  for(i = 0; i < 3; i++) {
    listStudent[i] = readStudent();
    listStudent[i].averageStudent = average(listStudent[i].score1, listStudent[i].score2);
  }

  for(i = 0; i < 3; i++) 
    printStudent(listStudent[i]);
  
}