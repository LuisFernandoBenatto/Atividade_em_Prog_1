#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float dias_atrasados, valor;

    scanf("%f", &dias_atrasados);

    valor = dias_atrasados * 0.75;


    printf("%.2f\n", valor);
    system("pause");
	return 0;
}
