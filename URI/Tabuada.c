/*Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Entrada
A entrada contém um valor inteiro N (2 < N < 1000).

Saída
Imprima a tabuada de N, conforme o exemplo fornecido.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num, total;

    scanf("%d", &num);

    printf("1 x %d = %d\n", num, total = num * 1);
    printf("2 x %d = %d\n", num, total = num * 2);
    printf("3 x %d = %d\n", num, total = num * 3);
    printf("4 x %d = %d\n", num, total = num * 4);
    printf("5 x %d = %d\n", num, total = num * 5);
    printf("6 x %d = %d\n", num, total = num * 6);
    printf("7 x %d = %d\n", num, total = num * 7);
    printf("8 x %d = %d\n", num, total = num * 8);
    printf("9 x %d = %d\n", num, total = num * 9);
    printf("10 x %d = %d\n", num, total = num * 10);

    system("pause");
	return 0;
}
