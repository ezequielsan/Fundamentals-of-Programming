#include <stdio.h> 
int main() {
  char name[61];
  char address[61];
  char phone[31];

  printf("Informe seu nome: ");
  fgets(name, 61, stdin);

  printf("Informe seu endereco: ");
  fgets(address, 61, stdin);

  printf("Informe seu telefone: ");
  fgets(phone, 31, stdin);
  
  printf("Os dados do cliente sao: \n");
  printf("Nome: %s", name);
  printf("Endereco: %s", address);
  printf("Telefone: %s", phone);

  return 0;
}