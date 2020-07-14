#include <stdio.h>
#include <stdlib.h>
int main (){
    float  media, distancia, combustivel;
    //int distancia, combustivel;

    printf("Digite a distancia percorrida:");
    scanf ("%f", &distancia);
    printf("Digite a quantidade de combustivel consumida:");
    scanf ("%f", &combustivel);

    media = distancia / combustivel;

    printf("O consumo medio desse automo e: %.3f km/l \n", media);
    system ("pause");
    return 0;
}
