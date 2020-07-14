/*Ambrosina virou empresária. Decidiu vender pastéis, empadas e kibes. O problema é que de uns tempos pra cá, os preços dos ingredientes se alteram bastante e isso reflete no custo do produto final.

Logo ambrosina contratar você para escrever um programa para calcular automaticamente o custo de cada produto assim que o preço do ingrediente for alterado.

Seguem os exemplos das tabelas que a Ambrosina fez.


Formato de entrada

Consiste de 4 linhas. Da linha 1 a 3, serão dados quatro números reais por linha, correspondendo a quantidade de ingredientes utilizados em cada produto.
A sequência de ingredientes é sempre: ovo, farinha, açúcar e carne. E os produtos são na sequência: pastel, empada e kibe.
A quarta linha consiste de quatro números reais correspondendo ao preço do ovo, farinha, açúcar e carne, respectivamente.

Formato de saída

A saída consiste de 03 números reais formatados com duas casas decimais. Cada número consiste do custo do pastel, empada e kibe, respectivamente.
Cada número deve ser impresso em uma linha.
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
