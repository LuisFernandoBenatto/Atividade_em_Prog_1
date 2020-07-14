/* Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno.
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11).
Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.


O arquivo de entrada contém 2 valores com uma casa decimal cada um..

Calcule e imprima a variável MEDIA conforme exemplo abaixo, com 5 dígitos após o ponto decimal.
Utilize variáveis de dupla precisão (double) e como todos os problemas, não esqueça de imprimir o fim de linha após o resultado.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double A, B,MEDIA;

    scanf("%lf", &A); // 3.5
    scanf("%lf", &B); //7.5

    MEDIA = (A * 3.5 + B * 7.5) / 11;


    printf("\nMEDIA = %.5lf\n",MEDIA); //MEDIA = 6.43182
    system("pause");
	return 0;
}
