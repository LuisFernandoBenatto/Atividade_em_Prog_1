/*
Leia uma string e inverta o seu conteúdo. Exemplo: Se a string digitada for "JANELA", então você deve imprimir: "ALENAJ".

Formato de entrada

Você receberá uma única linha contendo uma string com no máximo 255 caracteres.

Formato de saída

Imprima a string recebida com os seus caracteres invertidos também em uma única linha, seguida de um final de linha.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[255];
    int i, j;
    int tamanho = 0;

    fgets(frase, 255, stdin);

    for(i = 0; i < 255; i++){
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
