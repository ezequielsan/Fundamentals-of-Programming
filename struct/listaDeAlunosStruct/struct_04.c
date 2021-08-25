/* 
 * 
 * 1. Funções para Ler e Imprimir uma estrutura do tipo Student
 * 2. Funções para inicializar uma lista de students
 * 3. Pesquisar aluno pela matrícula e pelo nome
 *  
*/

#include <stdio.h>
#include <string.h> 
#define SIZE 2

typedef struct {
  int enrollmentSchool;
  char name[100];
  float score1;
  float score2;
} Student;

void printStudent(Student student) {
  printf("------- Imprimindo Aluno -------\n");
  printf("\tMatricula: %d\n", student.enrollmentSchool);
  printf("\tNome: %s\n", student.name);
  printf("\tNota 1: %.2f\n", student.score1);
  printf("\tNota 2:  %.2f\n", student.score2);
  printf("--------------------------------\n");
  printf("\n");
}

Student readStudent(int number) {
  Student readStudent;

  printf("==== Dados do aluno %d ====\n", number + 1);

  printf("Informe a matricula: \n> ");
  scanf("%d", &readStudent.enrollmentSchool);

  printf("Informe o nome do aluno: \n> ");
  scanf(" %[^\n]", readStudent.name); // o espaço antes do %[^\n] é para limbar o buffer

  printf("Informe a nota 1 do aluno: \n> ");
  scanf("%f", &readStudent.score1);

  printf("Informe a nota 2 do aluno: \n> ");
  scanf("%f", &readStudent.score2);

  printf("\n");
  return readStudent;
}

void initListStudent(Student list[]) {
  int i;
  printf("Inicializando lista de alunos....\n");
  printf("\n");
  for(i = 0; i < SIZE; i++) {
    list[i] = readStudent(i);
  }
}

void printListStudent(Student list[]) {
  int i;
  for(i = 0; i < SIZE; i++) {
    printStudent(list[i]);
  }
}

// Função recebe uma lista de alunos e a matricula do aluno a procurar
// Procura um aluno pela matricula
//   - Retorna o aluno, caso seja encontrado
//   - Retorna matricula igual a -1, caso o aluno não seja encontrado
Student searchStudentBySchoolEnrollment(Student list[], int matri) {
  int i;
  Student searchStudent;
  searchStudent.enrollmentSchool = -1;

  for(i = 0; i < SIZE; i++) {
    if(list[i].enrollmentSchool == matri) {
      searchStudent = list[i];
      break;
    }
  }

  return searchStudent;
}

Student searchStudentByName(Student list[], char name[]) {
  Student searchStudent;
  searchStudent.enrollmentSchool = -1;
  int i;

  for(i = 0; i < SIZE; i++) {
    if(strcmp(list[i].name, name) == 0) {
      searchStudent = list[i];
      i = SIZE;
    }
  }

  return searchStudent;
}

int main() {
  Student listStudent[SIZE];
  
  initListStudent(listStudent);

  printListStudent(listStudent);
    
  // int matriProcurar;
  // printf("Informe a matricula do aluno que quer procurar: \n> ");
  // scanf("%d", &matriProcurar);

  char name[100];
  printf("Informe o nome do aluno a procurar: \n> ");
  scanf(" %[^\n]", name);

  Student student = searchStudentByName(listStudent, name);

  if(student.enrollmentSchool != -1) {
    printf("\nAluno encontrado !\n");
    printStudent(student);
  }
  else {
    printf("\nAluno nao encontrado.\n");
  }
 
  return 0;
}