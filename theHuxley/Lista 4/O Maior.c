/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

Formato de entrada

O arquivo de entrada contém três valores inteiros.

Formato de saída

Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".

Desafio você fazer sem usar "if".

hahahahaha (Risada do mal!)
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Maior_ABC(int a, int b, int c);

int main(){

    int a, b, c;

    scanf("%d %d %d",&a, &b, &c);

    printf("%d eh o maior\n", Maior_ABC(a,b,c));

    system("pause");
    return 0;
}
int Maior_ABC (int a, int b, int c){

    int Maior_AB;
    int Maior_abc;

        Maior_AB = (a + b + abs(a-b))/2;
        Maior_abc = (Maior_AB + c + abs(Maior_AB - c))/2;

    return Maior_abc;
}
