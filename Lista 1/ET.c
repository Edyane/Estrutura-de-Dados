#include <stdio.h>
#include <string.h>

int main()
{
  char p[31];

  while (scanf("%s", p) > 0)
  {
    if (strcmp(p, "marte") == 0)
    {
      printf("Leonardo Cicero Marciano\n");
      return 0;
    }
  }
  printf("none\n");
}