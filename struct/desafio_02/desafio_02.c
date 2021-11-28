#include <stdio.h>
#include <locale.h>

typedef struct {
  int id;
  char name[100];
  float score1;
  float score2;
} Student;

/* === Funções Auxiliares === */
int length(char string[]) {
  int i, size = 0;

  for(i = 0; string[i] != '\0'; i++) {
    size++;
  }

  return size;
}

char convertUppercaseOrLowercase(char c) {
  char converted;
  
  // pega o decimal do caracteres passado
  int decChar = c; 
  
  // Verifica se esta em maiusculo ou minusculo
  // Se estiver em minusculo transforma para maiusculo e vice-versa
  decChar = (decChar > 90) ? decChar - 32: decChar + 32; 
  
  // pega o respectivo caracteres daquele decimal
  converted = decChar;
  
  return converted;
}

int compareStrings(char string1[], char string2[]) {
  int i, iguais = 0;

  if(length(string1) != length(string2)) return 0;

  for(i = 0; (string1[i] != '\0' && string2[i] != '\0'); i++) {
    char c;

    if(string1[i] != ' ') c = convertUppercaseOrLowercase(string1[i]);
    
    if(string2[i] == string1[i] || string2[i] == c) iguais++;
  }

  if(iguais == length(string1)) iguais = 1;
  
  return iguais;
}

/* === MENU === */
void printMenuManagement() {
  printf("(1) Gerencia de Alunos\n");
  printf("\ta. Inicializacao da lista \n");
  printf("\tb. Insercao de um aluno \n");
  printf("\tc. Impressao da lista \n");
  printf("\td. Edicao de um aluno \n");
  printf("\te. Delecao de um aluno \n");
  printf("\n");
}

void printMenuPerformance() {
  printf("(2) Desempenho da Turma\n");
  printf("\ta. Impressao de aprovados\n");
  printf("\tb. Impressao de reprovados \n");
  printf("\tc. Maior media\n");
  printf("\td. Menor media\n");
  printf("\n");
}

void printMenu() {
  printf("\nSistema de Gerencia de Alunos \n");
  printf("\t1 - Inicializar lista de alunos \n");
  printf("\t2 - Inserir um aluno \n");
  printf("\t3 - Imprimir a lista de alunos \n");
  printf("\t4 - Editar um aluno pelo nome \n");
  printf("\t5 - Apagar um aluno \n");
  printf("\t0 - Para sair \n\n");

  printf("Informe uma opcao \n> ");
}

/* === Funcionalidades de Gerencia de Alunos === */
// Setandos todas as posisões da lista de alunos com id = -1
// Que significa que essa posição está vazias 
void initListStudent(Student list[], int size) {
  int i;
  
  printf("\nIniciando lista....\n");
  for(i = 0; i < size; i++) {
    list[i].id = -1;
  }
}

Student readStudent() {
  Student readStudent;

  printf("\nInforme o identificador do aluno \n> ");
  scanf("%d", &readStudent.id);

  printf("\n");

  printf("Informe o nome do aluno: \n> ");
  scanf(" %[^\n]", readStudent.name);

  printf("\n");

  printf("Informe a nota 1 do aluno: \n> ");
  scanf("%f", &readStudent.score1);

  printf("\n");

  printf("Informe a nota 2 do aluno: \n> ");
  scanf("%f", &readStudent.score2);

  printf("\n");

  return readStudent;
}

void printStudent(Student student) {
  printf("------- Aluno -------\n");
  printf("Nome: %s\n", student.name);
  printf("Matricula: %d\n", student.id);
  printf("Nota 1: %.2f\n", student.score1);
  printf("Nota 2: %.2f\n", student.score2);
  printf("\n");
}

void printListStudent(Student list[], int size) {
  int i, voidList = 0;

  printf("\nImprimindo Lista de alunos...\n");

  for(i = 0; i < size; i++) {
    if(list[i].id != -1) {
      printStudent(list[i]);
      voidList = 1;
    }
  }

  if(voidList == 0) printf("Não existem alunos na lista.\n");
}

// Inserçao deve ser feita na primeira posição livre da lista
// Retorna 1, caso aluno tenha sido inserido na lista
// Retorna 0, caso lista esteja cheia e o aluno não possa ser inserido
int insertStudent(Student list[], int size) {
  int i, inserted = 0;
  for(i = 0; i < size; i++) {
    if(list[i].id == -1) {
      Student s = readStudent();
      list[i] = s;
      inserted = 1;
      break;
    }
  }

  return inserted;
}

// Ediçao deve ser feita no aluno cujo nome é igual ao nome digitado
// Retorna 1, caso aluno tenha sido editado 
// Retorna 0, caso aluno não tenha sido editado
int editStudent(Student list[], int size) {
  char nomeBuscar[100];
  int i, edited = 0;

  printf("\nInforme o nome do aluno a ser editado \n> ");
  scanf(" %[^\n]", nomeBuscar);
  
  printf("\n");

  for(i = 0; i < size; i++) {
    if(compareStrings(nomeBuscar, list[i].name) == 1) {
      printStudent(list[i]);

      int id = list[i].id;
      Student editedStudent = readStudent();
      editedStudent.id = id;
      list[i] = editedStudent;

      edited = 1;
    }
  }

  return edited;
}

// Deleção deve ser feita no aluno cuja matricula é igual a digitada
// Retorna 1, caso aluno tenha sido deletado 
// Retorna 0, caso aluno não tenha sido deletado
int deleteStudent(Student list[], int size) {
  int delected = 0, i, matri;

  printf("Informe a matricula do aluno a ser deletado \n> ");
  scanf("%d", &matri);

  for(i = 0; i < size; i++) {
    if(list[i].id == matri) {
      list[i].id = -1;
      delected = 1;
      break;
    }
  }

  return delected;
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int size = 2, qntAdd = 0;
  Student listStudent[size];

  char option = '1';

  while(option != '0') {
    printMenu();
    scanf(" %c", &option);

    if(option == '1') {
      initListStudent(listStudent, size); 
    } 
    else if(option == '2') {
      int result = insertStudent(listStudent, size);

      if(result == 1) {
        printf("Aluno inserido com sucesso.\n");
        qntAdd++;
      }
      else printf("\nErro ao inserir aluno. Lista cheia\n");
    } 
    else if(option == '3') {
      printListStudent(listStudent, qntAdd);
    } 
    else if(option == '4') {
      int result = editStudent(listStudent, qntAdd);

      if(result == 1) {
        printf("Aluno editado com sucesso.\n");
      }
      else {
        printf("Erro ao encontrar aluno. Por favor informe um nome valido\n");
      }
    }
    else if(option == '5') {
      int result = deleteStudent(listStudent, size);

      if(result == 1) {
        printf("Aluno deletado com sucesso.\n");
      }
      else {
        printf("Error ao deletar aluno. Por favor insira uma matricula valida\n");
      }
    } 
    else if(option != '0'){
      printf("\nOpcao invalida. Digite uma opcao valida\n");
    }
  }

  return 0;
}
