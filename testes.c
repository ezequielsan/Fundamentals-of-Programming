#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define DIM 1000

int recurrence(int n, char str[]) {
  int amount = 0, i;
  
  for(i = 0; str[i] != '\0'; i++) {
    char c = n+'0'; // convertendo em string
    
    if(c == str[i]) {
      amount++;
    }
  }
  
  return amount;
}
 
int main() {
  int i, presente;
  char c[DIM];
  int qnt[10];
  
  scanf("%s", c);
  
  for(i = 0; c[i] != '\0'; i++) 
    qnt[i] = recurrence(i, c);
  
  
  for(i = 0; i < 10; i++)
    printf("%d ", qnt[i]);
  
  
  return 0;
}

