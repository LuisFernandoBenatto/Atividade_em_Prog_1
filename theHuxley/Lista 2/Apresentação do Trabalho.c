/*
A entrada é composta de 5 números, representando respectivamente Interface Gráfica,
 Inteligência Artificial, Encapsulamento, Indentação e Structs.

Os números podem ser:

0 - Se o trabalho não possui tal quesito.

1 - Se o trabalho possui tal quesito.

Deve imprimir o número 0, se o aluno não atender aos requisistos e ficará com zero,
 e a frase "AVALIADO" se ele atendeu aos requisitos mínimos.
Seguidos de uma quebra de linha.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A, B, C, D, E;

    scanf("%d",&A); //Interface Gráfica
    scanf("%d",&B); //Inteligência Artificial
    scanf("%d",&C); //Encapsulamento
    scanf("%d",&D); //Indentação
    scanf("%d",&E); //Structs.


    if (A == 1 && B == 1 && C == 1 && D == 1 && E == 1 ){
        printf("AVALIADO\n");
    }
    else if (A == 0 && B == 1 && C == 1 && D == 1 && E == 1 ){
        printf("AVALIADO\n");
    }
    else if (A == 1 && B == 0 && C == 1 && D == 1 && E == 1 ){
        printf("AVALIADO\n");
    }
    else{
        printf("0\n");
    }

    system("pause");
	return 0;
}
