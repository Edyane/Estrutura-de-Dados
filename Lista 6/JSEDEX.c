#include <stdio.h>

int main()
{
    int D;
    scanf("%d", &D);
    
    int A, L, P;

    scanf("%d %d %d", &A, &L, &P);

    (A >= D)&&(L >= D)&&(P >= D) ?  
    printf("S\n") : printf("N\n");
  
    return 0;
}