#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*Fa�a um programa que leia 3 n�meros inteiros e imprima um (e apenas um) dos seguintes n�meros:

1 (Se todos os n�meros s�o iguais)
2 (Se todos os n�meros s�o diferentes)
3 (Se apenas dois n�meros s�o iguais)



*/
int main() {
    int a, b , c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if( a == b && a == c && b == c ) {
        printf("\n 1 \n");//Se todos os n�meros s�o iguais
    }
    else if(a != b && a != c && b != c) { //Se todos os n�meros s�o diferentes
        printf("\n 2 \n");
    }
    else if( a == b && a != c || a != b && a == c ) {
        printf("\n 3 \n");//Se apenas dois n�meros s�o iguais
    }
    else if( b == c && b != a || b != c && b == a ) {
        printf("\n 3 \n");//Se apenas dois n�meros s�o iguais
    }

    system ("pause");
    return 0;
}
