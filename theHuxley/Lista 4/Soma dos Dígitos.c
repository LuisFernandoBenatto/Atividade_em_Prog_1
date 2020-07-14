/*
Escreva uma função chamada SomaDigitos que receba como entrada um número inteiro e retorne a soma de seus dígitos.

Ex: Se a entrada for 521, a saída será 8 (5 + 2 + 1)

Formato de entrada

Um número inteiro

Formato de saída

Um número inteiro

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
