/*
A entrada � composta de 5 n�meros, representando respectivamente Interface Gr�fica,
 Intelig�ncia Artificial, Encapsulamento, Indenta��o e Structs.

Os n�meros podem ser:

0 - Se o trabalho n�o possui tal quesito.

1 - Se o trabalho possui tal quesito.

Deve imprimir o n�mero 0, se o aluno n�o atender aos requisistos e ficar� com zero,
 e a frase "AVALIADO" se ele atendeu aos requisitos m�nimos.
Seguidos de uma quebra de linha.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A, B, C, D, E;

    scanf("%d",&A); //Interface Gr�fica
    scanf("%d",&B); //Intelig�ncia Artificial
    scanf("%d",&C); //Encapsulamento
    scanf("%d",&D); //Indenta��o
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
