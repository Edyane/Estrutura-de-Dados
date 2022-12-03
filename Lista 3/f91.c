#include <stdio.h>

int maldicao(int x)
{
  int resultado;
  if (x >= 101)
    resultado = x - 10;
  else
    resultado = maldicao(maldicao(x + 11));
  return resultado;
}

int main()
{
  int num, resultado;

  while (scanf("%i", &num) > 0 && num != 0)
  {
    resultado = maldicao(num);
    printf("f91(%i) = %i\n", num, resultado);
  }
}