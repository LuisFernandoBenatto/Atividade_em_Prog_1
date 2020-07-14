/*
Escreva uma fun��o chamada SomaDigitos que receba como entrada um n�mero inteiro e retorne a soma de seus d�gitos.

Ex: Se a entrada for 521, a sa�da ser� 8 (5 + 2 + 1)

Formato de entrada

Um n�mero inteiro

Formato de sa�da

Um n�mero inteiro

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int SomaDigitos (int digito);

int main() {

    int num;

    scanf("%d", &num);

    printf("%d\n", SomaDigitos(num));

    system("pause");
	return 0;
}
int SomaDigitos (int digito){

   int soma = 0;

    soma = digito % 10;
    digito = (digito - soma)/10;

    if (digito <= 0){
          return soma;
    }else{
      return soma + SomaDigitos(digito);
         }
}
