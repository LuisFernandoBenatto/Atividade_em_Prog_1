#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Funções
int maior(int a, int b){

    if (a > b){
        return a;
    }else {
        return b;
    }
}
int main (){
    int a, b;

    scanf("%d %d", &a, &b);
    printf("\n");

    int m = maior(a,b);

    printf("O maior numero e: >> %d <<\n", m);

    system ("pause");
    return 0;
}
