/*Escreva um programa que realize a conversão de dólar para real: para cada valor lido em dólar da entrada padrão,
será exibido o correspondente em reais (1 dólar = 3.55 reais).

Um número real (float)  que representa um valor em dólares.

Um número real com duas casas decimais (float) que representa o valor de entrada convertido para reais.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float dolar, real;

    scanf("%f", &dolar);

    real = dolar * 3.55;

    printf("%.2f \n", real);

    system("pause");
	return 0;
}
