#include <stdio.h>

void moveX(char *string)
{
  if (string[0] == '\0')
  {
    return;
  }

  if (string[0] == 'x')
  {
    moveX(string + 1);
    printf("%c", 'x');
  }
  else
  {
    printf("%c", string[0]);
    moveX(string + 1);
  }
}
int main()
{
  char texto[101];
  scanf("%s", texto);

  moveX(texto);
}