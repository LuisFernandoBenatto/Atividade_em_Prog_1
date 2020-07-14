#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

    int *ponteiro;
    int *ponteiro2;
    int valor_teste = 50;
    int valor_teste2 = 90;


    int *ponteiro3 = &valor_teste2;

    ponteiro = &valor_teste;

    printf("ponteiro = %d --- valor = %d --- %d\n", ponteiro, valor_teste, &valor_teste);

    *ponteiro2 = &valor_teste2;

    printf("ponteiro = %d --- valor = %d --- %d\n", ponteiro2, valor_teste2, &valor_teste2);

    printf("ponteiro = %d --- valor = %d --- %d\n", ponteiro3, valor_teste2, &valor_teste2);



    printf("\n");
    system("pause");
    return 0;
}
