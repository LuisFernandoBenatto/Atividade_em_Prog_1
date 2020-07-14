#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 3

int main(){
    float notas[TAMANHO];
    float media = 0.0;

    for(int i=0; i < TAMANHO; i++){
        scanf("%f", &notas[i]);
        media += notas[i];

    }
    media /= TAMANHO;
    printf("%.2f\n", media);
    system("pause");
    return 0;
}
