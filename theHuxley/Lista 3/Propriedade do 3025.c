/*Descrição
Repare a seguinte característica do número 3025:
30 + 25 = 55 e 55^2 = 3025
Faça um programa que leia uma série de valores (números inteiros de 4 dígitos, um de cada vez) e diga se possuem a mesma característica. O programa termina quando for lido um valor menor que 1000 ou maior que 9999.

Formato de entrada

Uma sequência de números inteiros, separados por um final de linha

Formato de saída

Para cada número lido, seu programa deve imprimir:
"propriedade do 3025!", caso o número lido atenda à propriedade descrita acima, ou "numero comum" caso contrário.

Imprima um final de linha após cada saída.

obs: Sem as aspas.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>

int main(){

    int num = 1000;


    while(num > 999 && num <= 9999){
          scanf("%d",&num);
             if (num > 999 && num <= 9999){
                 if(num == ((num / 100)+(num % 100))* ((num / 100)+(num % 100)) ){
                    printf("propriedade do 3025!\n");
                     num ++ ;
                 }
                 else {
                     printf("numero comum\n");
                 }

             }
    }
    system("pause");
    return 0;
}
