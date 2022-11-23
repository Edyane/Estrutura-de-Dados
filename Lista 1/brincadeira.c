#include <stdio.h>

int main () {
    int n = 1;
    int i;
    int r;
    int alice;
    int beto;

    scanf("%i", &n);
    while (n != 0) {
        i = 0;
        alice = 0;
        beto = 0;
        
        while (i<n) {

            scanf("%i", &r);

            if (r == 0) {
                alice += 1;
            }
            else {
                beto += 1;
            }
            
            i++;
        }
        printf ("Alice ganhou %i e Beto ganhou %i \n", alice, beto);
        scanf("%i", &n);
    }

} 