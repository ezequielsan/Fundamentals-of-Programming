// 1 - Ler a conta do cliente no formato (xxxx-xx)
// 2 - Ler o tipo de consumidor (residencial, comercial e industrial)
// 3 - Ler consumo de água por metros cúbicos
// 4 - Se tipo comercial for residencial:5 reais de taxa mais 0.05 por m3 usado
// 5 - Se tipo comercial for comercial:500 reais para os primeiros 80 m3 mais 0.03 por m3 adicional
// 6 - Se tipo comercial for industrial:800 reais para os primeiros 100 m3 mais 0.04 por m3 adicional
// 7 - Imprimir a conta, gasto de consumo (em reais)

#include <stdio.h>

int main() {
  char conta[11];
  char tipoConta;
  float consumo, valorTotal;

  printf("Informe a sua conta no (formato xxxx-xx): ");
  scanf("%s", conta);

  printf("Informe o tipo de conta: 'R' para residencial, 'C' para comercial ou 'I' para industrial: ");
  scanf(" %c", &tipoConta);

  printf("Informe seu consumo de agua em metros cubicos : ");
  scanf(" %f", &consumo);

  switch(tipoConta) {
    case 'R' : 
    case 'r' : valorTotal = 5 + (0.05 * consumo); break;
    case 'C' : 
    case 'c' : valorTotal = (consumo > 80) ? 500 + (0.03 * (consumo - 80)) : 500; break;
    case 'I' : 
    case 'i' : valorTotal = (consumo > 100) ? 800 + (0.04 * (consumo - 100)) : 800; break;
    default:;
  }

  printf("Conta: %s, Tipo: %c, Consumo de agua(em metros cubicos): %.1f m3, total a pagar: %.2f R$\n", conta, tipoConta, consumo, valorTotal);
  
  getchar();
  return 0;
}