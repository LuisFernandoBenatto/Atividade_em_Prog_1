/*Escreva um programa que recebe um numero inteiro como entrada e fornece o algarismo da casa das unidades deste numero.

Por exemplo, o algarismo da casa das unidades do n�mero 3872 � 2.

Se o n�mero dado for negativo, considere que o algarismo tamb�m ser� negativo. Por exemplo, se o n�mero dado for -74, a resposta deve ser -4 e n�o 4.

Um n�mero inteiro

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

    unidade = ( algarismo % 10 ); //unidade � igual ao resto da divis�o por 10.

    printf("%d",unidade);
	return 0;
}
