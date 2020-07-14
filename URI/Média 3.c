/*
Leia quatro n�meros (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente �s quatro notas de um aluno. Calcule a m�dia com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta m�dia acompanhada pela mensagem "Media: ". Se esta m�dia for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a m�dia calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a m�dia calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".

No caso do aluno estar em exame, leia um valor correspondente � nota do exame obtida pelo aluno. Imprima ent�o a mensagem "Nota do exame: " acompanhada pela nota digitada. Recalcule a m�dia (some a pontua��o do exame com a m�dia anteriormente calculada e divida por 2). e imprima a mensagem "Aluno aprovado." (caso a m�dia final seja 5.0 ou mais ) ou "Aluno reprovado.", (caso a m�dia tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou reprovado ap�s ter pego exame) apresente na �ltima linha uma mensagem "Media final: " seguido da m�dia final para esse aluno.

Entrada
A entrada cont�m quatro n�meros de ponto flutuante correspendentes as notas dos alunos.

Sa�da
Todas as respostas devem ser apresentadas com uma casa decimal. As mensagens devem ser impressas conforme a descri��o do problema. N�o esque�a de imprimir o enter ap�s o final de cada linha, caso contr�rio obter� "Presentation Error".
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double N1, N2, N3, N4;
    double MEDIA, EXAME;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    MEDIA =(N1*2 + N2*3 + N3*4 + N4*1)/10;

    printf("Media: %.1lf\n", MEDIA);

    if (MEDIA >= 7){
			printf("Aluno aprovado.\n");
    }
    else if (MEDIA < 5){
			printf("Aluno reprovado.\n");
    }
    else {
            printf("Aluno em exame.\n");
            scanf("%lf",&EXAME);
            printf("Nota do exame: %.1lf\n",EXAME);
			printf("Aluno aprovado.\n");
			printf("Media final: %.1lf\n",(EXAME + MEDIA)/2);
    }
    system("pause");
	return 0;
}
