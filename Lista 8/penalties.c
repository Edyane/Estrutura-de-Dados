#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int num_rodadas, gol_a, gol_b;
  gol_a = 0;
  gol_b = 0;

  scanf("%d", &num_rodadas);
  char time_a[num_rodadas], time_b[num_rodadas];

  for (int i = 0; i <= num_rodadas; i++) {
    scanf("%c", &time_a[i]);
  }
  for (int i = 0; i <= num_rodadas; i++) {
    scanf("%c", &time_b[i]);
  }

  for (int i = 0; i <= strlen(time_a); i++) {
    if (time_a[i] == 'o') {
      gol_a += 1;
    }
    if (time_b[i] == 'o') {
      gol_b += 1;
    }
    if (abs(gol_a - gol_b) == 2) {
      printf("%d", i * 2);
      break;
    }
  }

  if (abs(gol_a - gol_b) == 1) {
    printf("%d", num_rodadas * 2);
  }

  if (abs(gol_a - gol_b) == 0) {
    printf("Empate");
  }
}