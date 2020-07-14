/*Descri��o
Repare a seguinte caracter�stica do n�mero 3025:
30 + 25 = 55 e 55^2 = 3025
Fa�a um programa que leia uma s�rie de valores (n�meros inteiros de 4 d�gitos, um de cada vez) e diga se possuem a mesma caracter�stica. O programa termina quando for lido um valor menor que 1000 ou maior que 9999.

Formato de entrada

Uma sequ�ncia de n�meros inteiros, separados por um final de linha

Formato de sa�da

Para cada n�mero lido, seu programa deve imprimir:
"propriedade do 3025!", caso o n�mero lido atenda � propriedade descrita acima, ou "numero comum" caso contr�rio.

Imprima um final de linha ap�s cada sa�da.

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
