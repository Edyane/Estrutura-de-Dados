#include <stdio.h>


int main(void) {
  int quant_nums, valor_temp, valor_chute;

  int total_valor = 0;
  scanf("%d", &quant_nums);
  
  for (int i =0; i < quant_nums; i++) {
    scanf("%d", &valor_temp);
    total_valor += valor_temp;
  }
  scanf("%d", &valor_chute);
  if (valor_chute == total_valor) {
  printf("Acertou");
  } else {
  printf("Errou");
  }
}