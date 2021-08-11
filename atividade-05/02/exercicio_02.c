#include <stdio.h>
#include <stdlib.h>

// Lendo quantidade de habitantes
int qntHabitantes(void) {
  int valor;
  
  printf("Informe a quantidade de habitantes: ");
  scanf("%d", &valor);

  return valor;
}

// Inicializando os Vetores
void initArray(int idade[], char sexo[], float salario[], int numFilhos[], int size) {
  int i;

  for(i = 0; i < size; i++) {
    printf("Informe os Dados da pessoa %d: \n", i + 1);
    printf("Idade: ");
    scanf("%d", &idade[i]);
    printf("Sexo (Digite 0: masculino ou F: feminino): ");
    scanf(" %c", &sexo[i]);
    printf("Salario: ");
    scanf("%f", &salario[i]);
    printf("Numero de Filhos: ");
    scanf("%d", &numFilhos[i]);

    printf("\n");
  }
}

// Imprimindo os vatores
void printArray(int idade[], char sexo[], float salario[], int numFilhos[], int size) {
  int i;

  for(i = 0; i < size; i++) {
    printf("Dados da pessoa %d: \n", i + 1);
    printf("Idade: %d\n", idade[i]);
    printf("Sexo: %c\n", sexo[i]);
    printf("Salario: %.2f\n", salario[i]);
    printf("Numero de Filhos: %d\n", numFilhos[i]);   

    printf("\n");

  }
}

void mediaSalarial(float salario[], int size) {
  int i = 0;
  float salarioTotal = 0.0, mediaSalarial;

  for(; i < size; i++) {
    salarioTotal += salario[i];
  }

  mediaSalarial = salarioTotal / size;

  printf("A media salarial dos habitantes e %.2f\n", mediaSalarial);
}

void menorEMaiorIdade(int idade[], int size) {
  int i = 0, maiorIdade = 0, menorIdade = __INT_MAX__;

  for(; i < size; i++) {
    if(idade[i] > maiorIdade) {
      maiorIdade = idade[i];
    }

    if(idade[i] < menorIdade) {
      menorIdade = idade[i];
    }
  }

  printf("A maior e menor idade e respectivamente %d %d\n", maiorIdade, menorIdade);
}

void function(char sexo[], int numFilhos[], float salario[], int size) {

  int i = 0, qnt = 0;


  for(; i < size; i++) {
    if(sexo[i] == 'F') {
      if(numFilhos[i] == 3) {
        if(salario[i] <= 500.00) {
          qnt++;
        }
      }
    }
  }

  printf("A quantidade de mulheres com 3 filhos que recebem ate 500 e %d\n", qnt);
}

int main() {
  int tamanho;

  tamanho = qntHabitantes();

  int idade[tamanho], numFilhos[tamanho];
  char sexo[tamanho]; // Sexo: M: macho, F: fêmea
  float salario[tamanho]; // Formato: 0000.00

  printf("\n");

  initArray(idade, sexo, salario, numFilhos, tamanho);

  printf("\n");

  mediaSalarial(salario, tamanho);

  printf("\n");
  
  menorEMaiorIdade(idade, tamanho);

  printf("\n");
  
  function(sexo, numFilhos, salario, tamanho);

  printf("\n");
  
  printArray(idade, sexo, salario, numFilhos, tamanho);
  
  getchar();
  return 0;
}