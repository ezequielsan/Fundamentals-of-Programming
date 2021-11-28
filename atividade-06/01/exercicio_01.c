/* 
 * Lista Estrutura
 *
 * 1. Declare uma estrutura C capaz de guardar os seguintes dados relativos a um
 * prontuário médico:
 *   a) identificador (int)
 *   b) Nome do paciente (string de 50)
 *   c) Altura (float)
 *   e) Idade (int)
 *   f) Peso (float)
 * Declare um novo tipo C chamado Paciente que deve ser exatamente a estrutura acima.
 * 
 * 2. Crie uma lista de estruturas do tipo Paciente
 * 3. Crie as seguintes funções:
 *      -Inicializar a lista
 *      -Imprimir um Aluno
 *      -Inserir um Aluno
 *      -Editar um Aluno
 *          Busca pelo nome
 *      -Apagar um Aluno
 *          Busca pelo identificador 
 * 
 * 4. Crie as seguintes funções
 * 	-media de idade dos pacientes
 * 	-imprima as informações do paciente mais pesado
*/

#include <stdio.h>
#define SIZE 10

typedef struct
{
  int id;
  char name[50];
  float height;
  int age;
  float weight;
} Patient;

/* === Funções Auxiliares === */
int length(char string[])
{
  int i, size = 0;

  for (i = 0; string[i] != '\0'; i++)
  {
    size++;
  }

  return size;
}

char convertUppercaseOrLowercase(char c)
{
  char converted;

  // pega o decimal do caracteres passado
  int decChar = c;

  // Verifica se esta em maiusculo ou minusculo
  // Se estiver em minusculo transforma para maiusculo e vice-versa
  decChar = (decChar > 90) ? decChar - 32 : decChar + 32;

  // pega o respectivo caractere de decimal que esta em decChar
  converted = decChar;

  return converted;
}

// Essa função que compara strings
// não diferencia letras maisuculas de letras minusculas
int compareStrings(char string1[], char string2[])
{
  int i, iguais = 0;

  if (length(string1) != length(string2))
    return 0;

  for (i = 0; (string1[i] != '\0' && string2[i] != '\0'); i++)
  {
    char c;

    if (string1[i] != ' ')
      c = convertUppercaseOrLowercase(string1[i]);

    if (string2[i] == string1[i] || string2[i] == c)
      iguais++;
  }

  if (iguais == length(string1))
    iguais = 1;

  return iguais;
}

// Essa função imprimi uma mensagem dependendo
// se uma ação foi concluida com sucesso ou não
// Se ação foi concluida com sucesso, imprimi uma mensagem
// de logo em seguida imprimi a lista
void printStatus(const char *msgSucess, const char *msgErro, int result)
{
  (result == 1) ? printf("\n%s\n", msgSucess) : printf("\n%s\n", msgErro);
}

void printMenu()
{
  printf("\nSistema de Gerencia de Pacientes \n");
  printf("\t1 - Inicializar lista de pacientes \n");
  printf("\t2 - Inserir um paciente \n");
  printf("\t3 - Imprimir a lista de pacientes \n");
  printf("\t4 - Editar um paciente pelo nome \n");
  printf("\t5 - Apagar um paciente pelo identificador\n");
  printf("\t6 - Media da idade dos pacientes\n");
  printf("\t7 - Informacao do paciente mais pesado\n");
  printf("\t0 - Para sair \n\n");

  printf("Informe uma opcao \n> ");
}

// Quando os id's das posições da lista for -1
// Essa posição é vazia
void initListPatient(Patient list[])
{
  int i;

  printf("\nInicializando lista...\n");
  for (i = 0; i < SIZE; i++)
  {
    list[i].id = -1;
  }
}

Patient readPatient(void)
{
  Patient p;

  printf("\nInforme o identificador do paciente \n> ");
  scanf("%d", &p.id);

  printf("\nInforme o nome do paciente: \n> ");
  scanf(" %[^\n]", p.name);

  printf("\nInforme a altura do paciente(em metros): \n> ");
  scanf("%f", &p.height);

  printf("\nInforme a idade do paciente: \n> ");
  scanf("%d", &p.age);

  printf("\nInforme o peso do paciente(em kg): \n> ");
  scanf("%f", &p.weight);

  printf("\n");

  return p;
}

void printPatient(Patient patient)
{
  printf("\n------- Paciente -------\n");
  printf("Nome: %s\n", patient.name);
  printf("Identificador: %d\n", patient.id);
  printf("Altura: %.2fm\n", patient.height);
  printf("Idade: %d anos\n", patient.age);
  printf("Peso: %.2fkg\n", patient.weight);
  printf("\n");
}

void printListPatient(Patient list[])
{
  int i, voidList = 0;

  for (i = 0; i < SIZE; i++)
  {
    if (list[i].id != -1)
    {
      printPatient(list[i]);
      voidList = 1;
    }
  }

  if (voidList == 0)
    printf("\nLista vazia :(\n");
}

int insertPatient(Patient list[])
{
  int inserted = 0, i;

  for (i = 0; i < SIZE; i++)
  {
    if (list[i].id == -1)
    { // buscando uma posição vazia na lista
      list[i] = readPatient();
      inserted = 1;
      break;
    }
  }
  return inserted;
}

int editPatient(Patient list[])
{
  int i, editedPatient = 0;
  char name[50];

  printf("\nInforme o nome do paciente a procurar \n> ");
  scanf(" %[^\n]", name);

  for (i = 0; i < SIZE; i++)
  {
    if (compareStrings(name, list[i].name) == 1)
    {
      printPatient(list[i]);
      list[i] = readPatient();
      editedPatient = 1;
      break;
    }
  }

  return editedPatient;
}

int deletePatient(Patient list[])
{
  int i, delectedPatient = 0, id;

  printf("Informe o identificador do paciente a procurar \n> ");
  scanf("%d", &id);

  for (i = 0; i < SIZE; i++)
  {
    if (list[i].id == id)
    {
      list[i].id = -1;
      delectedPatient = 1;
      break;
    }
  }
  return delectedPatient;
}

void averageAges(Patient list[])
{
  int i, qnt = 0, sum = 0;
  float media;

  for (i = 0; i < SIZE; i++)
  {
    if (list[i].id != -1)
    {
      qnt++;
      sum += list[i].age;
    }
  }

  media = sum / qnt;

  printf("\nA media de idade dos pacientes e %d.\n", (int)media);
}

void heavierPatient(Patient list[]) {
  int i, index;
  float heavier = list[0].weight;

  printf("peso 0: %.2f\n", heavier);
  for(i = 0; i < SIZE; i++) {
    float currentWeight = list[i].weight;

    if((list[i].id != -1) && (currentWeight >= heavier)) {
      heavier = currentWeight;
      index = i;
    }
  }

  printf("Paciente mais pesado: \n");
  printPatient(list[index]);
}

int main()
{
  Patient listPatient[SIZE];
  char option = '1';
  int result;

  while (option != '0')
  {
    printMenu();
    scanf(" %c", &option);

    if (option == '1')
    {
      initListPatient(listPatient);
    }
    else if (option == '2')
    {
      int result = insertPatient(listPatient);

      printStatus("Paciente inserido com sucesso. :)", "Erro ao inserir paciente.\nLista cheia :(", result);
    }
    else if (option == '3')
    {
      printListPatient(listPatient);
    }
    else if (option == '4')
    {
      int result = editPatient(listPatient);

      printStatus("Paciente editado com sucesso :)", "Erro ao editar paciente. ;-; \nInforme um nome valido e tente novamente.", result);
    }
    else if (option == '5')
    {
      result = deletePatient(listPatient);

      printStatus("Paciente deletado com sucesso :)", "Erro ao deletar paciente. ;-; \nInforme um identificador valido e tente novamente.", result);
    }
    else if (option == '6')
    {
      averageAges(listPatient);
    }
    else if (option == '7')
    {
      heavierPatient(listPatient);
    }
    else if (option != '0')
    {
      printf("\nInforme uma opcao valida!\n");
    }
  }

  return 0;
}
