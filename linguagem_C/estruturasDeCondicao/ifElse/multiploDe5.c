#include <stdio.h>
#include <math.h>

//Fa�a um programa que, dado um n�mero inteiro, indique se o n�mero � m�ltiplo de 5;

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
