/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior"
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
