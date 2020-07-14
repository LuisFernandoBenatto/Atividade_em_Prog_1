/*
Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. Utilize a f�rmula:

Obs.: a f�rmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto � necess�rio para chegar no resultado esperado.

Entrada
O arquivo de entrada cont�m tr�s valores inteiros.

Sa�da
Imprima o maior dos tr�s valores seguido por um espa�o e a mensagem "eh o maior"
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A == B && A == C && B == C){
         printf("%d eh o maior\n", A);
    }
    else if (A > B && A > C){
        printf("%d eh o maior\n", A);
    }
    else if (B > A && B > C){
        printf("%d eh o maior\n", B);
    }
    else if (C > A && C > B){
        printf("%d eh o maior\n", C);
    }

    system("pause");
    return 0;
}
