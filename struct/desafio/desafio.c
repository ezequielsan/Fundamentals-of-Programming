#include <stdio.h>
#define SIZE 2

typedef struct {
  int identifier; // sistema vai dar um id
  char name[100];
  char address[100];
  char phone[15];
} Contact;

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

// Retorna 1, se as string forem iguais
// Retorna 0, se as strings não forem iguais
// OBS: Essa função não diferencia maiusculas de maiusculas
int compareStrings(char string1[], char string2[]) {
  int i, iguais = 0;

  // Verificando se os tamanhos são iguais
  // Se não for, strings não são iguais e retorna 0
  if(length(string1) != length(string2)) return 0;

  for(i = 0; (string1[i] != '\0' && string2[i] != '\0'); i++) {
    char c;

    // Se o caractere na posição i não for um espaço
    // Pega a versão maiuscula/minuscula do carctere na posição i
    if(string1[i] != ' ') {
      c = convertUppercaseOrLowercase(string1[i]);
    }

    if(string2[i] == string1[i] || string2[i] == c) iguais++;
  }

  if(iguais == length(string1)) iguais = 1;
  
  return iguais;
}

Contact readContact(int id) {
  Contact c;

  printf("==== Dados do contato %d ====\n", id + 1);

  // Setando um id para o contato
  c.identifier = id;

  printf("Informe o nome do contato: \n> ");
  scanf(" %[^\n]", c.name);

  printf("Informe o endereco do contato: \n> ");
  scanf(" %[^\n]", c.address); // o espaço antes do %[^\n] é para limbar o buffer

  printf("Informe o numero de telefone do contato: \n> ");
  scanf(" %[^\n]", c.phone);

  return c;
}

void printContact(Contact contact) {
  printf("------- Imprimindo Contato -------\n");
  printf("\tIdentificador: %d\n", contact.identifier);
  printf("\tNome: %s\n", contact.name);
  printf("\tEndereco: %s\n", contact.address);
  printf("\tTelefone: %s\n", contact.phone);
  printf("--------------------------------\n");
  printf("\n");
}

void readListContact(Contact list[]) {
  int i;

  for(i = 0; i < SIZE; i++) {
    list[i] = readContact(i);
    printf("\n");
  }
}

void printListContact(Contact list[]) {
  int i;

  for(i = 0; i < SIZE; i++) 
    printContact(list[i]);
  
}

Contact searchContatByName(Contact list[], char name[]) {
  int i;
  Contact c;
  c.identifier = -1;

  for(i = 0; i < SIZE; i++) {
    if(compareStrings(list[i].name, name) == 1) {
      c = list[i];
      break;
    }
  }

  return c;
}

void editContact(Contact list[], Contact contact) {
  int i;

  for(i = 0; i < SIZE; i++) {
    if(contact.identifier == list[i].identifier) {
      printf("\nInforme o nome do contato: \n> ");
      scanf(" %[^\n]", list[i].name);
    
      printf("Informe o endereco do contato: \n> ");
      scanf(" %[^\n]", list[i].address); 
    
      printf("Informe o numero de telefone do contato: \n> ");
      scanf(" %[^\n]", list[i].phone);
      
      break;
    }
  }

  printf("\nContato editado com sucesso.\n");

  printContact(list[i]);
}

int main() {
  char name[100];
  Contact listContact[SIZE], searchContact;

  // Incializa a lista de contatos
  readListContact(listContact);

  // Imprimi a lista de contatos
  printListContact(listContact);

  // Recebe um nome para pesquisar na lista
  printf("\nInforme o nome do contato: \n> ");
  scanf(" %[^\n]", name);

  // Pesquisa o nome lido la lista de contatos
  searchContact = searchContatByName(listContact, name);

  // Verifica se o nome existe
  if(searchContact.identifier != -1) {
    printContact(searchContact);
    
    // Pergunta se quer editar o contato procurado
    int state;
    printf("Digite 1 para editar contato \n> ");
    scanf("%d", &state);
  
    if(state == 1) editContact(listContact, searchContact);
  }
  else printf("Conato nao encontrado !\n");

  return 0;
}