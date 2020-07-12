#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Funções
double circulo(double r);

int main (){
    double r;

    printf("Informe o valor do raio do circulo: ");
    scanf("%lf", &r);
    double area = circulo(r);
    printf("\n");

    printf("A area do circulo e: >> %.5lf <<\n", area);

    system ("pause");
    return 0;
}

double circulo(double raio){
    double resultado = 0.0;

    resultado = M_PI * pow(raio,2);
    return resultado;
}
