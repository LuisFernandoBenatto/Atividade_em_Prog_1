/*Escreva um programa que recebe um numero inteiro como entrada e fornece o algarismo da casa das unidades deste numero.

Por exemplo, o algarismo da casa das unidades do número 3872 é 2.

Se o número dado for negativo, considere que o algarismo também será negativo. Por exemplo, se o número dado for -74, a resposta deve ser -4 e não 4.

Um número inteiro

Um inteiro representando o algarismo da casa das unidades

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    int algarismo, unidade;

    scanf("%d", &algarismo);

    unidade = ( algarismo % 10 ); //unidade é igual ao resto da divisão por 10.

    printf("%d",unidade);
	return 0;
}
