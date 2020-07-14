/*Descrição
Na matemática é comum o uso de matrizes de números. Estas matrizes podem ser utilizadas para vários fins e a álgebra linear fornece a teoria necessária à sua manipulação.

Dada uma matriz 4 X 4, você deve fazer um programa para ler uma constante k, ler a matriz e escrevê-la após ter multiplicado os elementos da diagonal principal pela constante k.

Formato de entrada

- Um inteiro k

- 16 inteiros, correspondendo aos elementos da matriz.

Primeiro serão fornecidos os elementos da primeira coluna, depois da segunda e assim por diante até a quarta.

A entrada termina quando k for igual a 0

Formato de saída

Você deverá imprimir a matriz resultante no formato de matriz, onde os elementos da primeira linha aparecerão lado a lado, separados por um espaço (deve haver inclusive um espaço depois do último elemento de cada linha).


Cada linha da matriz será separada por um final de linha, inclusive depois da última.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define LINHA 4
#define COLUNA 4

int main(){

    int matriz[LINHA][COLUNA];
    int i, j, k;

    do{
        //printf("Valor de k: \n");
        scanf("%d",&k);
        if(k == 0){
            break;
        }
        for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
                scanf("%d",&matriz[i][j]);
        }
    }
        for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
                if(i == j){
                   matriz[i][j]*=k;
            }
        }
    }
        for(j = 0; j < 4; j++){
            for(i = 0; i < 4; i++){
                printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    }while(k != 0);

    system("pause");
	return 0;
}
