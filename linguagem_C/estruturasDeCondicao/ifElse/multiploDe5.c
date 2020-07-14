#include <stdio.h>
#include <math.h>

//Faça um programa que, dado um número inteiro, indique se o número é múltiplo de 5;

int main(){
    int numero;
    scanf("%d", &numero);

    if(numero % 5 == 0) {
        printf("\n Esse numero e multiplo de 5 \n");
    }
    else {
        printf("\n Esse numero nao e multiplo de 5 \n");
    }
    system ("pause");
    return 0;
}
