#include <stdio.h>

int main()
{
  int T;
  int N;
  int P;

  while (scanf("%i %i", &T, &N) >= 2 && T != 0)
  {
    int Total = N * 3;
    while (T--)
    {
      scanf("%*s %i", &P);
      Total -= P;
    }
    printf("%i\n", Total);
  }
  return 0;
}