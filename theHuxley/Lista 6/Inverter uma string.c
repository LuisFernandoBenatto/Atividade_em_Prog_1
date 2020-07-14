/*
Leia uma string e inverta o seu conte�do. Exemplo: Se a string digitada for "JANELA", ent�o voc� deve imprimir: "ALENAJ".

Formato de entrada

Voc� receber� uma �nica linha contendo uma string com no m�ximo 255 caracteres.

Formato de sa�da

Imprima a string recebida com os seus caracteres invertidos tamb�m em uma �nica linha, seguida de um final de linha.
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
