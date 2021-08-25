#include <stdio.h>

typedef struct {
  int id;
  char name[100];
  char phone[100];
  char address[100];
} Contact;

typedef struct {
  float score1;
  float score2;
  Contact contact;
} Student;

void printStudent(Student student) {
  printf("------- Imprimindo Aluno -------\n");
  printf("\tIdentifiacdor: %d\n", student.contact.id);
  printf("\tNome: %s\n", student.contact.name);
  printf("\tNumero de Telefone: %s\n", student.contact.phone);
  printf("\tEndereco: %s\n", student.contact.address);
  printf("\tNota 1: %.2f\n", student.score1);
  printf("\tNota 2:  %.2f\n", student.score2);
  printf("--------------------------------\n");
  printf("\n");
}

int main() {
  Student s1;
  s1.score1 = 9.8;
  s1.score2 = 7.85;
  s1.contact.id = 0;

  Student s2;
  s2.score1 = 10.00;
  s2.score2 = 4;
  s2.contact.id = 1;

  printf("Informe o nome do aluno: \n> ");
  scanf(" %[^\n]", s2.contact.name);

  printf("Informe o telefone do aluno: \n> ");
  scanf(" %[^\n]", s2.contact.phone);

  printf("Informe o endereco do aluno: \n> ");
  scanf(" %[^\n]", s2.contact.address);

  printStudent(s2);

  return 0;
}