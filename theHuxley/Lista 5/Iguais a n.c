/*
Descri��o
Leia uma sequ�ncia de 101 n�meros inteiros , verifique se o �ltimo n�mero est� presente nos 100 primeiros n�meros e imprima as posi��es do array em que ele est� presente.

Formato de entrada

Uma sequ�ncia de 101 n�meros inteiros

Formato de sa�da

Uma sequ�ncia de inteiros separados por um final de linha, onde cada inteiro representa a posi��o do array em que foi encontrado o �ltimo n�mero lido.

Se o �ltimo n�mero n�o for encontrado nos 100 n�meros anteriores n�o imprima nada
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
