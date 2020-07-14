#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura, massa, imc;

    printf(" Digite sue peso em Kg: ");
    scanf("%f", &massa);
    printf("\n Digite sua altura: ");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    printf("\n Seu Indice de massa corporal e igual a: %.2f \n", imc);

    system("pause");
    return 0;
}
