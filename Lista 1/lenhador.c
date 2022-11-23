#include <stdio.h>
#include <string.h>

int main()
{
  int qtronco = 0;
  int i;
  char arvore[3000][11];
  int j;
  int galhos = 0;
  char direcao;
  int altura;
  char lenhador;
  int alturaL = 0;
  scanf("%i", &qtronco);
  for (i = 0; i < qtronco + 1; i++)
  {
    for (j = 0; j < 11; j++)
    {
      if (j == 4 || j == 5 || j == 6)
      {
        arvore[i][j] = '|';
      }
      else
      {
        arvore[i][j] = ' ';
      }
    }
  }
  scanf("%i", &galhos);

  for (i = 0; i < galhos; i++)
  {
    scanf(" %c %i", &direcao, &altura);
    if (direcao == 'E')
    {
      arvore[altura][1] = '-';
      arvore[altura][2] = '-';
      arvore[altura][3] = '-';
    }
    if (direcao == 'D')
    {
      arvore[altura][7] = '-';
      arvore[altura][8] = '-';
      arvore[altura][9] = '-';
    }
  }
  scanf(" %c", &lenhador);
  if (lenhador == 'E')
  {
    arvore[alturaL + 1][2] = 'L';
    arvore[alturaL + 2][2] = 'L';
  }
  if (lenhador == 'D')
  {
    arvore[alturaL + 1][8] = 'L';
    arvore[alturaL + 2][8] = 'L';
  }
  printf("~~~~~~~~~~~\n");
  for (i = alturaL + 5; i > 0; i--)
  {
    for (j = 0; j < 11; j++)
    {
      printf("%c", arvore[i][j]);
    }
    printf("\n");
  }
  printf("~~~~~~~~~~~\n");
  char action;
  while (scanf(" %c", &action) > 0)
  {
    if (action == 'T')
    {
      if (lenhador == 'D')
        if (arvore[alturaL + 1][2] == '-' || arvore[alturaL + 1][2] == '-')
        {
          printf("**beep**\n");
          continue;
        }
        else
        {
          arvore[alturaL + 1][2] = 'L';
          arvore[alturaL + 2][2] = 'L';
          arvore[alturaL + 1][8] = ' ';
          arvore[alturaL + 2][8] = ' ';
          lenhador = 'E';
        }
      else if (lenhador == 'E')
        if (arvore[alturaL + 1][8] == '-' || arvore[alturaL + 2][8] == '-')
        {
          printf("**beep**\n");
          continue;
        }
        else
        {
          arvore[alturaL + 1][8] = 'L';
          arvore[alturaL + 2][8] = 'L';
          arvore[alturaL + 1][2] = ' ';
          arvore[alturaL + 2][2] = ' ';
          lenhador = 'D';
        }
    }
    if (action == 'B')
    {
      if (lenhador == 'E')
      {
        if (arvore[alturaL + 1][4] == '>')
        {
          if (arvore[alturaL + 3][2] == '-')
          {
            printf("**morreu**\n");
            return 0;
          }
          else
          {
            alturaL++;
            arvore[alturaL + 2][2] = 'L';
          }
        }
        else
        {
          arvore[alturaL + 1][4] = '>';
        }
      }
      else if (lenhador == 'D')
      {
        if (arvore[alturaL + 1][6] == '<')
        {
          if (arvore[alturaL + 3][8] == '-')
          {
            printf("**morreu**\n");
            return 0;
          }
          else
          {
            alturaL++;
            arvore[alturaL + 2][8] = 'L';
          }
        }
        else
          arvore[alturaL + 1][6] = '<';
      }
    }
    printf("~~~~~~~~~~~\n");
    for (i = alturaL + 5; i > alturaL; i--)
    {
      for (j = 0; j < 11; j++)
      {
        if (arvore[i][j])
        {
          printf("%c", arvore[i][j]);
        }
        else
          (printf(" "));
      }
      printf("\n");
    }
    printf("~~~~~~~~~~~\n");
  }
}