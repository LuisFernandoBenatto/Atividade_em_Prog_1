/*
Descri��o
Fa�a um programa que imprima todos os n�meros (inteiros e positivos) entre x e y que satisfa�am as duas condi��es abaixo:
- n�o terminem em 0;
- se o d�gito da direita for removido, o n�mero restante � divisor do original.

Formato de entrada

Dois inteiros x e y, separados por um espa�o. Onde: x>=10 e y<100.

Formato de sa�da

Os n�meros inteiros (maiores ou iguais a x e menores ou iguais a y) que satisfazem as propriedades acima, separados por um final de linha.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>
int main(){

    int X = 0, Y = 0, aux = 0;
    int divisor;

    //if (X >= 10 && Y < 100)
        scanf("%d %d", &X, &Y);

        for (aux = X ; aux <= Y; aux++ ){
                divisor = aux / 10;
             if ( aux % divisor == 0){
                 if (aux != 10 && aux != 20 && aux != 30 && aux != 40 && aux != 50 && aux != 60 && aux != 70 && aux != 80 && aux != 90){
                    printf("%d\n", aux);
                 }

             }

        }


    system("pause");
    return 0;
}
