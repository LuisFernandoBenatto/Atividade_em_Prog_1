/*Descri��o
Calcule o fatorial de um n�mero.

Formato de entrada

N�mero digitado.

Formato de sa�da

Fatorial do n�mero.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>

int main(){

    int n, fat;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&n);//4

          for(fat = 1; n > 1; n = n - 1)
               fat = fat * n;
    printf("Fatorial: %d\n", fat);   //Fatorial: 24


    system("pause");
    return 0;
}
