#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 3

// para definir o tamanho de um array entre outras coisas

/*cada posição tem um indice começa em 0 (zero) vai ate o tamanho -1 (menos 1)
*/
int main(){

    float vetor[5];
    char simbolo['NUMEROS'];
    int meu_array[3] = {5,7,10};
    int outo_array[100] = {0};

    float vetor1[TAMANHO];
    vetor[0] = 10.00;
    vetor[1] = 8.45;
    vetor[2] = 9.89;
    //vetor[3] = 4.60;
    //vetor[4] = 3.79;

    for(int i = 0; i < TAMANHO; i++){
        printf("%.2f", vetor1[TAMANHO]);
    }
    // NAO DEU CERTO
    printf("%.2f", vetor[0]);
    return 0;
}
