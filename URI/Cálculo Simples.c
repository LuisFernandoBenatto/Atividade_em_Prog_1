/*
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2,
 o número de peças 2 e o valor unitário de cada peça 2.
 Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo,
lembrando de deixar um espaço após os dois pontos e um espaço após o "R$".
 O valor deverá ser apresentado com 2 casas após o ponto.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int codigo_peca, numero_peca, codigo_peca2, numero_peca2;
    double valor_peca, valor_peca2, valor_pago;

    scanf("%d %d %lf", &codigo_peca, &numero_peca, &valor_peca);
    scanf("%d %d %lf", &codigo_peca2, &numero_peca2, &valor_peca2);

    valor_pago = ( numero_peca * valor_peca ) + ( numero_peca2 * valor_peca2 );

    printf("VALOR A PAGAR: R$ %.2lf\n", valor_pago);
    system("pause");
	return 0;
}
