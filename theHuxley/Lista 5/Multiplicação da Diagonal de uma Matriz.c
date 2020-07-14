/*Descri��o
Na matem�tica � comum o uso de matrizes de n�meros. Estas matrizes podem ser utilizadas para v�rios fins e a �lgebra linear fornece a teoria necess�ria � sua manipula��o.

Dada uma matriz 4 X 4, voc� deve fazer um programa para ler uma constante k, ler a matriz e escrev�-la ap�s ter multiplicado os elementos da diagonal principal pela constante k.

Formato de entrada

- Um inteiro k

- 16 inteiros, correspondendo aos elementos da matriz.

Primeiro ser�o fornecidos os elementos da primeira coluna, depois da segunda e assim por diante at� a quarta.

A entrada termina quando k for igual a 0

Formato de sa�da

Voc� dever� imprimir a matriz resultante no formato de matriz, onde os elementos da primeira linha aparecer�o lado a lado, separados por um espa�o (deve haver inclusive um espa�o depois do �ltimo elemento de cada linha).


Cada linha da matriz ser� separada por um final de linha, inclusive depois da �ltima.
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
