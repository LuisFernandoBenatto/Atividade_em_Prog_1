#include <stdio.h>
#include <stdlib.h>
int main (){
    float n1, n2, soma, sub, divisao, multi;
    printf("DIGITE O PRIMEIRO NUMERO:");
    scanf("%f", &n1);
    printf("DIGITE O SEGUNDO NUMERO:");
    scanf("%f", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    divisao = n1 / n2;
    multi = n1 * n2;

    printf("\n O valor da soma desses dois numero: %.2f \n", soma);
    printf("\n O valor da subtracao desses dois numero: %.2f \n", sub);
    printf("\n O valor da divisao desses dois numero: %.2f \n", divisao);
    printf("\n O valor da multiplicacao desses dois numero: %.2f \n", multi);


    system ("pause");
    return 0;
}
