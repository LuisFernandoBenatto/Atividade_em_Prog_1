#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*Faça um programa que leia três notas (valores reais) de um aluno, calcule sua média aritmética e imprima uma mensagem dizendo se o aluno foi aprovado, reprovado ou deverá fazer prova final.
 O critério de aprovação é o seguinte:

Aprovado (média >= 7);
Reprovado (média < 3);
Prova final ( 3 <= média < 7).

03 números reais separados por um final de linha.

Uma mensagem que pode ser:

aprovado
reprovado
prova final
Dependendo da situação do aluno.

A saída deve terminar com uma quebra de linha.

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












