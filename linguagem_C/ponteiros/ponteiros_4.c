#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){

    int *p;
    int var = 10;
    char c = 'a';
    double d = 4.5;
    int y[3] = {1,2,3};

    int *ponteiro = &var;
    //Testando a localizaçao das variaveis na memoria
    /*
    printf("valor = %d \nendereco = %d \n", var, &var);
    printf("valor = %c \nendereco = %d \n", c, &c);
    printf("valor = %lf \nendereco = %d \n", d, &d);
    printf("valor = %d \nendereco = %d \n",y[0], &y[0]);
    printf("valor = %d \nendereco = %d \n",y[1], &y[1]);
    printf("valor = %d \nendereco = %d \n",y[2], &y[2]);
    */

    printf("valor de var = %d\n", var);
    printf("%d\n",ponteiro);
    printf("%d\n",*ponteiro);

    *ponteiro = 999;

    printf("valor de var = %d\n", var);

    printf("\n");
    system("pause");
    return 0;
}

