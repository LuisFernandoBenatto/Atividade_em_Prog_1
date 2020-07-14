#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // falta fazer esse
    //so e uma copia do outro
    char frase[100];
    int i, j;
    int tamanho = 0;

    fgets(frase, 100, stdin);

    for(i = 0; i < 100; i++){
        if(frase[i] == '\0'){
            break;
        }
       tamanho++;
    }
    for(; tamanho + 1 > 0; tamanho--){
        printf("%c",frase[tamanho]);
    }
    printf("\n");

    system("pause");
    return 0;
}
