/*
Descri��o
Fa�a um programa que imprima todos os n�meros �mpares entre dois n�meros dados.

Formato de entrada

Dois n�meros inteiros, n e m, separados por um final de linha.

Formato de sa�da

Todos os n�meros �mpares maiores ou iguais a n e menores ou iguais a m, separados por um final de linha
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>


int main(){

    int num, num2;

    scanf("%d", &num);
    scanf("%d", &num2);

    while (num < num2 + 1){
          if  (num % 2 == 1){
             printf("%d\n", num);
          }
        num++;
    }

    system("pause");
    return 0;
}
