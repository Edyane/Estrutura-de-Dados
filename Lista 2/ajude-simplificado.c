#include <stdio.h>

int main(void) {
  int valor_1, valor_2, valor_3, valor_chute, valor_correto;

  scanf("%d %d %d", &valor_1, &valor_2, &valor_3);
  scanf("%d", &valor_chute);

  valor_correto = valor_1 + valor_2 + valor_3;

  if (valor_chute == valor_correto) {
      printf("Acertou");
    }else {
    printf("Errou");
  }
}