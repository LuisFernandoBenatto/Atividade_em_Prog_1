/*
Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. Se n�o for poss�vel calcular as ra�zes, mostre a mensagem correspondente �Impossivel calcular�, caso haja uma divis�o por 0 ou raiz de numero negativo.

Entrada
Leia tr�s valores de ponto flutuante (double) A, B e C.

Sa�da
Se n�o houver possibilidade de calcular as ra�zes, apresente a mensagem "Impossivel calcular". Caso contr�rio, imprima o resultado das ra�zes com 5 d�gitos ap�s o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha ap�s cada mensagem.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double A, B, C, R1, R2, DELTA;

    scanf("%lf %lf %lf", &A, &B, &C);

    DELTA = (B*B) - (4 * A * C);

    if (A == 0 || DELTA < 0) {
			printf("Impossivel calcular\n");
    }
    else {
			DELTA = sqrt(DELTA);
			R1 = (-B) + DELTA;
			R2 = (-B) - DELTA;
			R1 = R1 / (2 * A);
			R2 = R2 / (2 * A);
			printf("R1 = %.5lf\n", R1);
            printf("R2 = %.5lf\n", R2);
    }
    system("pause");
	return 0;
}
