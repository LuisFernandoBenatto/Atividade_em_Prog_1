/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do produto de A e B pelo produto de C e D.

O arquivo de entrada cont�m 4 valores inteiros.

Imprima a mensagem DIFERENCA com todas as letras mai�sculas, conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade e o valor da diferen�a dos produtos.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A, B, C, D, DIFERENCA;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    DIFERENCA = (A * B) - (C * D);

    printf("\nDIFERENCA = %d\n", DIFERENCA);
    system("pause");
	return 0;
}
