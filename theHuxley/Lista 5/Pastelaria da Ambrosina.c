/*Ambrosina virou empres�ria. Decidiu vender past�is, empadas e kibes. O problema � que de uns tempos pra c�, os pre�os dos ingredientes se alteram bastante e isso reflete no custo do produto final.

Logo ambrosina contratar voc� para escrever um programa para calcular automaticamente o custo de cada produto assim que o pre�o do ingrediente for alterado.

Seguem os exemplos das tabelas que a Ambrosina fez.


Formato de entrada

Consiste de 4 linhas. Da linha 1 a 3, ser�o dados quatro n�meros reais por linha, correspondendo a quantidade de ingredientes utilizados em cada produto.
A sequ�ncia de ingredientes � sempre: ovo, farinha, a��car e carne. E os produtos s�o na sequ�ncia: pastel, empada e kibe.
A quarta linha consiste de quatro n�meros reais correspondendo ao pre�o do ovo, farinha, a��car e carne, respectivamente.

Formato de sa�da

A sa�da consiste de 03 n�meros reais formatados com duas casas decimais. Cada n�mero consiste do custo do pastel, empada e kibe, respectivamente.
Cada n�mero deve ser impresso em uma linha.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ambrosina[3][4];
    int i, j;
    float valor[4];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            scanf("%d",&ambrosina[i][j]);
        }
    }
    for(i = 0;i < 4; i++){
        scanf("%f",&valor[i]);
    }
    float total[3]={0};

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            total[i] += ambrosina[i][j]*valor[j];
        }
        printf("%.2f\n", total[i]);
    }
    system("pause");
	return 0;
}
