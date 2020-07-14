/*Leia 3 valores, no caso vari�veis A, B e C, que s�o as tr�s notas de um aluno. A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.,
 Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.

O arquivo de entrada cont�m 3 valores com uma casa decimal.

Voc� deve imprimir a string "MEDIA = " seguida do valor da m�dia ponderada. Olhe o exemplo de entrada e sa�da para ter certeza do formato.
O valor da m�dia deve possuir apenas um d�gito ap�s o ponto decimal.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float MEDIA, nota1, nota2, nota3;
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    MEDIA = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10 ;

    printf("\nMEDIA = %.1f\n",MEDIA);
    system("pause");
	return 0;
}
