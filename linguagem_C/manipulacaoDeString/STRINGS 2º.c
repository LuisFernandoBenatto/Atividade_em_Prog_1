#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome2[100];
    int tam = 0;

    fgets(nome2, 100, stdin);

    for(int i=0; i < 100; i++){
        if(nome2[i] == '\0'){
            break;
        }
        if(nome2[i] == '\n'){
            tam -= 1;
        }
        tam++;
    }
    printf("Tamanho: %d\n",tam);

    //esta contando o ENTER NO FINAL DA FRASE;
    system("pause");
    return 0;
}
