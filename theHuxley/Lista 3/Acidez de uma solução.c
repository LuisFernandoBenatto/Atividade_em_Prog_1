/*Descrição
Escreva um programa que leia o valor do índice de acidez (pH) de uma solução e informe se ela é ácida, básica ou neutra.

A solução é ácida quando o pH é menor que 7

A solução é básica quando o pH é maior que 7

Caso contrário a solução é neutra

Formato de entrada

O valor do pH (entre 1.0 e 14.0)

Formato de saída

Caso a solução seja básica, escreva "Basica" na saída

Caso a solução seja ácida, escreva "Acida" na saída

Caso a solução seja neutra, escreva "Neutra" na saída

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

    if (PH < 7){//A solução é ácida quando o pH é menor que 7
        printf("Acida\n");
    }
    else if (PH > 7){// solução é básica quando o pH é maior que 7
        printf("Basica\n");
    }
    else{
        printf("Neutra\n");
    }

    system("pause");
    return 0;
}
