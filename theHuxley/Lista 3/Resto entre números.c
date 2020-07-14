#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>

int main(){

    int numx, numy, i, troca;

    scanf("%d", &numx);
    scanf("%d", &numy);

    if (numx > numy){
            troca = numx;
            numx = numy;
            numy = troca;
    }
    for (i = numx + 1;i < numy; i++){
            if (i % 5 == 3 || i % 5 == 2){
                printf("%d\n", i);
            }
    }
    system("pause");
    return 0;
}
