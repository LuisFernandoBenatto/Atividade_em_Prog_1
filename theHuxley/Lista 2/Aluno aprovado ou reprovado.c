#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*Fa�a um programa que leia tr�s notas (valores reais) de um aluno, calcule sua m�dia aritm�tica e imprima uma mensagem dizendo se o aluno foi aprovado, reprovado ou dever� fazer prova final.
 O crit�rio de aprova��o � o seguinte:

Aprovado (m�dia >= 7);
Reprovado (m�dia < 3);
Prova final ( 3 <= m�dia < 7).

03 n�meros reais separados por um final de linha.

Uma mensagem que pode ser:

aprovado
reprovado
prova final
Dependendo da situa��o do aluno.

A sa�da deve terminar com uma quebra de linha.

*/
int main() {
    double nota1, nota2, nota3, media;
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 7){
        printf("\n aprovado \n", media);
    }
    else if(media < 3){
    printf("\n reprovado \n", media);
    }
    else{
    printf("\n prova final \n", media);
    }
    system("pause");
    return 0;
}












