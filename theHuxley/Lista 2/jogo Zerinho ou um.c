/*
A entrada cont�m tr�s inteiros A, B e C (cada um pode ser 0 ou 1), indicando, respectivamente, os valores escolhidos por Alice, Beto e Clara.

Seu programa deve imprimir uma linha, com um caracter em mai�sculo. Se Alice � o vencedor do personagem deve ser 'A', se Beto � o vencedor do personagem deve ser 'B',
 se Clara � o vencedor do personagem deve ser 'C', e se n�o houver vencedor o personagem deve ser '* '(asterisco).

No final, imprimir uma quebra de linha.


*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A, B, C;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    if (A == B && A == C){
        printf("* \n");
    }
    else if (A == B && A != C){
        printf("C\n");
    }
    else if (A == C && C != B){
        printf("B\n");
    }
    else if (B == C && B != A){
        printf("A\n");
    }
    system("pause");
	return 0;
}
