/*Escreva um programa que realize a convers�o de d�lar para real: para cada valor lido em d�lar da entrada padr�o,
ser� exibido o correspondente em reais (1 d�lar = 3.55 reais).

Um n�mero real (float)  que representa um valor em d�lares.

Um n�mero real com duas casas decimais (float) que representa o valor de entrada convertido para reais.
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
