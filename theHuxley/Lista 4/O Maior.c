/*Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. Utilize a f�rmula:

Formato de entrada

O arquivo de entrada cont�m tr�s valores inteiros.

Formato de sa�da

Imprima o maior dos tr�s valores seguido por um espa�o e a mensagem "eh o maior".

Desafio voc� fazer sem usar "if".

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
