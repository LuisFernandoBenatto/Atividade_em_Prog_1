/*Fa�a um programa que leia um n�mero inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior).

Um n�mero inteiro.

O inteiro anterior e o sucessor, separados por um espa�o.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int number,an , su;

    scanf("%d", &number);

    an = number - 1;
    su = number + 1;

    printf("\n%d %d\n",an  ,su);

    system("pause");
	return 0;
}
