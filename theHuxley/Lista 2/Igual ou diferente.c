#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*Faça um programa que leia 3 números inteiros e imprima um (e apenas um) dos seguintes números:

1 (Se todos os números são iguais)
2 (Se todos os números são diferentes)
3 (Se apenas dois números são iguais)



*/
int main() {
    int a, b , c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if( a == b && a == c && b == c ) {
        printf("\n 1 \n");//Se todos os números são iguais
    }
    else if(a != b && a != c && b != c) { //Se todos os números são diferentes
        printf("\n 2 \n");
    }
    else if( a == b && a != c || a != b && a == c ) {
        printf("\n 3 \n");//Se apenas dois números são iguais
    }
    else if( b == c && b != a || b != c && b == a ) {
        printf("\n 3 \n");//Se apenas dois números são iguais
    }

    system ("pause");
    return 0;
}
