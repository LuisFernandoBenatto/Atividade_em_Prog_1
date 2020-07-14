/*
Escreva um programa para ler as coordenadas (X, Y) de um ponto no sistema cartesiano. E escrever à qual quadrante ele pertence.



Dois números inteiros.


Imprima o quadrante correspondente que estas coordenadas pertencem, que pode ser:
primeiro
segundo
terceiro
quarto
eixo x
eixo y
origem
Será eixo x quando a coordenada y for zero.
Será eixo y quando a coordenada x for zero.
Os outros basta achar a localização do ponto no plano cartesiano.

A saida deve ser seguida de uma quebra de linha.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int X, Y;

    scanf("%d",&X);
    scanf("%d",&Y);

    if (X == 0 && Y == 0){
        printf("origem\n");
    }
    else if (X != 0 && Y == 0){
        printf("eixo x\n");
    }
    else if (Y != 0 && X == 0){
        printf("eixo y\n");
    }
    else if (Y > 0 && X > 0){
        printf("primeiro\n");
    }
    else if (Y > 0 && X < 0){
        printf("segundo\n");
    }
    else if (Y < 0 && X < 0){
        printf("terceiro\n");
    }
    else if (Y < 0 && X > 0){
        printf("quarto\n");
    }
    system("pause");
	return 0;
}



