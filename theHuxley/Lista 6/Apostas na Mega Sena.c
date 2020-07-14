/*
Um grupo grande de pessoas fez várias apostas na Mega Sena e precisa de um programa para ajudá-los a conferir se houve ganhadores.
Você foi encarregado de fazer uma versão inicial do programa que indica apenas quantos foram os apostadores que acertaram os 6 números.
Nesta versão inicial, são permitidas apenas apostas contendo no máximo 10 números.

Formato de entrada

Na primeira linha é informado um número inteiro N que representa o número de apostas. Nas N linhas seguintes, são fornecidas as apostas.
Cada aposta é formada por 6 a 10 números inteiros separados por vírgulas. Na última linha é fornecido o resultado oficial,
também formado por 6 números inteiros, mas neste caso separados por espaços. Por simplicidade, assuma que os números estão ordenados de forma crescente.

Formato de saída

A saída consiste da string “Total de ganhadores:” seguida por um espaço em branco e do número de apostas que contêm os números do resultado, ou seja,
o número de ganhadores.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i, j, num=0;
    int ganhador=0, loteria[6];
    char virgulas;

    scanf("%d",&num);

    int numbers[num][10];
    int k, acertos = 1;

    for(i=0;i<num;i++){
        for(j=0;j<10;j++){
            scanf("%d%c",&numbers[i][j],&virgulas);
                if(virgulas=='\n'){
                   break;
            }
        }
    }
    for(k=0;k<6;k++){
        scanf("%d",&loteria[k]);
    }
    for(i=0;i<num;i++){
        acertos=0;
        for(j=0;j<10;j++){
            for(k=0;k<6;k++){
                if(numbers[i][j] == loteria[k]){
                    acertos++;
                    //printf("i:%d j:%d k:%d\n", i,j,k);
                }
            }
        }
        if(acertos>=6){
           ganhador++;
        }
     }
    printf("Total de ganhadores: %d\n",ganhador);
    system("pause");
    return 0;
}
