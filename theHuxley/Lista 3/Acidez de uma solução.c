/*Descri��o
Escreva um programa que leia o valor do �ndice de acidez (pH) de uma solu��o e informe se ela � �cida, b�sica ou neutra.

A solu��o � �cida quando o pH � menor que 7

A solu��o � b�sica quando o pH � maior que 7

Caso contr�rio a solu��o � neutra

Formato de entrada

O valor do pH (entre 1.0 e 14.0)

Formato de sa�da

Caso a solu��o seja b�sica, escreva "Basica" na sa�da

Caso a solu��o seja �cida, escreva "Acida" na sa�da

Caso a solu��o seja neutra, escreva "Neutra" na sa�da

Exemplos de:
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>


int main(){

    double PH;

    scanf("%lf",&PH);

    if (PH < 7){//A solu��o � �cida quando o pH � menor que 7
        printf("Acida\n");
    }
    else if (PH > 7){// solu��o � b�sica quando o pH � maior que 7
        printf("Basica\n");
    }
    else{
        printf("Neutra\n");
    }

    system("pause");
    return 0;
}
