#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

    int a = 0;
    int b = 0;
    int c = 0;

    char letra = 'a';

    double flutuante = 4.52;

    int y[3] = {0};

    printf("Endereco de a = %d\n",&a);
    printf("Endereco de b = %d\n",&b);
    printf("Endereco de c = %d\n",&c);

    printf("\n");

    printf("Endereco de letra = %d\n",&letra);
    printf("Endereco de flutuante = %d\n",&flutuante);

    printf("\n");

    printf("Endereco de y[0] = %d\n",&y[0]);
    printf("Endereco de y[1] = %d\n",&y[1]);
    printf("Endereco de y[2] = %d\n",&y[2]);

    printf("\n");
    system("pause");
    return 0;
}

