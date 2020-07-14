#include <stdio.h>
#include <math.h>

//Faça um programa que leia três números inteiros e imprima o menor deles;

int main(){
    int a, b , c, menor;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if( a <= c && a <= b) {
        printf("\n %d \n", a);
    }
    else if( b <= a && b <= c) {
        printf("\n %d \n", b);
    }
    else {
        printf("\n %d \n", c);
    }
    system ("pause");
    return 0;
}
