/*
Um grupo grande de pessoas fez v�rias apostas na Mega Sena e precisa de um programa para ajud�-los a conferir se houve ganhadores.
Voc� foi encarregado de fazer uma vers�o inicial do programa que indica apenas quantos foram os apostadores que acertaram os 6 n�meros.
Nesta vers�o inicial, s�o permitidas apenas apostas contendo no m�ximo 10 n�meros.

Formato de entrada

Na primeira linha � informado um n�mero inteiro N que representa o n�mero de apostas. Nas N linhas seguintes, s�o fornecidas as apostas.
Cada aposta � formada por 6 a 10 n�meros inteiros separados por v�rgulas. Na �ltima linha � fornecido o resultado oficial,
tamb�m formado por 6 n�meros inteiros, mas neste caso separados por espa�os. Por simplicidade, assuma que os n�meros est�o ordenados de forma crescente.

Formato de sa�da

A sa�da consiste da string �Total de ganhadores:� seguida por um espa�o em branco e do n�mero de apostas que cont�m os n�meros do resultado, ou seja,
o n�mero de ganhadores.
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
