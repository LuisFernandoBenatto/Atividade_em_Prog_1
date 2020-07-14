/*
Descrição
Leia uma sequência de 101 números inteiros , verifique se o último número está presente nos 100 primeiros números e imprima as posições do array em que ele está presente.

Formato de entrada

Uma sequência de 101 números inteiros

Formato de saída

Uma sequência de inteiros separados por um final de linha, onde cada inteiro representa a posição do array em que foi encontrado o último número lido.

Se o último número não for encontrado nos 100 números anteriores não imprima nada
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define Tamanho 101

int main() {


    int vet[Tamanho] = {0};
    int i;
    int a = 0;
    int b = 0;

    for(i = 0; i < Tamanho; i++){
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 100; i++){
        if(vet[i] == vet[100]){
            a++;
        }
    }

    int vet2[a];

    for(i = 0; i < 100; i++){
        if(vet[i] == vet[100]){
            vet2[b] = i;
            b++;
        }
    }

    for(b = 0; b < a; b++){
        printf("%d\n", vet2[b]);
    }

    system ("pause");
	return 0;
}
