#include<stdio.h>

int main(void){
  int dia = 0;
  int maiorNota = 0;
  int notaLida;
  long int restNota[410], restauranteLido, melhorRest = 0;
  int i, j, k, r;
  

  while(scanf(" %d", &r)==1){
    dia++;
    
    for(k = 0; k < 410; k++){
      restNota[k] = -1;
    }
    maiorNota = -1;
    melhorRest = 11000000;

    for(i = 0; i < r; i++){
      scanf(" %ld %d", &restauranteLido, &notaLida);
      restNota[2*i] = restauranteLido;
      restNota[2*i + 1] = notaLida;
      if(notaLida > maiorNota){
        maiorNota = notaLida;
      }
    }

    for(j = 0; j < 205; j++){
      if(restNota[2*j + 1] == maiorNota && melhorRest > restNota[2*j]){
        melhorRest = restNota[2*j];
      }
    }
    printf("Dia %d\n", dia);
    printf("%ld\n", melhorRest);
    printf("\n");
  }

  return 0;
}